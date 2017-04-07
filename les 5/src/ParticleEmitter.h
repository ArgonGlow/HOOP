#pragma once

#include "ofMain.h"

#include "Particle.h"

class ParticleEmitter {
	public:
		void setOrigin(int x, int y);
		void setCurvingParticleRatio(float ratio);
		void setColors(ofColor innerColor, ofColor outerColor);

			Particle* emit();

	private:
		int Xorigin;
		int Yorigin;
		float curvingParticleRatio;
		ofColor inner;
		ofColor outer;
};
