#version 3.7

global_settings {assumed_gamma 1.0}

// Standard includes
#include "colors.inc"
#include "strings.inc"

// My includes
#include "includes/lights.inc"
#include "includes/cameras.inc"
#include "includes/clouds.inc"
#include "includes/ground.inc"
#include "includes/browsers.inc"
#include "includes/search.inc"

// 1  - Look at final scene
// 2  - Look at browser traffic
// 3  - Look at device traffic
// 4  - Look at search categories
// 5  - Debug
#declare CameraMode = 1;

sky_sphere { Clouds }

object { ground }

light_source { DebugLight}

object {
	Browsers
	translate ViewDistance * z
}

object {
	SearchCategories
	rotate 360 * 4 * z * clock
  scale .75
	rotate -90 * y
	translate <-ViewDistance, 30, 0>
}

#switch (CameraMode)
	#case (CameraMode = 1)
		camera { SceneCamera }
	#break

	#case (CameraMode = 2)
		camera { BrowserTrafficCamera }
	#break

	#case (CameraMode = 3)
		camera { DeviceTrafficCamera }
	#break

	#case (CameraMode = 4)
		camera { SearchCategoryCamera }
	#break

 	#else
		camera { DebugCamera }
#end
