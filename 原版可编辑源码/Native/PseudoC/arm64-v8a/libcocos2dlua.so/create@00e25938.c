
/* cocos2d::PUFlockCenteringAffector::create() */

PUAffector * cocos2d::PUFlockCenteringAffector::create(void)

{
  PUAffector *this;
  
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    *(undefined ***)this = &PTR__PUFlockCenteringAffector_016ef090;
    Vec3::Vec3((Vec3 *)(this + 0xac));
    Vec3::Vec3((Vec3 *)(this + 0xb8));
    *(undefined4 *)(this + 0xc4) = 0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

