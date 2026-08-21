
/* v8::internal::compiler::InstructionScheduler::ScheduleGraphNode::ScheduleGraphNode(v8::internal::Zone*,
   v8::internal::compiler::Instruction*) */

void __thiscall
v8::internal::compiler::InstructionScheduler::ScheduleGraphNode::ScheduleGraphNode
          (ScheduleGraphNode *this,Zone *param_1,Instruction *param_2)

{
  undefined4 uVar1;
  
  *(Instruction **)this = param_2;
  *(Zone **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(Zone **)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  uVar1 = GetInstructionLatency(param_2);
  *(undefined4 *)(this + 0x5c) = uVar1;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  return;
}

