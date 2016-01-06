#declare TileNormal =
   normal
   { gradient x 2 // Double the strength because of the averaging
     slope_map
     { [0 <0, 1>] // 0 height, strong slope up
       [.05 <1, 0>] // maximum height, horizontal
       [.95 <1, 0>] // maximum height, horizontal
       [1 <0, -1>] // 0 height, strong slope down
     }
   }

#declare ground = plane {
	<0,1,0>, 1
  texture {
    pigment {
      checker
      pigment { granite color_map { [0 rgb 1][1 rgb .9] } }
      pigment { granite color_map { [0 rgb .9][1 rgb .7] } }
    }
    normal
    { average normal_map
      { [1 TileNormal]
      [1 TileNormal rotate y*90]
    }

  }
    scale 6
  }

  finish {
    reflection .2
    specular .2
  }
  translate -y
}
