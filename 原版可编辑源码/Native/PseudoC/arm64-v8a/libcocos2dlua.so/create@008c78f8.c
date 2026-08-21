
/* cocos2d::ScheduleHandlerDelegate::create() */

Ref * cocos2d::ScheduleHandlerDelegate::create(void)

{
  Ref *this;
  
  this = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    this[0x21] = (Ref)0x0;
    *(undefined ***)this = &PTR__Ref_0169b320;
    Ref::autorelease(this);
  }
  return this;
}

