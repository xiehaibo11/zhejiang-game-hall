
/* cocos2d::ParticleSystem3D::resumeParticleSystem() */

void __thiscall cocos2d::ParticleSystem3D::resumeParticleSystem(ParticleSystem3D *this)

{
  if (*(int *)(this + 0x300) == 2) {
    *(undefined4 *)(this + 0x300) = 1;
  }
  return;
}

