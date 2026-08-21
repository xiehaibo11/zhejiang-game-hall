
/* cocos2d::PUTextureRotator::~PUTextureRotator() */

void __thiscall cocos2d::PUTextureRotator::~PUTextureRotator(PUTextureRotator *this)

{
  *(undefined ***)this = &PTR__PUTextureRotator_016f0190;
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 8))();
    *(undefined8 *)(this + 0xc0) = 0;
  }
                    /* catch() { ... } // from try @ 00e2f784 with catch @ 00e2f864 */
                    /* catch() { ... } // from try @ 00e2f7bc with catch @ 00e2f868 */
  PUAffector::~PUAffector((PUAffector *)this);
  operator_delete(this);
  return;
}

