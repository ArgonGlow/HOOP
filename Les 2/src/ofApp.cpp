#include "ofApp.h"

void ofApp::setup() {
    ofSetBackgroundColor(ofColor::black);

    part1 = Particle();
    part1.init();

	part2 = CurvingParticle();
	part2.init();
}

void ofApp::update() {
    part1.move();
	part2.move();
}

void ofApp::draw() {
    part1.draw();
	part2.draw();
}

void ofApp::keyPressed(int key) {
    part1.init();
	part2.init();
}
