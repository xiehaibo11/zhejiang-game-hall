
void FUN_00c1b840(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  lVar4 = FUN_00c1b698();
  uVar3 = *(uint *)(lVar4 + 0x30);
  puVar7 = *(undefined8 **)(lVar4 + 0x10);
  if (uVar3 != 0) {
    uVar1 = (uVar3 - 2 >> 1) + 1;
    uVar6 = uVar1 * 2;
    if (uVar3 == 1) {
      uVar6 = 0;
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
      if (uVar3 == uVar6) goto LAB_00c1b89c;
    }
    puVar7[uVar6] = 0xffffffffffffffff;
  }
LAB_00c1b89c:
  uVar3 = *(uint *)(lVar4 + 0x34);
  if (uVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x28);
    uVar5 = 0;
    do {
      uVar1 = (int)uVar5 + 1;
      lVar2 = lVar4 + uVar5 * 0x18;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar4 + uVar5 * 0x18) = 0xffffffffffffffff;
      uVar5 = (ulong)uVar1;
    } while (uVar1 <= uVar3);
  }
  return;
}

