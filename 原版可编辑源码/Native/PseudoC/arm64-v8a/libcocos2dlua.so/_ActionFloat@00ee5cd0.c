
/* non-virtual thunk to cocos2d::ActionFloat::~ActionFloat() */

void __thiscall cocos2d::ActionFloat::~ActionFloat(ActionFloat *this)

{
  ActionFloat *pAVar1;
  code *pcVar2;
  
                    /* try { // try from 00ee5ce8 to 00fe5cfb has its CatchHandler @ 00ee5f24 */
  *(undefined ***)(this + -0x28) = &PTR__ActionFloat_016f96c8;
  pAVar1 = *(ActionFloat **)(this + 0x68);
  *(undefined ***)this = &PTR_clone_016f9728;
  if (this + 0x48 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (ActionFloat *)0x0) goto LAB_00ee5d28;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00ee5d28:
  Action::~Action((Action *)(this + -0x28));
  return;
}

