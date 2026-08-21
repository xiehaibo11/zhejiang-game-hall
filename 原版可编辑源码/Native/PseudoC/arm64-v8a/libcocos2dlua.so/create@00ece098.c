
/* cocos2d::CatmullRomTo::create(float, cocos2d::PointArray*) */

Action * cocos2d::CatmullRomTo::create(float param_1,PointArray *param_2)

{
  Action *this;
  ulong uVar1;
  Ref *this_00;
  
                    /* try { // try from 00ece0a4 to 00fce0b7 has its CatchHandler @ 00ece14c */
                    /* try { // try from 00ece0b8 to 00fce183 has its CatchHandler @ 00ece000 */
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__CardinalSplineTo_016f5960;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f59c8;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      if (param_2 != (PointArray *)0x0) {
        Ref::retain((Ref *)param_2);
      }
      this_00 = *(Ref **)(this + 0x58);
      if (this_00 != (Ref *)0x0) {
        Ref::release(this_00);
      }
      *(PointArray **)(this + 0x58) = param_2;
                    /* catch() { ... } // from try @ 00ece0a4 with catch @ 00ece14c */
      *(undefined4 *)(this + 100) = 0x3f000000;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00ece048 with catch @ 00ece168 */
  return this;
}

