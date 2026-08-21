
/* cocos2d::ui::LayoutParameter::createCloneInstance() */

Ref * cocos2d::ui::LayoutParameter::createCloneInstance(void)

{
  Ref *this;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined ***)this = &PTR__Ref_016d99a0;
    *(undefined4 *)(this + 0x34) = 0;
    Ref::autorelease(this);
  }
  return this;
}

