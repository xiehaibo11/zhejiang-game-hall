
void FUN_012091ac(__shared_weak_count *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_01cbc3d0;
  puVar1 = *(void **)(param_1 + 0x88);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  v8::internal::wasm::WasmInterpreter::~WasmInterpreter((WasmInterpreter *)(param_1 + 0x28));
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}

