
/* cocos2d::Speed::create(cocos2d::ActionInterval*, float) */

Ref * cocos2d::Speed::create(ActionInterval *param_1,float param_2)

{
  undefined4 uVar1;
  Ref *this;
  long *plVar2;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ecb330 with catch @ 00ecb304 */
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0xffffffff;
                    /* try { // try from 00ecb328 to 00fcb32f has its CatchHandler @ 00ecb374 */
    *(undefined ***)this = &PTR__Action_016f5448;
                    /* try { // try from 00ecb330 to 00fcb38f has its CatchHandler @ 00ecb304 */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f54a8;
    plVar2 = (long *)ScriptEngineManager::getInstance();
    uVar1 = 0;
    if ((long *)*plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*(long *)*plVar2 + 0x10))();
    }
    *(undefined4 *)(this + 0x48) = uVar1;
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__Speed_016f54d0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f5530;
    if (param_1 == (ActionInterval *)0x0) {
      log("Speed::initWithAction error: action is nullptr!");
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00ecb328 with catch @ 00ecb374 */
      Ref::retain((Ref *)param_1);
      *(ActionInterval **)(this + 0x50) = param_1;
      *(float *)(this + 0x4c) = param_2;
      Ref::autorelease(this);
    }
  }
  return this;
}

