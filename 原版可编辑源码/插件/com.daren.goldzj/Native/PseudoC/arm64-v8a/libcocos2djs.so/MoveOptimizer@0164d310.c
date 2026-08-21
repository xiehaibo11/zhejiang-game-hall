
/* v8::internal::compiler::MoveOptimizer::MoveOptimizer(v8::internal::Zone*,
   v8::internal::compiler::InstructionSequence*) */

void __thiscall
v8::internal::compiler::MoveOptimizer::MoveOptimizer
          (MoveOptimizer *this,Zone *param_1,InstructionSequence *param_2)

{
  *(Zone **)this = param_1;
  *(InstructionSequence **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(Zone **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(Zone **)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(Zone **)(this + 0x68) = param_1;
  return;
}

