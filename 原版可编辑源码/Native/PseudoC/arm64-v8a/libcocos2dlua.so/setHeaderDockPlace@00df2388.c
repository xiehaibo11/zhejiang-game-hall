
/* cocos2d::ui::TabControl::setHeaderDockPlace(cocos2d::ui::TabControl::Dock) */

void __thiscall cocos2d::ui::TabControl::setHeaderDockPlace(TabControl *this,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
                    /* try { // try from 00df2388 to 00ef238f has its CatchHandler @ 00df245c */
                    /* try { // try from 00df2390 to 00ef24b3 has its CatchHandler @ 00df21fc */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x530) != param_2) {
    *(int *)(this + 0x530) = param_2;
    initTabHeadersPos(this,0);
    initContainers(this);
    uVar1 = *(int *)(this + 0x530) - 1;
    if (uVar1 < 3) {
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      uStack_3c = *(undefined4 *)(&DAT_01420920 + uVar3);
      local_40 = *(undefined4 *)(&DAT_0142092c + uVar3);
    }
    else {
      local_40 = 0x3f000000;
      uStack_3c = 0;
    }
    puVar4 = *(undefined8 **)(this + 0x558);
    for (puVar5 = *(undefined8 **)(this + 0x550); puVar5 != puVar4; puVar5 = puVar5 + 1) {
      (**(code **)(**(long **)*puVar5 + 0x148))(*(long **)*puVar5,&local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00df2388 with catch @ 00df245c */
    __stack_chk_fail();
  }
  return;
}

