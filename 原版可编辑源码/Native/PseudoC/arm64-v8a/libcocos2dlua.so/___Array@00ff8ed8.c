
/* cocos2d::__Array::~__Array() */

void __thiscall cocos2d::__Array::~__Array(__Array *this)

{
  *(undefined ***)this = &PTR____Array_01724b68;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724b98;
  ccArrayFree((_ccArray **)(this + 0x30));
  Ref::~Ref((Ref *)this);
  return;
}

