
/* cocos2d::PUVelocityMatchingAffector::create() */

PUAffector * cocos2d::PUVelocityMatchingAffector::create(void)

{
  PUAffector *this;
  
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined4 *)(this + 0xac) = 0x42c80000;
    *(undefined ***)this = &PTR__PUVelocityMatchingAffector_016f0290;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

