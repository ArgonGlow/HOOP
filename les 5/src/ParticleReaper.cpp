#include "ParticleReaper.h"

particleReaper::particleReaper() {

}

void particleReaper::grimReaper(vector < Particle*> particles) {
	vector<Particle*>::iterator i = particles.begin();
	while (i != particles.end()) {

		bool alive = (*i)->checkDeath();

		if (alive = false)
		{
			particles.erase(i);
		}
		else
		{
			i++;
		}
	}
}