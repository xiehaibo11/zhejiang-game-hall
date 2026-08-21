
/* cocos2d::PUAlignAffector::create() */

PUAffector * cocos2d::PUAlignAffector::create(void)

{
  PUAffector *this;
  
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (PUAffector *)0x0) {
    PUAffector::PUAffector(this);
    this[0xac] = (PUAffector)0x0;
    *(undefined ***)this = &PTR__PUAlignAffector_016eebe0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

