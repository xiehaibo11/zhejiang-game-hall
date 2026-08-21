
ulong FUN_010ae1c8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long extraout_x1;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  
  FUN_010ae9bc();
  uVar3 = (ulong)*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 7);
  if (param_5 < uVar3) {
    return param_5;
  }
  uVar4 = *(ulong *)(*(long *)(extraout_x1 + 0x490) + 7);
  uVar4 = (uVar4 ^ param_5 & 0xffffffff ^ 0xffffffffffffffff) +
          (uVar4 ^ param_5 & 0xffffffff) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uVar4 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uVar2 = (*(int *)(param_4 + 0xf) >> 1) - 1;
  uVar4 = (ulong)(uVar2 & ((uint)(uVar4 >> 0x16) ^ (uint)uVar4) & 0x3fffffff);
  uVar1 = *(uint *)(((long)(uVar4 * 0xc00000000 + 0x1000000000) >> 0x20) + param_4 + 7);
  if (uVar1 != *(uint *)(extraout_x1 + 0xa0)) {
    iVar5 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(extraout_x1 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar6 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar6 = *(double *)((param_4 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar6 == (int)param_5) {
          return uVar4 + uVar3;
        }
      }
      uVar4 = (ulong)((int)uVar4 + iVar5 & uVar2);
      uVar1 = *(uint *)(((long)(uVar4 * 0xc00000000 + 0x1000000000) >> 0x20) + param_4 + 7);
      iVar5 = iVar5 + 1;
    } while (uVar1 != *(uint *)(extraout_x1 + 0xa0));
  }
  return 0xffffffffffffffff;
}

