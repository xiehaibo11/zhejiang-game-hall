
/* cocos2d::Menu::init() */

uint __thiscall cocos2d::Menu::init(Menu *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 00f1b56c to 0101b56f has its CatchHandler @ 00f1bcb8 */
                    /* try { // try from 00f1b57c to 0101b583 has its CatchHandler @ 00f1bad4 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = (undefined8 *)0x0;
  uVar4 = initWithArray(this,(Vector *)&local_50);
  puVar3 = local_48;
  for (puVar1 = local_50; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    Ref::release((Ref *)*puVar1);
  }
  local_48 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

