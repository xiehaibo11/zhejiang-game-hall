
/* non-virtual thunk to cocos2d::DeccelAmplitude::~DeccelAmplitude() */

void __thiscall cocos2d::DeccelAmplitude::~DeccelAmplitude(DeccelAmplitude *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__DeccelAmplitude_016f7380;
  *(undefined ***)this = &PTR_clone_016f73e0;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

