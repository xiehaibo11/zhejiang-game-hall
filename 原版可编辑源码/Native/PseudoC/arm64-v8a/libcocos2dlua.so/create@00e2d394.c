
/* cocos2d::PUScaleVelocityAffector::create() */

PUScaleVelocityAffector * cocos2d::PUScaleVelocityAffector::create(void)

{
  PUScaleVelocityAffector *this;
  
  this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this != (PUScaleVelocityAffector *)0x0) {
    PUScaleVelocityAffector(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

