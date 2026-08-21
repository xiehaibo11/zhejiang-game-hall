
/* cocos2d::EaseBezierAction::clone() const */

long * __thiscall cocos2d::EaseBezierAction::clone(EaseBezierAction *this)

{
  ActionInterval *pAVar1;
  long *plVar2;
  
  if (*(long **)(this + 0x58) == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
                    /* try { // try from 00ed1f14 to 00fd1f17 has its CatchHandler @ 00ed2794 */
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    plVar2 = (long *)create(pAVar1);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00ed1f28 to 00fd1f3f has its CatchHandler @ 00ed27d8 */
      (**(code **)(*plVar2 + 0x58))
                (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                 *(undefined4 *)(this + 0x68),*(undefined4 *)(this + 0x6c),plVar2);
    }
  }
                    /* try { // try from 00ed1f48 to 00fd1f83 has its CatchHandler @ 00ed2874 */
  return plVar2;
}

