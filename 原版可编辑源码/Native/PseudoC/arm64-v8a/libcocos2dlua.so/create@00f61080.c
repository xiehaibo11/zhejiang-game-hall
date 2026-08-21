
/* cocos2d::TransitionProgressOutIn::create(float, cocos2d::Scene*) */

TransitionScene * cocos2d::TransitionProgressOutIn::create(float param_1,Scene *param_2)

{
  TransitionScene *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00f60fc8 with catch @ 00f6108c */
                    /* catch() { ... } // from try @ 00f6101c with catch @ 00f6109c */
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00f61004 with catch @ 00f610ac */
  if (this != (TransitionScene *)0x0) {
    TransitionScene::TransitionScene(this);
                    /* catch() { ... } // from try @ 00f60fac with catch @ 00f610b8 */
                    /* catch() { ... } // from try @ 00f60fbc with catch @ 00f610bc */
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    *(undefined ***)this = &PTR__TransitionFlipX_0171f920;
    uVar1 = TransitionScene::initWithDuration(this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionScene *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

