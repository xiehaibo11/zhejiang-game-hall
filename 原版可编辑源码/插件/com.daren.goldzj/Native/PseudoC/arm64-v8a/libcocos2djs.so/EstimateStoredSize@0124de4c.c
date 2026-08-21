
/* v8::internal::wasm::EstimateStoredSize(v8::internal::wasm::WasmModule const*) */

long v8::internal::wasm::EstimateStoredSize(WasmModule *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)param_1;
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = 0;
    if (plVar1[5] != 0) {
      lVar2 = (plVar1[2] - plVar1[5]) + -0x18;
    }
    lVar2 = *plVar1 + lVar2;
  }
  return (((((((((((((((((((*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) + lVar2 +
                          *(long *)(param_1 + 0x60)) - *(long *)(param_1 + 0x58)) +
                        *(long *)(param_1 + 0x78)) - *(long *)(param_1 + 0x70)) +
                      *(long *)(param_1 + 0x90)) - *(long *)(param_1 + 0x88)) +
                    *(long *)(param_1 + 0xa8)) - *(long *)(param_1 + 0xa0)) +
                  *(long *)(param_1 + 0xc0)) - *(long *)(param_1 + 0xb8)) +
                *(long *)(param_1 + 0xd8)) - *(long *)(param_1 + 0xd0)) + *(long *)(param_1 + 0xf0))
             - *(long *)(param_1 + 0xe8)) + *(long *)(param_1 + 0x108)) - *(long *)(param_1 + 0x100)
           ) + *(long *)(param_1 + 0x120)) - *(long *)(param_1 + 0x118)) + 0x1a0;
}

