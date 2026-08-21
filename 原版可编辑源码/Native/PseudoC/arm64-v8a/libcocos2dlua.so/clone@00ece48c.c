
/* cocos2d::CatmullRomBy::clone() const */

Action * __thiscall cocos2d::CatmullRomBy::clone(CatmullRomBy *this)

{
  Action *this_00;
  Ref *this_01;
  ulong uVar1;
  float fVar2;
  
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ece3bc with catch @ 00ece4b0 */
                    /* catch() { ... } // from try @ 00ece38c with catch @ 00ece4b4 */
  if (this_00 != (Action *)0x0) {
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
                    /* catch() { ... } // from try @ 00ece380 with catch @ 00ece4e4 */
    *(undefined8 *)(this_00 + 0x78) = 0;
                    /* catch() { ... } // from try @ 00ece468 with catch @ 00ece4e8 */
                    /* catch() { ... } // from try @ 00ece364 with catch @ 00ece4ec
                       catch() { ... } // from try @ 00ece3e4 with catch @ 00ece4ec */
    *(undefined ***)this_00 = &PTR__CardinalSplineTo_016f5a08;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f5a70;
  }
  fVar2 = *(float *)(this + 0x4c);
                    /* try { // try from 00ece508 to 00fce53f has its CatchHandler @ 00ece508
                       catch() { ... } // from try @ 00ece508 with catch @ 00ece508
                       catch() { ... } // from try @ 00ece5a4 with catch @ 00ece508 */
  this_01 = (Ref *)(**(code **)(**(long **)(this + 0x58) + 0x10))();
  uVar1 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar2);
  if ((uVar1 & 1) != 0) {
    if (this_01 != (Ref *)0x0) {
      Ref::retain(this_01);
    }
    if (*(Ref **)(this_00 + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this_00 + 0x58));
    }
                    /* try { // try from 00ece540 to 00fce547 has its CatchHandler @ 00ece5e0 */
    *(Ref **)(this_00 + 0x58) = this_01;
    *(undefined4 *)(this_00 + 100) = 0x3f000000;
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

