
ulong FUN_010a9418(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long extraout_x1;
  ulong in_x3;
  ulong in_x4;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  double dVar9;
  
  FUN_010a9cd4();
  FUN_010a9ce8();
  uVar4 = (ulong)((*(int *)(in_x3 + 3) >> 1) - 2);
  if (in_x4 < uVar4) {
    uVar2 = *(uint *)(in_x3 + (long)((int)in_x4 * 4 + 8) + 7);
    if (((uVar2 & 1) == 0) || (uVar5 = (uint)*(undefined8 *)(extraout_x1 + 0xa8), uVar2 != uVar5)) {
      return in_x4;
    }
  }
  else {
    uVar5 = (uint)*(undefined8 *)(extraout_x1 + 0xa8);
  }
  uVar6 = *(ulong *)(*(long *)(extraout_x1 + 0x490) + 7);
  uVar7 = in_x3 & 0xffffffff00000000 | (ulong)*(uint *)(in_x3 + 0xb);
  uVar6 = (uVar6 ^ in_x4 & 0xffffffff ^ 0xffffffffffffffff) + (uVar6 ^ in_x4 & 0xffffffff) * 0x40000
  ;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uVar3 = (*(int *)(uVar7 + 0xf) >> 1) - 1;
  uVar6 = (ulong)(uVar3 & ((uint)(uVar6 >> 0x16) ^ (uint)uVar6) & 0x3fffffff);
  lVar1 = uVar7 + 7;
  uVar2 = *(uint *)(((long)(uVar6 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
  if (uVar2 != *(uint *)(extraout_x1 + 0xa0)) {
    iVar8 = 1;
    do {
      if (uVar2 != uVar5) {
        if ((uVar2 & 1) == 0) {
          dVar9 = (double)((int)uVar2 >> 1);
        }
        else {
          dVar9 = *(double *)((in_x3 & 0xffffffff00000000 | (ulong)uVar2) + 3);
        }
        if ((int)in_x4 == (int)dVar9) {
          return uVar6 + uVar4;
        }
      }
      uVar6 = (ulong)((int)uVar6 + iVar8 & uVar3);
      uVar2 = *(uint *)(((long)(uVar6 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
      iVar8 = iVar8 + 1;
    } while (uVar2 != *(uint *)(extraout_x1 + 0xa0));
  }
  return 0xffffffffffffffff;
}

