
/* cocos2d::PUJetAffector::~PUJetAffector() */

void __thiscall cocos2d::PUJetAffector::~PUJetAffector(PUJetAffector *this)

{
                    /* try { // try from 00e28bfc to 00f28bff has its CatchHandler @ 00e29368 */
  *(undefined ***)this = &PTR__PUJetAffector_016ef590;
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 8))();
    *(undefined8 *)(this + 0xb0) = 0;
  }
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

