
/* cocos2d::FadeOut::reverse() const */

Action * __thiscall cocos2d::FadeOut::reverse(FadeOut *this)

{
  Action *this_00;
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x4c);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  Action::Action(this_00);
  *(undefined2 *)(this_00 + 0x54) = 1;
  *(undefined ***)this_00 = &PTR__Action_016f93a8;
  fVar1 = 1e-06;
  if (1e-06 < ABS(fVar2)) {
    fVar1 = fVar2;
  }
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9408;
  *(float *)(this_00 + 0x4c) = fVar1;
  this_00[0x56] = (Action)0xff;
  Ref::autorelease((Ref *)this_00);
  *(FadeOut **)(this_00 + 0x58) = this;
  return this_00;
}

