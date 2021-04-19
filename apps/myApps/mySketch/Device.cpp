#include "Device.h"


Device::Device() {
	player = ofVideoPlayer();
	player.load("../resources/videos/bird.mp4");
	pixels = player.getPixels();
	update();
}

void Device::update()
{
	pixels = player.getPixels();
	player.nextFrame();
}