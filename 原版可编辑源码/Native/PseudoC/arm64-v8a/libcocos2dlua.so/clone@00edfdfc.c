
/* cocos2d::SkewTo::clone() const */

Action * __thiscall cocos2d::SkewTo::clone(SkewTo *this)

{
  Action *this_00;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00edfe0c to 00fdfe57 has its CatchHandler @ 00edfe0c
                       catch() { ... } // from try @ 00edfe0c with catch @ 00edfe0c
                       catch() { ... } // from try @ 00edfe6c with catch @ 00edfe0c */
  fVar3 = *(float *)(this + 0x4c);
  uVar1 = *(undefined8 *)(this + 0x68);
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
                    /* try { // try from 00edfe58 to 00fdfe6b has its CatchHandler @ 00edfea4 */
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
                    /* try { // try from 00edfe6c to 00fdfebf has its CatchHandler @ 00edfe0c */
    if (1e-06 < ABS(fVar3)) {
      fVar2 = fVar3;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8850;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f88b0;
    *(float *)(this_00 + 0x4c) = fVar2;
    *(undefined8 *)(this_00 + 0x68) = uVar1;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

