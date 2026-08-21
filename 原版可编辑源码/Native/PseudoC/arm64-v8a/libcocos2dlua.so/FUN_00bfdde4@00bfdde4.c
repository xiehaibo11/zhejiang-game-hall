
undefined8 FUN_00bfdde4(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_1 + 0x10);
  puVar3 = (ulong *)FUN_00c1a2b4(param_1,0,0,0x178);
  *(ulong **)(param_1 + 0x38) = puVar3;
  *(ulong **)(param_1 + 0x30) = puVar3 + 0x27;
  *(undefined4 *)(param_1 + 0x58) = 0x2f;
  puVar5 = puVar3 + 2;
  *puVar3 = param_1 | 0xfffc800000000000;
  puVar1 = puVar3 + 0x2f;
  puVar3[1] = 0xffffffffffffffff;
  *(ulong **)(param_1 + 0x28) = puVar5;
  *(ulong **)(param_1 + 0x20) = puVar5;
  if (puVar5 < puVar1) {
    uVar7 = (long)puVar3 + (0x177 - (long)puVar5);
    uVar6 = uVar7 >> 3;
    uVar2 = (uVar6 - 1 >> 1) + 1;
    if (0x17 < uVar7) {
      uVar7 = 0;
      puVar3 = puVar5;
      do {
        puVar3[1] = 0xffffffffffffffff;
        *puVar3 = 0xffffffffffffffff;
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar7 < uVar2);
      puVar5 = puVar5 + uVar2 * 2;
      if (uVar6 + 1 == uVar2 * 2) goto LAB_00bfdec4;
    }
    *puVar5 = 0xffffffffffffffff;
    if ((puVar5 + 1 < puVar1) && (puVar5[1] = 0xffffffffffffffff, puVar5 + 2 < puVar1)) {
      puVar5[2] = 0xffffffffffffffff;
    }
  }
LAB_00bfdec4:
  uVar4 = FUN_00c1b840(param_1,0,6);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  lVar9 = *(long *)(param_1 + 0x10);
  uVar7 = FUN_00c1b840(param_1,0,2);
  *(ulong *)(lVar9 + 0xd0) = uVar7 | 0xfffa000000000000;
  FUN_00bfb938(param_1,0xff);
  FUN_00c1cc3c(param_1);
  FUN_00c07a40(param_1);
  lVar9 = FUN_00bfab64(param_1,0);
  *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 0x20;
  *(long *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x20) << 2;
  return 0;
}

