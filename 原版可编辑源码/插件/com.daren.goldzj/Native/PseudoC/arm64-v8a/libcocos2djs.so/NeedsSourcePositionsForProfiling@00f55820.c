
/* v8::internal::Isolate::NeedsSourcePositionsForProfiling() const */

bool __thiscall v8::internal::Isolate::NeedsSourcePositionsForProfiling(Isolate *this)

{
  ulong uVar1;
  
  if (((((((FLAG_trace_turbo == '\0' && FLAG_trace_deopt == '\0') && FLAG_trace_turbo_graph == '\0')
         && FLAG_turbo_profiling == '\0') && FLAG_perf_prof == '\0') &&
       (this[0xb7fc] == (Isolate)0x0)) && (*(char *)(*(long *)(this + 0xb6c8) + 8) == '\0')) &&
     (uVar1 = Logger::is_logging(*(Logger **)(this + 0x9558)), (uVar1 & 1) == 0)) {
    return FLAG_trace_maps != '\0';
  }
  return true;
}

