#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "Emitter.h"

#define MAX_PARTICLES 150

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

		Emitter emitter;

};