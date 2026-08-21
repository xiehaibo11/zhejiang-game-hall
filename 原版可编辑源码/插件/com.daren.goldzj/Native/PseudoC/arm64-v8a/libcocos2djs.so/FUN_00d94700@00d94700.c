
undefined8 * FUN_00d94700(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    puVar4 = (undefined8 *)*param_1;
    puVar4[5] = 0x300000038;
    (*(code *)*puVar4)(param_1);
  }
  lVar3 = 0;
  if ((param_3 & 7) != 0) {
    lVar3 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0xf;
    *(uint *)((long)puVar4 + 0x2c) = param_2;
    (*(code *)*puVar4)(param_1);
  }
  lVar2 = lVar3 + param_3 + 0x18;
  puVar4 = (undefined8 *)jpeg_get_large(param_1,lVar2);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
    puVar5[5] = 0x400000038;
    (*(code *)*puVar5)(param_1);
  }
  lVar1 = lVar7 + (long)(int)param_2 * 8;
  *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) + lVar2;
  uVar6 = *(undefined8 *)(lVar1 + 0x78);
  puVar4[1] = lVar3 + param_3;
  puVar4[2] = 0;
  *puVar4 = uVar6;
  *(undefined8 **)(lVar1 + 0x78) = puVar4;
  return puVar4 + 3;
}

