
/* non-virtual thunk to cocos2d::CallFuncN::~CallFuncN() */

void __thiscall cocos2d::CallFuncN::~CallFuncN(CallFuncN *this)

{
  CallFuncN *pCVar1;
  code *pcVar2;
  
  *(undefined ***)(this + -0x28) = &PTR__CallFuncN_016f83b8;
  pCVar1 = *(CallFuncN **)(this + 0x98);
                    /* try { // try from 00edbb8c to 00fdbbb3 has its CatchHandler @ 00edc074 */
  *(undefined ***)this = &PTR_clone_016f8420;
  if (this + 0x78 == pCVar1) {
                    /* try { // try from 00edbbb4 to 00fdbbc3 has its CatchHandler @ 00edc018 */
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CallFuncN *)0x0) goto LAB_00edbbbc;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00edbbbc:
                    /* try { // try from 00edbbc4 to 00fdbbcf has its CatchHandler @ 00edc004 */
  CallFunc::~CallFunc((CallFunc *)(this + -0x28));
  return;
}

