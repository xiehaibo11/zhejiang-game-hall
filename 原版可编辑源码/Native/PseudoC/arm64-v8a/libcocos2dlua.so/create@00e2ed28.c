
/* cocos2d::PUTextureAnimator::create() */

PUAffector * cocos2d::PUTextureAnimator::create(void)

{
  PUAffector *this;
  
  this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined4 *)(this + 0xb0) = 0;
    this[0xb6] = (PUAffector)0x0;
    *(undefined2 *)(this + 0xb4) = 1;
    *(undefined ***)this = &PTR__PUTextureAnimator_016f0090;
    *(undefined8 *)(this + 0xb8) = 0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

