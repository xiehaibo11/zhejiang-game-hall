
/* v8::internal::compiler::Schedule::AddGoto(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::Schedule::AddGoto(Schedule *this,BasicBlock *param_1,BasicBlock *param_2)

{
  *(undefined4 *)(param_1 + 0x34) = 1;
  BasicBlock::AddSuccessor(param_1,param_2);
  BasicBlock::AddPredecessor(param_2,param_1);
  return;
}

