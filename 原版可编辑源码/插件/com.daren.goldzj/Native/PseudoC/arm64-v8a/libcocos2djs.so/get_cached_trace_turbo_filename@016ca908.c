
/* v8::internal::compiler::get_cached_trace_turbo_filename(v8::internal::OptimizedCompilationInfo*)
    */

long v8::internal::compiler::get_cached_trace_turbo_filename(OptimizedCompilationInfo *param_1)

{
  long lVar1;
  char *in_x4;
  void *pvVar2;
  long local_8;
  
  lVar1 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x90) == 0) {
    GetVisualizerLogFileName((compiler *)param_1,FLAG_trace_turbo_path,(char *)0x0,"json",in_x4);
    pvVar2 = *(void **)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = local_8;
    lVar1 = local_8;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
      lVar1 = *(long *)(param_1 + 0x90);
    }
  }
  return lVar1;
}

