
/* v8::internal::FreeListLegacy::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

ulong v8::internal::FreeListLegacy::Allocate(FreeList *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 < 0x7d) {
    uVar7 = 2;
    uVar8 = uVar7;
LAB_0101ae44:
    do {
      iVar2 = (int)uVar8;
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + uVar7 * 8);
      if (lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulong *)(lVar3 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar6 + 3) << 0x20) >> 0x21) < param_2) {
          uVar6 = 0;
          *param_3 = 0;
          iVar5 = *(int *)(lVar3 + 8);
        }
        else {
          *(ulong *)(lVar3 + 8) = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7);
          uVar1 = *(uint *)(uVar6 + 3);
          *param_3 = (long)((ulong)uVar1 << 0x20) >> 0x21;
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) - ((int)uVar1 >> 1);
          if ((int)uVar6 != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
          }
          iVar5 = *(int *)(lVar3 + 8);
        }
        if (iVar5 == 0) {
          (**(code **)(*(long *)param_1 + 0x40))(param_1);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 < 5) && ((int)uVar6 == 0));
    if ((int)uVar6 == 0) goto LAB_0101af88;
  }
  else {
    if (param_2 < 0x3fd) {
      uVar7 = 3;
      uVar8 = uVar7;
      goto LAB_0101ae44;
    }
    if (param_2 < 0x1ffd) {
      uVar7 = 4;
      uVar8 = uVar7;
      goto LAB_0101ae44;
    }
    iVar2 = 5;
LAB_0101af88:
    uVar6 = FreeList::SearchForNodeInList(param_1,5,param_2,param_3);
  }
  if ((iVar2 != 5) && ((int)uVar6 == 0)) {
    iVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1,param_2);
    if (iVar2 != 0) goto LAB_0101af14;
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(lVar4 + 8);
    if (lVar3 != 0) {
      uVar6 = *(ulong *)(lVar3 + 8);
      if ((ulong)((long)((ulong)*(uint *)(uVar6 + 3) << 0x20) >> 0x21) < param_2) {
        uVar6 = 0;
        *param_3 = 0;
        if (*(int *)(lVar3 + 8) != 0) goto LAB_0101af14;
LAB_0101b05c:
        (**(code **)(*(long *)param_1 + 0x40))(param_1);
        iVar5 = (int)uVar6;
      }
      else {
        *(ulong *)(lVar3 + 8) = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7);
        uVar1 = *(uint *)(uVar6 + 3);
        *param_3 = (long)((ulong)uVar1 << 0x20) >> 0x21;
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) - ((int)uVar1 >> 1);
        if ((int)uVar6 != 0) {
          *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
        }
        if (*(int *)(lVar3 + 8) == 0) goto LAB_0101b05c;
LAB_0101af14:
        iVar5 = (int)uVar6;
      }
      if (iVar5 != 0) goto LAB_0101b070;
      lVar4 = *(long *)(param_1 + 0x20);
    }
    lVar3 = *(long *)(lVar4 + (long)iVar2 * 8);
    if (lVar3 == 0) {
      return 0;
    }
    uVar6 = *(ulong *)(lVar3 + 8);
    if ((ulong)((long)((ulong)*(uint *)(uVar6 + 3) << 0x20) >> 0x21) < param_2) {
      uVar6 = 0;
      *param_3 = 0;
      iVar2 = *(int *)(lVar3 + 8);
    }
    else {
      *(ulong *)(lVar3 + 8) = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7);
      uVar1 = *(uint *)(uVar6 + 3);
      *param_3 = (long)((ulong)uVar1 << 0x20) >> 0x21;
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) - ((int)uVar1 >> 1);
      if ((int)uVar6 != 0) {
        *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
      }
      iVar2 = *(int *)(lVar3 + 8);
    }
    if (iVar2 == 0) {
      (**(code **)(*(long *)param_1 + 0x40))(param_1);
      iVar2 = (int)uVar6;
      goto joined_r0x0101b00c;
    }
  }
LAB_0101b070:
  iVar2 = (int)uVar6;
joined_r0x0101b00c:
  if (iVar2 != 0) {
    *(ulong *)((uVar6 & 0xfffffffffffc0000) + 0xc0) =
         *(long *)((uVar6 & 0xfffffffffffc0000) + 0xc0) + *param_3;
  }
  return uVar6;
}

