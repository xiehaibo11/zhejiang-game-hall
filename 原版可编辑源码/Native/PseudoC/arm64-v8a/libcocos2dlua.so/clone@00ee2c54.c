
/* covariant return thunk to cocos2d::FadeOut::clone() const */

Action * __thiscall cocos2d::FadeOut::clone(FadeOut *this)

{
  Action *pAVar1;
  Action *this_00;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x24);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar3)) {
      fVar2 = fVar3;
    }
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9448;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f94a8;
    *(float *)(this_00 + 0x4c) = fVar2;
    this_00[0x56] = (Action)0x0;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

