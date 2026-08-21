
/* cocos2d::ScaleTo::create(float, float, float) */

Action * cocos2d::ScaleTo::create(float param_1,float param_2,float param_3)

{
  Action *this;
  float fVar1;
  
                    /* catch() { ... } // from try @ 00ee1a38 with catch @ 00ee1afc */
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* try { // try from 00ee1b18 to 00fe1b5b has its CatchHandler @ 00ee1b18
                       catch() { ... } // from try @ 00ee1b18 with catch @ 00ee1b18
                       catch() { ... } // from try @ 00ee1b98 with catch @ 00ee1b18 */
    *(undefined2 *)(this + 0x54) = 1;
    *(undefined ***)this = &PTR__Action_016f9128;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_3;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9188;
                    /* try { // try from 00ee1b5c to 00fe1b73 has its CatchHandler @ 00ee1c2c */
    *(float *)(this + 0x4c) = fVar1;
    *(undefined4 *)(this + 0x78) = 0x3f800000;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

