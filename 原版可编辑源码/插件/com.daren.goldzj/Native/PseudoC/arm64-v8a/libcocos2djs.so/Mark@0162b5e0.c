
/* v8::internal::compiler::AllNodes::Mark(v8::internal::Zone*, v8::internal::compiler::Node*,
   v8::internal::compiler::Graph const*) */

void __thiscall
v8::internal::compiler::AllNodes::Mark(AllNodes *this,Zone *param_1,Node *param_2,Graph *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  Zone *pZVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  
  uVar9 = ((ulong)*(uint *)(param_2 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(*(long *)(this + 0x20) + uVar9) =
       1L << ((ulong)*(uint *)(param_2 + 0x14) & 0x3f) | *(ulong *)(*(long *)(this + 0x20) + uVar9);
  puVar8 = *(undefined8 **)(this + 8);
  if (puVar8 == *(undefined8 **)(this + 0x10)) {
    lVar18 = (long)puVar8 - *(long *)this >> 3;
    uVar9 = lVar18 + 1;
    if (uVar9 >> 0x1c != 0) {
LAB_0162b9c0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar16 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
    uVar10 = lVar16 >> 2;
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (0x7fffffe < (ulong)(lVar16 >> 3)) {
      uVar9 = 0xfffffff;
    }
    if (uVar9 == 0) {
      lVar16 = 0;
    }
    else {
      pZVar5 = *(Zone **)(this + 0x18);
      uVar10 = uVar9 * 8;
      lVar16 = *(long *)(pZVar5 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar16) ||
          uVar10 - (*(long *)(pZVar5 + 0x18) - lVar16) == 0) {
        *(ulong *)(pZVar5 + 0x10) = lVar16 + uVar10;
      }
      else {
        lVar16 = Zone::NewExpand(pZVar5,uVar10);
      }
    }
    plVar7 = (long *)(lVar16 + lVar18 * 8);
    plVar3 = plVar7 + 1;
    *plVar7 = (long)param_2;
    plVar17 = *(long **)this;
    plVar12 = *(long **)(this + 8);
    while (plVar12 != plVar17) {
      plVar12 = plVar12 + -1;
      plVar7 = plVar7 + -1;
      *plVar7 = *plVar12;
    }
    *(long **)this = plVar7;
    *(long **)(this + 8) = plVar3;
    *(ulong *)(this + 0x10) = lVar16 + uVar9 * 8;
    if (plVar3 == plVar7) {
      return;
    }
  }
  else {
    *puVar8 = param_2;
    plVar7 = *(long **)this;
    plVar3 = (long *)(*(long *)(this + 8) + 8);
    *(long **)(this + 8) = plVar3;
    if (plVar3 == plVar7) {
      return;
    }
  }
  uVar9 = 0;
  while( true ) {
    plVar17 = (long *)(plVar7[uVar9] + 0x20);
    uVar6 = *(byte *)(plVar7[uVar9] + 0x17) & 0xf;
    if (uVar6 == 0xf) {
      uVar6 = *(uint *)(*plVar17 + 8);
      plVar17 = (long *)(*plVar17 + 0x10);
    }
    if (uVar6 != 0) {
      plVar7 = plVar17 + (int)uVar6;
      lVar18 = *plVar17;
      while( true ) {
        if (lVar18 != 0) {
          uVar10 = (ulong)(*(uint *)(lVar18 + 0x14) >> 6) & 0x3ffff;
          uVar11 = *(ulong *)(*(long *)(this + 0x20) + uVar10 * 8);
          uVar13 = 1L << ((ulong)*(uint *)(lVar18 + 0x14) & 0x3f);
          if ((uVar13 & uVar11) == 0) {
            *(ulong *)(*(long *)(this + 0x20) + uVar10 * 8) = uVar13 | uVar11;
            plVar3 = *(long **)(this + 8);
            if (plVar3 == *(long **)(this + 0x10)) {
              lVar16 = (long)plVar3 - *(long *)this >> 3;
              uVar10 = lVar16 + 1;
              if (uVar10 >> 0x1c != 0) goto LAB_0162b9c0;
              lVar4 = (long)*(long **)(this + 0x10) - *(long *)this;
              uVar11 = lVar4 >> 2;
              if (uVar10 <= uVar11) {
                uVar10 = uVar11;
              }
              if (0x7fffffe < (ulong)(lVar4 >> 3)) {
                uVar10 = 0xfffffff;
              }
              if (uVar10 == 0) {
                lVar4 = 0;
              }
              else {
                pZVar5 = *(Zone **)(this + 0x18);
                uVar11 = uVar10 * 8;
                lVar4 = *(long *)(pZVar5 + 0x10);
                if (uVar11 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar4) ||
                    uVar11 - (*(long *)(pZVar5 + 0x18) - lVar4) == 0) {
                  *(ulong *)(pZVar5 + 0x10) = lVar4 + uVar11;
                }
                else {
                  lVar4 = Zone::NewExpand(pZVar5,uVar11);
                }
              }
              plVar12 = (long *)(lVar4 + lVar16 * 8);
              plVar3 = plVar12 + 1;
              *plVar12 = lVar18;
              plVar1 = *(long **)this;
              plVar14 = *(long **)(this + 8);
              while (plVar14 != plVar1) {
                plVar14 = plVar14 + -1;
                plVar12 = plVar12 + -1;
                *plVar12 = *plVar14;
              }
              *(long **)this = plVar12;
              *(long **)(this + 8) = plVar3;
              *(ulong *)(this + 0x10) = lVar4 + uVar10 * 8;
            }
            else {
              *plVar3 = lVar18;
              plVar3 = (long *)(*(long *)(this + 8) + 8);
              *(long **)(this + 8) = plVar3;
            }
          }
        }
        plVar17 = plVar17 + 1;
        if (plVar17 == plVar7) break;
        lVar18 = *plVar17;
      }
    }
    if (this[0x40] == (AllNodes)0x0) break;
LAB_0162b710:
    plVar7 = *(long **)this;
    uVar9 = uVar9 + 1;
    if ((ulong)((long)plVar3 - (long)plVar7 >> 3) <= uVar9) {
      return;
    }
  }
  plVar7 = *(long **)(*(long *)(*(long *)this + uVar9 * 8) + 0x18);
joined_r0x0162b864:
  if (plVar7 != (long *)0x0) {
    do {
      plVar17 = plVar7 + (ulong)(*(uint *)(plVar7 + 2) >> 1) * 3 + 3;
      if (((*(uint *)(plVar7 + 2) & 1) != 0) || (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)
         ) {
        uVar10 = (ulong)*(uint *)((long)plVar17 + 0x14) & 0xffffff;
        if ((uint)uVar10 < *(uint *)(param_3 + 0x1c)) {
          uVar10 = uVar10 >> 6;
          uVar13 = 1L << ((ulong)*(uint *)((long)plVar17 + 0x14) & 0x3f);
          uVar11 = *(ulong *)(*(long *)(this + 0x20) + uVar10 * 8);
          if ((uVar11 & uVar13) == 0) {
            *(ulong *)(*(long *)(this + 0x20) + uVar10 * 8) = uVar11 | uVar13;
            puVar8 = *(undefined8 **)(this + 8);
            if (puVar8 == *(undefined8 **)(this + 0x10)) goto code_r0x0162b8e0;
            *puVar8 = plVar17;
            plVar3 = (long *)(*(long *)(this + 8) + 8);
            *(long **)(this + 8) = plVar3;
          }
        }
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_0162b710;
code_r0x0162b8e0:
  lVar18 = (long)puVar8 - *(long *)this >> 3;
  uVar10 = lVar18 + 1;
  if (uVar10 >> 0x1c != 0) goto LAB_0162b9c0;
  lVar16 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
  uVar11 = lVar16 >> 2;
  if (uVar10 <= uVar11) {
    uVar10 = uVar11;
  }
  if (0x7fffffe < (ulong)(lVar16 >> 3)) {
    uVar10 = 0xfffffff;
  }
  if (uVar10 == 0) {
    lVar16 = 0;
  }
  else {
    pZVar5 = *(Zone **)(this + 0x18);
    uVar11 = uVar10 * 8;
    lVar16 = *(long *)(pZVar5 + 0x10);
    if (uVar11 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar16) ||
        uVar11 - (*(long *)(pZVar5 + 0x18) - lVar16) == 0) {
      *(ulong *)(pZVar5 + 0x10) = lVar16 + uVar11;
    }
    else {
      lVar16 = Zone::NewExpand(pZVar5,uVar11);
    }
  }
  puVar8 = (undefined8 *)(lVar16 + lVar18 * 8);
  plVar3 = puVar8 + 1;
  *puVar8 = plVar17;
  puVar2 = *(undefined8 **)this;
  puVar15 = *(undefined8 **)(this + 8);
  while (puVar15 != puVar2) {
    puVar15 = puVar15 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = *puVar15;
  }
  *(undefined8 **)this = puVar8;
  *(long **)(this + 8) = plVar3;
  *(ulong *)(this + 0x10) = lVar16 + uVar10 * 8;
  plVar7 = (long *)*plVar7;
  goto joined_r0x0162b864;
}

