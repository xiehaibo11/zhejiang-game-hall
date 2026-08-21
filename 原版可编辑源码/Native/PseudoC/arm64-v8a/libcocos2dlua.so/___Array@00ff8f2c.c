
/* non-virtual thunk to cocos2d::__Array::~__Array() */

void __thiscall cocos2d::__Array::~__Array(__Array *this)

{
  *(undefined ***)(this + -0x28) = &PTR____Array_01724b68;
  *(undefined ***)this = &PTR_clone_01724b98;
  ccArrayFree((_ccArray **)(this + 8));
  Ref::~Ref((Ref *)(this + -0x28));
  return;
}

