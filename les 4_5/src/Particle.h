#pragma once

#include "ofMain.h"

class Particle {

public:
	Particle();

	void init(int x, int y);

	void move();

	void draw();

	void setColors(ofColor outer, ofColor inner);

	protected:
        ofPoint location;
        int radius;
        ofVec2f speed;
        long lifetime;

        ofColor innerColor;
        ofColor outerColor;
};