
/* v8::internal::compiler::LoopFinderImpl::FinishSingleLoop() */

void __thiscall v8::internal::compiler::LoopFinderImpl::FinishSingleLoop(LoopFinderImpl *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  Zone *pZVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  
  lVar15 = *(long *)(this + 0x88);
  uVar18 = *(undefined8 *)(*(long *)(this + 200) + 0x28);
  *(undefined8 *)(lVar15 + 0x20) = uVar18;
  lVar16 = *(long *)(this + 200);
  puVar7 = *(undefined8 **)(lVar16 + 0x10);
  if (puVar7 == *(undefined8 **)(lVar16 + 0x18)) {
    lVar19 = (long)puVar7 - *(long *)(lVar16 + 8) >> 3;
    uVar17 = lVar19 + 1;
    if (uVar17 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(undefined8 **)(lVar16 + 0x18) - *(long *)(lVar16 + 8);
    uVar13 = lVar6 >> 2;
    if (uVar17 <= uVar13) {
      uVar17 = uVar13;
    }
    if (0x7fffffe < (ulong)(lVar6 >> 3)) {
      uVar17 = 0xfffffff;
    }
    if (uVar17 == 0) {
      lVar6 = 0;
    }
    else {
      pZVar8 = *(Zone **)(lVar16 + 0x20);
      uVar13 = uVar17 * 8;
      lVar6 = *(long *)(pZVar8 + 0x10);
      if (uVar13 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar6) ||
          uVar13 - (*(long *)(pZVar8 + 0x18) - lVar6) == 0) {
        *(ulong *)(pZVar8 + 0x10) = lVar6 + uVar13;
      }
      else {
        lVar6 = Zone::NewExpand(pZVar8,uVar13);
      }
    }
    puVar7 = (undefined8 *)(lVar6 + lVar19 * 8);
    puVar9 = puVar7 + 1;
    *puVar7 = uVar18;
    puVar2 = *(undefined8 **)(lVar16 + 8);
    puVar11 = *(undefined8 **)(lVar16 + 0x10);
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar11;
    }
    *(undefined8 **)(lVar16 + 8) = puVar7;
    *(undefined8 **)(lVar16 + 0x10) = puVar9;
    *(ulong *)(lVar16 + 0x18) = lVar6 + uVar17 * 8;
  }
  else {
    *puVar7 = uVar18;
    *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 8;
  }
  plVar1 = *(long **)(this + 0x68);
  plVar3 = *(long **)(this + 0x70);
  if (plVar1 == plVar3) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    plVar12 = (long *)*plVar1;
    while( true ) {
      if ((plVar12 != (long *)0x0) &&
         (uVar13 = (ulong)*(uint *)((long)plVar12 + 0x14) & 0xffffff,
         uVar5 = (int)uVar13 * *(int *)(this + 0xd4),
         uVar14 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2,
         ((*(uint *)(*(long *)(this + 0xd8) + uVar14) & *(uint *)(*(long *)(this + 0xe0) + uVar14))
          >> 1 & 1) != 0)) {
        uVar4 = *(ushort *)(*plVar12 + 0x10);
        if (uVar4 == 0x10) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","ni.node->opcode() != IrOpcode::kReturn");
        }
        plVar12 = (long *)(lVar15 + 0x18);
        if ((*(int *)(*(long *)(*(long *)(this + 200) + 0x48) + uVar13 * 4) == 1) &&
           (plVar12 = (long *)(lVar15 + 8), 1 < uVar4 - 0x23 && uVar4 != 1)) {
          plVar12 = (long *)(lVar15 + 0x10);
        }
        uVar17 = uVar17 + 1;
        plVar1[1] = *plVar12;
        *plVar12 = (long)plVar1;
      }
      plVar1 = plVar1 + 2;
      if (plVar3 == plVar1) break;
      plVar12 = (long *)*plVar1;
    }
  }
  lVar19 = *(long *)(this + 200);
  lVar16 = *(long *)(lVar19 + 0x68);
  if ((ulong)(*(long *)(lVar19 + 0x78) - lVar16 >> 3) < uVar17) {
    pZVar8 = *(Zone **)(lVar19 + 0x80);
    lVar10 = *(long *)(lVar19 + 0x70);
    uVar13 = uVar17 * 8;
    lVar6 = *(long *)(pZVar8 + 0x10);
    if (uVar13 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar6) ||
        uVar13 - (*(long *)(pZVar8 + 0x18) - lVar6) == 0) {
      *(ulong *)(pZVar8 + 0x10) = lVar6 + uVar13;
    }
    else {
      lVar6 = Zone::NewExpand(pZVar8,uVar13);
    }
    puVar2 = *(undefined8 **)(lVar19 + 0x68);
    puVar11 = *(undefined8 **)(lVar19 + 0x70);
    puVar7 = (undefined8 *)(lVar6 + (lVar10 - lVar16 >> 3) * 8);
    puVar9 = puVar7;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar11;
    }
    *(undefined8 **)(lVar19 + 0x68) = puVar9;
    *(undefined8 **)(lVar19 + 0x70) = puVar7;
    *(ulong *)(lVar19 + 0x78) = lVar6 + uVar17 * 8;
  }
  SerializeLoop(this,*(Loop **)(lVar15 + 0x20));
  return;
}

