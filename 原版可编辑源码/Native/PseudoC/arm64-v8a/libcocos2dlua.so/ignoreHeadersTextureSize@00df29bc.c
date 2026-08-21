
/* cocos2d::ui::TabControl::ignoreHeadersTextureSize(bool) */

void __thiscall cocos2d::ui::TabControl::ignoreHeadersTextureSize(TabControl *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Size aSStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x548] != (TabControl)param_1) {
    puVar5 = *(undefined8 **)(this + 0x558);
    this[0x548] = (TabControl)param_1;
    if (*(undefined8 **)(this + 0x550) != puVar5) {
      puVar4 = *(undefined8 **)(this + 0x550);
      do {
        (**(code **)(**(long **)*puVar4 + 0x600))(*(long **)*puVar4,!param_1);
        if (param_1) {
          plVar2 = *(long **)*puVar4;
          Size::Size(aSStack_60,(float)*(int *)(this + 0x52c),(float)*(int *)(this + 0x528));
                    /* try { // try from 00df2a9c to 00ef2aa3 has its CatchHandler @ 00df2bfc */
          (**(code **)(*plVar2 + 0x160))(plVar2,aSStack_60);
        }
        AbstractCheckButton::backGroundDisabledTextureScaleChangedWithSize
                  (*(AbstractCheckButton **)*puVar4);
        AbstractCheckButton::backGroundSelectedTextureScaleChangedWithSize
                  (*(AbstractCheckButton **)*puVar4);
        AbstractCheckButton::backGroundDisabledTextureScaleChangedWithSize
                  (*(AbstractCheckButton **)*puVar4);
        AbstractCheckButton::frontCrossTextureScaleChangedWithSize(*(AbstractCheckButton **)*puVar4)
        ;
        puVar3 = puVar4 + 1;
        AbstractCheckButton::frontCrossDisabledTextureScaleChangedWithSize
                  (*(AbstractCheckButton **)*puVar4);
        puVar4 = puVar3;
      } while (puVar5 != puVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

