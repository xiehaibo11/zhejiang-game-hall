
/* cocos2d::CallFuncN::~CallFuncN() */

void __thiscall cocos2d::CallFuncN::~CallFuncN(CallFuncN *this)

{
  CallFuncN *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(CallFuncN **)(this + 0xc0);
  *(undefined ***)this = &PTR__CallFuncN_016f83b8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8420;
  if (this + 0xa0 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CallFuncN *)0x0) goto LAB_00edbae8;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00edbae8:
  CallFunc::~CallFunc((CallFunc *)this);
  return;
}

