
/* v8::internal::PagedSpace::ShrinkImmortalImmovablePages() */

void __thiscall v8::internal::PagedSpace::ShrinkImmortalImmovablePages(PagedSpace *this)

{
  uint *puVar1;
  PagedSpace *pPVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  Page *this_00;
  int *piVar8;
  long lVar9;
  
  lVar5 = *(long *)(this + 0x68);
  if (lVar5 != 0) {
    uVar6 = lVar5 - 1U & 0xfffffffffffc0000;
    lVar5 = lVar5 - uVar6;
    plVar7 = (long *)(uVar6 | 0x98);
    do {
      while( true ) {
        if (lVar5 <= *plVar7) goto LAB_01016d08;
        if (*plVar7 == *plVar7) break;
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_01016d08:
  FreeLinearAllocationArea(this);
  lVar5 = *(long *)(this + 0x20);
  if (lVar5 != 0) {
    do {
      plVar7 = *(long **)(this + 0x60);
      if (0 < *(int *)(*(long *)(*(long *)(lVar5 + 0x58) + 0x60) + 8)) {
        lVar9 = 0;
        do {
          piVar8 = *(int **)(*(long *)(lVar5 + 0xf0) + lVar9 * 8);
          puVar1 = (uint *)(piVar8 + 1);
          (**(code **)(*plVar7 + 0x40))(plVar7,piVar8);
          if ((((*(long *)(piVar8 + 4) != 0) || (*(long *)(piVar8 + 6) != 0)) ||
              (*(int **)(plVar7[4] + (long)*piVar8 * 8) == piVar8)) && (piVar8[2] != 0)) {
            plVar7[5] = plVar7[5] - (ulong)*puVar1;
          }
          puVar1[0] = 0;
          puVar1[1] = 0;
          piVar8[3] = 0;
          piVar8[4] = 0;
          piVar8[7] = 0;
          piVar8[5] = 0;
          piVar8[6] = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(*(long *)(*(long *)(lVar5 + 0x58) + 0x60) + 8));
      }
      lVar5 = *(long *)(lVar5 + 0xe0);
    } while (lVar5 != 0);
    this_00 = *(Page **)(this + 0x20);
    if (this_00 != (Page *)0x0) {
      pPVar2 = this + 0xa8;
      do {
        lVar5 = Page::ShrinkToHighWaterMark(this_00);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pPVar2,0x10);
          if (bVar4) {
            *(long *)pPVar2 = *(long *)pPVar2 - lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(long *)(this + 0x50) = *(long *)(this + 0x50) - lVar5;
        this_00 = *(Page **)(this_00 + 0xe0);
      } while (this_00 != (Page *)0x0);
    }
  }
  return;
}

