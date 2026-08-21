
/* v8::internal::compiler::MemoryOptimizer::VisitLoadField(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::VisitLoadField
          (MemoryOptimizer *this,Node *param_1,AllocationState *param_2)

{
  MemoryLowering::ReduceLoadField((MemoryLowering *)(this + 0x40),param_1);
  EnqueueUses(this,param_1,param_2);
  return;
}

