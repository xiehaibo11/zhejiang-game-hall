
/* non-virtual thunk to cocos2d::__Integer::~__Integer() */

void __thiscall cocos2d::__Integer::~__Integer(__Integer *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)(this + -0x28);
  *(undefined ***)this_00 = &PTR____Integer_01698788;
  *(undefined ***)this = &PTR_clone_016987b8;
  Ref::~Ref(this_00);
  operator_delete(this_00);
  return;
}

