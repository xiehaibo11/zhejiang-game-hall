
void FUN_00df8810(long param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte local_60 [8];
  ulong local_58;
  int *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = *param_4;
                    /* try { // try from 00df883c to 00ef888b has its CatchHandler @ 00df901c */
  lVar7 = *param_5;
  lVar8 = *(long *)(param_1 + 8);
  plVar5 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x138))(local_60,plVar5,param_2 + 0x20);
  uVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      piVar2 = local_50;
    }
                    /* try { // try from 00df8898 to 00ef889b has its CatchHandler @ 00df903c */
    bVar4 = *piVar2 != 0x70697a2e;
  }
  else {
    bVar4 = true;
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((!bVar4) && (plVar5 = *(long **)(lVar8 + 0x380), plVar5 != (long *)0x0)) {
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = (lVar6 * 100) / lVar7;
      }
    }
                    /* try { // try from 00df88e4 to 00ef890b has its CatchHandler @ 00df8fe8 */
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

