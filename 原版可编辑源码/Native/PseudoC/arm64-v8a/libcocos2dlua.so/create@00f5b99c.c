
/* cocos2d::TransitionFlipX::create(float, cocos2d::Scene*, cocos2d::TransitionScene::Orientation)
    */

Scene * cocos2d::TransitionFlipX::create(undefined4 param_1,Ref *param_2,undefined4 param_3)

{
  Scene *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* try { // try from 00f5b9a0 to 0105ba03 has its CatchHandler @ 00f5b9a0
                       catch() { ... } // from try @ 00f5b9a0 with catch @ 00f5b9a0
                       catch() { ... } // from try @ 00f5bb34 with catch @ 00f5b9a0 */
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Scene *)0x0) {
    Scene::Scene(this);
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x37e) = 0;
    *(undefined ***)this = &PTR__TransitionFlipX_017173b8;
  }
  uVar1 = Scene::init(this);
                    /* try { // try from 00f5ba04 to 0105ba1f has its CatchHandler @ 00f5bba4 */
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(this + 0x380) = param_1;
    *(Ref **)(this + 0x370) = param_2;
    Ref::retain(param_2);
    lVar2 = Director::getInstance();
    this_00 = *(Ref **)(lVar2 + 0x158);
    *(Ref **)(this + 0x378) = this_00;
    if (this_00 == (Ref *)0x0) {
      plVar3 = (long *)Scene::create();
      *(long **)(this + 0x378) = plVar3;
                    /* try { // try from 00f5ba38 to 0105bac7 has its CatchHandler @ 00f5bba8 */
      (**(code **)(*plVar3 + 800))();
      this_00 = *(Ref **)(this + 0x378);
    }
    Ref::retain(this_00);
    (**(code **)(*(long *)this + 0x540))(this);
    *(undefined4 *)(this + 0x388) = param_3;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

