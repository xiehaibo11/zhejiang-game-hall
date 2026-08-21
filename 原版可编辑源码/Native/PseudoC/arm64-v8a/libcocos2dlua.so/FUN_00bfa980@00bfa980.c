
void FUN_00bfa980(ulong param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,undefined *param_7)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x160) = 0;
  puVar4 = (ulong *)(lVar3 + -8);
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (uVar5 == 0) goto LAB_00bfaaec;
  param_7 = &DAT_0140ee90;
  iVar1 = *(int *)((uVar5 & 0xfffffffffffffffc) + 200);
  if (iVar1 < 0) goto LAB_00bfaa04;
  do {
    do {
      if (puVar4 <= (ulong *)(*(long *)(param_1 + 0x38) + 8U)) goto LAB_00bfaaec;
      param_4 = (*puVar4 & 7) - 1;
      if ((param_4 < 7) && ((uint)param_4 < 7)) goto LAB_00bfaa40;
      iVar1 = *(int *)((uVar5 & 0xfffffffffffffffc) + 200);
      puVar4 = puVar4 + -((ulong)*(byte *)(*puVar4 - 3) + 2);
    } while (-1 < iVar1);
LAB_00bfaa04:
  } while ((ulong *)(*(long *)(param_1 + 0x38) + (long)-iVar1) <= puVar4);
  if (param_2 != 0) {
    *(ulong **)(param_1 + 0x20) = puVar4 + 1;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(uVar5 + 0xa0);
    FUN_00bfa938(param_1);
  }
  while (((uint)uVar5 >> 1 & 1) == 0) {
    FUN_00c1745c(uVar5 & 0xfffffffffffffffc,param_2);
LAB_00bfaaec:
    uVar5 = param_1;
    if (param_2 != 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x38) + 0x10;
      FUN_00bfa938();
      pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0x148);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1);
      }
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  FUN_00c17478(uVar5 & 0xfffffffffffffffc);
LAB_00bfaa40:
                    /* WARNING: Could not recover jumptable at 0x00bfaa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00bfaa50 + (long)(char)param_7[param_4 & 0xffffffff] * 4))();
  return;
}

