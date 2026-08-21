
/* cocos2d::CatmullRomBy::create(float, cocos2d::PointArray*) */

Action * cocos2d::CatmullRomBy::create(float param_1,PointArray *param_2)

{
  Action *this;
  ulong uVar1;
  Ref *this_00;
  
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00ece364 to 00fce36f has its CatchHandler @ 00ece4ec */
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00ece380 to 00fce38b has its CatchHandler @ 00ece4e4 */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ece38c to 00fce393 has its CatchHandler @ 00ece4b4 */
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__CardinalSplineTo_016f5a08;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f5a70;
                    /* try { // try from 00ece3bc to 00fce3cb has its CatchHandler @ 00ece4b0 */
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
                    /* try { // try from 00ece3e4 to 00fce40b has its CatchHandler @ 00ece4ec */
      *(PointArray **)(this + 0x58) = param_2;
      *(undefined4 *)(this + 100) = 0x3f000000;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

