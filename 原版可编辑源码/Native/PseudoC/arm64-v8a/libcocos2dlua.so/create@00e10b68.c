
/* cocos2d::extension::ControlSlider::create(cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Sprite*)
    */

Control * cocos2d::extension::ControlSlider::create(Sprite *param_1,Sprite *param_2,Sprite *param_3)

{
  Control *this;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
    *(undefined4 *)(this + 0x368) = 0;
    *(undefined ***)this = &PTR__ControlSlider_016eb010;
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    *(undefined8 *)(this + 0x380) = 0;
  }
  (**(code **)(*(long *)this + 0x6b8))(this,param_1,param_2,param_3);
  Ref::autorelease((Ref *)this);
  return this;
}

