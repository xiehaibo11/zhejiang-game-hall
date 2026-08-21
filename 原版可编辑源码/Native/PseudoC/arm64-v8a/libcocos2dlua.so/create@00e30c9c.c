
/* cocos2d::PUVortexAffector::create() */

PUVortexAffector * cocos2d::PUVortexAffector::create(void)

{
  PUVortexAffector *this;
  
  this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
  if (this != (PUVortexAffector *)0x0) {
    PUVortexAffector(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

