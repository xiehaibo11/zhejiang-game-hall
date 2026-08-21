
/* cocos2d::ScaleTo::create(float, float, float, float) */

Action * cocos2d::ScaleTo::create(float param_1,float param_2,float param_3,float param_4)

{
  Action *this;
  float fVar1;
  
                    /* catch() { ... } // from try @ 00ee1b90 with catch @ 00ee1bfc */
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* catch() { ... } // from try @ 00ee1b5c with catch @ 00ee1c2c */
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
                    /* try { // try from 00ee1c48 to 00fe1c87 has its CatchHandler @ 00ee1c48
                       catch() { ... } // from try @ 00ee1c48 with catch @ 00ee1c48
                       catch() { ... } // from try @ 00ee1cc0 with catch @ 00ee1c48 */
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_3;
    *(undefined ***)this = &PTR__Action_016f9128;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9188;
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x78) = param_4;
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00ee1c88 to 00fe1c9b has its CatchHandler @ 00ee1d54 */
  return this;
}

