
/* non-virtual thunk to cocos2d::__CCCallFuncO::~__CCCallFuncO() */

void __thiscall cocos2d::__CCCallFuncO::~__CCCallFuncO(__CCCallFuncO *this)

{
  CallFunc *this_00;
  
  this_00 = (CallFunc *)(this + -0x28);
  *(undefined ***)this_00 = &PTR____CCCallFuncO_016f7e10;
  *(undefined ***)this = &PTR_clone_016f7e78;
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x78));
  }
  CallFunc::~CallFunc(this_00);
  operator_delete(this_00);
  return;
}

