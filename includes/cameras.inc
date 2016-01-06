

#declare SceneCamera = camera {
	spherical
	location camera_location
  right    x*image_width/image_height
  look_at lookat_location
}

#declare DebugCamera = camera {
	perspective
	location camera_location
  right    x*image_width/image_height
  look_at lookat_location
}

#declare SearchCategoryCamera = camera {
	perspective
	location <0,12,0>
  right    x*image_width/image_height
  look_at  LookAtSearchCategories
}
