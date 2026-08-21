
/* v8::internal::compiler::DecompressionOptimizer::DecompressionOptimizer(v8::internal::Zone*,
   v8::internal::compiler::Graph*, v8::internal::compiler::CommonOperatorBuilder*,
   v8::internal::compiler::MachineOperatorBuilder*) */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::DecompressionOptimizer
          (DecompressionOptimizer *this,Zone *param_1,Graph *param_2,CommonOperatorBuilder *param_3,
          MachineOperatorBuilder *param_4)

{
  *(Graph **)this = param_2;
  *(CommonOperatorBuilder **)(this + 8) = param_3;
  *(MachineOperatorBuilder **)(this + 0x10) = param_4;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x18),param_2,3);
  *(Zone **)(this + 0x40) = param_1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Zone **)(this + 0x60) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Zone **)(this + 0x88) = param_1;
  return;
}

