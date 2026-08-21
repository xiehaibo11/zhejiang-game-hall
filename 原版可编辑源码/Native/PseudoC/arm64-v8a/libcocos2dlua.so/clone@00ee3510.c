
/* cocos2d::TintBy::clone() const */

Action * __thiscall cocos2d::TintBy::clone(TintBy *this)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  Action *this_00;
  float fVar4;
  float fVar5;
  
                    /* catch() { ... } // from try @ 00ee34a0 with catch @ 00ee3510 */
                    /* catch() { ... } // from try @ 00ee346c with catch @ 00ee3514 */
  fVar5 = *(float *)(this + 0x4c);
  uVar1 = *(undefined2 *)(this + 0x56);
  uVar2 = *(undefined2 *)(this + 0x58);
  uVar3 = *(undefined2 *)(this + 0x5a);
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    fVar4 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar4 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined2 *)(this_00 + 0x56) = uVar1;
    *(undefined2 *)(this_00 + 0x58) = uVar2;
    *(undefined2 *)(this_00 + 0x54) = 1;
    *(undefined ***)this_00 = &PTR__Action_016f9588;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f95e8;
    *(float *)(this_00 + 0x4c) = fVar4;
    *(undefined2 *)(this_00 + 0x5a) = uVar3;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

