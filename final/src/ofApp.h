#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"
#include "ParticleReaper.h"

class ofApp : public ofBaseApp {

    public:
        void setup();
        void update();
        void draw();
		
		vector<Particle*> particles;
		particleReaper reaper;
		ParticleEmitter emitter1;
		ParticleEmitter emitter2;

};