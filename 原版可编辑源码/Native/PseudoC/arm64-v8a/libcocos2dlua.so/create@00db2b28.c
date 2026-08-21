
/* cocos2d::ui::RelativeLayoutParameter::create() */

RelativeLayoutParameter * cocos2d::ui::RelativeLayoutParameter::create(void)

{
  RelativeLayoutParameter *this;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (RelativeLayoutParameter *)0x0) {
    RelativeLayoutParameter(this);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

