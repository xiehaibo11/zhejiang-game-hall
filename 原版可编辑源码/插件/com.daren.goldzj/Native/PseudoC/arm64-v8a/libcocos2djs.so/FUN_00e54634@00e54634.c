
short FUN_00e54634(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  uVar1 = *param_2;
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  uVar5 = (*(uint *)(lVar6 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 0xc) & 0xff00ff) << 8;
  uVar2 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = (*(uint *)(lVar6 + 0x10) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 0x10) & 0xff00ff) << 8;
  uVar3 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = uVar2;
  if (uVar2 <= uVar1 + 1) {
    uVar5 = uVar1 + 1;
  }
  if (uVar5 - uVar2 < uVar3) {
    puVar7 = (undefined1 *)(lVar6 + (ulong)((uVar5 - uVar2) * 2) + 0x14);
    do {
      sVar4 = CONCAT11(*puVar7,puVar7[1]);
      if (sVar4 != 0) goto LAB_00e546a8;
      if (uVar5 == 0xffffffff) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 2;
    } while (uVar5 - uVar2 < uVar3);
  }
  sVar4 = 0;
LAB_00e546a8:
  *param_2 = uVar5;
  return sVar4;
}

