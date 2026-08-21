
/* v8::internal::compiler::BasicBlock::LoopContains(v8::internal::compiler::BasicBlock*) const */

bool __thiscall
v8::internal::compiler::BasicBlock::LoopContains(BasicBlock *this,BasicBlock *param_1)

{
  if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 4) <= *(int *)(param_1 + 4))) {
    return *(int *)(param_1 + 4) < *(int *)(*(long *)(this + 0x28) + 4);
  }
  return false;
}

