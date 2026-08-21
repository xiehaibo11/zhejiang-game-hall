
/* v8::internal::compiler::BlockAssessments::PerformMoves(v8::internal::compiler::Instruction
   const*) */

void __thiscall
v8::internal::compiler::BlockAssessments::PerformMoves(BlockAssessments *this,Instruction *param_1)

{
  PerformParallelMoves(this,*(ParallelMove **)(param_1 + 8));
  PerformParallelMoves(this,*(ParallelMove **)(param_1 + 0x10));
  return;
}

