
/* covariant return thunk to cocos2d::ScaleTo::clone() const */

Action * __thiscall cocos2d::ScaleTo::clone(ScaleTo *this)

{
  Action *pAVar1;
  undefined4 uVar2;
  Action *this_00;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0x24);
  uVar3 = *(undefined8 *)(this + 0x48);
  uVar2 = *(undefined4 *)(this + 0x50);
                    /* try { // try from 00ee1dd4 to 00fe1ddb has its CatchHandler @ 00ee1e3c */
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00ee1ddc to 00fe1e87 has its CatchHandler @ 00ee1d70 */
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    fVar4 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar4 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x70) = uVar3;
    *(undefined2 *)(this_00 + 0x54) = 1;
    *(undefined ***)this_00 = &PTR__Action_016f9128;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9188;
    *(float *)(this_00 + 0x4c) = fVar4;
    *(undefined4 *)(this_00 + 0x78) = uVar2;
    Ref::autorelease((Ref *)this_00);
  }
                    /* catch() { ... } // from try @ 00ee1dd4 with catch @ 00ee1e3c */
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

