
bool FUN_010a1600(undefined8 param_1,ulong param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  double dVar6;
  
  param_2 = param_2 & 0xffffffff00000000;
  uVar4 = *(ulong *)(*(long *)(param_2 + 0x490) + 7);
  uVar3 = (*(int *)(param_4 + 0xf) >> 1) - 1;
  uVar4 = (uVar4 ^ (ulong)param_3 ^ 0xffffffffffffffff) + (uVar4 ^ param_3) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uVar4 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uVar4 = (ulong)(uVar3 & ((uint)(uVar4 >> 0x16) ^ (uint)uVar4) & 0x3fffffff);
  lVar1 = param_4 + 7;
  uVar2 = *(uint *)(((long)(uVar4 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
  if (uVar2 != *(uint *)(param_2 + 0xa0)) {
    iVar5 = 1;
    do {
      if (uVar2 != (uint)*(undefined8 *)(param_2 + 0xa8)) {
        if ((uVar2 & 1) == 0) {
          dVar6 = (double)((int)uVar2 >> 1);
        }
        else {
          dVar6 = *(double *)((param_4 & 0xffffffff00000000 | (ulong)uVar2) + 3);
        }
        if ((int)dVar6 == param_3) {
          if ((param_5 != 0) &&
             ((param_5 & *(uint *)(((long)(uVar4 * 0xc00000000 + 0x1800000000) >> 0x20) + lVar1) >>
                         4 & 7) != 0)) {
            uVar4 = 0xffffffffffffffff;
          }
          goto LAB_010a16dc;
        }
      }
      uVar4 = (ulong)((int)uVar4 + iVar5 & uVar3);
      uVar2 = *(uint *)(((long)(uVar4 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
      iVar5 = iVar5 + 1;
    } while (uVar2 != *(uint *)(param_2 + 0xa0));
  }
  uVar4 = 0xffffffffffffffff;
LAB_010a16dc:
  return uVar4 != 0xffffffffffffffff;
}

