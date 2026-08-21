
/* cocos2d::ui::RadioButton::createCloneInstance() */

AbstractCheckButton * cocos2d::ui::RadioButton::createCloneInstance(void)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
                    /* try { // try from 00dc5d38 to 00ec5d53 has its CatchHandler @ 00dc5ee4 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
                    /* try { // try from 00dc5d58 to 00ec5d67 has its CatchHandler @ 00dc5ee8 */
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

