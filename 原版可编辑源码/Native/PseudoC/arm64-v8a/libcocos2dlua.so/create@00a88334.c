
/* fairygui::GRoot::create(cocos2d::Scene*, int) */

GComponent * fairygui::GRoot::create(Scene *param_1,int param_2)

{
  GComponent *this;
  ulong uVar1;
  
                    /* try { // try from 00a88334 to 00b8838f has its CatchHandler @ 00a8967c */
  this = operator_new(0x2e0,(nothrow_t *)&std::nothrow);
  if (this != (GComponent *)0x0) {
    GComponent::GComponent(this);
    *(undefined8 *)(this + 0x288) = 0;
    *(undefined8 *)(this + 0x280) = 0;
    *(undefined8 *)(this + 0x298) = 0;
    *(undefined8 *)(this + 0x290) = 0;
    *(undefined8 *)(this + 0x2a8) = 0;
    *(undefined8 *)(this + 0x2a0) = 0;
    *(undefined8 *)(this + 0x2b8) = 0;
    *(undefined8 *)(this + 0x2b0) = 0;
    *(undefined ***)this = &PTR__GRoot_016a65f8;
    *(undefined8 *)(this + 0x2c8) = 0;
    *(undefined8 *)(this + 0x2c0) = 0;
    *(undefined8 *)(this + 0x2d8) = 0;
    *(undefined8 *)(this + 0x2d0) = 0;
    uVar1 = initWithScene((GRoot *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00a883b0 to 00b883c3 has its CatchHandler @ 00a8961c */
      (**(code **)(*(long *)this + 8))(this);
      this = (GComponent *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00a883c4 to 00b883e7 has its CatchHandler @ 00a881e4 */
  return this;
}

