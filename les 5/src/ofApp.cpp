#include "ofApp.h"

void ofApp::setup() {
	ofSetBackgroundColor(ofColor::black);

	reaper = particleReaper();

	emitter1 = ParticleEmitter();
	emitter1.setOrigin(100, 100);
	//Percentage of curved particles
	emitter1.setCurvingParticleRatio(80);
	emitter1.setColors(ofColor(31, 127, 255, 127), ofColor(128, 255, 255, 15));

	emitter2 = ParticleEmitter();
	emitter2.setOrigin(ofGetWidth() - 100, ofGetHeight() - 100);
	emitter2.setCurvingParticleRatio(0.8);
	emitter2.setColors(ofColor(227, 47, 27, 127), ofColor(247, 140, 129, 15));
}

void ofApp::update() {
	reaper.grimReaper(particles);
	
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->move();
	}

	Particle* freshParticle = emitter1.emit();
	particles.push_back(freshParticle);

	Particle* freshParticle2 = emitter2.emit();
	particles.push_back(freshParticle2);

	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {
		(*i)->move();

		i++;
	}

}

void ofApp::draw() {
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->draw();
	}
}
