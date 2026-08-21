
/* cocos2d::SkewBy::create(float, float, float) */

Action * cocos2d::SkewBy::create(float param_1,float param_2,float param_3)

{
  Action *this;
  float fVar1;
  
                    /* try { // try from 00ee013c to 00fe018b has its CatchHandler @ 00ee013c
                       catch() { ... } // from try @ 00ee013c with catch @ 00ee013c
                       catch() { ... } // from try @ 00ee019c with catch @ 00ee013c */
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
                    /* try { // try from 00ee018c to 00fe019b has its CatchHandler @ 00ee01d0 */
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
                    /* try { // try from 00ee019c to 00fe01eb has its CatchHandler @ 00ee013c */
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x68) = param_2;
    *(float *)(this + 0x6c) = param_3;
    *(undefined ***)this = &PTR__Action_016f8cc8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8d28;
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x58) = param_2;
    *(float *)(this + 0x5c) = param_3;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

