
/* cocos2d::extension::ControlHuePicker::create(cocos2d::Node*, cocos2d::Vec2) */

Control * __thiscall
cocos2d::extension::ControlHuePicker::create
          (undefined8 param_1,undefined8 param_2,ControlHuePicker *this)

{
  Control *this_00;
  
  this_00 = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this_00 != (Control *)0x0) {
    Control::Control(this_00);
    *(undefined ***)this_00 = &PTR__ControlHuePicker_016e9aa0;
    *(undefined8 *)(this_00 + 0x360) = 0;
    *(undefined8 *)(this_00 + 0x358) = 0;
    *(undefined8 *)(this_00 + 0x370) = 0;
    *(undefined8 *)(this_00 + 0x368) = 0;
  }
  (**(code **)(*(long *)this_00 + 0x6b8))(param_1,param_2,this_00,this);
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

