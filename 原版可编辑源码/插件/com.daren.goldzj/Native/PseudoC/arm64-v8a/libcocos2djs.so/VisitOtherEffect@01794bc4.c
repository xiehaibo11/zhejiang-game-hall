
/* v8::internal::compiler::MemoryOptimizer::VisitOtherEffect(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void v8::internal::compiler::MemoryOptimizer::VisitOtherEffect
               (Node *param_1,AllocationState *param_2)

{
  AllocationState *in_x2;
  
  EnqueueUses((MemoryOptimizer *)param_1,(Node *)param_2,in_x2);
  return;
}

