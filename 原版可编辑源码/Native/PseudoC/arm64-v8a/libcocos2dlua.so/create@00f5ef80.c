
/* cocos2d::TransitionFadeUp::create(float, cocos2d::Scene*) */

TransitionFadeTR * cocos2d::TransitionFadeUp::create(float param_1,Scene *param_2)

{
  TransitionFadeTR *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* try { // try from 00f5efa4 to 0105efa7 has its CatchHandler @ 00f5f038 */
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionFadeTR *)0x0) {
    TransitionFadeTR::TransitionFadeTR(this);
    *(undefined ***)this = &PTR__TransitionFadeBL_0171ba40;
    *(undefined ***)(this + 0x388) = &PTR__TransitionFadeUp_0171bfa8;
    uVar1 = Scene::init((Scene *)this);
    if ((uVar1 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5efa4 with catch @ 00f5f038
                        */
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionFadeTR *)0x0;
    }
    else {
      *(float *)(this + 0x380) = param_1;
      *(Scene **)(this + 0x370) = param_2;
                    /* try { // try from 00f5efe8 to 0105efeb has its CatchHandler @ 00f5f024 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f5efe8 with catch @ 00f5f024
                        */
      (**(code **)(*(long *)this + 0x540))(this);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

