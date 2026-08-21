
/* cocos2d::TransitionMoveInR::create(float, cocos2d::Scene*) */

Scene * cocos2d::TransitionMoveInR::create(float param_1,Scene *param_2)

{
  Scene *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Scene *)0x0) {
    Scene::Scene(this);
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
                    /* try { // try from 00f59a4c to 01059a6f has its CatchHandler @ 00f59c38 */
    *(undefined8 *)(this + 0x37e) = 0;
    *(undefined ***)this = &PTR__TransitionMoveInR_01714708;
    *(undefined ***)(this + 0x388) = &PTR__TransitionMoveInR_01714c78;
    uVar1 = Scene::init(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Scene *)0x0;
    }
    else {
                    /* try { // try from 00f59a70 to 01059ce7 has its CatchHandler @ 00f59590 */
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

