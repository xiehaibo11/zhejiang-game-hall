
long FUN_00c1c648(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  undefined8 local_8;
  
  dVar3 = (double)param_3;
  local_8._4_4_ = (uint)((ulong)dVar3 >> 0x20);
  local_8._0_4_ = SUB84(dVar3,0);
  uVar1 = (local_8._4_4_ << 1 ^ (uint)local_8) -
          ((local_8._4_4_ & 0x7fffffff) >> 0x11 | local_8._4_4_ << 0xf);
  lVar2 = (ulong)((uVar1 ^ ((local_8._4_4_ & 0x7fffffff) >> 0xc | local_8._4_4_ << 0x14)) -
                  (uVar1 >> 0x13 | uVar1 * 0x2000) & *(uint *)(param_2 + 0x34)) * 0x18 +
          *(long *)(param_2 + 0x28);
  while ((0xfffffff1 < (uint)((long)*(double *)(lVar2 + 8) >> 0x2f) ||
         (dVar3 != *(double *)(lVar2 + 8)))) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      local_8 = dVar3;
      lVar2 = FUN_00c1c458(param_1,param_2,&local_8);
      return lVar2;
    }
  }
  return lVar2;
}

