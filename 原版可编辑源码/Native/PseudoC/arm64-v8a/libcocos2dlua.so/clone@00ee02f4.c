
/* covariant return thunk to cocos2d::SkewBy::clone() const */

Action * __thiscall cocos2d::SkewBy::clone(SkewBy *this)

{
  Action *pAVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Action *this_00;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00ee02fc to 00fe034b has its CatchHandler @ 00ee029c */
  fVar5 = *(float *)(this + 0x24);
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar3 = *(undefined4 *)(this + 0x34);
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* catch() { ... } // from try @ 00ee02ec with catch @ 00ee0330 */
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
                    /* try { // try from 00ee034c to 00fe039b has its CatchHandler @ 00ee034c
                       catch() { ... } // from try @ 00ee034c with catch @ 00ee034c
                       catch() { ... } // from try @ 00ee03ac with catch @ 00ee034c */
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar4 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar4 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined4 *)(this_00 + 0x68) = uVar2;
    *(undefined4 *)(this_00 + 0x6c) = uVar3;
    *(undefined ***)this_00 = &PTR__Action_016f8cc8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8d28;
    *(float *)(this_00 + 0x4c) = fVar4;
    *(undefined4 *)(this_00 + 0x58) = uVar2;
    *(undefined4 *)(this_00 + 0x5c) = uVar3;
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00ee039c to 00fe03ab has its CatchHandler @ 00ee03e0 */
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

