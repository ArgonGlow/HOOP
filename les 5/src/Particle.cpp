#include "Particle.h"

Particle::Particle() {

}

void Particle::init(int x, int y) {
    radius = ofRandom(5, 20);

    location.x = x;
    location.y = y;

    speed.x = ofRandom(-5, 5);
    speed.y = ofRandom(-5, 5);

	lifetime = ofRandom(100, 500);

}

void Particle::move() {
	if (lifetime > 0) {
		lifetime -= 1;
	}
	
	location += speed;
}

void Particle::draw() {
    ofSetColor(outerColor);
    ofDrawCircle(location, radius * 2);

    ofSetColor(innerColor);
    ofDrawCircle(location, radius);

    ofSetColor(ofColor::white);
    ofDrawCircle(location, radius * 0.25);
}
void Particle::setColors(ofColor outer, ofColor inner) {
	outerColor = outer;
	innerColor = inner;
}

bool Particle::checkDeath() {
	bool isAlive;
	if (lifetime > 0) {
		isAlive = true;
	}
	else {
		isAlive = false;
	}
	
	return isAlive;
}