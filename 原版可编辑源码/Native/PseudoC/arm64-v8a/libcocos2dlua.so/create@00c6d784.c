
/* cocostudio::TriggerObj::create() */

Ref * cocostudio::TriggerObj::create(void)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x58) = 0xffffffff;
    this[0x5c] = (Ref)0x1;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined ***)this = &PTR__TriggerObj_016caa30;
    *(undefined8 *)(this + 0x60) = 0;
    uVar1 = init();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      cocos2d::Ref::autorelease(this);
    }
  }
  return this;
}

