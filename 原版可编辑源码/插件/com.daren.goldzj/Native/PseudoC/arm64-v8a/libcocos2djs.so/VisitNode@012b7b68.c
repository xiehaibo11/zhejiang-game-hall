
/* v8::internal::compiler::ScheduleEarlyNodeVisitor::VisitNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ScheduleEarlyNodeVisitor::VisitNode
          (ScheduleEarlyNodeVisitor *this,Node *param_1)

{
  long *plVar1;
  long lVar2;
  Node *pNVar3;
  long *plVar4;
  
  plVar1 = (long *)(*(long *)(*(long *)this + 0xb0) +
                   ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10);
  if (*(int *)((long)plVar1 + 0xc) == 2) {
    lVar2 = Schedule::block(*(Schedule **)(this + 8),param_1);
    *plVar1 = lVar2;
    if (FLAG_trace_turbo_scheduler != '\0') {
      PrintF("Fixing #%d:%s minimum_block = id:%d, dominator_depth = %d\n",
             (ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_1 + 8),
             (ulong)*(uint *)(lVar2 + 0xa0),(ulong)*(uint *)(lVar2 + 0xc));
    }
  }
  if (*plVar1 != *(long *)(*(long *)(this + 8) + 0x68)) {
    for (plVar4 = *(long **)(param_1 + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      pNVar3 = (Node *)(plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3);
      if ((*(uint *)(plVar4 + 2) & 1) == 0) {
        pNVar3 = *(Node **)pNVar3;
      }
      if (*(int *)(*(long *)(*(long *)this + 0xb0) +
                   ((ulong)*(uint *)(pNVar3 + 0x14) & 0xffffff) * 0x10 + 0xc) != 0) {
        PropagateMinimumPositionToNode(this,(BasicBlock *)*plVar1,pNVar3);
      }
    }
  }
  return;
}

