
/* cocos2d::ParticleSystem3D::pauseParticleSystem() */

void __thiscall cocos2d::ParticleSystem3D::pauseParticleSystem(ParticleSystem3D *this)

{
  if (*(int *)(this + 0x300) == 1) {
    *(undefined4 *)(this + 0x300) = 2;
  }
  return;
}

