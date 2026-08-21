
/* cocos2d::TransitionScene::create(float, cocos2d::Scene*) */

Scene * cocos2d::TransitionScene::create(float param_1,Scene *param_2)

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
    *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
    *(undefined8 *)(this + 0x37e) = 0;
    uVar1 = Scene::init(this);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f58484 to 0105852f has its CatchHandler @ 00f58454 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Scene *)0x0;
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
                    /* catch() { ... } // from try @ 00f58484 with catch @ 00f58454 */
        (**(code **)(*plVar3 + 800))();
        this_00 = *(Ref **)(this + 0x378);
      }
      Ref::retain(this_00);
      (**(code **)(*(long *)this + 0x540))(this);
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00f5847c to 01058483 has its CatchHandler @ 00f58514 */
    }
  }
  return this;
}

