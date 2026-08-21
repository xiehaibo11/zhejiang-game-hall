
/* cocos2d::ui::CheckBox::createInstance() */

AbstractCheckButton * cocos2d::ui::CheckBox::createInstance(void)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
  this = operator_new(0x610,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined ***)this = &PTR__CheckBox_016dcf30;
    *(undefined ***)(this + 0x318) = &PTR__CheckBox_016dd608;
    *(undefined8 *)(this + 0x5c8) = 0;
    uVar1 = AbstractCheckButton::init(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

