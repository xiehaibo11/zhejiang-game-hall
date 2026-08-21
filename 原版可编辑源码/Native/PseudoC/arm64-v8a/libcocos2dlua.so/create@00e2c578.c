
/* cocos2d::PUScaleAffector::create() */

PUScaleAffector * cocos2d::PUScaleAffector::create(void)

{
  PUScaleAffector *this;
  
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (PUScaleAffector *)0x0) {
    PUScaleAffector(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

