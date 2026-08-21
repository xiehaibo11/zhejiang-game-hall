
/* covariant return thunk to cocos2d::TintBy::clone() const */

Action * __thiscall cocos2d::TintBy::clone(TintBy *this)

{
  Action *pAVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  Action *this_00;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 0x24);
  uVar2 = *(undefined2 *)(this + 0x2e);
  uVar3 = *(undefined2 *)(this + 0x30);
  uVar4 = *(undefined2 *)(this + 0x32);
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    fVar5 = 1e-06;
    if (1e-06 < ABS(fVar6)) {
      fVar5 = fVar6;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined2 *)(this_00 + 0x56) = uVar2;
    *(undefined2 *)(this_00 + 0x58) = uVar3;
    *(undefined2 *)(this_00 + 0x54) = 1;
    *(undefined ***)this_00 = &PTR__Action_016f9588;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f95e8;
    *(float *)(this_00 + 0x4c) = fVar5;
    *(undefined2 *)(this_00 + 0x5a) = uVar4;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

