
/* cocos2d::ui::RadioButton::createInstance() */

AbstractCheckButton * cocos2d::ui::RadioButton::createInstance(void)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
                    /* try { // try from 00dc5308 to 00ec5437 has its CatchHandler @ 00dc5308
                       catch() { ... } // from try @ 00dc5308 with catch @ 00dc5308
                       catch() { ... } // from try @ 00dc5728 with catch @ 00dc5308
                       catch() { ... } // from try @ 00dc5a24 with catch @ 00dc5308 */
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

