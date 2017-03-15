#pragma once

#include "ofMain.h"

#include "Particle.h"

#define MAX_PARTICLES 150

class Emitter {

public:
	void setup();

	void update();

	void draw();

	void keyPressed(int key);

private:

	Particle* particles[MAX_PARTICLES];

	void setRandomColor(Particle* particle);

};