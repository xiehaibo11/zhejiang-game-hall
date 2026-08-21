
/* cocos2d::PUGeometryRotator::create() */

PUGeometryRotator * cocos2d::PUGeometryRotator::create(void)

{
  PUGeometryRotator *this;
  
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (PUGeometryRotator *)0x0) {
    PUGeometryRotator(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

