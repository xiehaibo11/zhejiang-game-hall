
void FUN_00c1bbc0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)param_2;
  uVar3 = (uint)((ulong)dVar4 >> 0x20);
  uVar1 = (uVar3 << 1 ^ SUB84(dVar4,0)) - ((uVar3 & 0x7fffffff) >> 0x11 | uVar3 << 0xf);
  lVar2 = (ulong)((uVar1 ^ ((uVar3 & 0x7fffffff) >> 0xc | uVar3 << 0x14)) -
                  (uVar1 >> 0x13 | uVar1 * 0x2000) & *(uint *)(param_1 + 0x34)) * 0x18 +
          *(long *)(param_1 + 0x28);
  while ((0xfffffff1 < (uint)((long)*(double *)(lVar2 + 8) >> 0x2f) ||
         (dVar4 != *(double *)(lVar2 + 8)))) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      return;
    }
  }
  return;
}

