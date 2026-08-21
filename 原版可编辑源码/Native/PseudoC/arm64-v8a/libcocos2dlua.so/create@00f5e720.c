
/* cocos2d::TransitionSplitRows::create(float, cocos2d::Scene*) */

TransitionSplitCols * cocos2d::TransitionSplitRows::create(float param_1,Scene *param_2)

{
  TransitionSplitCols *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* try { // try from 00f5e734 to 0105e73b has its CatchHandler @ 00f5e7a8 */
                    /* try { // try from 00f5e73c to 0105e7e7 has its CatchHandler @ 00f5e5c8 */
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionSplitCols *)0x0) {
    TransitionSplitCols::TransitionSplitCols(this);
    *(undefined ***)this = &PTR__TransitionSplitRows_0171a990;
    *(undefined ***)(this + 0x388) = &PTR__TransitionSplitRows_0171aef8;
    uVar1 = Scene::init((Scene *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionSplitCols *)0x0;
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
                    /* catch() { ... } // from try @ 00f5e678 with catch @ 00f5e7a4 */
                    /* catch() { ... } // from try @ 00f5e734 with catch @ 00f5e7a8 */
        (**(code **)(*plVar3 + 800))();
        this_00 = *(Ref **)(this + 0x378);
      }
      Ref::retain(this_00);
                    /* catch() { ... } // from try @ 00f5e60c with catch @ 00f5e7c4 */
      (**(code **)(*(long *)this + 0x540))(this);
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00f5e7e8 to 0105e8d7 has its CatchHandler @ 00f5e7e8
                       catch() { ... } // from try @ 00f5e7e8 with catch @ 00f5e7e8
                       catch() { ... } // from try @ 00f5ed44 with catch @ 00f5e7e8 */
  return this;
}

