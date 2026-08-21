
/* v8::internal::compiler::LoopFinderImpl::FinishLoopTree() */

void __thiscall v8::internal::compiler::LoopFinderImpl::FinishLoopTree(LoopFinderImpl *this)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  Zone *this_00;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  undefined8 *puVar20;
  
  iVar18 = *(int *)(this + 0xd0);
  if (iVar18 != 0) {
    if (iVar18 == 1) {
      FinishSingleLoop(this);
      return;
    }
    if (0 < iVar18) {
      iVar18 = 0;
      do {
        iVar18 = iVar18 + 1;
        ConnectLoopTree(this,iVar18);
      } while (iVar18 < *(int *)(this + 0xd0));
    }
    plVar2 = *(long **)(this + 0x68);
    plVar4 = *(long **)(this + 0x70);
    if (plVar2 == plVar4) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      plVar14 = (long *)*plVar2;
      while( true ) {
        if (plVar14 != (long *)0x0) {
          uVar5 = *(uint *)(this + 0xd4);
          if (0 < (int)uVar5) {
            iVar18 = 0;
            uVar8 = 0;
            uVar17 = (ulong)*(uint *)((long)plVar14 + 0x14) & 0xffffff;
            lVar13 = 0;
            iVar16 = 0;
            do {
              lVar10 = (uVar8 + (long)(int)((int)uVar17 * uVar5)) * 4;
              lVar9 = 0;
              lVar11 = (long)iVar18 * 0x28 + -8;
              uVar1 = *(uint *)(*(long *)(this + 0xe0) + lVar10) &
                      *(uint *)(*(long *)(this + 0xd8) + lVar10);
              uVar7 = uVar1;
              while( true ) {
                if ((((uVar7 & 1) != 0) && (-(long)iVar18 != lVar9)) &&
                   ((lVar13 == 0 ||
                    (*(int *)(*(long *)(lVar13 + 0x20) + 8) <
                     *(int *)(*(long *)(*(long *)(this + 0x88) + lVar11) + 8))))) {
                  lVar13 = *(long *)(this + 0x88) + lVar11 + -0x20;
                  iVar16 = iVar18 + (int)lVar9;
                }
                lVar9 = lVar9 + 1;
                lVar11 = lVar11 + 0x28;
                if (lVar9 == 0x20) break;
                uVar7 = uVar1 >> (ulong)((uint)lVar9 & 0x1f);
              }
              uVar8 = uVar8 + 1;
              iVar18 = iVar18 + 0x20;
            } while (uVar8 != uVar5);
            if (lVar13 != 0) {
              uVar6 = *(ushort *)(*plVar14 + 0x10);
              if (uVar6 == 0x10) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","ni.node->opcode() != IrOpcode::kReturn");
              }
              if (*(int *)(*(long *)(*(long *)(this + 200) + 0x48) + uVar17 * 4) == iVar16) {
                if ((uVar6 == 1) || (uVar6 - 0x23 < 2)) {
                  plVar14 = (long *)(lVar13 + 8);
                }
                else {
                  plVar14 = (long *)(lVar13 + 0x10);
                }
              }
              else {
                plVar14 = (long *)(lVar13 + 0x18);
              }
              uVar19 = uVar19 + 1;
              plVar2[1] = *plVar14;
              *plVar14 = (long)plVar2;
            }
          }
        }
        plVar2 = plVar2 + 2;
        if (plVar2 == plVar4) break;
        plVar14 = (long *)*plVar2;
      }
    }
    lVar13 = *(long *)(this + 200);
    lVar9 = *(long *)(lVar13 + 0x68);
    if ((ulong)(*(long *)(lVar13 + 0x78) - lVar9 >> 3) < uVar19) {
      this_00 = *(Zone **)(lVar13 + 0x80);
      lVar10 = *(long *)(lVar13 + 0x70);
      uVar8 = uVar19 * 8;
      lVar11 = *(long *)(this_00 + 0x10);
      if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar11) ||
          uVar8 - (*(long *)(this_00 + 0x18) - lVar11) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar11 + uVar8;
      }
      else {
        lVar11 = Zone::NewExpand(this_00,uVar8);
      }
      puVar3 = *(undefined8 **)(lVar13 + 0x68);
      puVar15 = *(undefined8 **)(lVar13 + 0x70);
      puVar20 = (undefined8 *)(lVar11 + (lVar10 - lVar9 >> 3) * 8);
      puVar12 = puVar20;
      while (puVar15 != puVar3) {
        puVar15 = puVar15 + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *puVar15;
      }
      *(undefined8 **)(lVar13 + 0x68) = puVar12;
      *(undefined8 **)(lVar13 + 0x70) = puVar20;
      *(ulong *)(lVar13 + 0x78) = lVar11 + uVar19 * 8;
      lVar13 = *(long *)(this + 200);
    }
    puVar3 = *(undefined8 **)(lVar13 + 0x10);
    for (puVar20 = *(undefined8 **)(lVar13 + 8); puVar20 != puVar3; puVar20 = puVar20 + 1) {
      SerializeLoop(this,(Loop *)*puVar20);
    }
  }
  return;
}

