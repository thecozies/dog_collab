#include "src/game/envfx_snow.h"

const GeoLayout cozy_pss_bg_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_backdrop_move_cozies_b3),
		GEO_TRANSLATE_NODE(LAYER_FORCE, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_FORCE, cozy_pss_bg_AABG3D_mesh_layer_0),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_FORCE, cozy_pss_bg_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
