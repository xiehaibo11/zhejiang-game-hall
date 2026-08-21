
/* cocos2d::ui::RadioButton::create() */

AbstractCheckButton * cocos2d::ui::RadioButton::create(void)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x5e0) = 0;
    *(undefined8 *)(this + 0x5f0) = 0;
    *(undefined ***)this = &PTR__RadioButton_016dd648;
    *(undefined ***)(this + 0x318) = &PTR__RadioButton_016ddd20;
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

