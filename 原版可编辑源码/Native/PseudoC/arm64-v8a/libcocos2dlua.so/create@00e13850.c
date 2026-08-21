
/* cocos2d::extension::ControlSwitch::create(cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*, cocos2d::Label*, cocos2d::Label*) */

Control * cocos2d::extension::ControlSwitch::create
                    (Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4,Label *param_5,
                    Label *param_6)

{
  Control *this;
  ulong uVar1;
  
                    /* try { // try from 00e13858 to 00f1385b has its CatchHandler @ 00e13950 */
                    /* try { // try from 00e1388c to 00f13893 has its CatchHandler @ 00e1398c */
  this = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
                    /* try { // try from 00e138a4 to 00f138a7 has its CatchHandler @ 00e13974 */
                    /* try { // try from 00e138a8 to 00f139cb has its CatchHandler @ 00e13778 */
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined ***)this = &PTR__ControlSwitch_016ec680;
    *(undefined8 *)(this + 0x35e) = 0;
    uVar1 = initWithMaskSprite((ControlSwitch *)this,param_1,param_2,param_3,param_4,param_5,param_6
                              );
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

