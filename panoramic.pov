#version 3.7

global_settings {assumed_gamma 1.0}

// Standard includes
#include "colors.inc"
#include "strings.inc"

// My includes
#include "includes/common.inc"
#include "includes/lights.inc"
#include "includes/cameras.inc"
#include "includes/clouds.inc"
#include "includes/ground.inc"
#include "includes/browsers.inc"
#include "includes/search.inc"

sky_sphere { Clouds }

light_source { DebugLight}

object {
	Browsers
	translate ViewDistance * z
	}

object { ground }


object {
	SearchCategories
	rotate 360*4 * z *clock
  scale .75
	rotate -90*y
	translate <-ViewDistance, 30,0>
}

camera { DebugCamera }
