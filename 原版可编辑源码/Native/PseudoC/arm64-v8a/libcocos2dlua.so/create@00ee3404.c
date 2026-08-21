
/* cocos2d::TintBy::create(float, short, short, short) */

Action * cocos2d::TintBy::create(float param_1,short param_2,short param_3,short param_4)

{
  Action *this;
  float fVar1;
  
                    /* try { // try from 00ee340c to 00fe346b has its CatchHandler @ 00ee340c
                       catch() { ... } // from try @ 00ee340c with catch @ 00ee340c
                       catch() { ... } // from try @ 00ee3480 with catch @ 00ee340c
                       catch() { ... } // from try @ 00ee34b4 with catch @ 00ee340c */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    fVar1 = 1e-06;
                    /* try { // try from 00ee346c to 00fe347f has its CatchHandler @ 00ee3514 */
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(short *)(this + 0x56) = param_2;
                    /* try { // try from 00ee3480 to 00fe349f has its CatchHandler @ 00ee340c */
    *(short *)(this + 0x58) = param_3;
    *(undefined2 *)(this + 0x54) = 1;
    *(undefined ***)this = &PTR__Action_016f9588;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f95e8;
    *(float *)(this + 0x4c) = fVar1;
    *(short *)(this + 0x5a) = param_4;
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00ee34a0 to 00fe34b3 has its CatchHandler @ 00ee3510 */
  return this;
}

