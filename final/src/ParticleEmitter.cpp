#include "ParticleEmitter.h"

//emit de particles uit de vector
Particle* ParticleEmitter::emit() {
	Particle* newParticle;
	
	//voor de ratio, maar problemen met CurvingParticle()

	/*if (ofRandom(0, 100) > (100 - curvingParticleRatio)) {
		newParticle = new CurvingParticle();
	}
	else {
		newParticle = new Particle();
	}*/
	newParticle = new Particle();

	newParticle->init(Xorigin, Yorigin);
	newParticle->setColors(inner, outer);
	return newParticle;
}
//ontvangt de ratio curved particles vanuit de ofApp
void ParticleEmitter::setCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

//ontvangt de locatie van de emitters vanuit de ofApp
void ParticleEmitter::setOrigin(int x, int y) {
	Xorigin = x;
	Yorigin = y;
}

//ontvangt de kleur van de particles vanuit de ofApp
void ParticleEmitter::setColors(ofColor innerColor, ofColor outerColor) {
	inner = innerColor;
	outer = outerColor;
}