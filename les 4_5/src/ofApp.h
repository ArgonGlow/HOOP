#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"

#define MAX_PARTICLES 150

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();
		
		vector<Particle*> particles;

		ParticleEmitter emitter1;
		ParticleEmitter emitter2;

};