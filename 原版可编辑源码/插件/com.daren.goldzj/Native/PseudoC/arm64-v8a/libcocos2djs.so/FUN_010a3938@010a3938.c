
ulong FUN_010a3938(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  
  uVar3 = *(ulong *)(*(long *)(param_2 + 0x490) + 7);
  uVar3 = (uVar3 ^ (ulong)param_5 ^ 0xffffffffffffffff) + (uVar3 ^ param_5) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uVar2 = (*(int *)(param_4 + 0xf) >> 1) - 1;
  uVar3 = (ulong)(uVar2 & ((uint)(uVar3 >> 0x16) ^ (uint)uVar3) & 0x3fffffff);
  uVar1 = *(uint *)(((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20) + param_4 + 7);
  if (uVar1 != *(uint *)(param_2 + 0xa0)) {
    iVar4 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(param_2 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar5 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar5 = *(double *)((param_4 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar5 == param_5) {
          return uVar3;
        }
      }
      uVar3 = (ulong)((int)uVar3 + iVar4 & uVar2);
      uVar1 = *(uint *)(((long)(uVar3 * 0xc00000000 + 0x1000000000) >> 0x20) + param_4 + 7);
      iVar4 = iVar4 + 1;
    } while (uVar1 != *(uint *)(param_2 + 0xa0));
  }
  return 0xffffffffffffffff;
}

