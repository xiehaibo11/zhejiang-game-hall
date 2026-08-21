
/* cocos2d::Animate::create(cocos2d::Animation*) */

Action * cocos2d::Animate::create(Animation *param_1)

{
  Action *this;
  undefined8 *puVar1;
  ulong uVar2;
  
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Animate_016f8960;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f89c0;
    puVar1 = operator_new(0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 **)(this + 0x58) = puVar1;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    uVar2 = initWithAnimation((Animate *)this,param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

