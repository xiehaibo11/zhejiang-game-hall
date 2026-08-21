
/* cocos2d::PUVortexAffector::~PUVortexAffector() */

void __thiscall cocos2d::PUVortexAffector::~PUVortexAffector(PUVortexAffector *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e30910 with catch @ 00e30954
                        */
  *(undefined ***)this = &PTR__PUVortexAffector_016f0390;
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 8))();
    *(undefined8 *)(this + 200) = 0;
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0xb8));
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

