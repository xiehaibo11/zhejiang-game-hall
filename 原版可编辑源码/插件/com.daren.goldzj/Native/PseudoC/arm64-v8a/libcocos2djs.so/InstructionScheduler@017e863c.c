
/* WARNING: Removing unreachable block (ram,0x017e86e0) */
/* WARNING: Removing unreachable block (ram,0x017e86e4) */
/* v8::internal::compiler::InstructionScheduler::InstructionScheduler(v8::internal::Zone*,
   v8::internal::compiler::InstructionSequence*) */

void __thiscall
v8::internal::compiler::InstructionScheduler::InstructionScheduler
          (InstructionScheduler *this,Zone *param_1,InstructionSequence *param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(Zone **)this = param_1;
  *(InstructionSequence **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(Zone **)(this + 0x28) = param_1;
  *(Zone **)(this + 0x50) = param_1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(InstructionScheduler **)(this + 0x68) = this + 0x70;
  *(Zone **)(this + 0x78) = param_1;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x88] = (InstructionScheduler)0x0;
  this[0x90] = (InstructionScheduler)0x0;
  if (FLAG_turbo_stress_instruction_scheduling != '\0') {
    base::RandomNumberGenerator::SetSeed((RandomNumberGenerator *)&local_38,(long)FLAG_random_seed);
    *(undefined8 *)(this + 0xa0) = local_28;
    *(undefined8 *)(this + 0x98) = uStack_30;
    *(undefined8 *)(this + 0x90) = local_38;
    if (this[0x88] == (InstructionScheduler)0x0) {
      this[0x88] = (InstructionScheduler)0x1;
    }
  }
  return;
}

