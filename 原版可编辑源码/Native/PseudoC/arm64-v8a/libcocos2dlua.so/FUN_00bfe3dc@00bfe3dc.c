
ulong FUN_00bfe3dc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar3 = FUN_00c1a314(param_1,0x60);
  *(undefined1 *)(uVar3 + 9) = 6;
  *(undefined1 *)(uVar3 + 10) = 1;
  *(undefined1 *)(uVar3 + 0xb) = 0;
  *(undefined4 *)(uVar3 + 0x58) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(uVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(uVar3 + 0x48) = uVar7;
  *(undefined8 *)(uVar3 + 0x38) = 0;
  *(undefined8 *)(uVar3 + 0x50) = 0;
  *(undefined8 *)(uVar3 + 0x40) = 0;
  puVar4 = (ulong *)FUN_00c1a2b4(param_1,0,0,0x178);
  *(ulong **)(uVar3 + 0x38) = puVar4;
  *(ulong **)(uVar3 + 0x30) = puVar4 + 0x27;
  *(undefined4 *)(uVar3 + 0x58) = 0x2f;
  puVar5 = puVar4 + 2;
  *puVar4 = uVar3 | 0xfffc800000000000;
  puVar1 = puVar4 + 0x2f;
  puVar4[1] = 0xffffffffffffffff;
  *(ulong **)(uVar3 + 0x28) = puVar5;
  *(ulong **)(uVar3 + 0x20) = puVar5;
  if (puVar5 < puVar1) {
    uVar8 = (long)puVar4 + (0x177 - (long)puVar5);
    uVar6 = uVar8 >> 3;
    uVar2 = (uVar6 - 1 >> 1) + 1;
    if (0x17 < uVar8) {
      uVar8 = 0;
      puVar4 = puVar5;
      do {
        puVar4[1] = 0xffffffffffffffff;
        *puVar4 = 0xffffffffffffffff;
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar8 < uVar2);
      puVar5 = puVar5 + uVar2 * 2;
      if (uVar6 + 1 == uVar2 * 2) {
        return uVar3;
      }
    }
    *puVar5 = 0xffffffffffffffff;
    if ((puVar5 + 1 < puVar1) && (puVar5[1] = 0xffffffffffffffff, puVar5 + 2 < puVar1)) {
      puVar5[2] = 0xffffffffffffffff;
    }
  }
  return uVar3;
}

