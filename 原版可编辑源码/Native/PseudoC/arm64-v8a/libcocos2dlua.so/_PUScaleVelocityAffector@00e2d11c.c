
/* cocos2d::PUScaleVelocityAffector::~PUScaleVelocityAffector() */

void __thiscall
cocos2d::PUScaleVelocityAffector::~PUScaleVelocityAffector(PUScaleVelocityAffector *this)

{
                    /* try { // try from 00e2d11c to 00f2d1ff has its CatchHandler @ 00e2d020 */
  *(undefined ***)this = &PTR__PUScaleVelocityAffector_016efd90;
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
    *(undefined8 *)(this + 0xb0) = 0;
  }
  PUAffector::~PUAffector((PUAffector *)this);
  return;
}

