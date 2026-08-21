
/* cocos2d::ActionFloat::~ActionFloat() */

void __thiscall cocos2d::ActionFloat::~ActionFloat(ActionFloat *this)

{
  ActionFloat *pAVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00ee5988 with catch @ 00ee5c04 */
  pAVar1 = *(ActionFloat **)(this + 0x90);
                    /* try { // try from 00ee5c20 to 00fe5c73 has its CatchHandler @ 00ee5c20
                       catch() { ... } // from try @ 00ee5c20 with catch @ 00ee5c20
                       catch() { ... } // from try @ 00ee5ecc with catch @ 00ee5c20 */
  *(undefined ***)this = &PTR__ActionFloat_016f96c8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f9728;
  if (this + 0x70 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (ActionFloat *)0x0) goto LAB_00ee5c54;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00ee5c54:
  Action::~Action((Action *)this);
  return;
}

