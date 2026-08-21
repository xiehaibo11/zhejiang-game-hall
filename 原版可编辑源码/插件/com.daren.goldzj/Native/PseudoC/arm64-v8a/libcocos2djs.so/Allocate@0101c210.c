
/* v8::internal::FreeListMap::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

ulong v8::internal::FreeListMap::Allocate(long *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)param_1[4];
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 8);
    if ((ulong)((long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21) < param_2) {
      uVar4 = 0;
      *param_3 = 0;
      iVar1 = *(int *)(lVar3 + 8);
    }
    else {
      *(ulong *)(lVar3 + 8) = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
      uVar2 = *(uint *)(uVar4 + 3);
      *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) - ((int)uVar2 >> 1);
      if ((int)uVar4 != 0) {
        param_1[5] = param_1[5] - *param_3;
      }
      iVar1 = *(int *)(lVar3 + 8);
    }
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x40))(param_1,lVar3);
    }
    if ((int)uVar4 != 0) {
      *(long *)((uVar4 & 0xfffffffffffc0000) + 0xc0) =
           *(long *)((uVar4 & 0xfffffffffffc0000) + 0xc0) + *param_3;
    }
  }
  return uVar4;
}

