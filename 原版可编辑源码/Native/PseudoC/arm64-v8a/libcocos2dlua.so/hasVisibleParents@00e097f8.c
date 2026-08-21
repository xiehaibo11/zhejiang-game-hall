
/* cocos2d::extension::Control::hasVisibleParents() const */

undefined8 __thiscall cocos2d::extension::Control::hasVisibleParents(Control *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x268))();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1);
    if ((uVar2 & 1) == 0) break;
    plVar1 = (long *)(**(code **)(*plVar1 + 0x268))(plVar1);
  }
  return 0;
}

