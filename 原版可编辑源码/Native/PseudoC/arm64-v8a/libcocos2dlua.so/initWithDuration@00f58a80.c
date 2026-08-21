
/* cocos2d::TransitionSceneOriented::initWithDuration(float, cocos2d::Scene*,
   cocos2d::TransitionScene::Orientation) */

undefined8 __thiscall
cocos2d::TransitionSceneOriented::initWithDuration
          (undefined4 param_1,TransitionSceneOriented *this,Ref *param_2,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
  uVar1 = Scene::init((Scene *)this);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(this + 0x380) = param_1;
                    /* catch() { ... } // from try @ 00f58b08 with catch @ 00f58ab4 */
    *(Ref **)(this + 0x370) = param_2;
    Ref::retain(param_2);
    lVar2 = Director::getInstance();
    this_00 = *(Ref **)(lVar2 + 0x158);
    *(Ref **)(this + 0x378) = this_00;
    if (this_00 == (Ref *)0x0) {
      plVar3 = (long *)Scene::create();
      *(long **)(this + 0x378) = plVar3;
      (**(code **)(*plVar3 + 800))();
                    /* try { // try from 00f58ae0 to 01058ae7 has its CatchHandler @ 00f58bcc */
      this_00 = *(Ref **)(this + 0x378);
    }
    Ref::retain(this_00);
    (**(code **)(*(long *)this + 0x540))(this);
    *(undefined4 *)(this + 0x388) = param_4;
  }
                    /* try { // try from 00f58b04 to 01058b07 has its CatchHandler @ 00f58ba8 */
                    /* try { // try from 00f58b08 to 01058be7 has its CatchHandler @ 00f58ab4 */
  return 1;
}

