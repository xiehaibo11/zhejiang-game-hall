
/* cocos2d::TransitionProgress::create(float, cocos2d::Scene*) */

TransitionScene * cocos2d::TransitionProgress::create(float param_1,Scene *param_2)

{
  TransitionScene *this;
  ulong uVar1;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionScene *)0x0) {
    TransitionScene::TransitionScene(this);
    *(undefined ***)this = &PTR__TransitionFlipX_0171d820;
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    uVar1 = TransitionScene::initWithDuration(this,param_1,param_2);
                    /* try { // try from 00f6054c to 0106069b has its CatchHandler @ 00f6054c
                       catch() { ... } // from try @ 00f6054c with catch @ 00f6054c
                       catch() { ... } // from try @ 00f606a0 with catch @ 00f6054c
                       catch() { ... } // from try @ 00f6080c with catch @ 00f6054c */
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

