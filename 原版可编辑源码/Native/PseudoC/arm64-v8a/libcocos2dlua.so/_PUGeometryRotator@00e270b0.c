
/* cocos2d::PUGeometryRotator::~PUGeometryRotator() */

void __thiscall cocos2d::PUGeometryRotator::~PUGeometryRotator(PUGeometryRotator *this)

{
  *(undefined ***)this = &PTR__PUGeometryRotator_016ef290;
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0xc0));
  PUAffector::~PUAffector((PUAffector *)this);
  return;
}

