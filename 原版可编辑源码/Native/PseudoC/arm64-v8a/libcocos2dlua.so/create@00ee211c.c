
/* cocos2d::ScaleBy::create(float, float, float, float) */

Action * cocos2d::ScaleBy::create(float param_1,float param_2,float param_3,float param_4)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* catch() { ... } // from try @ 00ee20d8 with catch @ 00ee215c */
    Action::Action(this);
                    /* catch() { ... } // from try @ 00ee21b0 with catch @ 00ee2178 */
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_3;
    *(undefined ***)this = &PTR__Action_016f91c8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9228;
    *(float *)(this + 0x4c) = fVar1;
                    /* try { // try from 00ee21a8 to 00fe21af has its CatchHandler @ 00ee2270 */
    *(float *)(this + 0x78) = param_4;
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00ee21b0 to 00fe228b has its CatchHandler @ 00ee2178 */
  return this;
}

