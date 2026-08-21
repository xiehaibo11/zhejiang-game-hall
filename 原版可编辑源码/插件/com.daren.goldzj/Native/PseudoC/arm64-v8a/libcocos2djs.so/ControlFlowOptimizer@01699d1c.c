
/* v8::internal::compiler::ControlFlowOptimizer::ControlFlowOptimizer(v8::internal::compiler::Graph*,
   v8::internal::compiler::CommonOperatorBuilder*, v8::internal::compiler::MachineOperatorBuilder*,
   v8::internal::TickCounter*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::ControlFlowOptimizer::ControlFlowOptimizer
          (ControlFlowOptimizer *this,Graph *param_1,CommonOperatorBuilder *param_2,
          MachineOperatorBuilder *param_3,TickCounter *param_4,Zone *param_5)

{
  *(Graph **)this = param_1;
  *(CommonOperatorBuilder **)(this + 8) = param_2;
  *(MachineOperatorBuilder **)(this + 0x10) = param_3;
  *(Zone **)(this + 0x38) = param_5;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(Zone **)(this + 0x58) = param_5;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x68),param_1,2);
  *(Zone **)(this + 0x70) = param_5;
  *(TickCounter **)(this + 0x78) = param_4;
  return;
}

