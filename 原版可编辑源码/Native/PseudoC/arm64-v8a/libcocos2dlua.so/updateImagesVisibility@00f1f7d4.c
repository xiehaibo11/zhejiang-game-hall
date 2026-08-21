
/* cocos2d::MenuItemSprite::updateImagesVisibility() */

void __thiscall cocos2d::MenuItemSprite::updateImagesVisibility(MenuItemSprite *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0x2f9] == (MenuItemSprite)0x0) {
    plVar1 = *(long **)(this + 0x330);
    if (*(long *)(this + 0x340) != 0) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x170))(plVar1,0);
      }
      plVar1 = *(long **)(this + 0x338);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x170))(plVar1,0);
      }
      plVar1 = *(long **)(this + 0x340);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar1;
      uVar2 = 1;
      goto LAB_00f1f878;
    }
  }
  else {
    plVar1 = *(long **)(this + 0x330);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x338);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x340);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  uVar2 = 0;
LAB_00f1f878:
                    /* WARNING: Could not recover jumptable at 0x00f1f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x170))(plVar1,uVar2);
  return;
}

