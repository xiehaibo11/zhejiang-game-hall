
/* cocos2d::TransitionFade::initWithDuration(float, cocos2d::Scene*, cocos2d::Color3B const&) */

undefined8 __thiscall
cocos2d::TransitionFade::initWithDuration
          (TransitionFade *this,float param_1,Scene *param_2,Color3B *param_3)

{
  TransitionFade TVar1;
  ulong uVar2;
  long lVar3;
  Ref *this_00;
  long *plVar4;
  
  uVar2 = Scene::init((Scene *)this);
  if ((uVar2 & 1) != 0) {
    *(float *)(this + 0x380) = param_1;
    *(Scene **)(this + 0x370) = param_2;
    Ref::retain((Ref *)param_2);
    lVar3 = Director::getInstance();
    this_00 = *(Ref **)(lVar3 + 0x158);
    *(Ref **)(this + 0x378) = this_00;
    if (this_00 == (Ref *)0x0) {
      plVar4 = (long *)Scene::create();
      *(long **)(this + 0x378) = plVar4;
      (**(code **)(*plVar4 + 800))();
      this_00 = *(Ref **)(this + 0x378);
    }
    Ref::retain(this_00);
    (**(code **)(*(long *)this + 0x540))(this);
    this[0x386] = *(TransitionFade *)param_3;
    this[0x387] = *(TransitionFade *)(param_3 + 1);
                    /* try { // try from 00f5d238 to 0105d23f has its CatchHandler @ 00f5d5f4 */
    TVar1 = *(TransitionFade *)(param_3 + 2);
    this[0x389] = (TransitionFade)0x0;
    this[0x388] = TVar1;
  }
  return 1;
}

