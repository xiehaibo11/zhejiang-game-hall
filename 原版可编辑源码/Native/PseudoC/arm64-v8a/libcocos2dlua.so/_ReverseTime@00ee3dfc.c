
/* non-virtual thunk to cocos2d::ReverseTime::~ReverseTime() */

void __thiscall cocos2d::ReverseTime::~ReverseTime(ReverseTime *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ReverseTime_016f88d8;
  *(undefined ***)this = &PTR_clone_016f8938;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

