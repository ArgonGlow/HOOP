#include "CurvingParticle.h"

void CurvingParticle::move() {
	ofLog() << "move" << endl;
	location += speed;
	speed.rotate(5);
	location += speed;
}