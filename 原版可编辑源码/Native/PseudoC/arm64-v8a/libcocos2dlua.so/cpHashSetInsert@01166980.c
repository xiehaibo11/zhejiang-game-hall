
undefined8
cpHashSetInsert(uint *param_1,ulong param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  void *__ptr;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  
  uVar7 = (ulong)param_1[1];
  uVar14 = 0;
  if (uVar7 != 0) {
    uVar14 = param_2 / uVar7;
  }
  lVar15 = param_2 - uVar14 * uVar7;
  for (puVar13 = *(undefined8 **)(*(long *)(param_1 + 6) + lVar15 * 8); puVar13 != (undefined8 *)0x0
      ; puVar13 = (undefined8 *)puVar13[2]) {
    cVar4 = (**(code **)(param_1 + 2))(param_3,*puVar13);
    if (cVar4 != '\0') goto LAB_01166b04;
  }
  puVar13 = *(undefined8 **)(param_1 + 8);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = calloc(1,0x8000);
    cpArrayPush(*(undefined8 *)(param_1 + 10),puVar13);
    puVar8 = puVar13 + 0xffc;
    lVar9 = 0x554;
    puVar10 = *(undefined8 **)(param_1 + 8);
    puVar3 = puVar13;
    do {
      puVar11 = puVar3 + 3;
      puVar3[5] = puVar10;
      *puVar11 = 0;
      lVar9 = lVar9 + -1;
      puVar10 = puVar11;
      puVar3 = puVar11;
    } while (lVar9 != 0);
  }
  else {
    puVar8 = (undefined8 *)puVar13[2];
  }
  *(undefined8 **)(param_1 + 8) = puVar8;
  puVar13[1] = param_2;
  if (param_4 != (code *)0x0) {
    param_5 = (*param_4)(param_3,param_5);
  }
  *puVar13 = param_5;
  lVar9 = *(long *)(param_1 + 6);
  lVar15 = lVar15 * 8;
  puVar13[2] = *(undefined8 *)(lVar9 + lVar15);
  *(undefined8 **)(lVar9 + lVar15) = puVar13;
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  if (param_1[1] <= uVar1 + 1) {
    uVar5 = FUN_01166724(param_1[1] + 1);
    uVar14 = (ulong)uVar5;
    pvVar6 = calloc(uVar14,8);
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      __ptr = *(void **)(param_1 + 6);
    }
    else {
      __ptr = *(void **)(param_1 + 6);
      uVar7 = 0;
      do {
        lVar15 = *(long *)((long)__ptr + uVar7 * 8);
        while (lVar15 != 0) {
          lVar9 = *(long *)(lVar15 + 0x10);
          uVar2 = 0;
          if (uVar14 != 0) {
            uVar2 = *(ulong *)(lVar15 + 8) / uVar14;
          }
          lVar12 = (*(ulong *)(lVar15 + 8) - uVar2 * uVar14) * 8;
          *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)((long)pvVar6 + lVar12);
          *(long *)((long)pvVar6 + lVar12) = lVar15;
          lVar15 = lVar9;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    free(__ptr);
    *(void **)(param_1 + 6) = pvVar6;
    param_1[1] = uVar5;
  }
LAB_01166b04:
  return *puVar13;
}

