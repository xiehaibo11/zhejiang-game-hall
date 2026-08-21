
/* cocos2d::PUGravityAffector::create() */

PUAffector * cocos2d::PUGravityAffector::create(void)

{
  PUAffector *this;
  
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined4 *)(this + 0xac) = 0x3f800000;
    *(undefined ***)this = &PTR__PUGravityAffector_016ef390;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

