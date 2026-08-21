
/* cocos2d::LabelTTF::create() */

LabelTTF * cocos2d::LabelTTF::create(void)

{
  LabelTTF *this;
  
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (LabelTTF *)0x0) {
    LabelTTF(this);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

