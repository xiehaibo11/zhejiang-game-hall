
int FUN_00bfb760(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    uVar1 = uVar2;
  }
  if (uVar1 == 0) {
LAB_00bfb7b0:
    return uVar2 - uVar3;
  }
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = *(uint *)(param_2 + 0x18);
  if (uVar8 == uVar7) {
    do {
      uVar5 = (int)uVar6 + 4;
      uVar6 = (ulong)uVar5;
      if (uVar1 <= uVar5) goto LAB_00bfb7b0;
      uVar8 = *(uint *)(param_1 + uVar6 + 0x18);
      uVar7 = *(uint *)(param_2 + uVar6 + 0x18);
    } while (uVar8 == uVar7);
  }
  uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  if (-4 < (int)(uVar5 - uVar1)) {
    uVar1 = (uVar5 - uVar1) * 8 + 0x20;
    uVar8 = uVar8 >> (ulong)(uVar1 & 0x1f);
    uVar7 = uVar7 >> (ulong)(uVar1 & 0x1f);
    if (uVar8 == uVar7) goto LAB_00bfb7b0;
  }
  iVar4 = -1;
  if (uVar7 <= uVar8) {
    iVar4 = 1;
  }
  return iVar4;
}

