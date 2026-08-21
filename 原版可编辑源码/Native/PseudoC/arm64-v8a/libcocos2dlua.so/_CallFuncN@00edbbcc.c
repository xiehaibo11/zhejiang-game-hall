
/* non-virtual thunk to cocos2d::CallFuncN::~CallFuncN() */

void __thiscall cocos2d::CallFuncN::~CallFuncN(CallFuncN *this)

{
  CallFuncN *pCVar1;
  code *pcVar2;
  CallFunc *this_00;
  
                    /* try { // try from 00edbbe8 to 00fdbbf7 has its CatchHandler @ 00edbfe4 */
  this_00 = (CallFunc *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__CallFuncN_016f83b8;
  pCVar1 = *(CallFuncN **)(this + 0x98);
                    /* try { // try from 00edbbf8 to 00fdbc13 has its CatchHandler @ 00edc02c */
  *(undefined ***)this = &PTR_clone_016f8420;
  if (this + 0x78 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CallFuncN *)0x0) goto LAB_00edbc24;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
                    /* try { // try from 00edbc20 to 00fdbc43 has its CatchHandler @ 00edc044 */
  (*pcVar2)();
LAB_00edbc24:
  CallFunc::~CallFunc(this_00);
  operator_delete(this_00);
  return;
}

