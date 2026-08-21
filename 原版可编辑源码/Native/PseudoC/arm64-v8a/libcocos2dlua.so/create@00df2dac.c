
/* cocos2d::ui::TabHeader::create() */

AbstractCheckButton * cocos2d::ui::TabHeader::create(void)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
  this = operator_new(0x620,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined4 *)(this + 0x5c8) = 0x41400000;
    *(undefined ***)this = &PTR__TabHeader_016e6c50;
    *(undefined ***)(this + 0x318) = &PTR__TabHeader_016e7328;
    *(undefined4 *)(this + 0x610) = 0;
    uVar1 = AbstractCheckButton::init(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
      *(undefined8 *)(this + 0x78) = 0x3f000000;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

