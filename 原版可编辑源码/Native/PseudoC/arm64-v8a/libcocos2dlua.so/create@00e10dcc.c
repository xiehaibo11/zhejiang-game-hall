
/* cocos2d::extension::ControlSlider::create(cocos2d::Sprite*, cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*) */

Control * cocos2d::extension::ControlSlider::create
                    (Sprite *param_1,Sprite *param_2,Sprite *param_3,Sprite *param_4)

{
  Control *this;
  
                    /* catch() { ... } // from try @ 00e10d70 with catch @ 00e10df4 */
                    /* catch() { ... } // from try @ 00e10d54 with catch @ 00e10dfc */
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
                    /* catch() { ... } // from try @ 00e10d3c with catch @ 00e10e0c */
    Control::Control(this);
                    /* catch() { ... } // from try @ 00e10d98 with catch @ 00e10e20 */
    *(undefined4 *)(this + 0x368) = 0;
                    /* catch() { ... } // from try @ 00e10cd4 with catch @ 00e10e28 */
    *(undefined ***)this = &PTR__ControlSlider_016eb010;
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    *(undefined8 *)(this + 0x380) = 0;
  }
                    /* try { // try from 00e10e3c to 00f1114b has its CatchHandler @ 00e10e3c
                       catch() { ... } // from try @ 00e10e3c with catch @ 00e10e3c
                       catch() { ... } // from try @ 00e11158 with catch @ 00e10e3c
                       catch() { ... } // from try @ 00e11274 with catch @ 00e10e3c
                       catch() { ... } // from try @ 00e1131c with catch @ 00e10e3c */
  (**(code **)(*(long *)this + 0x6c0))(this,param_1,param_2,param_3,param_4);
  Ref::autorelease((Ref *)this);
  return this;
}

