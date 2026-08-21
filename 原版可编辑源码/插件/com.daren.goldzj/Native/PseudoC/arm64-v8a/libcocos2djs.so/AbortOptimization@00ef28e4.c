
/* v8::internal::OptimizedCompilationInfo::AbortOptimization(v8::internal::BailoutReason) */

void __thiscall
v8::internal::OptimizedCompilationInfo::AbortOptimization
          (OptimizedCompilationInfo *this,OptimizedCompilationInfo param_2)

{
  if (this[0x50] == (OptimizedCompilationInfo)0x0) {
    this[0x50] = param_2;
  }
  *(uint *)this = *(uint *)this | 4;
  return;
}

