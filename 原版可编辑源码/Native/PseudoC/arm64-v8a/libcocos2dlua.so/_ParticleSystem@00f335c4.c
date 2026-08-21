
/* non-virtual thunk to cocos2d::ParticleSystem::~ParticleSystem() */

void __thiscall cocos2d::ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  ~ParticleSystem(this + -0x300);
  operator_delete(this + -0x300);
  return;
}

