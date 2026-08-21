
/* covariant return thunk to cocos2d::ScaleBy::clone() const */

Action * __thiscall cocos2d::ScaleBy::clone(ScaleBy *this)

{
  Action *pAVar1;
  undefined4 uVar2;
  Action *this_00;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00ee22bc to 00fe22c3 has its CatchHandler @ 00ee233c */
  fVar5 = *(float *)(this + 0x24);
                    /* try { // try from 00ee22c4 to 00fe2357 has its CatchHandler @ 00ee228c */
  uVar3 = *(undefined8 *)(this + 0x48);
  uVar2 = *(undefined4 *)(this + 0x50);
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    fVar4 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar4 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x70) = uVar3;
    *(undefined2 *)(this_00 + 0x54) = 1;
    *(undefined ***)this_00 = &PTR__Action_016f91c8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9228;
    *(float *)(this_00 + 0x4c) = fVar4;
    *(undefined4 *)(this_00 + 0x78) = uVar2;
    Ref::autorelease((Ref *)this_00);
  }
                    /* catch() { ... } // from try @ 00ee22bc with catch @ 00ee233c */
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

