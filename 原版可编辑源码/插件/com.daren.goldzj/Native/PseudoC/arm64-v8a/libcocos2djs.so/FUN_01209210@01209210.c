
void FUN_01209210(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
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
  return;
}

