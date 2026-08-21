
/* v8::internal::FreeListFastAlloc::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

ulong v8::internal::FreeListFastAlloc::Allocate(long *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  iVar3 = (**(code **)(*param_1 + 0x48))();
  if (iVar3 < 3) {
    lVar6 = 2;
    do {
      lVar4 = *(long *)(param_1[4] + lVar6 * 8);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(ulong *)(lVar4 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21) < param_2) {
          uVar5 = 0;
          *param_3 = 0;
          iVar1 = *(int *)(lVar4 + 8);
        }
        else {
          *(ulong *)(lVar4 + 8) = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7);
          uVar2 = *(uint *)(uVar5 + 3);
          *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) - ((int)uVar2 >> 1);
          if ((int)uVar5 != 0) {
            param_1[5] = param_1[5] - *param_3;
          }
          iVar1 = *(int *)(lVar4 + 8);
        }
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x40))(param_1);
        }
      }
    } while ((iVar3 < lVar6) && (lVar6 = lVar6 + -1, (int)uVar5 == 0));
    if ((int)uVar5 != 0) {
      *(long *)((uVar5 & 0xfffffffffffc0000) + 0xc0) =
           *(long *)((uVar5 & 0xfffffffffffc0000) + 0xc0) + *param_3;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

