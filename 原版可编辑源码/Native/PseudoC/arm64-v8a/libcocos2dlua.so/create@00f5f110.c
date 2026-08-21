
/* cocos2d::TransitionFadeDown::create(float, cocos2d::Scene*) */

TransitionFadeTR * cocos2d::TransitionFadeDown::create(float param_1,Scene *param_2)

{
  TransitionFadeTR *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionFadeTR *)0x0) {
    TransitionFadeTR::TransitionFadeTR(this);
                    /* catch() { ... } // from try @ 00f5f0b8 with catch @ 00f5f158 */
    *(undefined ***)this = &PTR__TransitionFadeBL_0171bfd0;
    *(undefined ***)(this + 0x388) = &PTR__TransitionFadeDown_0171c538;
    uVar1 = Scene::init((Scene *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionFadeTR *)0x0;
    }
    else {
      *(float *)(this + 0x380) = param_1;
                    /* try { // try from 00f5f174 to 0105f2f3 has its CatchHandler @ 00f5f174
                       catch() { ... } // from try @ 00f5f174 with catch @ 00f5f174
                       catch() { ... } // from try @ 00f5f438 with catch @ 00f5f174 */
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

