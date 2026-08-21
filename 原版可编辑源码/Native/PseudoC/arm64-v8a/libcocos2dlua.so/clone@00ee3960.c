
/* covariant return thunk to cocos2d::DelayTime::clone() const */

Action * __thiscall cocos2d::DelayTime::clone(DelayTime *this)

{
  Action *pAVar1;
  Action *this_00;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x24);
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar3)) {
      fVar2 = fVar3;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9628;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9688;
    *(float *)(this_00 + 0x4c) = fVar2;
    *(undefined2 *)(this_00 + 0x54) = 1;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

