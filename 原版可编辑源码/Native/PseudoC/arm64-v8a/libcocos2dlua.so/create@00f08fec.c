
/* cocos2d::Label::create() */

Ref * cocos2d::Label::create(void)

{
  Ref *this;
  
  this = operator_new(0x6a0,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Label((Label *)this,0,0);
    Ref::autorelease(this);
  }
  return this;
}

