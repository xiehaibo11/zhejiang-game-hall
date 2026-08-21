
/* cocos2d::Speed::~Speed() */

void __thiscall cocos2d::Speed::~Speed(Speed *this)

{
  *(undefined ***)this = &PTR__Speed_016f54d0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5530;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
  }
  *(undefined ***)this = &PTR__Action_016f5448;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f54a8;
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

