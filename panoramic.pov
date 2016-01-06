#version 3.7

global_settings {assumed_gamma 1.0}

// Standard includes
#include "colors.inc"
#include "strings.inc"

// My includes
#include "includes/lights.inc"
#include "includes/cameras.inc"
#include "includes/icons.inc"
#include "includes/clouds.inc"
#include "includes/ground.inc"
#include "includes/browsers.inc"
#include "includes/search.inc"


// 1  - Look at final scene
// 2  - Look at browser traffic
// 3  - Look at device traffic
// 4  - Look at search categories
// 5  - Top view Camera
// -1  - Debug
#declare CameraMode = 1;

background { White}

//sky_sphere { Clouds }

//object { ground }

light_source { DebugLight}


object {
	Browsers
	translate ViewDistance * z
}

object {
	SearchCategories
	scale .6
	translate <0, 20, ViewDistance>
	rotate 120 * y
}

object {
	Browsers
	translate ViewDistance * z
	rotate -120 * y
}

#if (CameraMode = 1)
	camera { SceneCamera }
#end

#if (CameraMode = 2)
	camera { BrowserTrafficCamera }
#end

#if (CameraMode = 3)
	camera { DeviceTrafficCamera }
#end

#if (CameraMode = 4)
	camera { SearchCategoriesCamera }
#end

#if (CameraMode = 5)
	camera { TopViewCamera }
#end

#if (CameraMode = 0)
	camera { DebugCamera }
#end
