
/* cocos2d::TransitionFlipY::create(float, cocos2d::Scene*, cocos2d::TransitionScene::Orientation)
    */

Scene * cocos2d::TransitionFlipY::create(undefined4 param_1,Ref *param_2,undefined4 param_3)

{
  Scene *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* try { // try from 00f5bdd0 to 0105bddf has its CatchHandler @ 00f5bf64 */
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Scene *)0x0) {
                    /* try { // try from 00f5bde4 to 0105bde7 has its CatchHandler @ 00f5bf44 */
    Scene::Scene(this);
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x37e) = 0;
    *(undefined ***)this = &PTR__TransitionFlipX_01717910;
  }
  uVar1 = Scene::init(this);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00f5be18 to 0105be1f has its CatchHandler @ 00f5bf24 */
    *(undefined4 *)(this + 0x380) = param_1;
    *(Ref **)(this + 0x370) = param_2;
    Ref::retain(param_2);
                    /* try { // try from 00f5be28 to 0105be2b has its CatchHandler @ 00f5bf04 */
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
                    /* try { // try from 00f5be58 to 0105be67 has its CatchHandler @ 00f5bf5c */
    (**(code **)(*(long *)this + 0x540))(this);
    *(undefined4 *)(this + 0x388) = param_3;
  }
                    /* try { // try from 00f5be6c to 0105be6f has its CatchHandler @ 00f5bf2c */
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00f5be70 to 0105bfa3 has its CatchHandler @ 00f5bcf0 */
  return this;
}

