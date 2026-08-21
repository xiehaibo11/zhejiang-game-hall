
/* v8::internal::TransitionArray::CompactPrototypeTransitionArray(v8::internal::Isolate*,
   v8::internal::WeakFixedArray) */

bool v8::internal::TransitionArray::CompactPrototypeTransitionArray(long param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (1 < *(uint *)(param_2 + 3)) {
    uVar3 = *(int *)(param_2 + 7) >> 1;
    if (uVar3 != 0) {
      piVar2 = (int *)(param_2 + 7);
      if (*(int *)(param_2 + 7) < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        iVar12 = 4;
        uVar4 = 0;
        do {
          uVar10 = *(uint *)((long)piVar2 + (long)iVar12);
          uVar5 = uVar4 + 1;
          if (uVar10 != 3) {
            if (uVar4 != uVar9) {
              puVar1 = (uint *)((long)piVar2 + (long)(int)(uVar9 * 4 + 4));
              *puVar1 = uVar10;
              if ((uVar10 & 1) != 0) {
                uVar6 = param_2 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffc0000;
                uVar4 = *(ulong *)(uVar6 + 8);
                uVar7 = param_2 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd;
                if (((uint)uVar4 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(param_2,puVar1,uVar7);
                  uVar4 = *(ulong *)(uVar6 | 8);
                }
                if (((uVar4 & 0x18) != 0) &&
                   ((*(byte *)(param_2 & 0xfffffffffffc0000 | 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(param_2,puVar1,uVar7);
                }
              }
            }
            uVar9 = uVar9 + 1;
          }
          iVar12 = iVar12 + 4;
          uVar4 = uVar5;
        } while ((long)uVar5 < (long)(int)uVar3);
      }
      if ((int)uVar9 < (int)uVar3) {
        uVar4 = *(ulong *)(param_1 + 0xa0);
        iVar11 = uVar3 - uVar9;
        uVar10 = (uint)uVar4;
        iVar12 = uVar9 * 4;
        puVar8 = (ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
        do {
          iVar12 = iVar12 + 4;
          puVar1 = (uint *)((long)piVar2 + (long)iVar12);
          *puVar1 = uVar10;
          if ((uVar10 & uVar10 != 3) != 0) {
            uVar5 = *puVar8;
            if (((uint)uVar5 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(param_2,puVar1,uVar4 & 0xfffffffffffffffd);
              uVar5 = *puVar8;
            }
            if (((uVar5 & 0x18) != 0) && ((*(byte *)(param_2 & 0xfffffffffffc0000 | 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(param_2,puVar1,uVar4 & 0xfffffffffffffffd);
            }
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (uVar3 == uVar9) {
        return (int)uVar9 < (int)uVar3;
      }
      *piVar2 = uVar9 << 1;
      return (int)uVar9 < (int)uVar3;
    }
  }
  return false;
}

