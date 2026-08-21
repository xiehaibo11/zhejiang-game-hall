
/* non-virtual thunk to cocos2d::LuaCallFunc::~LuaCallFunc() */

void __thiscall cocos2d::LuaCallFunc::~LuaCallFunc(LuaCallFunc *this)

{
  LuaCallFunc *pLVar1;
  code *pcVar2;
  CallFunc *this_00;
  
  this_00 = (CallFunc *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__LuaCallFunc_0169b360;
  pLVar1 = *(LuaCallFunc **)(this + 200);
  *(undefined ***)this = &PTR_clone_0169b3c8;
  if (this + 0xa8 == pLVar1) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x20);
LAB_008c90cc:
    (*pcVar2)();
  }
  else if (pLVar1 != (LuaCallFunc *)0x0) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x28);
    goto LAB_008c90cc;
  }
  pLVar1 = *(LuaCallFunc **)(this + 0x98);
  *(undefined ***)(this + -0x28) = &PTR__CallFuncN_016f83b8;
  *(undefined ***)this = &PTR_clone_016f8420;
  if (this + 0x78 == pLVar1) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x20);
  }
  else {
    if (pLVar1 == (LuaCallFunc *)0x0) goto LAB_008c9114;
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x28);
  }
  (*pcVar2)();
LAB_008c9114:
  CallFunc::~CallFunc(this_00);
  operator_delete(this_00);
  return;
}

