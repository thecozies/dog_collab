#include "levels/ddd/header.h"
#include "levels/ddd/texscroll.inc.c"
#include "levels/ddd/water_top/texscroll.inc.c"
#include "levels/ddd/water_spout/texscroll.inc.c"
#include "levels/ddd/cloud/texscroll.inc.c"
void scroll_textures_ddd() {
		scroll_ddd();
	scroll_ddd_level_geo_water_top();
	scroll_ddd_level_geo_water_spout();
	scroll_ddd_level_geo_cloud();
}
