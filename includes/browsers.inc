#include "libs/columns/13_COL.INC"

#declare piller = union {
  object {column_doric scale <10, 10, 10> }
}

#macro DrawPiller(Stat, Message, Position, Top, Obj)
 union{
  union {
    object { piller scale (Stat + .2)*y}
  	text {
  	    ttf "timrom.ttf" Message 1, 0
        scale <2.5,2.5,.5>
  		  translate <-.75,2,-2>
  	}
  	object {
  		Obj
      rotate 360 * 4 * clock * x
  		translate <0,Top,0>
  	}
  	translate Position
  }
}
#end

#declare BrowserTraffic = union {
  DrawPiller(.67, "67%", <-16,0,0>, 22, ChromeLogo) // Chrome
  DrawPiller( .07, "7%", <-8,0,0>, 7.75, IExplorerLogo)  // Internet explorer
  DrawPiller(.20, "20%", <0,0,0>, 10.75, FirefoxLogo)   // Firefox
  DrawPiller(.04, "4%", <8,0,0>, 7, SafariLogo)    // Safari
  DrawPiller(.02, "2%", <16,0,0>, 6.5, OperaLogo)   // Opera
}
