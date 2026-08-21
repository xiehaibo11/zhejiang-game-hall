
/* cocos2d::TransitionMoveInT::create(float, cocos2d::Scene*) */

Scene * cocos2d::TransitionMoveInT::create(float param_1,Scene *param_2)

{
  Scene *this;
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long *plVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f59e10 with catch @ 00f59ce8
                       catch(type#1 @ 00000000) { ... } // from try @ 00f59e94 with catch @ 00f59ce8
                       catch(type#1 @ 00000000) { ... } // from try @ 00f59ea4 with catch @ 00f59ce8
                        */
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Scene *)0x0) {
    Scene::Scene(this);
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x37e) = 0;
                    /* try { // try from 00f59d3c to 01059d3f has its CatchHandler @ 00f59e50 */
    *(undefined ***)this = &PTR__TransitionMoveInR_01714ca0;
    *(undefined ***)(this + 0x388) = &PTR__TransitionMoveInT_01715210;
    uVar1 = Scene::init(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Scene *)0x0;
    }
    else {
                    /* try { // try from 00f59d54 to 01059d5b has its CatchHandler @ 00f59e6c */
      *(float *)(this + 0x380) = param_1;
      *(Scene **)(this + 0x370) = param_2;
                    /* try { // try from 00f59d5c to 01059d6b has its CatchHandler @ 00f59e5c */
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
                    /* try { // try from 00f59d94 to 01059d9f has its CatchHandler @ 00f59e70 */
      (**(code **)(*(long *)this + 0x540))(this);
                    /* try { // try from 00f59da0 to 01059dbf has its CatchHandler @ 00f59e58 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

