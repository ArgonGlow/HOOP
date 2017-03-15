#pragma once

#include "ofMain.h"

class Particle {

    protected:
        ofPoint location;
        int radius;
        ofVec2f speed;
        long lifetime;

        ofColor innerColor;
        ofColor outerColor;

    public:
        Particle(); // constructor

        void init();

        void move();

        void draw();
};