
ulong FUN_010a9430(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
  
  uVar4 = (ulong)((*(int *)(param_4 + 3) >> 1) - 2);
  if (param_5 < uVar4) {
    uVar2 = *(uint *)(param_4 + (long)((int)param_5 * 4 + 8) + 7);
    if (((uVar2 & 1) == 0) || (uVar5 = (uint)*(undefined8 *)(param_2 + 0xa8), uVar2 != uVar5)) {
      return param_5;
    }
  }
  else {
    uVar5 = (uint)*(undefined8 *)(param_2 + 0xa8);
  }
  uVar6 = *(ulong *)(*(long *)(param_2 + 0x490) + 7);
  uVar7 = param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 + 0xb);
  uVar6 = (uVar6 ^ param_5 & 0xffffffff ^ 0xffffffffffffffff) +
          (uVar6 ^ param_5 & 0xffffffff) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uVar3 = (*(int *)(uVar7 + 0xf) >> 1) - 1;
  uVar6 = (ulong)(uVar3 & ((uint)(uVar6 >> 0x16) ^ (uint)uVar6) & 0x3fffffff);
  lVar1 = uVar7 + 7;
  uVar2 = *(uint *)(((long)(uVar6 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
  if (uVar2 != *(uint *)(param_2 + 0xa0)) {
    iVar8 = 1;
    do {
      if (uVar2 != uVar5) {
        if ((uVar2 & 1) == 0) {
          dVar9 = (double)((int)uVar2 >> 1);
        }
        else {
          dVar9 = *(double *)((param_4 & 0xffffffff00000000 | (ulong)uVar2) + 3);
        }
        if ((int)param_5 == (int)dVar9) {
          return uVar6 + uVar4;
        }
      }
      uVar6 = (ulong)((int)uVar6 + iVar8 & uVar3);
      uVar2 = *(uint *)(((long)(uVar6 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
      iVar8 = iVar8 + 1;
    } while (uVar2 != *(uint *)(param_2 + 0xa0));
  }
  return 0xffffffffffffffff;
}

