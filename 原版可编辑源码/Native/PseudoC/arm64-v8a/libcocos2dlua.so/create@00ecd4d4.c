
/* cocos2d::CardinalSplineTo::create(float, cocos2d::PointArray*, float) */

Action * cocos2d::CardinalSplineTo::create(float param_1,PointArray *param_2,float param_3)

{
  Action *this;
  ulong uVar1;
  Ref *this_00;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
                    /* catch() { ... } // from try @ 00ecd55c with catch @ 00ecd530 */
    *(undefined ***)this = &PTR__CardinalSplineTo_016f57d8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f5840;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      if (param_2 != (PointArray *)0x0) {
                    /* try { // try from 00ecd554 to 00fcd55b has its CatchHandler @ 00ecd5a0 */
        Ref::retain((Ref *)param_2);
      }
                    /* try { // try from 00ecd55c to 00fcd5bb has its CatchHandler @ 00ecd530 */
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

