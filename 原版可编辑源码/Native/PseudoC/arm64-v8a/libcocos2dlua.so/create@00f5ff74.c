
/* cocos2d::TransitionPageTurn::create(float, cocos2d::Scene*, bool) */

TransitionScene * cocos2d::TransitionPageTurn::create(float param_1,Scene *param_2,bool param_3)

{
  TransitionScene *this;
  undefined8 uVar1;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionScene *)0x0) {
    TransitionScene::TransitionScene(this);
    *(undefined ***)this = &PTR__TransitionPageTurn_0171d228;
    uVar1 = NodeGrid::create();
    *(undefined8 *)(this + 0x388) = uVar1;
    uVar1 = NodeGrid::create();
    *(undefined8 *)(this + 0x390) = uVar1;
    Ref::retain(*(Ref **)(this + 0x388));
    Ref::retain(*(Ref **)(this + 0x390));
  }
  this[0x398] = (TransitionScene)param_3;
  TransitionScene::initWithDuration(this,param_1,param_2);
  Ref::autorelease((Ref *)this);
  return this;
}

