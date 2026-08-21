
/* cocos2d::extension::Control::create() */

Layer * cocos2d::extension::Control::create(void)

{
  Layer *this;
  ulong uVar1;
  
  this = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this != (Layer *)0x0) {
    Layer::Layer(this);
    *(undefined ***)this = &PTR__Control_016e8380;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined4 *)(this + 0x31d) = 0;
    *(undefined4 *)(this + 0x348) = 0x3f800000;
    this[0x350] = (Layer)0x0;
    *(undefined4 *)(this + 0x354) = 1;
    uVar1 = init((Control *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

