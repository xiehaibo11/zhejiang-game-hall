
/* v8::internal::compiler::CodeGenerator::AssembleGaps(v8::internal::compiler::Instruction*) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleGaps(CodeGenerator *this,Instruction *param_1)

{
  if (*(ParallelMove **)(param_1 + 8) != (ParallelMove *)0x0) {
    GapResolver::Resolve((GapResolver *)(this + 0x288),*(ParallelMove **)(param_1 + 8));
  }
  if (*(ParallelMove **)(param_1 + 0x10) != (ParallelMove *)0x0) {
    GapResolver::Resolve((GapResolver *)(this + 0x288),*(ParallelMove **)(param_1 + 0x10));
    return;
  }
  return;
}

