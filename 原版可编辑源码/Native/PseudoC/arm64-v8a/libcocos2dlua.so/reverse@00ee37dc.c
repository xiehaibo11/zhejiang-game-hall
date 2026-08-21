
/* cocos2d::TintBy::reverse() const */

Action * __thiscall cocos2d::TintBy::reverse(TintBy *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  Action *this_00;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)(this + 0x4c);
  sVar1 = *(short *)(this + 0x56);
  sVar2 = *(short *)(this + 0x58);
  sVar3 = *(short *)(this + 0x5a);
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar4 = 1e-06;
    if (1e-06 < ABS(fVar5)) {
      fVar4 = fVar5;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(short *)(this_00 + 0x56) = -sVar1;
    *(short *)(this_00 + 0x58) = -sVar2;
    *(undefined ***)this_00 = &PTR__Action_016f9588;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f95e8;
    *(float *)(this_00 + 0x4c) = fVar4;
    *(short *)(this_00 + 0x5a) = -sVar3;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

