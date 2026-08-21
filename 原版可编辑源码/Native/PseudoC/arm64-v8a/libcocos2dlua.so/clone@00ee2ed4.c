
/* cocos2d::FadeTo::clone() const */

Action * __thiscall cocos2d::FadeTo::clone(FadeTo *this)

{
  FadeTo FVar1;
  Action *this_00;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x4c);
  FVar1 = this[0x56];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar2 = 1e-06;
    if (1e-06 < ABS(fVar3)) {
      fVar2 = fVar3;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9308;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9368;
    *(float *)(this_00 + 0x4c) = fVar2;
    *(FadeTo *)(this_00 + 0x56) = FVar1;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

