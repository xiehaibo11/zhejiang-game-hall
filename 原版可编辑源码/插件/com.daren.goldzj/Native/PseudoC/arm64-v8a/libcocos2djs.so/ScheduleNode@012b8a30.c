
/* v8::internal::compiler::ScheduleLateNodeVisitor::ScheduleNode(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::ScheduleNode
          (ScheduleLateNodeVisitor *this,BasicBlock *param_1,Node *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Zone *pZVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  
  Schedule::PlanNode(*(Schedule **)(this + 0x10),param_1,param_2);
  lVar10 = *(long *)(param_1 + 0xa0);
  lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
  if (*(long *)(lVar4 + lVar10 * 8) == 0) {
    pZVar5 = *(Zone **)this;
    puVar3 = *(undefined8 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar3) < 0x20) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar5,0x20);
    }
    else {
      *(undefined8 **)(pZVar5 + 0x10) = puVar3 + 4;
    }
    uVar6 = *(undefined8 *)this;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = uVar6;
    *(undefined8 **)(*(long *)(*(long *)(this + 8) + 0x20) + lVar10 * 8) = puVar3;
    lVar4 = *(long *)(*(long *)(this + 8) + 0x20);
  }
  plVar11 = *(long **)(lVar4 + lVar10 * 8);
  puVar3 = (undefined8 *)plVar11[1];
  if (puVar3 == (undefined8 *)plVar11[2]) {
    lVar4 = (long)puVar3 - *plVar11 >> 3;
    uVar1 = lVar4 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar10 = plVar11[2] - *plVar11;
    uVar8 = lVar10 >> 2;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x7fffffe < (ulong)(lVar10 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar10 = 0;
    }
    else {
      pZVar5 = (Zone *)plVar11[3];
      uVar8 = uVar1 * 8;
      lVar10 = *(long *)(pZVar5 + 0x10);
      if (uVar8 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar10) ||
          uVar8 - (*(long *)(pZVar5 + 0x18) - lVar10) == 0) {
        *(ulong *)(pZVar5 + 0x10) = lVar10 + uVar8;
      }
      else {
        lVar10 = Zone::NewExpand(pZVar5,uVar8);
      }
    }
    puVar3 = (undefined8 *)(lVar10 + lVar4 * 8);
    puVar7 = puVar3 + 1;
    *puVar3 = param_2;
    puVar2 = (undefined8 *)*plVar11;
    puVar9 = (undefined8 *)plVar11[1];
    while (puVar9 != puVar2) {
      puVar9 = puVar9 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar9;
    }
    *plVar11 = (long)puVar3;
    plVar11[1] = (long)puVar7;
    plVar11[2] = lVar10 + uVar1 * 8;
  }
  else {
    *puVar3 = param_2;
    plVar11[1] = plVar11[1] + 8;
  }
  Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_2,4);
  return;
}

