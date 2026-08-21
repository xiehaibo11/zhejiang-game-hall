
/* v8::internal::FeedbackVector::SetOptimizationMarker(v8::internal::OptimizationMarker) */

void __thiscall
v8::internal::FeedbackVector::SetOptimizationMarker(FeedbackVector *this,int param_2)

{
  *(int *)(*(long *)this + 7) = param_2 << 1;
  return;
}

