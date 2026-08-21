
void FUN_017d64b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    *puVar10 = uVar3;
    uVar3 = param_2[1];
    param_2[1] = 0;
    puVar10[1] = uVar3;
    uVar13 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_2 + 4);
    puVar10[3] = uVar13;
    puVar10[2] = uVar3;
    param_1[1] = param_1[1] + 0x28;
  }
  else {
    lVar8 = (long)puVar10 - *param_1 >> 3;
    uVar1 = lVar8 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) {
LAB_017d6664:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) goto LAB_017d6664;
      pvVar2 = operator_new(uVar1 * 0x28);
    }
    uVar13 = param_2[1];
    uVar3 = *param_2;
    puVar4 = (undefined8 *)((long)pvVar2 + lVar8 * 8);
    *param_2 = 0;
    param_2[1] = 0;
    puVar4[1] = uVar13;
    *puVar4 = uVar3;
    uVar13 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 4);
    puVar4[3] = uVar13;
    puVar4[2] = uVar3;
    puVar11 = (undefined8 *)*param_1;
    puVar10 = puVar4 + 5;
    puVar5 = puVar4;
    puVar9 = (undefined8 *)param_1[1];
    puVar12 = puVar11;
    if ((undefined8 *)param_1[1] != puVar11) {
      do {
        puVar12 = puVar9 + -5;
        uVar3 = *puVar12;
        *puVar12 = 0;
        puVar4 = puVar5 + -5;
        *puVar4 = uVar3;
        uVar3 = puVar9[-4];
        puVar9[-4] = 0;
        puVar5[-4] = uVar3;
        uVar13 = puVar9[-2];
        uVar3 = puVar9[-3];
        *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(puVar9 + -1);
        puVar5[-2] = uVar13;
        puVar5[-3] = uVar3;
        puVar5 = puVar4;
        puVar9 = puVar12;
      } while (puVar11 != puVar12);
      puVar11 = (undefined8 *)*param_1;
      puVar12 = (undefined8 *)param_1[1];
    }
    *param_1 = (long)puVar4;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)((long)pvVar2 + uVar1 * 0x28);
    while (puVar12 != puVar11) {
      pvVar2 = (void *)puVar12[-4];
      puVar12[-4] = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      pvVar2 = (void *)puVar12[-5];
      puVar10 = puVar12 + -5;
      puVar12[-5] = 0;
      puVar12 = puVar10;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
      return;
    }
  }
  return;
}

