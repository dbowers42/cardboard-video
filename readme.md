// combine images

convert +append a.png b.png c.png

// convert
convert 'panoramic*.png' 'panoramic*.jpg'

// make movie
convert -delay 5 -quality 95 'panoramic*.png' panoramic.mpg


ffmpeg -i panoramic%03d.png -c:v libx264 -r 5 -pix_fmt yuv420p panoramic.mp4

ffmpeg -i panoramic%03d.png -c:v libx264 -r 5 -pix_fmt yuv420p panoramic.mp4




https://youtu.be/11_bTqDVU0k


upload to youtube
