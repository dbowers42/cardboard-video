#version 3.7

global_settings {assumed_gamma 1.0}

#include "colors.inc"
#include "strings.inc"

#declare DebugLight = light_source {<100,120,-130> White * 4}

background { Blue}
camera {
	perspective
	location    <10, 10, -10> * 3
  right       x * image_width / image_height
  look_at     <0,0,0>
}




plane {
	y, -1
	pigment {checker}
	translate -y
}
