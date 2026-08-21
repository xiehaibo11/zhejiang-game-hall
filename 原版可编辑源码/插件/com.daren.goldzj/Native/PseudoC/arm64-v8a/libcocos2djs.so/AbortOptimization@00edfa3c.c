
/* v8::internal::OptimizedCompilationJob::AbortOptimization(v8::internal::BailoutReason) */

undefined8 v8::internal::OptimizedCompilationJob::AbortOptimization(long param_1)

{
  OptimizedCompilationInfo::AbortOptimization(*(OptimizedCompilationInfo **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 8) = 4;
  return 1;
}

