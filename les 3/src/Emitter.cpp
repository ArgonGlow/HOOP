#include "Emitter.h"

void Emitter::setup() {
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColor(particles[i]);
	}
}

void Emitter::update() {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->move();
	}
}

void Emitter::draw() {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i]->draw();
	}
}

void Emitter::keyPressed(int key) {
	for (int i = 0; i < MAX_PARTICLES; i++) {
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColor(particles[i]);
	}
}

void Emitter::setRandomColor(Particle* particle) {
	float random = ofRandom(10);
	if (random > 2 && random < 6) {
		particle->setColors(ofColor(215, 35, 30, 15), ofColor(250, 135, 120, 127));
	}
	else if (random >= 6) {
		particle->setColors(ofColor(183, 230, 145, 15), ofColor(112, 245, 60, 127));
	}
}