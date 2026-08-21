
/* cocos2d::PUForceFieldAffector::create() */

PUForceFieldAffector * cocos2d::PUForceFieldAffector::create(void)

{
  PUForceFieldAffector *this;
  
  this = operator_new(0x180,(nothrow_t *)&std::nothrow);
  if (this != (PUForceFieldAffector *)0x0) {
    PUForceFieldAffector(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

