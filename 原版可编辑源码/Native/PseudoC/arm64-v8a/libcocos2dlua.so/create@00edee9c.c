
/* cocos2d::RotateBy::create(float, float) */

Action * cocos2d::RotateBy::create(float param_1,float param_2)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00edeed8 to 00fdeee7 has its CatchHandler @ 00edef68 */
    this[0x56] = (Action)0x0;
                    /* try { // try from 00edeee8 to 00fdefd7 has its CatchHandler @ 00eded6c */
    *(undefined ***)this = &PTR__Action_016f87c8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8828;
    Vec3::Vec3((Vec3 *)(this + 0x58));
    Vec3::Vec3((Vec3 *)(this + 100));
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar1;
    *(float *)(this + 0x58) = param_2;
    *(float *)(this + 0x5c) = param_2;
                    /* catch() { ... } // from try @ 00ededd8 with catch @ 00edef34 */
    Ref::autorelease((Ref *)this);
  }
  return this;
}

