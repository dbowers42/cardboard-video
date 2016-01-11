

# Hackathon - January 2016
### Data visualization using Google Cardboard and ray-tracing technology
Google Cardboard is a virtual reality (VR) platform developed by Google for use with a fold-out cardboard mount for a mobile phone. It is intended as a low-cost system to encourage interest and development in VR and VR applications. Youtube supports a video format called called 360-degree video which is compatible with Google Cardboard. 360-videos allow the viewer to watch a video and control the perspective they are viewing a scene from. In traditional videos the camera angle is fixed. In 360-degree videos the view can shift their perspective using a mouse, touch screen or google compatible device. 360-videos can be produced with either by using sophisticated digital cameras or generated programmatically using something like a ray-tracer. This project makes use of the 360-degree video format and ray-tracing to produce a video for data visualization of some sample metrics.

###- What is ray-tracing
Ray-tracing is a technique for presenting three-dimensional (3D) images on a two-dimensional (2D) display by tracing a path of light through pixels on an image plane. Ray-tracing requires a piece of software called a Ray-tracer. For the purpose of the project I used an open source software application called POV-Ray. More can be learned about POV-ray and the the following http://www.povray.org/

####- POV-Ray for Mac
In order run POV-Ray on Mac I used a specific fork of POV-ray which can be downloaded here
http://megapov.inetart.net/povrayunofficial_mac/


#### Other tools used  
- ffmpeg - Used to generate videos from rendered image files

If you do not already have this tool can be installed using brew

`
brew install ffmpeg
`

A tool to convert standard MP4 videos to Google Cardboard 360 videos by embedding metadata is also required. It can be downloaded here https://support.google.com/youtube/answer/6178631?hl=en

## Creating a Cardboard VR 360 video
In order to create 360-degree video using this project the following steps are required.

- Execute panoramic.pov using the POV-Ray rendering engine. This will out put a large number of .png files
- Stitch the .png files together using ffmpeg to produce and .mp4 file
`
  ffmpeg -i panoramic%03d.png -c:v libx264 -r 5 -pix_fmt yuv420p panoramic.mp4
`
- Use the 360 Video Metadata app to embed the appropriate metadata to convert the video to a 360-degree video
- Upload the video to youtube. The metadata should automatically be compatible

### For best results the resolutions should be used
- 2160p: 3840x2160
- 1440p: 2560x1440
- 1080p: 1920x1080
- 720p: 1280x720
- 480p: 854x480
- 360p: 640x360
- 240p: 426x240

#### Note:
For debugging purposes it is better to pick the lower resolutions for faster render times and switch to higher resolutions only when you are creating production quality videos

## Viewing 360-degee videos on youtube
You may view 360-videos on youtube without a cardboard device. 360-degree video navigational controls will be automatically added to the video when the metadata is detected. If you are viewing the video on a mobile device using the youtube app (you may need to install Google Cardboard from the play store) a Google Cardboard icon should appear in the low right corner of the video. If you tap it the video will change to a stereoscopic view and you can use a Google Cardboard compatible device to have a more immersive experience.
