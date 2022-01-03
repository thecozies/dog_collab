#pragma once

/**
 * Thank you to Kaze Emanuar for these major optimizations!
 * https://www.youtube.com/watch?v=uYPH-NH3B6k
 *
 * If you are making a hack with this repo, it is recommended to credit Kaze Emanuar.
 */

/**
 * @file config.h
 * A catch-all file for configuring various bugfixes and other settings in SM64
 */

// -- ROM SETTINGS --
// Internal ROM name. NEEDS TO BE **EXACTLY** 20 CHARACTERS. Can't be 19 characters, can't be 21 characters. You can fill it with spaces.
// The end quote should be here:               "
#define INTERNAL_ROM_NAME "DOG STAR ADVENTURE  "
// Support Rumble Pak
// Currently not recommended, as it may cause random crashes.
//#define ENABLE_RUMBLE (1 || VERSION_SH)
// Clear RAM on boot
#define CLEARRAM 1
// Screen Size Defines
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240
// Border Height Define for NTSC Versions
#ifdef TARGET_N64 // safeguard
// Size of the black border at the top and bottom of the screen. You can set it to different values for console and emulator.
// There is generally no reason to have a value other than 0 for emulator. As for console, it provides a (small) performance boost.
#define BORDER_HEIGHT_CONSOLE 0
#define BORDER_HEIGHT_EMULATOR 0
#endif // TARGET_N64

// -- GAME SETTINGS --
// Disables some mechanics that change behavior depending on hardcoded level numbers.
// You may also need to change sLevelsWithRooms in object_helpers.c
// TODO: separate this into separate defines, behavior params, or make these mechanics otherwise dynamic
// #define DISABLE_LEVEL_SPECIFIC_CHECKS
// Disable lives and hide the lives counter
#define DISABLE_LIVES
// Air/Breath meter is separate from health meter when underwater
#define BREATH_METER
// Number of coins to spawn the "100 coin" star. If you remove the define altogether, then there won't be a 100 coin star at all.
#define X_COIN_STAR 100
// Stars don't kick you out of the level
//#define NON_STOP_STARS
// Uncomment this if you want global star IDs (useful for creating an open world hack ala MVC)
//#define GLOBAL_STAR_IDS
// Number of possible unique model ID's (keep it higher than 256)
#define MODEL_ID_COUNT 512
// Number of supported areas per level.
#define AREA_COUNT 8
/// Removes multi-language cake screen
#define EU_CUSTOM_CAKE_FIX 1
// Adds multiple languages to the game. Just a placeholder for the most part, because it only works with EU, and must be enabled with EU.
#define MULTILANG (0 || VERSION_EU)

// -- EXIT COURSE SETTINGS --
// Disable exit course
//#define DISABLE_EXIT_COURSE
#ifndef DISABLE_EXIT_COURSE // safeguard
// Decides whether you can exit course while moving (has no effect if you disable exit course)
// #define EXIT_COURSE_WHILE_MOVING
// Decides which level "exit course" takes you to (has no effect if you disable exit course)
#define EXIT_COURSE_LEVEL LEVEL_CASTLE
// Decides the area node "exit course" takes you to (has no effect if you disable exit course)
#define EXIT_COURSE_AREA 0x01
// Decides the warp node "exit course" takes you to (has no effect if you disable exit course)
#define EXIT_COURSE_NODE 0x1F
#endif // DISABLE_EXIT_COURSE

// -- MOVEMENT SETTINGS --
// Fixes Mario's turn radius by making it dependent on forward speed.
// Modes:
// 0 is vanilla behavior.
// 1 is similar to vanilla, but prevents Mario from moving in the wrong direction, and allows finer control with the analog stick.
// 2 is similar to mode 1, but a bit further from vanilla, and allows instant turnaround if Mario is moving slower than a certain threshold.
// 3 is instant turning to the intended direction regardless of speed and angle.
// 4 is an experimental asymptotic turn.
#define GROUND_TURN_MODE 0
// Improved hanging:
// - Doesn't require holding down the A button
// - Percise turning control ()
// - Preventis falling from the edges
// (Arceveti)
#define BETTER_HANGING
// Change the movement speed when hanging from a ceiling (the vanilla value is 4.0f, has no effect if BETTER_HANGING is enabled)
#define HANGING_SPEED 12.0f
// Disables fall damage
#define NO_FALL_DAMAGE
// Disables the scream that mario makes when falling off a great height (this is separate from actual fall damage)
//#define NO_FALL_DAMAGE_SOUND
// Disables Mario getting stuck in snow and sand when falling
//#define NO_GETTING_BURIED
// Platform displacement 2 also known as momentum patch. Makes Mario keep the momemtum from moving platforms. Doesn't break treadmills anymore!
#define PLATFORM_DISPLACEMENT_2
// Allows Mario to ledgegrab sloped floors
#define NO_FALSE_LEDGEGRABS
// Use Shindou's pole behavior
//#define SHINDOU_POLES
// Allows Mario to jump kick on steep surfaces that are set to be non slippery, instead of being forced to dive
#define JUMP_KICK_FIX
// Allow Mario to grab hangable ceilings from any state
#define HANGING_FIX
// The last frame that will be considered a firsty when wallkicking
#define FIRSTY_LAST_FRAME 1
// The maximum angle the player can wall kick, in degrees. 0..90. To allow 45 degree wall kicks, you must supply `46` to allow 45 and under.
// 46 degree walkicks
#define WALL_KICK_DEGREES 46
// Disable BLJs and crush SimpleFlips's dreams
//#define DISABLE_BLJ

// -- COLLISION SETTINGS --
// Reduces some find_floor calls, at the cost of some barely noticeable smoothness in Mario's visual movement in a few actions at higher speeds.
// The defined number is the forward speed threshold before the change is active, since it's only noticeable at lower speeds.
#define FAST_FLOOR_ALIGN 10
// Automatically calculate the optimal collision distance for an object based on its vertices.
#define AUTO_COLLISION_DISTANCE
// Allow all surfaces types to have force, (doesn't require setting force, just allows it to be optional).
#define ALL_SURFACES_HAVE_FORCE
// Number of walls that can push Mario at once. Vanilla is 4.
#define MAX_REFEREMCED_WALLS 4
// Collision data is the type that the collision system uses. All data by default is stored as an s16, but you may change it to s32.
// Naturally, that would double the size of all collision data, but would allow you to use 32 bit values instead of 16.
// Rooms are s8 in vanilla, but if you somehow have more than 255 rooms, you may raise this number.
// Currently, they *must* say as s8, because the room tables generated by literally anything are explicitly u8 and don't use a macro, making this currently infeasable.
#define COLLISION_DATA_TYPE s16
#define ROOM_DATA_TYPE s8

// -- SPECIFIC OBJECT SETTINGS --
// Allow for retries on collecting the remaining blue coins from a blue coin switch
#define BLUE_COIN_SWITCH_RETRY
// Fixes shell cancel
//#define SHELL_CANCEL_FIX
// The number of chain balls the Chain Chomp has.  Vanilla is 5.
#define CHAIN_CHOMP_NUM_SEGMENTS 5
// The number of parts Pokey has, including the head. Vanilla is 5, max is 30.
#define POKEY_NUM_SEGMENTS       5
// The number of segments Wiggler has, not including the head. Vanilla is 4.
#define WIGGLER_NUM_SEGMENTS     4

// -- CUTSCENE SKIPS --
// Skip peach letter cutscene
#define PEACH_SKIP
// Uncomment this if you want to skip the title screen (Super Mario 64 logo)
//#define SKIP_TITLE_SCREEN
// Uncomment this if you want to keep the mario head and not skip it
//#define KEEP_MARIO_HEAD
// Goddard easter egg from Shindou (has no effect if KEEP_MARIO_HEAD is disabled)
#define GODDARD_EASTER_EGG
// Disables the demo that plays when idle on the start screen (has no effect if KEEP_MARIO_HEAD is disabled)
#define DISABLE_DEMO

// -- CAMERA SETTINGS --
// Remove course specific camera processing
#define CAMERA_FIX
// Enables "parallel lakitu camera" or "aglab cam" which lets you move the camera smoothly with the dpad
#define PARALLEL_LAKITU_CAM
// Enables Puppy Camera 2, a rewritten camera that can be freely configured and modified.
//#define PUPPYCAM

// -- GRAPHICS SETTINGS --
// Enable widescreen (16:9) support
#define WIDE
// Skybox size modifier, changing this will add support for larger skybox images. NOTE: Vanilla skyboxes may break if you change this option. Be sure to rescale them accordingly.
// Whenever you change this, make sure to run "make -C tools clean" to rebuild the skybox tool (alternatively go into skyconv.c and change the file in any way (like adding/deleting a space) to specifically rebuild that tool).
// When increasing this, you should probably also increase the GFX pool size. (the GFX_POOL_SIZE define in src/game/game_init.h)
#define SKYBOX_SIZE 2
// When this option is enabled, LODs will ONLY work on console.
// When this option is disabled, LODs will work regardless of whether console or emulator is used.
// Regardless of whether this setting is enabled or not, you can use gIsConsole to wrap your own code in a console check.
//#define AUTO_LOD
// Disable AA (Recommended: it changes nothing on emulator, and it makes console run better)
#define DISABLE_AA
// Makes the coins ia8 64x64 instead of ia16 32x32. Uses new ia8 textures so that vanilla coins look better.
#define IA8_COINS
// Mario's silhouette when behind solid objects/surfaces
// Also enables new render layers, such as LAYER_ALPHA_DECAL.
// The number is the intensity of the silhouette, from 0-255.
// NOTE: The overlap between Mario's model parts is visible on certain HLE plugins.
// Also, this also disables anti-aliasing on Mario.
#define SILHOUETTE 127
// Makes certain objects (mainly trees) transparent when the camera gets close
#define OBJ_OPACITY_BY_CAM_DIST
// Fixes the game reading the ia8 burn smoke texture as an rgba16
#define BURN_SMOKE_FIX
// Disable the fix to Koopa's unshelled model
#define KOOPA_KEEP_PINK_SHORTS
// Lightweight directional lighting engine by Fazana. Intended for giving proximity and positional pointlights to small objects.
// NOTE: Stil breaks occasionally, and PUPPYLIGHT_NODE doesn't work in areas that aren't area 1.
//#define PUPPYLIGHTS

// -- AUDIO SETTINGS --
// Fixes the castle music sometimes triggering after getting a dialog
#define CASTLE_MUSIC_FIX
// Increase audio heap size to allow for more concurrent notes to be played and for more custom sequences/banks to be imported (not supported for SH)
#define EXPAND_AUDIO_HEAP
// Use a much better implementation of reverb over vanilla's fake echo reverb. Great for caves or eerie levels, as well as just a better audio experience in general.
// Reverb parameters can be configured in audio/synthesis.c to meet desired aesthetic/performance needs. Currently US/JP only.
//#define BETTER_REVERB

// -- DEBUG SETTINGS --
// TEST LEVEL
// Uncomment this define and set a test level in order to boot straight into said level.
// This allows you to quickly test the level you're working on.
// If you want the game to boot normally, just comment out the define again.
// #define TEST_LEVEL LEVEL_BITFS
// Enable debug level select
//#define DEBUG_LEVEL_SELECT
// Enable debug free move (DPad up to enter, A to exit)
//#define ENABLE_DEBUG_FREE_MOVE
// Custom debug mode. Press DPAD left to show the debug UI. Press DPAD right to enter the noclip mode.
// #define CUSTOM_DEBUG
// Include Puppyprint, a display library for text and large images. Also includes a custom, enhanced performance profiler.
 #define PUPPYPRINT
 #define PUPPYPRINT_DEBUG 1
// Use cycles instead of microseconds
//#define PUPPYPRINT_DEBUG_CYCLES
// Visual debug enables some collision visuals. Tapping Right on the dpad will cycle between visual hitboxes, visual surfaces, both, and neither.
// If puppyprint is enabled, then this can be cycled only while the screen is active.
#define VISUAL_DEBUG
// Open all courses and doors. Used for debugging purposes to unlock all content.
#define UNLOCK_ALL

// If you want to change the extended boundaries mode, go to engine/extended_bounds.h and change EXTENDED_BOUNDS_MODE

// -- Compatibility safeguards. Don't mess with these unless you know what you're doing.--
#ifndef KEEP_MARIO_HEAD
#undef GODDARD_EASTER_EGG
#define DISABLE_DEMO
#endif

#define LEVEL_COZIES LEVEL_DDD
