
/* v8::internal::compiler::InstructionSequence::ComputeAssemblyOrder() */

void __thiscall
v8::internal::compiler::InstructionSequence::ComputeAssemblyOrder(InstructionSequence *this)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  Zone *pZVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  
  pZVar4 = *(Zone **)(this + 8);
  puVar18 = *(undefined8 **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar18) < 0x20) {
    puVar18 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
  }
  else {
    *(undefined8 **)(pZVar4 + 0x10) = puVar18 + 4;
  }
  uVar5 = *(undefined8 *)(this + 8);
  *(undefined8 **)(this + 0x18) = puVar18;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar18[3] = uVar5;
  plVar6 = *(long **)(this + 0x10);
  plVar9 = *(long **)(this + 0x18);
  puVar18 = (undefined8 *)plVar6[1];
  lVar8 = *plVar9;
  uVar2 = (long)puVar18 - *plVar6;
  if ((ulong)(plVar9[2] - lVar8 >> 3) < (ulong)((long)uVar2 >> 3)) {
    pZVar4 = (Zone *)plVar9[3];
    lVar11 = plVar9[1];
    lVar7 = *(long *)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - lVar7) < uVar2) {
      lVar7 = Zone::NewExpand(pZVar4,uVar2);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = lVar7 + uVar2;
    }
    puVar20 = (undefined8 *)*plVar9;
    puVar15 = (undefined8 *)plVar9[1];
    puVar18 = (undefined8 *)(lVar7 + (lVar11 - lVar8 >> 3) * 8);
    puVar12 = puVar18;
    while (puVar15 != puVar20) {
      puVar15 = puVar15 + -1;
      puVar12 = puVar12 + -1;
      *puVar12 = *puVar15;
    }
    *plVar9 = (long)puVar12;
    plVar9[1] = (long)puVar18;
    plVar9[2] = lVar7 + ((long)uVar2 >> 3) * 8;
    plVar6 = *(long **)(this + 0x10);
    puVar18 = (undefined8 *)plVar6[1];
  }
  puVar20 = (undefined8 *)*plVar6;
  if (puVar20 != puVar18) {
    iVar19 = 0;
    do {
      plVar6 = (long *)*puVar20;
      if (((char)plVar6[0xf] == '\0') && ((int)plVar6[0xc] == -1)) {
        if (-1 < (int)*(uint *)((long)plVar6 + 0x6c)) {
          if (FLAG_turbo_loop_rotation == '\0') {
            uVar3 = 1;
          }
          else {
            uVar2 = (ulong)*(uint *)((long)plVar6 + 0x6c) - 1;
            lVar8 = **(long **)(this + 0x10);
            if ((ulong)((*(long **)(this + 0x10))[1] - lVar8 >> 3) <= uVar2) goto LAB_016486d0;
            plVar9 = *(long **)(lVar8 + uVar2 * 8);
            uVar3 = 1;
            if ((plVar9 != plVar6) && (plVar9[1] - *plVar9 == 4)) {
              *(int *)(plVar9 + 0xc) = iVar19;
              plVar22 = *(long **)(this + 0x18);
              puVar15 = (undefined8 *)plVar22[1];
              if (puVar15 == (undefined8 *)plVar22[2]) {
                lVar8 = (long)puVar15 - *plVar22 >> 3;
                uVar2 = lVar8 + 1;
                if (uVar2 >> 0x1c != 0) goto LAB_016486d0;
                lVar7 = plVar22[2] - *plVar22;
                uVar14 = lVar7 >> 2;
                if (uVar2 <= uVar14) {
                  uVar2 = uVar14;
                }
                if (0x7fffffe < (ulong)(lVar7 >> 3)) {
                  uVar2 = 0xfffffff;
                }
                if (uVar2 == 0) {
                  lVar7 = 0;
                }
                else {
                  pZVar4 = (Zone *)plVar22[3];
                  uVar14 = uVar2 * 8;
                  lVar7 = *(long *)(pZVar4 + 0x10);
                  if (uVar14 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar7) ||
                      uVar14 - (*(long *)(pZVar4 + 0x18) - lVar7) == 0) {
                    *(ulong *)(pZVar4 + 0x10) = lVar7 + uVar14;
                  }
                  else {
                    lVar7 = Zone::NewExpand(pZVar4,uVar14);
                  }
                }
                puVar15 = (undefined8 *)(lVar7 + lVar8 * 8);
                puVar13 = puVar15 + 1;
                *puVar15 = plVar9;
                puVar12 = (undefined8 *)*plVar22;
                puVar17 = (undefined8 *)plVar22[1];
                while (puVar17 != puVar12) {
                  puVar17 = puVar17 + -1;
                  puVar15 = puVar15 + -1;
                  *puVar15 = *puVar17;
                }
                *plVar22 = (long)puVar15;
                plVar22[1] = (long)puVar13;
                plVar22[2] = lVar7 + uVar2 * 8;
              }
              else {
                *puVar15 = plVar9;
                plVar22[1] = plVar22[1] + 8;
              }
              uVar3 = 0;
              iVar19 = iVar19 + 1;
              *(undefined1 *)((long)plVar9 + 0x7b) = 1;
            }
          }
          *(undefined1 *)((long)plVar6 + 0x7b) = uVar3;
        }
        if ((-1 < (int)plVar6[0xd]) && (*(char *)((long)plVar6 + 0x7a) != '\0')) {
          *(undefined1 *)((long)plVar6 + 0x7b) = 1;
        }
        *(int *)(plVar6 + 0xc) = iVar19;
        plVar9 = *(long **)(this + 0x18);
        iVar19 = iVar19 + 1;
        puVar15 = (undefined8 *)plVar9[1];
        if (puVar15 == (undefined8 *)plVar9[2]) {
          lVar8 = (long)puVar15 - *plVar9 >> 3;
          uVar2 = lVar8 + 1;
          if (uVar2 >> 0x1c != 0) goto LAB_016486d0;
          lVar7 = plVar9[2] - *plVar9;
          uVar14 = lVar7 >> 2;
          if (uVar2 <= uVar14) {
            uVar2 = uVar14;
          }
          if (0x7fffffe < (ulong)(lVar7 >> 3)) {
            uVar2 = 0xfffffff;
          }
          if (uVar2 == 0) {
            lVar7 = 0;
          }
          else {
            pZVar4 = (Zone *)plVar9[3];
            uVar14 = uVar2 * 8;
            lVar7 = *(long *)(pZVar4 + 0x10);
            if (uVar14 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar7) ||
                uVar14 - (*(long *)(pZVar4 + 0x18) - lVar7) == 0) {
              *(ulong *)(pZVar4 + 0x10) = lVar7 + uVar14;
            }
            else {
              lVar7 = Zone::NewExpand(pZVar4,uVar14);
            }
          }
          puVar15 = (undefined8 *)(lVar7 + lVar8 * 8);
          puVar13 = puVar15 + 1;
          *puVar15 = plVar6;
          puVar12 = (undefined8 *)*plVar9;
          puVar17 = (undefined8 *)plVar9[1];
          while (puVar17 != puVar12) {
            puVar17 = puVar17 + -1;
            puVar15 = puVar15 + -1;
            *puVar15 = *puVar17;
          }
          *plVar9 = (long)puVar15;
          plVar9[1] = (long)puVar13;
          plVar9[2] = lVar7 + uVar2 * 8;
        }
        else {
          *puVar15 = plVar6;
          plVar9[1] = plVar9[1] + 8;
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar18);
    plVar9 = (long *)(*(long **)(this + 0x10))[1];
    for (plVar6 = (long *)**(long **)(this + 0x10); plVar6 != plVar9; plVar6 = plVar6 + 1) {
      lVar8 = *plVar6;
      if (*(int *)(lVar8 + 0x60) == -1) {
        *(int *)(lVar8 + 0x60) = iVar19;
        plVar21 = *(long **)(this + 0x18);
        iVar19 = iVar19 + 1;
        plVar22 = (long *)plVar21[1];
        if (plVar22 == (long *)plVar21[2]) {
          lVar7 = (long)plVar22 - *plVar21 >> 3;
          uVar2 = lVar7 + 1;
          if (uVar2 >> 0x1c != 0) {
LAB_016486d0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar11 = plVar21[2] - *plVar21;
          uVar14 = lVar11 >> 2;
          if (uVar2 <= uVar14) {
            uVar2 = uVar14;
          }
          if (0x7fffffe < (ulong)(lVar11 >> 3)) {
            uVar2 = 0xfffffff;
          }
          if (uVar2 == 0) {
            lVar11 = 0;
          }
          else {
            pZVar4 = (Zone *)plVar21[3];
            uVar14 = uVar2 * 8;
            lVar11 = *(long *)(pZVar4 + 0x10);
            if (uVar14 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar11) ||
                uVar14 - (*(long *)(pZVar4 + 0x18) - lVar11) == 0) {
              *(ulong *)(pZVar4 + 0x10) = lVar11 + uVar14;
            }
            else {
              lVar11 = Zone::NewExpand(pZVar4,uVar14);
            }
          }
          plVar22 = (long *)(lVar11 + lVar7 * 8);
          plVar10 = plVar22 + 1;
          *plVar22 = lVar8;
          plVar1 = (long *)*plVar21;
          plVar16 = (long *)plVar21[1];
          while (plVar16 != plVar1) {
            plVar16 = plVar16 + -1;
            plVar22 = plVar22 + -1;
            *plVar22 = *plVar16;
          }
          *plVar21 = (long)plVar22;
          plVar21[1] = (long)plVar10;
          plVar21[2] = lVar11 + uVar2 * 8;
        }
        else {
          *plVar22 = lVar8;
          plVar21[1] = plVar21[1] + 8;
        }
      }
    }
  }
  return;
}

