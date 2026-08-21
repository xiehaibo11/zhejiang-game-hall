
/* v8::internal::wasm::JSToWasmWrapperCompilationUnit::Finalize(v8::internal::Isolate*) */

undefined8 v8::internal::wasm::JSToWasmWrapperCompilationUnit::Finalize(Isolate *param_1)

{
  int iVar1;
  ulong uVar2;
  Isolate *in_x1;
  undefined8 uVar3;
  void *local_18;
  
  iVar1 = OptimizedCompilationJob::FinalizeJob(*(OptimizedCompilationJob **)(param_1 + 0x10),in_x1);
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x28);
    uVar2 = (**(code **)(**(long **)(in_x1 + 0x9558) + 0x88))();
    if (((uVar2 & 1) != 0) || (in_x1[0xb7fc] != (Isolate)0x0)) {
      OptimizedCompilationInfo::GetDebugName();
      FUN_015cb3dc();
      if (local_18 != (void *)0x0) {
        operator_delete__(local_18);
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","status == CompilationJob::SUCCEEDED");
}

