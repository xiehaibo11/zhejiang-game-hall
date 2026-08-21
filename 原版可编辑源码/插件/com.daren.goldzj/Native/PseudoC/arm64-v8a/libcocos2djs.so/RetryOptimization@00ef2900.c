
/* v8::internal::OptimizedCompilationInfo::RetryOptimization(v8::internal::BailoutReason) */

void __thiscall
v8::internal::OptimizedCompilationInfo::RetryOptimization
          (OptimizedCompilationInfo *this,OptimizedCompilationInfo param_2)

{
  if (((byte)*this >> 2 & 1) == 0) {
    this[0x50] = param_2;
  }
  return;
}

