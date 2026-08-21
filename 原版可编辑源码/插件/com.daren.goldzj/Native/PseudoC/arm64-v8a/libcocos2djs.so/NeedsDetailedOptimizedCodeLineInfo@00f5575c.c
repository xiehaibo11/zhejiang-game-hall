
/* v8::internal::Isolate::NeedsDetailedOptimizedCodeLineInfo() const */

bool __thiscall v8::internal::Isolate::NeedsDetailedOptimizedCodeLineInfo(Isolate *this)

{
  bool bVar1;
  ulong uVar2;
  
  if ((((((FLAG_trace_turbo == '\0' && FLAG_trace_deopt == '\0') && FLAG_trace_turbo_graph == '\0')
        && FLAG_turbo_profiling == '\0') && FLAG_perf_prof == '\0') &&
      (this[0xb7fc] == (Isolate)0x0)) && (*(char *)(*(long *)(this + 0xb6c8) + 8) == '\0')) {
    uVar2 = Logger::is_logging(*(Logger **)(this + 0x9558));
    bVar1 = true;
    if (((uVar2 & 1) == 0) && (FLAG_trace_maps == '\0')) {
      bVar1 = this[0xb82a] != (Isolate)0x0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

