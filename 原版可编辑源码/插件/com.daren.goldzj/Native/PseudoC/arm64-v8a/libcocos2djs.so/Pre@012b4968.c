
/* v8::internal::compiler::PrepareUsesVisitor::Pre(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::PrepareUsesVisitor::Pre(PrepareUsesVisitor *this,Node *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  Node *pNVar5;
  BasicBlock *pBVar6;
  int iVar7;
  long lVar8;
  Zone *this_00;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  Schedule *this_01;
  long lVar15;
  
  lVar15 = *(long *)this;
  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10
                   + 0xc);
  if (*piVar14 != 2) {
    uVar2 = *(ushort *)(*(long *)param_1 + 0x10);
    if (uVar2 < 0x17) {
LAB_012b49d8:
      *piVar14 = 1;
      return;
    }
    if (uVar2 - 0x23 < 2) {
      lVar10 = NodeProperties::GetControlInput(param_1,0);
      bVar3 = *(int *)(*(long *)(lVar15 + 0xb0) +
                       ((ulong)*(uint *)(lVar10 + 0x14) & 0xffffff) * 0x10 + 0xc) != 2;
      iVar7 = 2;
      if (bVar3) {
        iVar7 = 3;
      }
      *piVar14 = iVar7;
      if (bVar3) {
        return;
      }
    }
    else {
      if (1 < uVar2 - 0x32) goto LAB_012b49d8;
      *piVar14 = 2;
    }
  }
  lVar15 = *(long *)this;
  puVar9 = *(undefined8 **)(lVar15 + 0x48);
  if (puVar9 == *(undefined8 **)(lVar15 + 0x50)) {
    lVar10 = (long)puVar9 - *(long *)(lVar15 + 0x40) >> 3;
    uVar4 = lVar10 + 1;
    if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = (long)*(undefined8 **)(lVar15 + 0x50) - *(long *)(lVar15 + 0x40);
    uVar12 = lVar8 >> 2;
    if (uVar4 <= uVar12) {
      uVar4 = uVar12;
    }
    if (0x7fffffe < (ulong)(lVar8 >> 3)) {
      uVar4 = 0xfffffff;
    }
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    else {
      this_00 = *(Zone **)(lVar15 + 0x58);
      uVar12 = uVar4 * 8;
      lVar8 = *(long *)(this_00 + 0x10);
      if (uVar12 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
          uVar12 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar8 + uVar12;
      }
      else {
        lVar8 = Zone::NewExpand(this_00,uVar12);
      }
    }
    puVar9 = (undefined8 *)(lVar8 + lVar10 * 8);
    puVar11 = puVar9 + 1;
    *puVar9 = param_1;
    puVar1 = *(undefined8 **)(lVar15 + 0x40);
    puVar13 = *(undefined8 **)(lVar15 + 0x48);
    while (puVar13 != puVar1) {
      puVar13 = puVar13 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar13;
    }
    *(undefined8 **)(lVar15 + 0x40) = puVar9;
    *(undefined8 **)(lVar15 + 0x48) = puVar11;
    *(ulong *)(lVar15 + 0x50) = lVar8 + uVar4 * 8;
  }
  else {
    *puVar9 = param_1;
    *(long *)(lVar15 + 0x48) = *(long *)(lVar15 + 0x48) + 8;
  }
  uVar4 = Schedule::IsScheduled(*(Schedule **)(this + 8),param_1);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("Scheduling fixed position node #%d:%s\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8));
  }
  this_01 = *(Schedule **)(this + 8);
  if (*(short *)(*(long *)param_1 + 0x10) == 0x32) {
    pBVar6 = *(BasicBlock **)(this_01 + 0x68);
  }
  else {
    pNVar5 = (Node *)NodeProperties::GetControlInput(param_1,0);
    pBVar6 = (BasicBlock *)Schedule::block(this_01,pNVar5);
    this_01 = *(Schedule **)(this + 8);
  }
  Schedule::AddNode(this_01,pBVar6,param_1);
  return;
}

