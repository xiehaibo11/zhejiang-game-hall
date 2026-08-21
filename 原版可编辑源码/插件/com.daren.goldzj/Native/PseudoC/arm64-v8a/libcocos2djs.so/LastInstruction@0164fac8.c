
/* v8::internal::compiler::MoveOptimizer::LastInstruction(v8::internal::compiler::InstructionBlock
   const*) const */

undefined8 __thiscall
v8::internal::compiler::MoveOptimizer::LastInstruction
          (MoveOptimizer *this,InstructionBlock *param_1)

{
  ulong uVar1;
  
  uVar1 = ((long)*(int *)(param_1 + 0x74) + *(long *)(*(long *)(this + 8) + 0xb0)) - 1;
  return *(undefined8 *)
          (*(long *)(*(long *)(*(long *)(this + 8) + 0x88) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
          (uVar1 & 0x1ff) * 8);
}

