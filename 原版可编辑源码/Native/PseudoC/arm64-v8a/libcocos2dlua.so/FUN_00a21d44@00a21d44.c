
void FUN_00a21d44(undefined4 *param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((int)param_3[2] != 0) {
                    /* try { // try from 00a21d4c to 00b21d4f has its CatchHandler @ 00a21d88 */
    return;
  }
  uVar4 = param_3[1];
  lVar2 = param_2 * -4;
  if (uVar4 < param_2 * 4) {
    *(undefined4 *)(param_3 + 2) = 7;
    return;
  }
  if (param_2 == 0) {
    return;
  }
  puVar5 = (undefined4 *)*param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21d4c with catch @ 00a21d88
                        */
  if ((7 < param_2) && ((param_1 + param_2 <= puVar5 || (puVar5 + param_2 <= param_1)))) {
    uVar8 = param_2 & 0xfffffffffffffff8;
    puVar9 = (undefined8 *)(param_1 + 4);
    puVar6 = puVar5 + uVar8;
    param_1 = param_1 + uVar8;
    puVar7 = (undefined8 *)(puVar5 + 4);
    uVar10 = uVar8;
    do {
      puVar1 = puVar9 + -1;
      uVar11 = puVar9[-2];
      uVar13 = puVar9[1];
      uVar12 = *puVar9;
      puVar9 = puVar9 + 4;
      uVar10 = uVar10 - 8;
      puVar7[-1] = *puVar1;
      puVar7[-2] = uVar11;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7 = puVar7 + 4;
    } while (uVar10 != 0);
    bVar3 = uVar8 == param_2;
    puVar5 = puVar6;
    param_2 = param_2 - uVar8;
    if (bVar3) goto LAB_00a21db4;
  }
  do {
                    /* try { // try from 00a21d9c to 00b21e47 has its CatchHandler @ 00a21d9c
                       catch() { ... } // from try @ 00a21d9c with catch @ 00a21d9c
                       catch() { ... } // from try @ 00a21e50 with catch @ 00a21d9c
                       catch() { ... } // from try @ 00a21ea8 with catch @ 00a21d9c
                       catch() { ... } // from try @ 00a21ef8 with catch @ 00a21d9c */
    puVar6 = puVar5 + 1;
    param_2 = param_2 - 1;
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar6;
  } while (param_2 != 0);
LAB_00a21db4:
  *param_3 = (long)puVar6;
  param_3[1] = uVar4 + lVar2;
  return;
}

