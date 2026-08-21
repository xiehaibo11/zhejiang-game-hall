
/* cocos2d::ActionFloat::~ActionFloat() */

void __thiscall cocos2d::ActionFloat::~ActionFloat(ActionFloat *this)

{
  ActionFloat *pAVar1;
  code *pcVar2;
  
                    /* try { // try from 00ee5c74 to 00fe5c7f has its CatchHandler @ 00ee5ff0 */
  pAVar1 = *(ActionFloat **)(this + 0x90);
                    /* try { // try from 00ee5c80 to 00fe5c8b has its CatchHandler @ 00ee5fd0 */
  *(undefined ***)this = &PTR__ActionFloat_016f96c8;
                    /* try { // try from 00ee5c8c to 00fe5c97 has its CatchHandler @ 00ee5fb0 */
  *(undefined ***)(this + 0x28) = &PTR_clone_016f9728;
                    /* try { // try from 00ee5c98 to 00fe5cb3 has its CatchHandler @ 00ee5f90 */
  if (this + 0x70 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (ActionFloat *)0x0) goto LAB_00ee5cb8;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
                    /* try { // try from 00ee5cb4 to 00fe5ccb has its CatchHandler @ 00ee5f70 */
  (*pcVar2)();
LAB_00ee5cb8:
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

