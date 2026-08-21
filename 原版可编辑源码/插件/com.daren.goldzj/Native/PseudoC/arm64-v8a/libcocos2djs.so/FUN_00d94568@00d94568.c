
long FUN_00d94568(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    puVar4 = (undefined8 *)*param_1;
    puVar4[5] = 0x100000038;
    (*(code *)*puVar4)(param_1);
  }
  lVar1 = 0;
  if ((param_3 & 7) != 0) {
    lVar1 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0xf;
    *(uint *)((long)puVar4 + 0x2c) = param_2;
    (*(code *)*puVar4)(param_1);
  }
  puVar4 = (undefined8 *)(lVar7 + (long)(int)param_2 * 8 + 0x68);
  puVar5 = (undefined8 *)*puVar4;
  param_3 = lVar1 + param_3;
  if (puVar5 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar3 = puVar5;
      uVar6 = puVar3[2];
      if (param_3 <= uVar6) goto LAB_00d946cc;
      puVar5 = (undefined8 *)*puVar3;
      puVar8 = puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar2 = &DAT_0194fec0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar2 = &DAT_0194fed0;
  }
  uVar6 = 0x3b9ac9e8 - param_3;
  if (*(ulong *)(puVar2 + (long)(int)param_2 * 8) <= 0x3b9ac9e8 - param_3) {
    uVar6 = *(ulong *)(puVar2 + (long)(int)param_2 * 8);
  }
  lVar1 = param_3 + 0x18 + uVar6;
  puVar3 = (undefined8 *)jpeg_get_small(param_1,lVar1);
  while (puVar3 == (undefined8 *)0x0) {
    if (uVar6 < 100) {
      puVar5 = (undefined8 *)*param_1;
      puVar5[5] = 0x200000038;
      (*(code *)*puVar5)(param_1);
    }
    lVar1 = param_3 + 0x18 + (uVar6 >> 1);
    puVar3 = (undefined8 *)jpeg_get_small(param_1,lVar1);
    uVar6 = uVar6 >> 1;
  }
  uVar6 = uVar6 + param_3;
  if (puVar8 != (undefined8 *)0x0) {
    puVar4 = puVar8;
  }
  *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) + lVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  *puVar4 = puVar3;
LAB_00d946cc:
  lVar7 = puVar3[1];
  puVar3[1] = lVar7 + param_3;
  puVar3[2] = uVar6 - param_3;
  return (long)puVar3 + lVar7 + 0x18;
}

