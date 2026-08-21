
/* cocos2d::SkewBy::clone() const */

Action * __thiscall cocos2d::SkewBy::clone(SkewBy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Action *this_00;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 00ee023c to 00fe024b has its CatchHandler @ 00ee0280 */
  fVar4 = *(float *)(this + 0x4c);
  uVar1 = *(undefined4 *)(this + 0x58);
  uVar2 = *(undefined4 *)(this + 0x5c);
                    /* try { // try from 00ee024c to 00fe029b has its CatchHandler @ 00ee01ec */
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
                    /* catch() { ... } // from try @ 00ee023c with catch @ 00ee0280 */
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar3 = 1e-06;
                    /* try { // try from 00ee029c to 00fe02eb has its CatchHandler @ 00ee029c
                       catch() { ... } // from try @ 00ee029c with catch @ 00ee029c
                       catch() { ... } // from try @ 00ee02fc with catch @ 00ee029c */
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined4 *)(this_00 + 0x68) = uVar1;
    *(undefined4 *)(this_00 + 0x6c) = uVar2;
    *(undefined ***)this_00 = &PTR__Action_016f8cc8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8d28;
    *(float *)(this_00 + 0x4c) = fVar3;
    *(undefined4 *)(this_00 + 0x58) = uVar1;
    *(undefined4 *)(this_00 + 0x5c) = uVar2;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

