

Bekijk het filmpje

    Welke objecten spelen volgens jou een rol?
    Wat zijn atrributen (variabelen) can die objecten?
    Wat voor gedrag moeten hdie objeccten hebben?

Maak C++ classes voor de objecten die je bedacht hebt.

ParticleEmitters (superclass)
    
	Attributes:
    Velocity (speed)
    Direction (vector)
    Position (x and y coordinates)

Emitter
    
	Attributes:
    ParticlesPerSecond (interger amount of particles)
    MaxParticles (maximum amount of particles at one time)
    
	Methods:
    Emit() (turn emitter on/off)
    ParticleVelocity() (speed that is given to particles, world space)
    ParticleDirection() (direction that is given to particles, world space)
    ParticleLifetime() (Lifetime that is given to particles)
    ParticleColor() (Color that is given to the particles)

Particle
    
	Attributes:
    Color (color given to the particle by the emitter, i.e. red or blue)
    Lifetime (lifetime given to the particle by the emitter)
   
   Methods:
   Pulse() (Each particle pulses at different speeds)
   Destroy() (destroy the particle at the end of its given lifetime)

