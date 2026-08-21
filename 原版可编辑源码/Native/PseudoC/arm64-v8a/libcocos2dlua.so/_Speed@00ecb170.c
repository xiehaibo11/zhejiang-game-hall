
/* non-virtual thunk to cocos2d::Speed::~Speed() */

void __thiscall cocos2d::Speed::~Speed(Speed *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__Speed_016f54d0;
  *(undefined ***)this = &PTR_clone_016f5530;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  *(undefined ***)this_00 = &PTR__Action_016f5448;
  *(undefined ***)this = &PTR_clone_016f54a8;
  Ref::~Ref(this_00);
  return;
}

