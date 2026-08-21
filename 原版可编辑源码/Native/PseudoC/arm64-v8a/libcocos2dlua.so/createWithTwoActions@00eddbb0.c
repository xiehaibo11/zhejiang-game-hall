
/* cocos2d::Spawn::createWithTwoActions(cocos2d::FiniteTimeAction*, cocos2d::FiniteTimeAction*) */

Action * cocos2d::Spawn::createWithTwoActions(FiniteTimeAction *param_1,FiniteTimeAction *param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00eddbb4 to 00fddbbb has its CatchHandler @ 00eddc34 */
                    /* try { // try from 00eddbcc to 00fddbcf has its CatchHandler @ 00eddc38 */
                    /* try { // try from 00eddbd0 to 00fddc53 has its CatchHandler @ 00eddb50 */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Spawn_016f86b8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8718;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    uVar1 = initWithTwoActions((Spawn *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00eddbb4 with catch @ 00eddc34 */
      (**(code **)(*(long *)this + 8))(this);
                    /* catch() { ... } // from try @ 00eddbcc with catch @ 00eddc38 */
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

