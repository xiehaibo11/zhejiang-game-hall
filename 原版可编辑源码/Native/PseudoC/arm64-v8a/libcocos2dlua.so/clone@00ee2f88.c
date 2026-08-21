
/* covariant return thunk to cocos2d::FadeTo::clone() const */

Action * __thiscall cocos2d::FadeTo::clone(FadeTo *this)

{
  Action *pAVar1;
  FadeTo FVar2;
  Action *this_00;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x24);
  FVar2 = this[0x2e];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9308;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9368;
    *(float *)(this_00 + 0x4c) = fVar3;
    *(FadeTo *)(this_00 + 0x56) = FVar2;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

