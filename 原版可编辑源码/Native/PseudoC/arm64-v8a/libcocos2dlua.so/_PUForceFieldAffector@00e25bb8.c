
/* cocos2d::PUForceFieldAffector::~PUForceFieldAffector() */

void __thiscall cocos2d::PUForceFieldAffector::~PUForceFieldAffector(PUForceFieldAffector *this)

{
  *(undefined ***)this = &PTR__PUForceFieldAffector_016ef190;
  PUForceField::~PUForceField((PUForceField *)(this + 0xb0));
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

