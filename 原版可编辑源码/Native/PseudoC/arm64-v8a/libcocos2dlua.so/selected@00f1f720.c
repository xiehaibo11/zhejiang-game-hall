
/* cocos2d::MenuItemSprite::selected() */

void __thiscall cocos2d::MenuItemSprite::selected(MenuItemSprite *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  
  plVar1 = *(long **)(this + 0x330);
  this[0x2f8] = (MenuItemSprite)0x1;
  if (plVar1 != (long *)0x0) {
    plVar2 = *(long **)(this + 0x340);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,0);
      plVar1 = *(long **)(this + 0x330);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
    if (*(long *)(this + 0x338) != 0) {
      (*UNRECOVERED_JUMPTABLE)(plVar1,0);
      plVar1 = *(long **)(this + 0x338);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
    }
                    /* WARNING: Could not recover jumptable at 0x00f1f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,1);
    return;
  }
  return;
}

