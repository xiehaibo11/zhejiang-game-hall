
/* cocos2d::TargetedAction::create(cocos2d::Node*, cocos2d::FiniteTimeAction*) */

Action * cocos2d::TargetedAction::create(Node *param_1,FiniteTimeAction *param_2)

{
  Action *this;
  float fVar1;
  
                    /* try { // try from 00ee4acc to 00fe4af3 has its CatchHandler @ 00ee4a2c */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* try { // try from 00ee4af4 to 00fe4afb has its CatchHandler @ 00ee4b8c */
    Action::Action(this);
                    /* try { // try from 00ee4afc to 00fe4b1b has its CatchHandler @ 00ee4a2c */
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR__TargetedAction_016f89e8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8a48;
                    /* try { // try from 00ee4b1c to 00fe4b23 has its CatchHandler @ 00ee4b8c */
                    /* try { // try from 00ee4b24 to 00fe4b43 has its CatchHandler @ 00ee4a2c */
    fVar1 = 1e-06;
    if (1e-06 < ABS(*(float *)(param_2 + 0x4c))) {
      fVar1 = *(float *)(param_2 + 0x4c);
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x4c) = fVar1;
    *(undefined2 *)(this + 0x54) = 1;
                    /* try { // try from 00ee4b44 to 00fe4b4f has its CatchHandler @ 00ee4b8c */
    if (param_1 != (Node *)0x0) {
      Ref::retain((Ref *)param_1);
    }
                    /* try { // try from 00ee4b50 to 00fe4b93 has its CatchHandler @ 00ee4a2c */
    *(Node **)(this + 0x60) = param_1;
    Ref::retain((Ref *)param_2);
    *(FiniteTimeAction **)(this + 0x58) = param_2;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

