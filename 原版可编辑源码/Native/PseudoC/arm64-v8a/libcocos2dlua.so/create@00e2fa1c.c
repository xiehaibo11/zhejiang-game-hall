
/* cocos2d::PUTextureRotator::create() */

PUTextureRotator * cocos2d::PUTextureRotator::create(void)

{
  PUTextureRotator *this;
  
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this != (PUTextureRotator *)0x0) {
    PUTextureRotator(this);
  }
  Ref::autorelease((Ref *)this);
  return this;
}

