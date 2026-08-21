
long * FUN_00c1cdf4(long param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  uVar1 = *param_2;
  iVar6 = 100;
  if ((int)((long)uVar1 >> 0x2f) != -0xc) goto LAB_00c1ceb8;
  do {
    plVar2 = (long *)FUN_00c1bc70(param_1,uVar1 & 0x7fffffffffff,param_3);
    if ((((*plVar2 != -1) || (lVar3 = *(long *)((uVar1 & 0x7fffffffffff) + 0x20), lVar3 == 0)) ||
        ((*(byte *)(lVar3 + 10) & 1) != 0)) ||
       (puVar4 = (ulong *)FUN_00c1ccbc(lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x170)),
       puVar4 == (ulong *)0x0)) {
      return plVar2;
    }
    uVar1 = *puVar4;
    while( true ) {
      if ((int)((long)uVar1 >> 0x2f) == -9) {
        puVar5 = *(undefined8 **)(param_1 + 0x28);
        uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
        if (*(char *)(uVar1 + 10) == '\0') {
          puVar5 = (undefined8 *)
                   (*(long *)(param_1 + 0x20) +
                   (ulong)*(byte *)(*(long *)(uVar1 + 0x20) + -0x5d) * 8);
        }
        puVar5[1] = 0xffffffffffffffff;
        *puVar5 = &DAT_00c17928;
        puVar5[2] = *puVar4;
        puVar5[3] = 0xffffffffffffffff;
        puVar5[4] = *param_2;
        puVar5[5] = *param_3;
        *(undefined8 **)(param_1 + 0x28) = puVar5 + 4;
        return (long *)0x0;
      }
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfaf54(param_1,0x16c);
      }
      uVar1 = *puVar4;
      param_2 = puVar4;
      if ((int)((long)uVar1 >> 0x2f) == -0xc) break;
LAB_00c1ceb8:
      puVar4 = (ulong *)FUN_00c1cd14(param_1,param_2,0);
      uVar1 = *puVar4;
      if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb020(param_1,param_2,0x193);
      }
    }
  } while( true );
}

