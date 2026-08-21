
/* cocos2d::Spawn::create(cocos2d::Vector<cocos2d::FiniteTimeAction*> const&) */

Action * cocos2d::Spawn::create(Vector *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 00eddcb8 to 00fddcbb has its CatchHandler @ 00eddcf8 */
    *(undefined ***)this = &PTR__Spawn_016f86b8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8718;
    uVar1 = init((Spawn *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eddcb8 with catch @ 00eddcf8
                        */
  return this;
}

