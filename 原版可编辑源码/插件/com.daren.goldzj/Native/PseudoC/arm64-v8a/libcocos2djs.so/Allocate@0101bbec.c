
/* v8::internal::FreeListManyCached::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

ulong v8::internal::FreeListManyCached::Allocate(FreeList *param_1,ulong param_2,ulong *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  iVar3 = (**(code **)(*(long *)param_1 + 0x48))();
  uVar6 = *(uint *)(param_1 + (long)iVar3 * 4 + 0x30);
  iVar3 = *(int *)(param_1 + 0xc);
  if ((int)uVar6 < iVar3) {
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 8);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(ulong *)(lVar5 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21) < param_2) {
          uVar4 = 0;
          *param_3 = 0;
          iVar3 = *(int *)(lVar5 + 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
          uVar2 = *(uint *)(uVar4 + 3);
          *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) - ((int)uVar2 >> 1);
          if ((int)uVar4 != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
          }
          iVar3 = *(int *)(lVar5 + 8);
        }
        if (iVar3 == 0) {
          (**(code **)(*(long *)param_1 + 0x40))(param_1);
        }
        if ((int)uVar4 != 0) break;
        iVar3 = *(int *)(param_1 + 0xc);
      }
      uVar6 = *(uint *)(param_1 + (long)(int)uVar6 * 4 + 0x34);
    } while ((int)uVar6 < iVar3);
    if ((int)uVar4 != 0) goto LAB_0101bd04;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar4 = FreeList::SearchForNodeInList(param_1,uVar6,param_2,param_3);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
LAB_0101bd04:
  if ((-1 < (int)uVar6) && (*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar6 * 8) == 0)) {
    uVar2 = uVar6;
    do {
      if (*(uint *)(param_1 + (ulong)uVar2 * 4 + 0x30) != uVar6) break;
      *(uint *)(param_1 + (ulong)uVar2 * 4 + 0x30) =
           *(uint *)(param_1 + (long)(int)uVar6 * 4 + 0x34);
      bVar1 = 0 < (int)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  *(ulong *)((uVar4 & 0xfffffffffffc0000) + 0xc0) =
       *(long *)((uVar4 & 0xfffffffffffc0000) + 0xc0) + *param_3;
  return uVar4;
}

