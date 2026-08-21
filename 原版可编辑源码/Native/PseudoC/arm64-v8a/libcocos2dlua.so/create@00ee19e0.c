
/* cocos2d::ScaleTo::create(float, float) */

Action * cocos2d::ScaleTo::create(float param_1,float param_2)

{
  Action *this;
  float fVar1;
  
                    /* catch() { ... } // from try @ 00ee1918 with catch @ 00ee19e4 */
                    /* try { // try from 00ee1a00 to 00fe1a37 has its CatchHandler @ 00ee1a00
                       catch() { ... } // from try @ 00ee1a00 with catch @ 00ee1a00
                       catch() { ... } // from try @ 00ee1a6c with catch @ 00ee1a00 */
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* try { // try from 00ee1a38 to 00fe1a47 has its CatchHandler @ 00ee1afc */
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_2;
    *(undefined ***)this = &PTR__Action_016f9128;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9188;
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x78) = param_2;
                    /* try { // try from 00ee1a64 to 00fe1a6b has its CatchHandler @ 00ee1acc */
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00ee1a6c to 00fe1b17 has its CatchHandler @ 00ee1a00 */
  return this;
}

