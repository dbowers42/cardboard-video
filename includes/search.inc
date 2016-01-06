#declare T_SearchRod = texture {
    pigment {White}
    finish {
      phong .5
    }
}

#macro SearchCategory(Stat, Title, Position, Shift)
  union {

    sphere {
      <0,0, 0>, 10
      texture {
        pigment {
          color White filter .9
        }
        finish {
          reflection .2
          phong .5
        }
      }
      interior {
        ior .9
      }
    }
    text {
        ttf "timrom.ttf" Title 1, 0
        translate Shift * x
        scale <3,3,.2>
        pigment {
          Blue
        }
    }
    text {
        ttf "timrom.ttf" Stat 1, 0
        translate <-1, -1, 0>
        scale <3,3,.2>
        pigment {
          Blue
        }
    }
    translate Position
  }

#end

#declare SearchCategories = union {
    union {
      SearchCategory("1159", "Conditions", <0, 20, 0>, -2)

    }

    union {
      SearchCategory("1876", "Symptoms", <0, 20, 0>, -2)
      rotate 90*z

    }
    union {
      SearchCategory("1439", "Medications", <0, 20, 0>, -2)
      rotate 180*z
    }

    union {
      SearchCategory("989", "Procedures", <0, 20, 0>, -2)
      rotate 270*z

    }

    cylinder {
      <0, -10, 0>, <0, 10, 0>, .5
      texture {T_SearchRod}
    }

    cylinder {
      <0, -10, 0>, <0, 10, 0>, .5
      texture {T_SearchRod}
      rotate 90*z
    }
}
