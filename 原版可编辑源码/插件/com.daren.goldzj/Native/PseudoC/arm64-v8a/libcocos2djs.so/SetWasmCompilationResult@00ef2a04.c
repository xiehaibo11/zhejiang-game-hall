
/* v8::internal::OptimizedCompilationInfo::SetWasmCompilationResult(std::__ndk1::unique_ptr<v8::internal::wasm::WasmCompilationResult,
   std::__ndk1::default_delete<v8::internal::wasm::WasmCompilationResult> >) */

void __thiscall
v8::internal::OptimizedCompilationInfo::SetWasmCompilationResult
          (OptimizedCompilationInfo *this,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  pvVar3 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = uVar2;
  if (pvVar3 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar3 + 0x70);
    *(undefined8 *)((long)pvVar3 + 0x70) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar3 + 0x60);
    *(undefined8 *)((long)pvVar3 + 0x60) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar3 + 0x50);
    *(undefined8 *)((long)pvVar3 + 0x50) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(pvVar3);
    return;
  }
  return;
}

