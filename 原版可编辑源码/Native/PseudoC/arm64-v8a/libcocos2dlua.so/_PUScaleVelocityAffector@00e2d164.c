
/* cocos2d::PUScaleVelocityAffector::~PUScaleVelocityAffector() */

void __thiscall
cocos2d::PUScaleVelocityAffector::~PUScaleVelocityAffector(PUScaleVelocityAffector *this)

{
  *(undefined ***)this = &PTR__PUScaleVelocityAffector_016efd90;
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
    *(undefined8 *)(this + 0xb0) = 0;
  }
                    /* catch() { ... } // from try @ 00e2d114 with catch @ 00e2d1a0 */
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

