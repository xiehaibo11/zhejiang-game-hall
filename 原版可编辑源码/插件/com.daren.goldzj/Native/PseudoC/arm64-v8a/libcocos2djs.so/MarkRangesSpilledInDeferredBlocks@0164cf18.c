
/* v8::internal::compiler::LiveRangeMerger::MarkRangesSpilledInDeferredBlocks() */

void __thiscall
v8::internal::compiler::LiveRangeMerger::MarkRangesSpilledInDeferredBlocks(LiveRangeMerger *this)

{
  LiveRange *pLVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  LiveRange *pLVar13;
  Zone *this_00;
  LiveRange *pLVar14;
  int iVar15;
  
  lVar11 = *(long *)this;
  plVar4 = *(long **)(lVar11 + 0x88);
  plVar5 = *(long **)(lVar11 + 0x90);
  if (plVar4 == plVar5) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  pLVar14 = (LiveRange *)*plVar4;
  do {
    if ((((pLVar14 != (LiveRange *)0x0) && (*(long *)(pLVar14 + 0x10) != 0)) &&
        (*(long *)(pLVar14 + 0x98) != 0)) &&
       (((*(uint *)(pLVar14 + 4) & 0x60) != 0x20 &&
        (pLVar13 = pLVar14, (*(byte *)(*(long *)(pLVar14 + 0x98) + 4) >> 6 & 1) != 0)))) {
      do {
        if ((((byte)pLVar13[4] & 1) != 0) ||
           (lVar7 = LiveRange::NextSlotPosition(pLVar13,**(undefined4 **)(pLVar13 + 0x10)),
           lVar7 != 0)) goto LAB_0164cf5c;
        pLVar1 = pLVar13 + 0x28;
        pLVar13 = *(LiveRange **)pLVar1;
      } while (*(LiveRange **)pLVar1 != (LiveRange *)0x0);
      plVar12 = *(long **)(lVar11 + 0x10);
      this_00 = (Zone *)**(undefined8 **)this;
      lVar7 = *plVar12;
      lVar6 = plVar12[1];
      *(undefined4 *)(pLVar14 + 0x84) = 0xffffffff;
      pLVar14[0x80] = (LiveRange)0x1;
      *(undefined8 *)(pLVar14 + 0x78) = 0;
      piVar8 = *(int **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)piVar8) < 0x10) {
        piVar8 = (int *)Zone::NewExpand(this_00,0x10);
      }
      else {
        *(int **)(this_00 + 0x10) = piVar8 + 4;
      }
      iVar15 = (int)((ulong)(lVar6 - lVar7) >> 3);
      *piVar8 = iVar15;
      if (iVar15 < 0x41) {
        piVar8[1] = 1;
LAB_0164d05c:
        piVar8[2] = 0;
        piVar8[3] = 0;
      }
      else {
        iVar3 = iVar15 + 0x3e;
        if (-1 < iVar15 + -1) {
          iVar3 = iVar15 + -1;
        }
        uVar2 = (iVar3 >> 6) + 1;
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[1] = uVar2;
        puVar9 = *(undefined8 **)(this_00 + 0x10);
        uVar10 = (ulong)uVar2 * 8;
        if (uVar10 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar9) ||
            uVar10 - (*(long *)(this_00 + 0x18) - (long)puVar9) == 0) {
          *(undefined8 **)(this_00 + 0x10) = puVar9 + uVar2;
        }
        else {
          puVar9 = (undefined8 *)Zone::NewExpand(this_00,uVar10);
        }
        *(undefined8 **)(piVar8 + 2) = puVar9;
        if (piVar8[1] == 1) goto LAB_0164d05c;
        if ((0 < piVar8[1]) && (*puVar9 = 0, 1 < piVar8[1])) {
          lVar7 = 1;
          do {
            *(undefined8 *)(*(long *)(piVar8 + 2) + lVar7 * 8) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < piVar8[1]);
        }
      }
      *(int **)(pLVar14 + 0x78) = piVar8;
    }
LAB_0164cf5c:
    plVar4 = plVar4 + 1;
    if (plVar4 == plVar5) {
      return;
    }
    pLVar14 = (LiveRange *)*plVar4;
  } while( true );
}

