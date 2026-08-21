
/* v8::internal::compiler::LiveRangeConnector::CanEagerlyResolveControlFlow(v8::internal::compiler::InstructionBlock
   const*) const */

bool __thiscall
v8::internal::compiler::LiveRangeConnector::CanEagerlyResolveControlFlow
          (LiveRangeConnector *this,InstructionBlock *param_1)

{
  if (*(long *)(param_1 + 0x28) - (long)*(int **)(param_1 + 0x20) == 4) {
    return **(int **)(param_1 + 0x20) + 1 == *(int *)(param_1 + 100);
  }
  return false;
}

