
/* cocos2d::SkewTo::create(float, float, float) */

Action * cocos2d::SkewTo::create(float param_1,float param_2,float param_3)

{
  Action *this;
  float fVar1;
  
                    /* try { // try from 00edfcfc to 00fdfd0b has its CatchHandler @ 00edfd94 */
                    /* try { // try from 00edfd0c to 00fdfe03 has its CatchHandler @ 00edfb68 */
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* catch() { ... } // from try @ 00edfbf0 with catch @ 00edfd60 */
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__Action_016f8850;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f88b0;
                    /* catch() { ... } // from try @ 00edfbc0 with catch @ 00edfd80 */
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x68) = param_2;
    *(float *)(this + 0x6c) = param_3;
    Ref::autorelease((Ref *)this);
  }
                    /* catch() { ... } // from try @ 00edfc74 with catch @ 00edfd94
                       catch() { ... } // from try @ 00edfcfc with catch @ 00edfd94 */
  return this;
}

