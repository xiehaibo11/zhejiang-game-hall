
/* non-virtual thunk to cocos2d::ActionFloat::~ActionFloat() */

void __thiscall cocos2d::ActionFloat::~ActionFloat(ActionFloat *this)

{
  ActionFloat *pAVar1;
  code *pcVar2;
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionFloat_016f96c8;
  pAVar1 = *(ActionFloat **)(this + 0x68);
  *(undefined ***)this = &PTR_clone_016f9728;
  if (this + 0x48 == pAVar1) {
                    /* try { // try from 00ee5d84 to 00fe5d8b has its CatchHandler @ 00ee6004 */
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (ActionFloat *)0x0) goto LAB_00ee5d90;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00ee5d90:
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

