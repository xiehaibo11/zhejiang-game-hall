
/* cocos2d::TransitionProgressVertical::create(float, cocos2d::Scene*) */

TransitionScene * cocos2d::TransitionProgressVertical::create(float param_1,Scene *param_2)

{
  TransitionScene *this;
  ulong uVar1;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionScene *)0x0) {
    TransitionScene::TransitionScene(this);
    *(undefined8 *)(this + 0x390) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    *(undefined ***)this = &PTR__TransitionFlipX_0171ee20;
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

