
/* v8::internal::compiler::ParallelMove::AddMove(v8::internal::compiler::InstructionOperand const&,
   v8::internal::compiler::InstructionOperand const&, v8::internal::Zone*) */

undefined8 * __thiscall
v8::internal::compiler::ParallelMove::AddMove
          (ParallelMove *this,InstructionOperand *param_1,InstructionOperand *param_2,Zone *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  Zone *pZVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  uVar4 = *(ulong *)param_1;
  if (((uint)uVar4 >> 2 & 1) == 0) {
    uVar6 = *(ulong *)param_2;
    if (((uint)uVar6 >> 2 & 1) != 0) goto LAB_0164f640;
LAB_0164f600:
    if (uVar4 == uVar6) {
      return (undefined8 *)0x0;
    }
  }
  else {
    uVar6 = 0x180;
    if (((uint)uVar4 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
      uVar6 = 0;
    }
    uVar4 = uVar4 & 0xffffffffffffe018 | uVar6 | 4;
    uVar6 = *(ulong *)param_2;
    if (((uint)uVar6 >> 2 & 1) == 0) goto LAB_0164f600;
LAB_0164f640:
    uVar1 = 0x180;
    if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
      uVar1 = 0;
    }
    if (uVar4 == (uVar6 & 0xffffffffffffe018 | uVar1 | 4)) {
      return (undefined8 *)0x0;
    }
  }
  puVar2 = *(undefined8 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) < 0x10) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_3,0x10);
  }
  else {
    *(undefined8 **)(param_3 + 0x10) = puVar2 + 2;
  }
  *puVar2 = *(undefined8 *)param_1;
  puVar2[1] = *(undefined8 *)param_2;
  plVar9 = *(long **)this;
  plVar7 = *(long **)(this + 8);
  if (plVar9 == plVar7) {
    plVar5 = *(long **)(this + 0x10);
    if (3 < (ulong)((long)plVar5 - (long)plVar9 >> 3)) {
      plVar10 = plVar9;
      if (plVar9 == plVar5) goto LAB_0164f744;
      goto LAB_0164f720;
    }
    pZVar8 = *(Zone **)(this + 0x18);
    lVar12 = *(long *)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - lVar12) < 0x20) {
      lVar12 = Zone::NewExpand(pZVar8,0x20);
    }
    else {
      *(long *)(pZVar8 + 0x10) = lVar12 + 0x20;
    }
    plVar10 = *(long **)this;
    plVar11 = *(long **)(this + 8);
    plVar7 = (long *)(lVar12 + ((long)plVar7 - (long)plVar9 >> 3) * 8);
    plVar5 = (long *)(lVar12 + 0x20);
    plVar9 = plVar7;
    while (plVar11 != plVar10) {
      plVar11 = plVar11 + -1;
      plVar9 = plVar9 + -1;
      *plVar9 = *plVar11;
    }
    *(long **)this = plVar9;
    *(long **)(this + 8) = plVar7;
    *(long **)(this + 0x10) = plVar5;
  }
  else {
    plVar5 = *(long **)(this + 0x10);
  }
  plVar10 = plVar7;
  if (plVar7 == plVar5) {
LAB_0164f744:
    lVar12 = (long)plVar7 - (long)plVar9 >> 3;
    uVar4 = lVar12 + 1;
    if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = (long)plVar5 - (long)plVar9 >> 2;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (0x7fffffe < (ulong)((long)plVar5 - (long)plVar9 >> 3)) {
      uVar4 = 0xfffffff;
    }
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      pZVar8 = *(Zone **)(this + 0x18);
      uVar6 = uVar4 * 8;
      lVar3 = *(long *)(pZVar8 + 0x10);
      if (uVar6 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar3) ||
          uVar6 - (*(long *)(pZVar8 + 0x18) - lVar3) == 0) {
        *(ulong *)(pZVar8 + 0x10) = lVar3 + uVar6;
      }
      else {
        lVar3 = Zone::NewExpand(pZVar8,uVar6);
      }
    }
    plVar7 = (long *)(lVar3 + lVar12 * 8);
    plVar10 = plVar7 + 1;
    *plVar7 = (long)puVar2;
    plVar9 = *(long **)this;
    plVar5 = *(long **)(this + 8);
    while (plVar5 != plVar9) {
      plVar5 = plVar5 + -1;
      plVar7 = plVar7 + -1;
      *plVar7 = *plVar5;
    }
    *(long **)this = plVar7;
    *(long **)(this + 8) = plVar10;
    *(ulong *)(this + 0x10) = lVar3 + uVar4 * 8;
    return puVar2;
  }
LAB_0164f720:
  *plVar10 = (long)puVar2;
  *(long *)(this + 8) = *(long *)(this + 8) + 8;
  return puVar2;
}

