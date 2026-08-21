
/* v8::internal::compiler::OperandAssigner::AssignSpillSlots() */

void __thiscall v8::internal::compiler::OperandAssigner::AssignSpillSlots(OperandAssigner *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  SpillRange *pSVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  SpillRange *pSVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  
  lVar13 = *(long *)this;
  plVar15 = *(long **)(lVar13 + 0x88);
  plVar3 = *(long **)(lVar13 + 0x90);
  do {
    if (plVar15 == plVar3) {
      puVar11 = *(undefined8 **)(lVar13 + 0x130);
      puVar10 = puVar11;
      if (puVar11 != *(undefined8 **)(lVar13 + 0x128)) {
        uVar14 = 0;
        lVar7 = lVar13;
        while( true ) {
          TickCounter::DoTick(*(TickCounter **)(lVar7 + 0x1d8));
          puVar11 = *(undefined8 **)(lVar13 + 0x128);
          pSVar9 = (SpillRange *)puVar11[uVar14];
          if ((pSVar9 != (SpillRange *)0x0) && (*(long *)pSVar9 != *(long *)(pSVar9 + 8))) {
            lVar7 = *(long *)(lVar13 + 0x130);
            uVar17 = uVar14;
            while (uVar17 = uVar17 + 1, uVar17 < (ulong)(lVar7 - (long)puVar11 >> 3)) {
              pSVar5 = (SpillRange *)puVar11[uVar17];
              if ((pSVar5 != (SpillRange *)0x0) && (*(long *)pSVar5 != *(long *)(pSVar5 + 8))) {
                SpillRange::TryMerge(pSVar9,pSVar5);
                puVar11 = *(undefined8 **)(lVar13 + 0x128);
                lVar7 = *(long *)(lVar13 + 0x130);
              }
            }
          }
          puVar10 = *(undefined8 **)(lVar13 + 0x130);
          uVar14 = uVar14 + 1;
          if ((ulong)((long)puVar10 - (long)puVar11 >> 3) <= uVar14) break;
          lVar7 = *(long *)this;
        }
      }
      for (; puVar11 != puVar10; puVar11 = puVar11 + 1) {
        plVar15 = (long *)*puVar11;
        TickCounter::DoTick(*(TickCounter **)(*(long *)this + 0x1d8));
        if (((plVar15 != (long *)0x0) && (*plVar15 != plVar15[1])) &&
           (*(int *)((long)plVar15 + 0x2c) == -1)) {
          uVar4 = *(uint *)(plVar15 + 6);
          lVar13 = *(long *)(*(long *)this + 8);
          iVar1 = uVar4 + 0xe;
          if (-1 < (int)(uVar4 + 7)) {
            iVar1 = uVar4 + 7;
          }
          iVar2 = *(int *)(lVar13 + 4);
          iVar12 = 1;
          if ((uVar4 & 0xf) == 0) {
            iVar12 = 2;
          }
          uVar4 = (iVar2 + (iVar1 >> 3) + iVar12) - 1U & -iVar12;
          *(uint *)(lVar13 + 4) = uVar4;
          *(uint *)(lVar13 + 8) = (*(int *)(lVar13 + 8) - iVar2) + uVar4;
          *(uint *)((long)plVar15 + 0x2c) = uVar4 + ~*(uint *)(lVar13 + 0xc);
        }
      }
      return;
    }
    lVar7 = *plVar15;
    TickCounter::DoTick(*(TickCounter **)(lVar13 + 0x1d8));
    if ((lVar7 != 0) && (puVar11 = *(undefined8 **)(lVar7 + 0x50), puVar11 != (undefined8 *)0x0)) {
      if ((long *)*puVar11 != puVar11 + 1) {
        pSVar9 = (SpillRange *)0x0;
        plVar16 = (long *)*puVar11;
        do {
          if ((*(byte *)(*(long *)(plVar16[4] + 0x20) + 4) >> 6 & 1) == 0) {
LAB_016647e4:
            plVar6 = (long *)plVar16[1];
            pSVar5 = pSVar9;
            if ((long *)plVar16[1] != (long *)0x0) goto LAB_016647ec;
LAB_01664808:
            plVar6 = plVar16 + 2;
            plVar8 = (long *)*plVar6;
            if ((long *)*plVar8 != plVar16) {
              do {
                lVar13 = *plVar6;
                plVar6 = (long *)(lVar13 + 0x10);
                plVar8 = (long *)*plVar6;
              } while (*plVar8 != lVar13);
            }
          }
          else {
            pSVar5 = *(SpillRange **)(*(long *)(plVar16[4] + 0x20) + 0x70);
            if (pSVar9 != (SpillRange *)0x0) {
              if (pSVar9 != pSVar5) {
                SpillRange::TryMerge(pSVar9,pSVar5);
              }
              goto LAB_016647e4;
            }
            plVar6 = (long *)plVar16[1];
            if ((long *)plVar16[1] == (long *)0x0) goto LAB_01664808;
LAB_016647ec:
            do {
              plVar8 = plVar6;
              plVar6 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          pSVar9 = pSVar5;
          plVar16 = plVar8;
        } while (plVar8 != puVar11 + 1);
      }
    }
    lVar13 = *(long *)this;
    plVar15 = plVar15 + 1;
  } while( true );
}

