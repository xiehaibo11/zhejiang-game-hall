
/* cocos2d::extension::ScrollView::hasVisibleParents() const */

undefined8 __thiscall cocos2d::extension::ScrollView::hasVisibleParents(ScrollView *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x268))();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 1;
    }
                    /* try { // try from 00e15998 to 00f159a3 has its CatchHandler @ 00e15a98 */
    uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1);
    if ((uVar2 & 1) == 0) break;
    plVar1 = (long *)(**(code **)(*plVar1 + 0x268))(plVar1);
  }
  return 0;
}

