// Camera Settings
// Constants
#declare ViewDistance = 30;
#declare ViewLocationHeight = 12;
#declare ViewLookAtHeight = 8;

#declare DebugCameraLocation = <0, 80, 0>;
#declare DebugCameraLookAt = <0, 0, 0>;

#declare TopViewCameraLocation = <0, 80, 0>;
#declare TopViewCameraLookAt = <0, 0, 0>;

#declare BrowserTrafficCameraLocation = <0, ViewLocationHeight, 0>;
#declare BrowserTrafficCameraLookAt = <0, ViewLookAtHeight, ViewDistance>;

#declare SearchCategoryCameraLocation = <0, ViewLocationHeight, 0>;
#declare SearchCategoryCameraLookAt = <ViewDistance, ViewLookAtHeight, 0>;

#declare DeviceTrafficCameraLocation = <0, ViewLocationHeight, 0>;
#declare DeviceTrafficCameraLookAt = <0, ViewLookAtHeight, ViewDistance>;

#declare SceneCameraLocation = <0, ViewLocationHeight, 0>;
#declare SceneCameraLookAt = <0, ViewLookAtHeight, ViewDistance>;

#declare DebugCamera = camera {
	perspective
	location    DebugCameraLocation
  right       x * image_width / image_height
  look_at     DebugCameraLookAt
}

#declare TopViewCamera = camera {
	perspective
	location    TopViewCameraLocation
  right       x * image_width / image_height
  look_at     TopViewCameraLookAt
}

#declare BrowserTrafficCamera = camera {
	perspective
	location    BrowserTrafficCameraLocation
  right       x * image_width / image_height
  look_at     BrowserTrafficCameraLookAt
}

#declare SearchCategoryCamera = camera {
	perspective
	location    SearchCategoryCameraLocation
  right       x * image_width / image_height
  look_at     SearchCategoryCameraLookAt
}

#declare DeviceTrafficCamera = camera {
	perspective
	location    DeviceTrafficCameraLocation
  right       x * image_width / image_height
  look_at     DeviceTrafficCameraLookAt
}

#declare SceneCamera = camera {
	spherical
	location  SceneCameraLocation
  right     x * image_width / image_height
  look_at   SceneCameraLookAt
}
