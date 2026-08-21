
/* cocos2d::TransitionFadeBL::create(float, cocos2d::Scene*) */

TransitionFadeTR * cocos2d::TransitionFadeBL::create(float param_1,Scene *param_2)

{
  TransitionFadeTR *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00f5ecf8 with catch @ 00f5ee04 */
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00f5ece8 with catch @ 00f5ee1c */
  if (this != (TransitionFadeTR *)0x0) {
                    /* catch() { ... } // from try @ 00f5e9e4 with catch @ 00f5ee20 */
                    /* catch() { ... } // from try @ 00f5e9dc with catch @ 00f5ee24 */
    TransitionFadeTR::TransitionFadeTR(this);
                    /* catch() { ... } // from try @ 00f5e9cc with catch @ 00f5ee28 */
                    /* catch() { ... } // from try @ 00f5e9bc with catch @ 00f5ee2c */
                    /* catch() { ... } // from try @ 00f5e9ac with catch @ 00f5ee30 */
                    /* catch() { ... } // from try @ 00f5e9a0 with catch @ 00f5ee38 */
    *(undefined ***)this = &PTR__TransitionFadeBL_0171b4b0;
                    /* catch() { ... } // from try @ 00f5e998 with catch @ 00f5ee40 */
    *(undefined ***)(this + 0x388) = &PTR__TransitionFadeBL_0171ba18;
                    /* catch() { ... } // from try @ 00f5e98c with catch @ 00f5ee44 */
    uVar1 = Scene::init((Scene *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionFadeTR *)0x0;
    }
    else {
      *(float *)(this + 0x380) = param_1;
                    /* catch() { ... } // from try @ 00f5ec18 with catch @ 00f5ee54 */
      *(Scene **)(this + 0x370) = param_2;
                    /* catch() { ... } // from try @ 00f5ec80 with catch @ 00f5ee58
                       catch() { ... } // from try @ 00f5ed3c with catch @ 00f5ee58 */
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
                    /* catch() { ... } // from try @ 00f5e8d8 with catch @ 00f5eebc */
  return this;
}

