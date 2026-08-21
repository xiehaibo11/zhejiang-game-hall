
/* v8::internal::compiler::TurboJsonFile::TurboJsonFile(v8::internal::OptimizedCompilationInfo*,
   unsigned int) */

void __thiscall
v8::internal::compiler::TurboJsonFile::TurboJsonFile
          (TurboJsonFile *this,OptimizedCompilationInfo *param_1,uint param_2)

{
  void *pvVar1;
  compiler *this_00;
  long lVar2;
  undefined4 in_w3;
  char *in_x4;
  long local_38;
  
  this_00 = (compiler *)(ulong)param_2;
  lVar2 = *(long *)(this_00 + 0x90);
  if (*(long *)(this_00 + 0x90) == 0) {
    GetVisualizerLogFileName(this_00,FLAG_trace_turbo_path,(char *)0x0,"json",in_x4);
    pvVar1 = *(void **)(this_00 + 0x90);
    *(long *)(this_00 + 0x90) = local_38;
    lVar2 = local_38;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      lVar2 = *(long *)(this_00 + 0x90);
    }
  }
  FUN_016cafe8(this,param_1 + 8,lVar2,in_w3);
  lVar2 = *(long *)param_1;
  *(long *)this = lVar2;
  *(undefined8 *)(this + *(long *)(lVar2 + -0x18)) = *(undefined8 *)(param_1 + 0x28);
  return;
}

