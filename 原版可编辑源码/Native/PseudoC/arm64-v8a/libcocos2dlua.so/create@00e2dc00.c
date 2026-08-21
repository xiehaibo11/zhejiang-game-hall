
/* cocos2d::PUSineForceAffector::create() */

PUBaseForceAffector * cocos2d::PUSineForceAffector::create(void)

{
  PUBaseForceAffector *this;
  
  this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
  if (this != (PUBaseForceAffector *)0x0) {
    PUBaseForceAffector::PUBaseForceAffector(this);
    *(undefined8 *)(this + 0xd0) = 0x3f8000003f800000;
    *(undefined8 *)(this + 200) = 0x3f80000043b48000;
    *(undefined ***)this = &PTR__PUSineForceAffector_016efe90;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

