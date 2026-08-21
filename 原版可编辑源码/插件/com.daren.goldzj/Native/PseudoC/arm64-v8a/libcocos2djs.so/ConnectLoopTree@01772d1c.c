
/* v8::internal::compiler::LoopFinderImpl::ConnectLoopTree(int) */

long __thiscall
v8::internal::compiler::LoopFinderImpl::ConnectLoopTree(LoopFinderImpl *this,int param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  Zone *pZVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = (long)param_1 + -1;
  plVar14 = (long *)(*(long *)(this + 0x88) + lVar15 * 0x28 + 0x20);
  lVar3 = *plVar14;
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(this + 0x88) + lVar15 * 0x28);
    plVar2 = (long *)(*(long *)(this + 0x68) + ((ulong)*(uint *)(lVar3 + 0x14) & 0xffffff) * 0x10);
    if (*plVar2 == 0) {
      *plVar2 = lVar3;
    }
    if (0 < *(int *)(this + 0xd0)) {
      lVar16 = 0;
      uVar13 = 1;
      lVar3 = lVar16;
      if (param_1 == 1) goto LAB_01772da8;
      do {
        uVar1 = (*(uint *)(*plVar2 + 0x14) & 0xffffff) * *(int *)(this + 0xd4) + (uVar13 >> 5);
        uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        lVar3 = lVar16;
        if ((((*(uint *)(*(long *)(this + 0xd8) + uVar4) & 1 << (ulong)(uVar13 & 0x1f) &
              *(uint *)(*(long *)(this + 0xe0) + uVar4)) != 0) &&
            (lVar3 = ConnectLoopTree(this,uVar13), lVar16 != 0)) &&
           (*(int *)(lVar3 + 8) <= *(int *)(lVar16 + 8))) {
          lVar3 = lVar16;
        }
LAB_01772da8:
        do {
          uVar1 = uVar13 + 1;
          if (*(int *)(this + 0xd0) <= (int)uVar13) goto LAB_01772e20;
          lVar16 = lVar3;
          uVar13 = uVar1;
        } while (param_1 == uVar1);
      } while( true );
    }
    lVar3 = 0;
LAB_01772e20:
    lVar16 = *(long *)(*(long *)(this + 200) + 0x28);
    plVar2 = (long *)(lVar16 + lVar15 * 0x40);
    *plVar14 = (long)plVar2;
    if (lVar3 == 0) {
      lVar3 = *(long *)(this + 200);
      plVar7 = *(long **)(lVar3 + 0x10);
      if (plVar7 == *(long **)(lVar3 + 0x18)) {
        lVar15 = (long)plVar7 - *(long *)(lVar3 + 8) >> 3;
        uVar4 = lVar15 + 1;
        if (uVar4 >> 0x1c != 0) goto LAB_01772ff4;
        lVar16 = (long)*(long **)(lVar3 + 0x18) - *(long *)(lVar3 + 8);
        uVar9 = lVar16 >> 2;
        if (uVar4 <= uVar9) {
          uVar4 = uVar9;
        }
        if (0x7fffffe < (ulong)(lVar16 >> 3)) {
          uVar4 = 0xfffffff;
        }
        if (uVar4 == 0) {
          lVar16 = 0;
        }
        else {
          pZVar6 = *(Zone **)(lVar3 + 0x20);
          uVar9 = uVar4 * 8;
          lVar16 = *(long *)(pZVar6 + 0x10);
          if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar16) ||
              uVar9 - (*(long *)(pZVar6 + 0x18) - lVar16) == 0) {
            *(ulong *)(pZVar6 + 0x10) = lVar16 + uVar9;
          }
          else {
            lVar16 = Zone::NewExpand(pZVar6,uVar9);
          }
        }
        plVar7 = (long *)(lVar16 + lVar15 * 8);
        plVar10 = plVar7 + 1;
        *plVar7 = (long)plVar2;
        plVar2 = *(long **)(lVar3 + 8);
        plVar11 = *(long **)(lVar3 + 0x10);
        while (plVar11 != plVar2) {
          plVar11 = plVar11 + -1;
          plVar7 = plVar7 + -1;
          *plVar7 = *plVar11;
        }
        *(long **)(lVar3 + 8) = plVar7;
        *(long **)(lVar3 + 0x10) = plVar10;
        *(ulong *)(lVar3 + 0x18) = lVar16 + uVar4 * 8;
      }
      else {
        *plVar7 = (long)plVar2;
        *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 8;
      }
    }
    else {
      plVar7 = *(long **)(lVar3 + 0x18);
      if (plVar7 == *(long **)(lVar3 + 0x20)) {
        lVar12 = (long)plVar7 - *(long *)(lVar3 + 0x10) >> 3;
        uVar4 = lVar12 + 1;
        if (uVar4 >> 0x1c != 0) {
LAB_01772ff4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar5 = (long)*(long **)(lVar3 + 0x20) - *(long *)(lVar3 + 0x10);
        uVar9 = lVar5 >> 2;
        if (uVar4 <= uVar9) {
          uVar4 = uVar9;
        }
        if (0x7fffffe < (ulong)(lVar5 >> 3)) {
          uVar4 = 0xfffffff;
        }
        if (uVar4 == 0) {
          lVar5 = 0;
        }
        else {
          pZVar6 = *(Zone **)(lVar3 + 0x28);
          uVar9 = uVar4 * 8;
          lVar5 = *(long *)(pZVar6 + 0x10);
          if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar5) ||
              uVar9 - (*(long *)(pZVar6 + 0x18) - lVar5) == 0) {
            *(ulong *)(pZVar6 + 0x10) = lVar5 + uVar9;
          }
          else {
            lVar5 = Zone::NewExpand(pZVar6,uVar9);
          }
        }
        plVar7 = (long *)(lVar5 + lVar12 * 8);
        plVar8 = plVar7 + 1;
        *plVar7 = (long)plVar2;
        plVar11 = *(long **)(lVar3 + 0x10);
        plVar10 = *(long **)(lVar3 + 0x18);
        while (plVar10 != plVar11) {
          plVar10 = plVar10 + -1;
          plVar7 = plVar7 + -1;
          *plVar7 = *plVar10;
        }
        *(long **)(lVar3 + 0x10) = plVar7;
        *(long **)(lVar3 + 0x18) = plVar8;
        *(ulong *)(lVar3 + 0x20) = lVar5 + uVar4 * 8;
      }
      else {
        *plVar7 = (long)plVar2;
        *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 8;
      }
      *plVar2 = lVar3;
      *(int *)(lVar16 + lVar15 * 0x40 + 8) = *(int *)(lVar3 + 8) + 1;
    }
    lVar3 = *plVar14;
  }
  return lVar3;
}

