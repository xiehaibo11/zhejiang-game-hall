
/* v8::internal::MarkCompactCollector::CompactTransitionArray(v8::internal::Map,
   v8::internal::TransitionArray, v8::internal::DescriptorArray) */

byte __thiscall
v8::internal::MarkCompactCollector::CompactTransitionArray
          (MarkCompactCollector *this,undefined8 param_2,ulong param_3,int param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  MemoryChunk *pMVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  
  if (3 < *(int *)(param_3 + 3)) {
    uVar3 = *(int *)(param_3 + 0xb) >> 1;
    if (*(int *)(param_3 + 0xb) < 2) {
      uVar14 = 0;
      bVar4 = 0;
    }
    else {
      pMVar7 = (MemoryChunk *)(param_3 & 0xfffffffffffc0000);
      uVar15 = 0;
      uVar14 = 0;
      uVar11 = param_3 & 0xffffffff00000000;
      lVar1 = param_3 + 7;
      iVar13 = 0xf;
      bVar4 = 0;
      do {
        uVar8 = (ulong)*(uint *)(lVar1 + (iVar13 + -3));
        uVar9 = uVar11 | uVar8 & 0xfffffffd;
        uVar8 = uVar11 | uVar8 & 0xfffc0000;
        uVar10 = uVar9 - uVar8;
        if ((*(uint *)(*(long *)(uVar8 + 0x10) + (uVar10 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar10 >> 2) & 0x1f) & 1) == 0) {
          if (param_4 != 0) {
            bVar4 = bVar4 | *(int *)(uVar9 + 0x17) == param_4;
          }
        }
        else {
          if (uVar15 != uVar14) {
            uVar6 = *(uint *)(param_3 + (long)iVar13);
            puVar2 = (uint *)(((long)(int)(uVar14 * 8 + 8) | 7U) + param_3);
            uVar8 = uVar11 | (ulong)uVar6 & 0xfffffffffffc0000;
            *puVar2 = uVar6;
            if ((uVar6 == 3) || ((uVar6 & 1) == 0)) {
LAB_00fc59e0:
              uVar6 = (uint)*(undefined8 *)(uVar8 + 8);
            }
            else {
              uVar10 = *(ulong *)(uVar8 | 8);
              uVar9 = uVar11 | (ulong)uVar6 & 0xfffffffffffffffd;
              if (((uint)uVar10 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(param_3,puVar2,uVar9);
                uVar10 = *(ulong *)(uVar8 | 8);
              }
              if (((uVar10 & 0x18) == 0) || ((*(byte *)((ulong)pMVar7 | 8) & 0x18) != 0))
              goto LAB_00fc59e0;
              Heap_GenerationalBarrierSlow(param_3,puVar2,uVar9);
              uVar6 = (uint)*(undefined8 *)(uVar8 + 8);
            }
            if (((uVar6 >> 6 & 1) != 0) &&
               ((((uint)*(ulong *)(pMVar7 + 8) >> 0xf & 1) != 0 ||
                ((*(ulong *)(pMVar7 + 8) & 0x58) == 0)))) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        (pMVar7,(ulong)puVar2);
            }
            uVar6 = *(uint *)((iVar13 + -3) + lVar1);
            puVar2 = (uint *)(lVar1 + (int)(uVar14 * 8 + 0xc));
            *puVar2 = uVar6;
            uVar8 = uVar11 | (ulong)uVar6 & 0xfffffffffffc0000;
            if ((uVar6 != 3) && ((uVar6 & 1) != 0)) {
              puVar12 = (ulong *)(uVar8 | 8);
              uVar9 = *puVar12;
              uVar10 = uVar11 | (ulong)uVar6 & 0xfffffffffffffffd;
              if (((uint)uVar9 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(param_3,puVar2,uVar10);
                uVar9 = *puVar12;
              }
              if (((uVar9 & 0x18) != 0) && ((*(byte *)((ulong)pMVar7 | 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(param_3,puVar2,uVar10);
              }
            }
            if ((((uint)*(undefined8 *)(uVar8 + 8) >> 6 & 1) != 0) &&
               ((((uint)*(ulong *)(pMVar7 + 8) >> 0xf & 1) != 0 ||
                ((*(ulong *)(pMVar7 + 8) & 0x58) == 0)))) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        (pMVar7,(ulong)puVar2);
            }
          }
          uVar14 = uVar14 + 1;
        }
        uVar15 = uVar15 + 1;
        iVar13 = iVar13 + 8;
      } while (uVar3 != uVar15);
    }
    if (uVar14 != uVar3) {
      if ((int)*(uint *)(param_3 + 3) < 6) {
        iVar13 = 0;
      }
      else {
        uVar3 = *(uint *)(param_3 + 3) >> 1;
        iVar5 = uVar3 - 2;
        iVar13 = uVar3 - 1;
        if (-1 < iVar5) {
          iVar13 = iVar5;
        }
        iVar13 = iVar13 >> 1;
      }
      if ((int)(iVar13 - uVar14) < 1) {
        return bVar4;
      }
      Heap::RightTrimWeakFixedArray(*(undefined8 *)(this + 8),param_3,(iVar13 - uVar14) * 2);
      *(uint *)(param_3 + 0xb) = uVar14 << 1;
      return bVar4;
    }
  }
  return 0;
}

