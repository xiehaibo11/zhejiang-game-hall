
/* v8::internal::compiler::InstructionScheduler::ScheduleGraphNode::AddSuccessor(v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*)
    */

void __thiscall
v8::internal::compiler::InstructionScheduler::ScheduleGraphNode::AddSuccessor
          (ScheduleGraphNode *this,ScheduleGraphNode *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x10);
  uVar1 = 0;
  if (*(long *)(this + 0x18) - lVar2 != 0) {
    uVar1 = (*(long *)(this + 0x18) - lVar2) * 0x40 - 1;
  }
  uVar3 = *(long *)(this + 0x40) + *(long *)(this + 0x38);
  if (uVar1 == uVar3) {
    std::__ndk1::
    deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                *)(this + 8));
    lVar2 = *(long *)(this + 0x10);
    uVar3 = *(long *)(this + 0x38) + *(long *)(this + 0x40);
  }
  *(ScheduleGraphNode **)(*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8)
       = param_1;
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return;
}

