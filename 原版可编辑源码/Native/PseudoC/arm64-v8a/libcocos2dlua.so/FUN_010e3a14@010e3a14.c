
void FUN_010e3a14(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = param_1[0x23];
  if (lVar3 == 0) {
    iVar1 = *(int *)((long)param_1 + 0x5c);
                    /* try { // try from 010e3ab8 to 011e3ad3 has its CatchHandler @ 010e3ba8 */
    if (4 < iVar1) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x1b;
      *(int *)((long)puVar5 + 0x2c) = iVar1;
      *(undefined4 *)(puVar5 + 6) = 4;
      (*(code *)*puVar5)(param_1);
      iVar1 = *(int *)((long)param_1 + 0x5c);
    }
    *(int *)((long)param_1 + 0x174) = iVar1;
    if (0 < iVar1) {
      lVar4 = 0;
      lVar3 = 0;
      do {
        param_1[lVar3 + 0x2f] = param_1[0xd] + lVar4;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x60;
      } while (lVar3 < *(int *)((long)param_1 + 0x5c));
    }
  }
  else {
                    /* try { // try from 010e3a2c to 011e3a47 has its CatchHandler @ 010e3bb4 */
    lVar4 = (long)*(int *)(param_1[0x3e] + 0x2c);
    iVar1 = *(int *)(lVar3 + lVar4 * 0x24);
    *(int *)((long)param_1 + 0x174) = iVar1;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        param_1[lVar6 + 0x2f] =
             param_1[0xd] + (long)*(int *)(lVar3 + lVar4 * 0x24 + 4 + lVar6 * 4) * 0x60;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
    }
    if (*(int *)((long)param_1 + 0x15c) != 0) {
      lVar3 = lVar3 + lVar4 * 0x24;
      *(undefined4 *)((long)param_1 + 0x1cc) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(lVar3 + 0x18);
      *(undefined4 *)((long)param_1 + 0x1d4) = *(undefined4 *)(lVar3 + 0x1c);
      uVar2 = *(undefined4 *)(lVar3 + 0x20);
      goto LAB_010e3b38;
    }
  }
  uVar2 = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  *(int *)(param_1 + 0x3a) = *(int *)((long)param_1 + 0x1dc) * *(int *)((long)param_1 + 0x1dc) + -1;
LAB_010e3b38:
  *(undefined4 *)(param_1 + 0x3b) = uVar2;
                    /* try { // try from 010e3b3c to 011e3b57 has its CatchHandler @ 010e3b98 */
  return;
}

