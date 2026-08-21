
/* cocos2d::Particle3DAffector::~Particle3DAffector() */

void __thiscall cocos2d::Particle3DAffector::~Particle3DAffector(Particle3DAffector *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Particle3DAffector_016f1b10;
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

