#include "src/game/envfx_snow.h"

const GeoLayout pss_area_5_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(11, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, pss_dl_Area_1_Room_1_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_10_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_2_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_3_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_4_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_5_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_6_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_7_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_8_geo),
			GEO_BRANCH(1, pss_dl_Area_1_Room_9_geo),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R1_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R2_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R3_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_001_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_10_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R1_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R2_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R3_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_006_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R7_005_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R1_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R2_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R3_002_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R1_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R2_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R3_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R4_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_007_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R2_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R3_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R4_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_5_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R1_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R3_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R6_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R7_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R8_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R9_001_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_6_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R6_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R7_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R8_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R9_002_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_7_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R6_002_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R7_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R8_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R9_003_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_8_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R6_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R7_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R8_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R9_004_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_dl_Area_1_Room_9_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R10_006_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R5_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R6_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R7_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R8_004_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_R9_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pss_area_5[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, -200000, 0, -100, -200000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, pss_area_5_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_BLIZZARD, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, pss_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
