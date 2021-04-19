#pragma once
#include "ofVideoPlayer.h"
#include "ofPixels.h"

class Device
{
public:
	ofVideoPlayer player;
	ofPixels pixels;
	Device();
	bool load(std::string name);
	void play();
	ofPixels getPixels();
	const ofPixels getPixels() const;
	ofTexture getTexture();
	const ofTexture getTexture() const;
	void firstFrame();
	void  nextFrame();
	void  update();

};
