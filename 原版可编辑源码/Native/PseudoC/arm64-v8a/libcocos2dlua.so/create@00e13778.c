
/* cocos2d::extension::ControlSwitch::create(cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*) */

Control * cocos2d::extension::ControlSwitch::create
                    (Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4)

{
  Control *this;
  ulong uVar1;
  
                    /* try { // try from 00e13778 to 00f13837 has its CatchHandler @ 00e13778
                       catch() { ... } // from try @ 00e13778 with catch @ 00e13778
                       catch() { ... } // from try @ 00e138a8 with catch @ 00e13778 */
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined ***)this = &PTR__ControlSwitch_016ec680;
    *(undefined8 *)(this + 0x35e) = 0;
    uVar1 = initWithMaskSprite((ControlSwitch *)this,param_1,param_2,param_3,param_4,(Label *)0x0,
                               (Label *)0x0);
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

