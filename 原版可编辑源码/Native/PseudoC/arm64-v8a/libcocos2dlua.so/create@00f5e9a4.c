
/* cocos2d::TransitionFadeTR::create(float, cocos2d::Scene*) */

TransitionFadeTR * cocos2d::TransitionFadeTR::create(float param_1,Scene *param_2)

{
  TransitionFadeTR *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* try { // try from 00f5e9ac to 0105e9b3 has its CatchHandler @ 00f5ee30 */
                    /* try { // try from 00f5e9bc to 0105e9c3 has its CatchHandler @ 00f5ee2c */
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f5e9cc to 0105e9d3 has its CatchHandler @ 00f5ee28 */
  if (this != (TransitionFadeTR *)0x0) {
    TransitionFadeTR(this);
                    /* try { // try from 00f5e9dc to 0105e9e3 has its CatchHandler @ 00f5ee24 */
    uVar1 = Scene::init((Scene *)this);
                    /* try { // try from 00f5e9e4 to 0105e9eb has its CatchHandler @ 00f5ee20 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionFadeTR *)0x0;
    }
    else {
      *(float *)(this + 0x380) = param_1;
      *(Scene **)(this + 0x370) = param_2;
      Ref::retain((Ref *)param_2);
      lVar2 = Director::getInstance();
      this_00 = *(Ref **)(lVar2 + 0x158);
      *(Ref **)(this + 0x378) = this_00;
      if (this_00 == (Ref *)0x0) {
        plVar3 = (long *)Scene::create();
        *(long **)(this + 0x378) = plVar3;
        (**(code **)(*plVar3 + 800))();
        this_00 = *(Ref **)(this + 0x378);
      }
      Ref::retain(this_00);
      (**(code **)(*(long *)this + 0x540))(this);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

