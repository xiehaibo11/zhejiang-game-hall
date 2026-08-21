
/* cocos2d::TransitionTurnOffTiles::create(float, cocos2d::Scene*) */

TransitionTurnOffTiles * cocos2d::TransitionTurnOffTiles::create(float param_1,Scene *param_2)

{
  TransitionTurnOffTiles *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
  this = operator_new(0x3a0,(nothrow_t *)&std::nothrow);
  if (this != (TransitionTurnOffTiles *)0x0) {
    TransitionTurnOffTiles(this);
    uVar1 = Scene::init((Scene *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TransitionTurnOffTiles *)0x0;
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

