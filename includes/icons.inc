#macro DrawIcon(Icon)
  union {
    sphere {
    	<0,0,0> 1
    	texture {
    		pigment {
    			White
    	  }
    	  finish {
    	  		phong 1
    	  		specular .3
    	  	}
    	}
    }
  	box {
  	  <-1,-1,-1> , <1,1,1>
  	  texture {
  	    pigment {
  	      image_map {
  	        png Icon
  	  			once
  	      }
  	      translate <-.5, -.5, 0>
  	    }

  	  }
  	}
  	scale .5 * z
  }
#end

#declare ChromeLogo = object { DrawIcon("images/chrome.png") }
#declare IExplorerLogo = object { DrawIcon("images/iexplorer.png") }
#declare FirefoxLogo = object { DrawIcon("images/firefox.png") }
#declare SafariLogo = object { DrawIcon("images/safari.png") }
#declare OperaLogo = object { DrawIcon("images/opera.png") }
#declare WindowsLogo = object { DrawIcon("images/microsoft.png") }
#declare AndroidLogo = object { DrawIcon("images/android.png") }
#declare AppleLogo = object { DrawIcon("images/apple.png") }
