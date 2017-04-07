#include "ParticleReaper.h"

particleReaper::particleReaper() {

}

//loopt door de vector van particles heen met een iterator en check of ze aan het einde van hun lifetime zijn.
//nog problemen mee.
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