
/* cocos2d::TransitionZoomFlipY::create(float, cocos2d::Scene*,
   cocos2d::TransitionScene::Orientation) */

Scene * cocos2d::TransitionZoomFlipY::create(undefined4 param_1,Ref *param_2,undefined4 param_3)

{
  Scene *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00f5c9a4 with catch @ 00f5cac0 */
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00f5c998 with catch @ 00f5cad8 */
  if (this != (Scene *)0x0) {
                    /* catch() { ... } // from try @ 00f5c98c with catch @ 00f5cadc */
    Scene::Scene(this);
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x37e) = 0;
    *(undefined ***)this = &PTR__TransitionFlipX_01718918;
  }
  uVar1 = Scene::init(this);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(this + 0x380) = param_1;
    *(Ref **)(this + 0x370) = param_2;
    Ref::retain(param_2);
    lVar2 = Director::getInstance();
    this_00 = *(Ref **)(lVar2 + 0x158);
    *(Ref **)(this + 0x378) = this_00;
                    /* catch() { ... } // from try @ 00f5c90c with catch @ 00f5cb2c */
    if (this_00 == (Ref *)0x0) {
      plVar3 = (long *)Scene::create();
      *(long **)(this + 0x378) = plVar3;
      (**(code **)(*plVar3 + 800))();
      this_00 = *(Ref **)(this + 0x378);
    }
    Ref::retain(this_00);
                    /* catch() { ... } // from try @ 00f5c8b4 with catch @ 00f5cb54 */
    (**(code **)(*(long *)this + 0x540))(this);
    *(undefined4 *)(this + 0x388) = param_3;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

