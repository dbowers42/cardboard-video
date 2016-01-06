#include "libs/columns/13_COL.INC"

#declare piller = union {
  object {column_doric scale <10, 10, 10> }
}

#macro Draw_Piller(Stat, Message, Position)
 union{
  union {
    object { piller scale (Stat + .2)*y}
  	text {
  	    ttf "timrom.ttf" Message 1, 0
        scale <2.5,2.5,.5>
  		  translate <-.75,2,-2>
  	}
  	translate Position
  }
}
#end

#declare Browsers = union {
  Draw_Piller(.67, "67%", <-16,0,0>) // Chrome
  Draw_Piller( .07, "7%", <-8,0,0>)  // Internet explorer
  Draw_Piller(.20, "20%", <0,0,0>)   // Firefox
  Draw_Piller(.04, "4%", <8,0,0>)    // Safari
  Draw_Piller(1, "2%", <16,0,0>)   // Opera
}
