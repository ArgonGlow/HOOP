#include "ofApp.h"
//#include "Particle.h"

void Emitter::setup() {
	emitter.setup();
	}
}

void Emitter::update() {
	emitter.update();
	}
}

void Emitter::draw() {
	emitter.draw();
	}
}

void Emitter::keyPressed(int key) {
	emitter.keyPressed(int key);
	}
}

void Emitter::setRandomColor(Particle* particle) {
	emitter.setRandomColor(Particle* particle);
}