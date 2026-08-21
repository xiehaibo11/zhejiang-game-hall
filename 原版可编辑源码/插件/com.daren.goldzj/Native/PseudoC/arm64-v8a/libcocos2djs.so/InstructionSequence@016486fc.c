
/* v8::internal::compiler::InstructionSequence::InstructionSequence(v8::internal::Isolate*,
   v8::internal::Zone*, v8::internal::ZoneVector<v8::internal::compiler::InstructionBlock*>*) */

void __thiscall
v8::internal::compiler::InstructionSequence::InstructionSequence
          (InstructionSequence *this,Isolate *param_1,Zone *param_2,ZoneVector *param_3)

{
  *(Isolate **)this = param_1;
  *(Zone **)(this + 8) = param_2;
  *(ZoneVector **)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(InstructionSequence **)(this + 0x20) = this + 0x28;
  *(Zone **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(Zone **)(this + 0x50) = param_2;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(Zone **)(this + 0x78) = param_2;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(Zone **)(this + 0xa0) = param_2;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(Zone **)(this + 0xc0) = param_2;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(InstructionSequence **)(this + 0x40) = this + 0x48;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(Zone **)(this + 0xf8) = param_2;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(Zone **)(this + 0x118) = param_2;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(Zone **)(this + 0x140) = param_2;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(Zone **)(this + 0x168) = param_2;
  *(undefined8 *)(this + 0x170) = 0;
  ComputeAssemblyOrder(this);
  return;
}

