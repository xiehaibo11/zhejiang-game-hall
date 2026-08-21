
/* cocos2d::CallFunc::~CallFunc() */

void __thiscall cocos2d::CallFunc::~CallFunc(CallFunc *this)

{
  CallFunc *pCVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__CallFunc_016f7d80;
                    /* try { // try from 00edbc64 to 00fdbc73 has its CatchHandler @ 00edc000 */
  *(undefined ***)(this + 0x28) = &PTR_clone_016f7de8;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  pCVar1 = *(CallFunc **)(this + 0x90);
                    /* try { // try from 00edbc74 to 00fdbc7f has its CatchHandler @ 00edbffc */
  if (this + 0x70 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CallFunc *)0x0) goto LAB_00edbc9c;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
                    /* try { // try from 00edbc98 to 00fdbca7 has its CatchHandler @ 00edbfe0 */
  (*pcVar2)();
LAB_00edbc9c:
                    /* try { // try from 00edbca8 to 00fdbcc3 has its CatchHandler @ 00edc028 */
  Action::~Action((Action *)this);
  return;
}

