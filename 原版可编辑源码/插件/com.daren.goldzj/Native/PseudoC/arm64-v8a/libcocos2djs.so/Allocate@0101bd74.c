
/* v8::internal::FreeListManyCachedFastPath::Allocate(unsigned long, unsigned long*,
   v8::internal::AllocationOrigin) */

ulong v8::internal::FreeListManyCachedFastPath::Allocate
                (FreeList *param_1,ulong param_2,ulong *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar4 = (ulong)uVar2;
  lVar5 = (long)(int)uVar2;
  if ((param_2 < *(uint *)(FreeListMany::categories_min + (long)(int)uVar2 * 4)) &&
     (0x12 < (int)uVar2)) {
    lVar6 = 0x1200000000;
    uVar9 = 0x12;
    do {
      if (param_2 + 0x780 <= (ulong)*(uint *)(FreeListMany::categories_min + uVar9 * 4)) {
        lVar5 = lVar6 >> 0x20;
        goto LAB_0101bde8;
      }
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 0x100000000;
    } while (uVar4 != uVar9);
  }
  uVar9 = (ulong)uVar2;
LAB_0101bde8:
  uVar7 = *(uint *)(param_1 + lVar5 * 4 + 0x30);
  if ((int)uVar2 < (int)uVar7) {
    uVar8 = 0;
  }
  else {
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar7 * 8);
      if (lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(lVar5 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) < param_2) {
          uVar8 = 0;
          *param_3 = 0;
          iVar3 = *(int *)(lVar5 + 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7);
          uVar2 = *(uint *)(uVar8 + 3);
          *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) - ((int)uVar2 >> 1);
          if ((int)uVar8 != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
          }
          iVar3 = *(int *)(lVar5 + 8);
        }
        if (iVar3 == 0) {
          (**(code **)(*(long *)param_1 + 0x40))(param_1);
        }
        if ((int)uVar8 != 0) break;
        uVar4 = (ulong)*(uint *)(param_1 + 0xc);
      }
      uVar7 = *(uint *)(param_1 + (long)(int)uVar7 * 4 + 0x34);
    } while ((int)uVar7 <= (int)uVar4);
  }
  if ((param_2 < 0x81) && ((int)uVar8 == 0)) {
    for (uVar7 = *(uint *)(param_1 + 0x6c); (int)uVar7 < 0x12;
        uVar7 = *(uint *)(param_1 + (long)(int)uVar7 * 4 + 0x34)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar7 * 8);
      if (lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(lVar5 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) < param_2) {
          uVar8 = 0;
          *param_3 = 0;
          iVar3 = *(int *)(lVar5 + 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7);
          uVar2 = *(uint *)(uVar8 + 3);
          *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) - ((int)uVar2 >> 1);
          if ((int)uVar8 != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
          }
          iVar3 = *(int *)(lVar5 + 8);
        }
        if (iVar3 == 0) {
          (**(code **)(*(long *)param_1 + 0x40))(param_1);
        }
        if ((int)uVar8 != 0) break;
      }
    }
  }
  iVar3 = (int)uVar8;
  if (iVar3 == 0) {
    uVar7 = *(uint *)(param_1 + 0xc);
    uVar8 = FreeList::SearchForNodeInList(param_1,uVar7,param_2,param_3);
    iVar3 = (int)uVar8;
  }
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1,param_2);
    uVar7 = *(uint *)(param_1 + (long)iVar3 * 4 + 0x30);
    if ((int)uVar9 <= (int)uVar7) {
      return uVar8;
    }
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar7 * 8);
      if (lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(lVar5 + 8);
        if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) < param_2) {
          uVar8 = 0;
          *param_3 = 0;
          iVar3 = *(int *)(lVar5 + 8);
        }
        else {
          *(ulong *)(lVar5 + 8) = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7);
          uVar2 = *(uint *)(uVar8 + 3);
          *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) - ((int)uVar2 >> 1);
          if ((int)uVar8 != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *param_3;
          }
          iVar3 = *(int *)(lVar5 + 8);
        }
        if (iVar3 == 0) {
          (**(code **)(*(long *)param_1 + 0x40))(param_1);
        }
        if ((int)uVar8 != 0) goto LAB_0101c08c;
      }
      uVar7 = *(uint *)(param_1 + (long)(int)uVar7 * 4 + 0x34);
    } while ((int)uVar7 < (int)uVar9);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
  }
LAB_0101c08c:
  if ((-1 < (int)uVar7) && (*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar7 * 8) == 0)) {
    uVar2 = uVar7;
    do {
      if (*(uint *)(param_1 + (ulong)uVar2 * 4 + 0x30) != uVar7) break;
      *(uint *)(param_1 + (ulong)uVar2 * 4 + 0x30) =
           *(uint *)(param_1 + (long)(int)uVar7 * 4 + 0x34);
      bVar1 = 0 < (int)uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  *(ulong *)((uVar8 & 0xfffffffffffc0000) + 0xc0) =
       *(long *)((uVar8 & 0xfffffffffffc0000) + 0xc0) + *param_3;
  return uVar8;
}

