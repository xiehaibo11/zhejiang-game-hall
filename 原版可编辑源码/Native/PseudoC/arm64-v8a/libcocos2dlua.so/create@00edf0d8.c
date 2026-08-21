
/* cocos2d::RotateBy::create(float, cocos2d::Vec3 const&) */

Action * cocos2d::RotateBy::create(float param_1,Vec3 *param_2)

{
  Action *this;
  undefined8 uVar1;
  float fVar2;
  
                    /* try { // try from 00edf0f0 to 00fdf183 has its CatchHandler @ 00edf02c */
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x56] = (Action)0x0;
    *(undefined ***)this = &PTR__Action_016f87c8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8828;
                    /* catch() { ... } // from try @ 00edf0d4 with catch @ 00edf138 */
    Vec3::Vec3((Vec3 *)(this + 0x58));
    Vec3::Vec3((Vec3 *)(this + 100));
    fVar2 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar2 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
                    /* catch() { ... } // from try @ 00edf0c8 with catch @ 00edf168 */
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar2;
    uVar1 = *(undefined8 *)param_2;
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)(this + 0x58) = uVar1;
                    /* try { // try from 00edf184 to 00fdf1cb has its CatchHandler @ 00edf184
                       catch() { ... } // from try @ 00edf184 with catch @ 00edf184
                       catch() { ... } // from try @ 00edf368 with catch @ 00edf184 */
    this[0x56] = (Action)0x1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

