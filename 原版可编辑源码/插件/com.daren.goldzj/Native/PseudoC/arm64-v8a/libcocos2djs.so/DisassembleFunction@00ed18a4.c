
/* v8::debug::WasmScript::DisassembleFunction(int) const */

void v8::debug::WasmScript::DisassembleFunction(int param_1)

{
  ulong in_x1;
  int in_w3;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar1 = **(long **)(*(long *)((*(ulong *)(ulong)(uint)param_1 & 0xffffffff00000000 |
                                (ulong)*(uint *)(*(ulong *)(ulong)(uint)param_1 + 0x27)) + 3) + 0x18
                     );
  puVar2 = *(undefined8 **)(lVar1 + 0xe0);
  uStack_18 = puVar2[1];
  local_20 = *puVar2;
  internal::wasm::DisassembleWasmFunction
            (*(wasm **)(lVar1 + 200),(WasmModule *)&local_20,(ModuleWireBytes *)(in_x1 & 0xffffffff)
             ,in_w3);
  return;
}

