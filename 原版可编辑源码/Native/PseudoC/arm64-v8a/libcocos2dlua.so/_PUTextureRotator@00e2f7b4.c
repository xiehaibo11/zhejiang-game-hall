
/* cocos2d::PUTextureRotator::~PUTextureRotator() */

void __thiscall cocos2d::PUTextureRotator::~PUTextureRotator(PUTextureRotator *this)

{
                    /* try { // try from 00e2f7bc to 00f2f7df has its CatchHandler @ 00e2f868 */
  *(undefined ***)this = &PTR__PUTextureRotator_016f0190;
  if (*(long **)(this + 0xb8) != (long *)0x0) {
                    /* try { // try from 00e2f7e0 to 00f2f883 has its CatchHandler @ 00e2f5e4 */
    (**(code **)(**(long **)(this + 0xb8) + 8))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  if (*(long **)(this + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xc0) + 8))();
    *(undefined8 *)(this + 0xc0) = 0;
  }
  PUAffector::~PUAffector((PUAffector *)this);
  return;
}

