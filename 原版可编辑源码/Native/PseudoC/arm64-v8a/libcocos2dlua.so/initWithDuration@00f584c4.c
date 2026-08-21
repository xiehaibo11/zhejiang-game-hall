
/* cocos2d::TransitionScene::initWithDuration(float, cocos2d::Scene*) */

undefined8 __thiscall
cocos2d::TransitionScene::initWithDuration(TransitionScene *this,float param_1,Scene *param_2)

{
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  undefined8 uVar4;
  
  uVar1 = Scene::init((Scene *)this);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
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
                    /* catch() { ... } // from try @ 00f5847c with catch @ 00f58514 */
      (**(code **)(*plVar3 + 800))();
      this_00 = *(Ref **)(this + 0x378);
    }
    Ref::retain(this_00);
    (**(code **)(*(long *)this + 0x540))(this);
    uVar4 = 1;
  }
  return uVar4;
}

