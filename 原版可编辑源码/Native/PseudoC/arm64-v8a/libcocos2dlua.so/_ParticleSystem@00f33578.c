
/* cocos2d::ParticleSystem::~ParticleSystem() */

void __thiscall cocos2d::ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  ~ParticleSystem(this);
  operator_delete(this);
  return;
}

