#include "ParticleEmitter.h"


Particle* ParticleEmitter::emit() {
	Particle* newParticle;
	
	newParticle->init(Xorigin, Yorigin);
	newParticle->setColors(inner, outer);
	return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticleEmitter::setOrigin(int x, int y) {
	Xorigin = x;
	Yorigin = y;
}

void ParticleEmitter::setColors(ofColor innerColor, ofColor outerColor) {
	inner = innerColor;
	outer = outerColor;
}