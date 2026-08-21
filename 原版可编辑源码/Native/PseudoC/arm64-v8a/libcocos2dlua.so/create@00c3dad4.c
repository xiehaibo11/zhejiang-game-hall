
/* cocostudio::Tween::create(cocostudio::Bone*) */

ProcessBase * cocostudio::Tween::create(Bone *param_1)

{
  ProcessBase *this;
  ulong uVar1;
  
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (ProcessBase *)0x0) {
    ProcessBase::ProcessBase(this);
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    this[0xa8] = (ProcessBase)0x0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined ***)this = &PTR__Tween_016c8b88;
    *(undefined4 *)(this + 0x88) = 0;
    uVar1 = init((Tween *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ProcessBase *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

