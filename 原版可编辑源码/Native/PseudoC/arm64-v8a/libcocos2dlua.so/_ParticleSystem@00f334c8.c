
/* cocos2d::ParticleSystem::~ParticleSystem() */

void __thiscall cocos2d::ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  *(undefined ***)this = &PTR__ParticleSystem_0170db48;
  *(undefined ***)(this + 0x300) = &PTR__ParticleSystem_0170e260;
  *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystem_0170e220;
  ParticleData::release((ParticleData *)(this + 0x368));
  if (*(Ref **)(this + 0x510) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x510));
  }
  if (((byte)this[0x440] & 1) != 0) {
    operator_delete(*(void **)(this + 0x450));
  }
  if (((byte)this[0x310] & 1) != 0) {
    operator_delete(*(void **)(this + 800));
  }
  Node::~Node((Node *)this);
  return;
}

