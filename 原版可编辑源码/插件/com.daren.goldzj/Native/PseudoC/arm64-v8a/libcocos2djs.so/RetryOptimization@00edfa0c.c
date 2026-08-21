
/* v8::internal::OptimizedCompilationJob::RetryOptimization(v8::internal::BailoutReason) */

undefined8 v8::internal::OptimizedCompilationJob::RetryOptimization(long param_1)

{
  OptimizedCompilationInfo::RetryOptimization(*(OptimizedCompilationInfo **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 8) = 4;
  return 1;
}

