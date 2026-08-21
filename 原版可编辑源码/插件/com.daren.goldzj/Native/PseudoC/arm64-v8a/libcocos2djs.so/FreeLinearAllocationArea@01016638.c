
/* v8::internal::PagedSpace::FreeLinearAllocationArea() */

void __thiscall v8::internal::PagedSpace::FreeLinearAllocationArea(PagedSpace *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  PagedSpace *pPVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  
  pPVar19 = this + 0x68;
  uVar17 = *(ulong *)pPVar19;
  if (uVar17 != 0) {
    uVar18 = *(ulong *)(this + 0x70);
    lVar10 = *(long *)(this + 0x40);
    iVar16 = (int)uVar17;
    if ((uVar18 != uVar17) && (*(char *)(*(long *)(lVar10 + 0x828) + 0x5f) != '\0')) {
      uVar11 = uVar17 - 4 & 0xfffffffffffc0000;
      uVar9 = iVar16 - (int)uVar11;
      uVar4 = (uint)((int)uVar18 - (int)uVar11) >> 2;
      if (uVar9 >> 2 < uVar4) {
        lVar10 = *(long *)(uVar11 + 0x10);
        uVar4 = uVar4 - 1;
        uVar5 = uVar9 >> 7;
        uVar6 = uVar4 >> 5;
        iVar3 = 1 << (ulong)(uVar9 >> 2 & 0x1f);
        uVar4 = 1 << (ulong)(uVar4 & 0x1f);
        puVar1 = (uint *)(lVar10 + (ulong)uVar5 * 4);
        if (uVar5 == uVar6) {
          uVar4 = uVar4 - iVar3 | uVar4;
          while (uVar9 = *puVar1, (uVar9 & uVar4) != 0) {
            while (*puVar1 == uVar9) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar8) {
                *puVar1 = uVar9 & ~uVar4;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_010167b0;
            }
            ClearExclusiveLocal();
          }
        }
        else {
          while (uVar9 = *puVar1, (uVar9 & -iVar3) != 0) {
            while (*puVar1 == uVar9) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar8) {
                *puVar1 = uVar9 & iVar3 - 1U;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01016740;
            }
            ClearExclusiveLocal();
          }
LAB_01016740:
          if (uVar5 + 1 < uVar6) {
            uVar13 = (ulong)(uVar5 + 1) - 1;
            puVar15 = (undefined4 *)(lVar10 + uVar13 * 4);
            lVar14 = ~uVar13 + (ulong)uVar6;
            do {
              puVar15 = puVar15 + 1;
              *puVar15 = 0;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          uVar4 = uVar4 - 1 | uVar4;
          puVar1 = (uint *)(lVar10 + (ulong)uVar6 * 4);
          while (uVar9 = *puVar1, (uVar9 & uVar4) != 0) {
            while (*puVar1 == uVar9) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar8) {
                *puVar1 = uVar9 & ~uVar4;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_010167b0;
            }
            ClearExclusiveLocal();
          }
        }
LAB_010167b0:
        DataMemoryBarrier(2,3);
      }
      *(long *)(uVar11 + 0x68) =
           *(long *)(uVar11 + 0x68) + ((long)-((ulong)(uint)((int)uVar18 - iVar16) << 0x20) >> 0x20)
      ;
      lVar10 = *(long *)(this + 0x40);
    }
    if ((*(char *)(lVar10 + 0x1a0) == '\0') && (uVar11 = *(ulong *)(this + 0x78), uVar11 != 0)) {
      if (uVar17 < uVar11) {
        *(ulong *)(this + 0x78) = uVar17;
        uVar11 = uVar17;
      }
      if ((this[0x38] == (PagedSpace)0x0) && (*(long *)(this + 8) != *(long *)(this + 0x10))) {
        *(undefined1 *)(lVar10 + 0x1a0) = 1;
        Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),0,0,1,1);
        puVar2 = *(undefined8 **)(this + 0x10);
        if (*(undefined8 **)(this + 8) != puVar2) {
          puVar20 = *(undefined8 **)(this + 8);
          do {
            puVar21 = puVar20 + 1;
            AllocationObserver::AllocationStep((int)*puVar20,(ulong)(uint)(iVar16 - (int)uVar11),0);
            puVar20 = puVar21;
          } while (puVar2 != puVar21);
        }
        *(undefined1 *)(*(long *)(this + 0x40) + 0x1a0) = 0;
      }
      *(undefined8 *)(this + 0x78) = 0;
    }
    lVar10 = *(long *)pPVar19;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U & 0xfffffffffffc0000;
      lVar10 = lVar10 - uVar11;
      plVar12 = (long *)(uVar11 | 0x98);
      do {
        while( true ) {
          if (lVar10 <= *plVar12) goto LAB_0101689c;
          if (*plVar12 == *plVar12) break;
          ClearExclusiveLocal();
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar8) {
          *plVar12 = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
LAB_0101689c:
    *(undefined8 *)pPVar19 = 0;
    *(undefined8 *)(this + 0x70) = 0;
    if (*(int *)(this + 0x48) == 3) {
      Heap::UnprotectAndRegisterMemoryChunk
                (*(Heap **)(this + 0x40),(MemoryChunk *)(uVar17 & 0xfffffffffffc0000));
    }
    uVar18 = uVar18 - uVar17;
    if (uVar18 != 0) {
      Heap::CreateFillerObjectAt(*(Heap **)(this + 0x40),uVar17,uVar18 & 0xffffffff,1,1);
      (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60),uVar17,uVar18,0);
      *(ulong *)(this + 0xb8) = *(long *)(this + 0xb8) - uVar18;
    }
  }
  return;
}

