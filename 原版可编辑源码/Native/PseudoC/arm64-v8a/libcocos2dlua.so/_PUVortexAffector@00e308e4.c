
/* cocos2d::PUVortexAffector::~PUVortexAffector() */

void __thiscall cocos2d::PUVortexAffector::~PUVortexAffector(PUVortexAffector *this)

{
  *(undefined ***)this = &PTR__PUVortexAffector_016f0390;
  if (*(long **)(this + 200) != (long *)0x0) {
                    /* try { // try from 00e30910 to 00f30913 has its CatchHandler @ 00e30954 */
    (**(code **)(**(long **)(this + 200) + 8))();
    *(undefined8 *)(this + 200) = 0;
  }
  Quaternion::~Quaternion((Quaternion *)(this + 0xb8));
  PUAffector::~PUAffector((PUAffector *)this);
  return;
}

