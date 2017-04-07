#include "ofApp.h"

void ofApp::setup() {
	ofSetBackgroundColor(ofColor::black);

	reaper = particleReaper();

	emitter1 = ParticleEmitter();
	emitter1.setOrigin(250, ofGetHeight() / 2);
	//Percentage of curved particles
	emitter1.setCurvingParticleRatio(80);
	emitter1.setColors(ofColor(188, 66, 244, 127), ofColor(216, 34, 210, 15));

	emitter2 = ParticleEmitter();
	emitter2.setOrigin(ofGetWidth() - 250, ofGetHeight() / 2);
	emitter2.setCurvingParticleRatio(0.8);
	emitter2.setColors(ofColor(21, 214, 66, 127), ofColor(21, 214, 191, 15));
}

void ofApp::update() {
	reaper.grimReaper(particles);
	
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->move();
	}

	//maakt particles aan voor de eerste emitter.
	Particle* freshParticle = emitter1.emit();
	particles.push_back(freshParticle);

	//maakt particles aan voor de tweede emitter.
	Particle* freshParticle2 = emitter2.emit();
	particles.push_back(freshParticle2);

	//iterator.
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
