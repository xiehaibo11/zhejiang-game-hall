
void FUN_00c1ba14(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (uVar3 != 0) {
    uVar1 = (uVar3 - 2 >> 1) + 1;
    uVar5 = uVar1 * 2;
    if (uVar3 == 1) {
      uVar5 = 0;
    }
    else {
      uVar8 = 0;
      puVar9 = puVar7;
      do {
        puVar9[1] = 0xffffffffffffffff;
        *puVar9 = 0xffffffffffffffff;
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 2;
      } while (uVar8 < uVar1);
      if (uVar3 == uVar5) goto LAB_00c1ba64;
    }
    puVar7[uVar5] = 0xffffffffffffffff;
  }
LAB_00c1ba64:
  uVar3 = *(uint *)(param_1 + 0x34);
  if (uVar3 != 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x38) = lVar6 + (ulong)(uVar3 + 1) * 0x18;
    uVar4 = 0;
    do {
      uVar1 = (int)uVar4 + 1;
      lVar2 = lVar6 + uVar4 * 0x18;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar6 + uVar4 * 0x18) = 0xffffffffffffffff;
      uVar4 = (ulong)uVar1;
    } while (uVar1 <= uVar3);
  }
  return;
}

