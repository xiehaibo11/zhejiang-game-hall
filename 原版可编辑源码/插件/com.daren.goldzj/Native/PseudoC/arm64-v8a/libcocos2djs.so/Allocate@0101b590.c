
/* WARNING: Removing unreachable block (ram,0x0101b60c) */
/* v8::internal::FreeListMany::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

ulong v8::internal::FreeListMany::Allocate(FreeList *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  iVar2 = (**(code **)(*(long *)param_1 + 0x48))();
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar2 < iVar3) {
    lVar6 = (long)iVar2;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + lVar6 * 8);
      if (lVar4 == 0) {
        uVar5 = 0;
        iVar3 = *(int *)(param_1 + 0xc);
      }
      else {
        uVar5 = *(ulong *)(lVar4 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21) < param_2) {
          uVar5 = 0;
          *param_3 = 0;
          iVar3 = *(int *)(lVar4 + 8);
        }
        else {
          *(ulong *)(lVar4 + 8) = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 7);
          uVar1 = *(uint *)(uVar5 + 3);
          *param_3 = (long)((ulong)uVar1 << 0x20) >> 0x21;
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) - ((int)uVar1 >> 1);
          if ((int)uVar5 != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
          }
          iVar3 = *(int *)(lVar4 + 8);
        }
        if (iVar3 == 0) {
          (**(code **)(*(long *)param_1 + 0x40))(param_1);
        }
        iVar3 = *(int *)(param_1 + 0xc);
        if ((int)uVar5 != 0) break;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if ((int)uVar5 != 0) goto LAB_0101b69c;
  }
  uVar5 = FreeList::SearchForNodeInList(param_1,iVar3,param_2,param_3);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
LAB_0101b69c:
  *(ulong *)((uVar5 & 0xfffffffffffc0000) + 0xc0) =
       *(long *)((uVar5 & 0xfffffffffffc0000) + 0xc0) + *param_3;
  return uVar5;
}

