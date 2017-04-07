#include "Particle.h"

Particle::Particle() {

}

//Ontvangt en bepaald de beginwaarden voor elke particle.
void Particle::init(int x, int y) {
    radius = ofRandom(5, 20);

    location.x = x;
    location.y = y;

    speed.x = ofRandom(-5, 5);
    speed.y = ofRandom(-5, 5);

	lifetime = ofRandom(100, 500);

}

//beweegt de particle en update zijn lifetime.
void Particle::move() {
	if (lifetime > 0) {
		lifetime -= 1;
	}
	
	location += speed;
}

//tekent de particles op je scherm.
void Particle::draw() {
	radius = radius - lifetime/300;
	
	ofSetColor(outerColor);
    ofDrawCircle(location, radius * 2);

    ofSetColor(innerColor);
    ofDrawCircle(location, radius);

    ofSetColor(ofColor::white);
    ofDrawCircle(location, radius * 0.25);
}

//ontvangt de kleur van de particles vanuit de ofApp.
void Particle::setColors(ofColor outer, ofColor inner) {
	outerColor = outer;
	innerColor = inner;
}

//controleert of de particle aan het einde van zijn lifetime is en slaat dit op in een boolean.
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