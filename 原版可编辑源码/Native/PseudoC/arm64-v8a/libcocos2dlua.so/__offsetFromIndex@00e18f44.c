
/* cocos2d::extension::TableView::__offsetFromIndex(long) */

void __thiscall cocos2d::extension::TableView::__offsetFromIndex(TableView *this,long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_40);
  uVar4 = *(undefined4 *)(*(long *)(this + 0x488) + param_1 * 4);
  uVar3 = uVar4;
  uVar2 = 0;
  if (*(int *)(this + 0x330) != 0) {
    uVar3 = 0;
    uVar2 = uVar4;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,uVar2);
  }
  return;
}

