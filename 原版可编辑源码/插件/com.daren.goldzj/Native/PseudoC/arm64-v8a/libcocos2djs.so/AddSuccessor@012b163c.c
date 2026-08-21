
/* v8::internal::compiler::Schedule::AddSuccessor(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::Schedule::AddSuccessor
          (Schedule *this,BasicBlock *param_1,BasicBlock *param_2)

{
  BasicBlock::AddSuccessor(param_1,param_2);
  BasicBlock::AddPredecessor(param_2,param_1);
  return;
}

