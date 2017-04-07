#pragma once

#include "ofMain.h"
#include "Particle.h"

class CurvingParticle : public Particle {

public:
	CurvingParticle(int x, int y);

	void move();
};