
/* cocos2d::CardinalSplineBy::create(float, cocos2d::PointArray*, float) */

Action * cocos2d::CardinalSplineBy::create(float param_1,PointArray *param_2,float param_3)

{
  Action *this;
  ulong uVar1;
  Ref *this_00;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00ecdba0 to 00fcdba7 has its CatchHandler @ 00ecdbb8 */
  if (this != (Action *)0x0) {
                    /* try { // try from 00ecdba8 to 00fcdbf3 has its CatchHandler @ 00ecdb40 */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00ecdba0 with catch @ 00ecdbb8 */
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined ***)this = &PTR__CardinalSplineTo_016f5868;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f58d0;
    *(undefined8 *)(this + 0x78) = 0;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      if (param_2 != (PointArray *)0x0) {
                    /* catch() { ... } // from try @ 00ecdc5c with catch @ 00ecdbf4 */
        Ref::retain((Ref *)param_2);
      }
      this_00 = *(Ref **)(this + 0x58);
      if (this_00 != (Ref *)0x0) {
        Ref::release(this_00);
      }
      *(PointArray **)(this + 0x58) = param_2;
      *(float *)(this + 100) = param_3;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

