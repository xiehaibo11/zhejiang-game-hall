
/* cocos2d::LuaCallFunc::~LuaCallFunc() */

void __thiscall cocos2d::LuaCallFunc::~LuaCallFunc(LuaCallFunc *this)

{
  LuaCallFunc *pLVar1;
  code *pcVar2;
  
  pLVar1 = *(LuaCallFunc **)(this + 0xf0);
  *(undefined ***)this = &PTR__LuaCallFunc_0169b360;
  *(undefined ***)(this + 0x28) = &PTR_clone_0169b3c8;
  if (this + 0xd0 == pLVar1) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x20);
LAB_008c8f6c:
    (*pcVar2)();
  }
  else if (pLVar1 != (LuaCallFunc *)0x0) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x28);
    goto LAB_008c8f6c;
  }
  pLVar1 = *(LuaCallFunc **)(this + 0xc0);
  *(undefined ***)this = &PTR__CallFuncN_016f83b8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8420;
  if (this + 0xa0 == pLVar1) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x20);
  }
  else {
    if (pLVar1 == (LuaCallFunc *)0x0) goto LAB_008c8fb4;
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x28);
  }
  (*pcVar2)();
LAB_008c8fb4:
  CallFunc::~CallFunc((CallFunc *)this);
  operator_delete(this);
  return;
}

