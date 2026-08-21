
uint FUN_00c00da0(long param_1,uint param_2,ulong param_3,ulong param_4,ulong param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar2 = (uint)param_3;
  if (uVar2 < 0x3b) {
    uVar6 = 1;
    if (uVar2 < 0x1d) {
      uVar5 = 0;
      if (uVar2 == 0) {
        return param_2;
      }
      goto LAB_00c00e4c;
    }
  }
  else if (((uint)(param_5 >> 4) & 3) == 2) {
    uVar6 = 1;
  }
  else {
    uVar6 = param_2 - (((uint)(param_5 >> 0x18) & 0xff) + 0x10 >> 3);
  }
  uVar5 = 0;
  do {
    iVar3 = (int)param_4;
    for (uVar2 = uVar5; uVar2 <= param_2; uVar2 = uVar2 + 1) {
      uVar4 = param_4 & 0xffffffff | (ulong)*(uint *)(param_1 + (ulong)uVar2 * 4) << 0x1d;
      param_4 = uVar4 / 1000000000;
      iVar3 = (int)param_4;
      *(int *)(param_1 + (ulong)uVar2 * 4) = (int)uVar4 + iVar3 * -1000000000;
    }
    if (iVar3 != 0) {
      param_2 = param_2 + 1;
      bVar1 = uVar5 == uVar6;
      uVar6 = uVar6 + 1;
      *(int *)(param_1 + (ulong)param_2 * 4) = iVar3;
      if (bVar1) {
        uVar5 = uVar6;
      }
    }
    uVar2 = (int)param_3 - 0x1d;
    param_3 = (ulong)uVar2;
    param_4 = 0;
  } while (0x1c < uVar2);
  if (uVar2 == 0) {
    return param_2;
  }
  if (param_2 < uVar5) {
    return param_2;
  }
LAB_00c00e4c:
  do {
    uVar7 = (ulong)*(uint *)(param_1 + (ulong)uVar5 * 4) << (param_3 & 0x3f) | param_4 & 0xffffffff;
    uVar4 = uVar7 / 1000000000;
    param_4 = uVar4 & 0xffffffff;
    iVar3 = (int)uVar4;
    *(int *)(param_1 + (ulong)uVar5 * 4) = (int)uVar7 + iVar3 * -1000000000;
    uVar5 = uVar5 + 1;
  } while (uVar5 <= param_2);
  if (iVar3 != 0) {
    param_2 = param_2 + 1;
    *(int *)(param_1 + (ulong)param_2 * 4) = iVar3;
  }
  return param_2;
}

