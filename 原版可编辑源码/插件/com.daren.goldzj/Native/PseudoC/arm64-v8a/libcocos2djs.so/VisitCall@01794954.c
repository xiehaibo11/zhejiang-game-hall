
/* v8::internal::compiler::MemoryOptimizer::VisitCall(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::VisitCall
          (MemoryOptimizer *this,Node *param_1,AllocationState *param_2)

{
  long lVar1;
  
  lVar1 = CallDescriptorOf(*(Operator **)param_1);
  if ((*(byte *)(lVar1 + 0x48) >> 4 & 1) == 0) {
    param_2 = *(AllocationState **)(this + 0xd8);
  }
  EnqueueUses(this,param_1,param_2);
  return;
}

