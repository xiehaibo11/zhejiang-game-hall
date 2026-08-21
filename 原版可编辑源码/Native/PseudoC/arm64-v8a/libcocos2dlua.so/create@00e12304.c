
/* cocos2d::extension::ControlStepper::create(cocos2d::Sprite*, cocos2d::Sprite*) */

Control * cocos2d::extension::ControlStepper::create(Sprite *param_1,Sprite *param_2)

{
  Control *this;
  ulong uVar1;
  
  this = operator_new(0x3b0,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
    *(undefined ***)this = &PTR__ControlStepper_016eb790;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined4 *)(this + 0x35f) = 0;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    this[0x380] = (Control)0x0;
    *(undefined8 *)(this + 900) = 2;
    *(undefined8 *)(this + 0x398) = 0;
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x3a8) = 0;
    *(undefined8 *)(this + 0x3a0) = 0;
    uVar1 = initWithMinusSpriteAndPlusSprite((ControlStepper *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Control *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

