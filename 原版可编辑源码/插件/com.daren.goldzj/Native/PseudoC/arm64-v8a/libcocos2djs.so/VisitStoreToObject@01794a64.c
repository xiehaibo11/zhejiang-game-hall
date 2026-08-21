
/* v8::internal::compiler::MemoryOptimizer::VisitStoreToObject(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::VisitStoreToObject
          (MemoryOptimizer *this,Node *param_1,AllocationState *param_2)

{
  MemoryLowering::ReduceStoreToObject((MemoryLowering *)(this + 0x40),param_1,param_2);
  EnqueueUses(this,param_1,param_2);
  return;
}

