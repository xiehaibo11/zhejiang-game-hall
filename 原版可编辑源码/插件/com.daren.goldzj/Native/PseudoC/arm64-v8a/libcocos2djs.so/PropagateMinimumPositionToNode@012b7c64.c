
/* v8::internal::compiler::ScheduleEarlyNodeVisitor::PropagateMinimumPositionToNode(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ScheduleEarlyNodeVisitor::PropagateMinimumPositionToNode
          (ScheduleEarlyNodeVisitor *this,BasicBlock *param_1,Node *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  Node *pNVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = *(uint *)(param_2 + 0x14);
  lVar7 = *(long *)(*(long *)this + 0xb0);
  iVar4 = *(int *)(lVar7 + ((ulong)uVar3 & 0xffffff) * 0x10 + 0xc);
  if (iVar4 != 2) {
    if (iVar4 == 3) {
      pNVar5 = (Node *)NodeProperties::GetControlInput(param_2,0);
      PropagateMinimumPositionToNode(this,param_1,pNVar5);
    }
    plVar1 = (long *)(lVar7 + ((ulong)uVar3 & 0xffffff) * 0x10);
    if (*(int *)(*plVar1 + 0xc) < *(int *)(param_1 + 0xc)) {
      *plVar1 = (long)param_1;
      lVar7 = *(long *)(this + 0x18);
      uVar2 = 0;
      if (*(long *)(this + 0x20) - lVar7 != 0) {
        uVar2 = (*(long *)(this + 0x20) - lVar7) * 0x40 - 1;
      }
      uVar6 = *(long *)(this + 0x48) + *(long *)(this + 0x40);
      if (uVar2 == uVar6) {
        std::__ndk1::
        deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                    *)(this + 0x10));
        lVar7 = *(long *)(this + 0x18);
        uVar6 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
      }
      *(Node **)(*(long *)(lVar7 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
           param_2;
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("Propagating #%d:%s minimum_block = id:%d, dominator_depth = %d\n",
               (ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),*(undefined8 *)(*(long *)param_2 + 8),
               (ulong)*(uint *)(*plVar1 + 0xa0),(ulong)*(uint *)(*plVar1 + 0xc));
        return;
      }
    }
  }
  return;
}

