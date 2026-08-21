
/* covariant return thunk to cocos2d::EaseBezierAction::clone() const */

long * __thiscall cocos2d::EaseBezierAction::clone(EaseBezierAction *this)

{
  long *plVar1;
  ActionInterval *pAVar2;
  long *plVar3;
  
  if (*(long **)(this + 0x30) == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    plVar3 = (long *)create(pAVar2);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00ed1f94 to 00fd1f97 has its CatchHandler @ 00ed2790 */
      (**(code **)(*plVar3 + 0x58))
                (*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c),
                 *(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44),plVar3);
    }
  }
                    /* try { // try from 00ed1fa4 to 00fd1fb3 has its CatchHandler @ 00ed27f0 */
  plVar1 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 5;
  }
                    /* try { // try from 00ed1fb8 to 00fd1fd7 has its CatchHandler @ 00ed281c */
  return plVar1;
}

