#include "CurvingParticle.h"

CurvingParticle::CurvingParticle() {

}

//bepaald de beweging van de particle gebaseerd op zijn snelheid.
void CurvingParticle::move() {
	ofLog() << "move" << endl;
	location += speed;
	speed.rotate(5);
	location += speed;
}