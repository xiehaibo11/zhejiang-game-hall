
/* cocos2d::CardinalSplineBy::clone() const */

Action * __thiscall cocos2d::CardinalSplineBy::clone(CardinalSplineBy *this)

{
  undefined4 uVar1;
  Action *this_00;
  Ref *this_01;
  ulong uVar2;
  float fVar3;
  
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined ***)this_00 = &PTR__CardinalSplineTo_016f5868;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f58d0;
    *(undefined8 *)(this_00 + 0x78) = 0;
  }
  fVar3 = *(float *)(this + 0x4c);
  this_01 = (Ref *)(**(code **)(**(long **)(this + 0x58) + 0x10))();
                    /* catch() { ... } // from try @ 00ece050 with catch @ 00ece000
                       catch() { ... } // from try @ 00ece0b8 with catch @ 00ece000 */
  uVar1 = *(undefined4 *)(this + 100);
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar3);
  if ((uVar2 & 1) != 0) {
    if (this_01 != (Ref *)0x0) {
      Ref::retain(this_01);
    }
    if (*(Ref **)(this_00 + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this_00 + 0x58));
    }
    *(Ref **)(this_00 + 0x58) = this_01;
    *(undefined4 *)(this_00 + 100) = uVar1;
  }
  Ref::autorelease((Ref *)this_00);
                    /* try { // try from 00ece048 to 00fce04f has its CatchHandler @ 00ece168 */
                    /* try { // try from 00ece050 to 00fce0a3 has its CatchHandler @ 00ece000 */
  return this_00;
}

