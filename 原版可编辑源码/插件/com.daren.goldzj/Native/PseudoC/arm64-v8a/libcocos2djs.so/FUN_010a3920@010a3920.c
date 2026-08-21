
ulong FUN_010a3920(void)

{
  uint uVar1;
  uint uVar2;
  long extraout_x1;
  ulong in_x3;
  uint in_w4;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  FUN_010a4224();
  FUN_010a4238();
  uVar3 = *(ulong *)(*(long *)(extraout_x1 + 0x490) + 7);
  uVar3 = (uVar3 ^ (ulong)in_w4 ^ 0xffffffffffffffff) + (uVar3 ^ in_w4) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uVar2 = (*(int *)(in_x3 + 0xf) >> 1) - 1;
  uVar3 = (ulong)(uVar2 & ((uint)(uVar3 >> 0x16) ^ (uint)uVar3) & 0x3fffffff);
  uVar1 = *(uint *)(((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20) + in_x3 + 7);
  if (uVar1 != *(uint *)(extraout_x1 + 0xa0)) {
    iVar4 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(extraout_x1 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar5 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar5 = *(double *)((in_x3 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar5 == in_w4) {
          return uVar3;
        }
      }
      uVar3 = (ulong)((int)uVar3 + iVar4 & uVar2);
      uVar1 = *(uint *)(((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20) + in_x3 + 7);
      iVar4 = iVar4 + 1;
    } while (uVar1 != *(uint *)(extraout_x1 + 0xa0));
  }
  return 0xffffffffffffffff;
}

