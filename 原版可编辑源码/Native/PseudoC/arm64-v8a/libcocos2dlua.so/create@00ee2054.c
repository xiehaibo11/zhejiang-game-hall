
/* cocos2d::ScaleBy::create(float, float, float) */

Action * cocos2d::ScaleBy::create(float param_1,float param_2,float param_3)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ee2014 with catch @ 00ee2088 */
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* catch() { ... } // from try @ 00ee20e0 with catch @ 00ee20a4 */
    *(undefined2 *)(this + 0x54) = 1;
    *(undefined ***)this = &PTR__Action_016f91c8;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_3;
                    /* try { // try from 00ee20d8 to 00fe20df has its CatchHandler @ 00ee215c */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9228;
    *(float *)(this + 0x4c) = fVar1;
                    /* try { // try from 00ee20e0 to 00fe2177 has its CatchHandler @ 00ee20a4 */
    *(undefined4 *)(this + 0x78) = 0x3f800000;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

