
/* v8::internal::OptimizedCompilationInfo::SetTracingFlags(bool) */

void __thiscall
v8::internal::OptimizedCompilationInfo::SetTracingFlags(OptimizedCompilationInfo *this,bool param_1)

{
  if (param_1) {
    if (FLAG_trace_turbo != '\0') {
      *(uint *)this = *(uint *)this | 0x2000;
    }
    if (FLAG_trace_turbo_graph != '\0') {
      *(uint *)this = *(uint *)this | 0x4000;
    }
    if (FLAG_trace_turbo_scheduled != '\0') {
      *(uint *)this = *(uint *)this | 0x8000;
    }
    if (FLAG_trace_turbo_alloc != '\0') {
      *(uint *)this = *(uint *)this | 0x10000;
    }
    if (FLAG_trace_heap_broker != '\0') {
      *(uint *)this = *(uint *)this | 0x20000;
    }
  }
  return;
}

