#pragma once

#include "ofMain.h"
#include "Particle.h"

class CurvingParticle : public Particle {

public:
	CurvingParticle();

	void move();
};