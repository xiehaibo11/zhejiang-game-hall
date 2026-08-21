
/* v8::internal::compiler::TurboJsonFile::TurboJsonFile(v8::internal::OptimizedCompilationInfo*,
   unsigned int) */

void __thiscall
v8::internal::compiler::TurboJsonFile::TurboJsonFile
          (TurboJsonFile *this,OptimizedCompilationInfo *param_1,uint param_2)

{
  void *pvVar1;
  char *in_x4;
  long lVar2;
  long local_18;
  
  *(undefined ***)(this + 0xb0) = &PTR__ios_base_01caa698;
  lVar2 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x90) == 0) {
    GetVisualizerLogFileName((compiler *)param_1,FLAG_trace_turbo_path,(char *)0x0,"json",in_x4);
    pvVar1 = *(void **)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = local_18;
    lVar2 = local_18;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      lVar2 = *(long *)(param_1 + 0x90);
    }
  }
  FUN_016cafe8(this,&PTR_construction_vtable_24__01ccd030,lVar2,param_2);
  *(undefined8 *)this = 0x1cccff0;
  *(undefined8 *)(this + 0xb0) = 0x1ccd018;
  return;
}

