
/* cocos2d::ParticleSystem3D::stopParticleSystem() */

void __thiscall cocos2d::ParticleSystem3D::stopParticleSystem(ParticleSystem3D *this)

{
  if (*(int *)(this + 0x300) != 0) {
    if (*(long **)(this + 0x328) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x328) + 0x20))();
    }
    Node::unscheduleUpdate((Node *)this);
    *(undefined4 *)(this + 0x300) = 0;
  }
  return;
}

