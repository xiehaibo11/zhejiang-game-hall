
/* v8::internal::Deoptimizer::EnsureCodeForDeoptimizationEntries(v8::internal::Isolate*) */

void v8::internal::Deoptimizer::EnsureCodeForDeoptimizationEntries(Isolate *param_1)

{
  EnsureCodeForDeoptimizationEntry((Deoptimizer *)param_1,0);
  EnsureCodeForDeoptimizationEntry((Deoptimizer *)param_1,2);
  EnsureCodeForDeoptimizationEntry((Deoptimizer *)param_1,1);
  return;
}

