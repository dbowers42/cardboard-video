#declare RingRotation = 360 * 4 * clock * y;

#declare RingFinish = finish {
	phong .5
	metallic .2
	specular .3
	reflection .2
}


#macro DrawDeviceTraffic(InnerRadius, OuterRadius, RingY, RingColor, Logo)
	union {
		torus {
			InnerRadius, OuterRadius
			pigment { RingColor }
			finish  {RingFinish }
			translate RingY * y
		}
		object {
			Logo
			rotate 360 * 8 * clock * y
			translate <InnerRadius, RingY + 2.5, 0>
		}
	}
#end

#declare DeviceTraffic = union {
  union {
		DrawDeviceTraffic(4, 1, 16, Blue, WindowsLogo)
		rotate RingRotation
	}

	union {
		DrawDeviceTraffic(8, 1, 12, Green, AndroidLogo)
		rotate RingRotation
	}

	union {
		DrawDeviceTraffic(10, 1, 6, White, AppleLogo)
		rotate RingRotation
	}
	translate -4 * y
}
