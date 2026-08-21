
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddBranch(v8::internal::compiler::Node*,
   v8::internal::compiler::BasicBlock*, v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::AddBranch
          (BasicBlockUpdater *this,Node *param_1,BasicBlock *param_2,BasicBlock *param_3)

{
  if (*(int *)(this + 0x98) == 0) {
    CopyForChange(this);
  }
  Schedule::AddBranch(*(Schedule **)(this + 0x28),*(BasicBlock **)(this + 8),param_1,param_2,param_3
                     );
  *(undefined8 *)(this + 8) = 0;
  return;
}

