
/* v8::internal::compiler::ScheduleLateNodeVisitor::VisitNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ScheduleLateNodeVisitor::VisitNode
          (ScheduleLateNodeVisitor *this,Node *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  short sVar4;
  undefined8 *puVar5;
  ulong uVar6;
  BasicBlock *pBVar7;
  BasicBlock *pBVar8;
  BasicBlock *pBVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  uVar6 = Schedule::IsScheduled(*(Schedule **)(this + 0x10),param_1);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("Scheduling #%d:%s\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8));
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    pBVar7 = (BasicBlock *)0x0;
  }
  else {
    pBVar8 = (BasicBlock *)0x0;
    plVar10 = *(long **)(param_1 + 0x18);
    do {
      while( true ) {
        uVar3 = *(uint *)(plVar10 + 2);
        plVar13 = (long *)*plVar10;
        plVar1 = plVar10 + (ulong)(uVar3 >> 1) * 3 + 3;
        lVar12 = 0x10;
        if ((uVar3 & 1) != 0) {
          lVar12 = 0x20;
        }
        plVar11 = plVar1;
        if ((uVar3 & 1) == 0) {
          plVar11 = (long *)*plVar1;
        }
        if (*(int *)(*(long *)(*(long *)(this + 8) + 0xb0) +
                     ((ulong)*(uint *)((long)plVar11 + 0x14) & 0xffffff) * 0x10 + 0xc) != 0) break;
LAB_012b8070:
        pBVar7 = pBVar8;
        plVar10 = plVar13;
        if (plVar13 == (long *)0x0) goto LAB_012b808c;
      }
      pBVar7 = (BasicBlock *)
               GetBlockForUse(this,plVar10,(long)plVar1 + (ulong)(uVar3 >> 1) * 8 + lVar12);
      if (pBVar8 != (BasicBlock *)0x0) {
        if (pBVar7 != (BasicBlock *)0x0) {
          pBVar8 = (BasicBlock *)BasicBlock::GetCommonDominator(pBVar8,pBVar7);
        }
        goto LAB_012b8070;
      }
      pBVar8 = pBVar7;
      plVar10 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
LAB_012b808c:
  lVar12 = *(long *)(*(long *)(*(long *)(this + 8) + 0xb0) +
                    ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10);
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("Schedule late of #%d:%s is id:%d at loop depth %d, minimum = id:%d\n",
           (ulong)*(uint *)(param_1 + 0x14) & 0xffffff,*(undefined8 *)(*(long *)param_1 + 8),
           (ulong)*(uint *)(pBVar7 + 0xa0),(ulong)*(uint *)(pBVar7 + 0x30),
           (ulong)*(uint *)(lVar12 + 0xa0));
  }
  pBVar8 = pBVar7;
  if (*(long *)(pBVar7 + 0x28) == 0) {
    pBVar8 = *(BasicBlock **)(pBVar7 + 0x20);
    if (pBVar8 != (BasicBlock *)0x0) {
      if (((int)*(uint *)pBVar8 < 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(*(long *)(this + 8) + 0xd8) + 0x20) +
                               (ulong)*(uint *)pBVar8 * 0x30 + 8), plVar10 == (long *)0x0)) {
        plVar10 = (long *)(*(long *)(*(long *)(this + 8) + 0xd8) + 0x88);
      }
      puVar2 = (undefined8 *)plVar10[1];
      puVar5 = (undefined8 *)*plVar10;
      do {
        if (puVar5 == puVar2) goto LAB_012b80d8;
        pBVar9 = (BasicBlock *)BasicBlock::GetCommonDominator(pBVar7,(BasicBlock *)*puVar5);
        puVar5 = puVar5 + 1;
      } while (pBVar9 == pBVar7);
    }
  }
  else {
LAB_012b80d8:
    pBVar8 = *(BasicBlock **)(pBVar8 + 0x10);
    if ((pBVar8 != (BasicBlock *)0x0) && (*(int *)(lVar12 + 0xc) <= *(int *)(pBVar8 + 0xc))) {
      do {
        pBVar7 = pBVar8;
        if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("  hoisting #%d:%s to block id:%d\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)param_1 + 8),(ulong)*(uint *)(pBVar7 + 0xa0));
        }
        pBVar8 = pBVar7;
        if (*(long *)(pBVar7 + 0x28) == 0) {
          pBVar8 = *(BasicBlock **)(pBVar7 + 0x20);
          if (pBVar8 == (BasicBlock *)0x0) goto LAB_012b8224;
          if (((int)*(uint *)pBVar8 < 0) ||
             (plVar10 = *(long **)(*(long *)(*(long *)(*(long *)(this + 8) + 0xd8) + 0x20) +
                                   (ulong)*(uint *)pBVar8 * 0x30 + 8), plVar10 == (long *)0x0)) {
            plVar10 = (long *)(*(long *)(*(long *)(this + 8) + 0xd8) + 0x88);
          }
          puVar2 = (undefined8 *)plVar10[1];
          puVar5 = (undefined8 *)*plVar10;
          while (puVar5 != puVar2) {
            pBVar9 = (BasicBlock *)BasicBlock::GetCommonDominator(pBVar7,(BasicBlock *)*puVar5);
            puVar5 = puVar5 + 1;
            if (pBVar9 != pBVar7) goto LAB_012b8224;
          }
        }
        pBVar8 = *(BasicBlock **)(pBVar8 + 0x10);
        if ((pBVar8 == (BasicBlock *)0x0) || (*(int *)(pBVar8 + 0xc) < *(int *)(lVar12 + 0xc)))
        goto LAB_012b8224;
      } while( true );
    }
  }
  if ((*(byte *)(*(long *)(this + 8) + 0x18) >> 1 & 1) != 0) {
    pBVar7 = (BasicBlock *)SplitNode(this,pBVar7,param_1);
  }
LAB_012b8224:
  sVar4 = *(short *)(*(long *)param_1 + 0x10);
  if (sVar4 != 1) {
    if (sVar4 == 0x28) {
      ScheduleRegion(this,pBVar7,param_1);
      return;
    }
    if (sVar4 != 10) {
      ScheduleNode(this,pBVar7,param_1);
      return;
    }
  }
  Scheduler::FuseFloatingControl(*(Scheduler **)(this + 8),pBVar7,param_1);
  return;
}

