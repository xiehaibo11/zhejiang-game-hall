
/* v8::internal::wasm::WasmCodeManager::EstimateNativeModuleCodeSize(v8::internal::wasm::WasmModule
   const*, bool) */

long v8::internal::wasm::WasmCodeManager::EstimateNativeModuleCodeSize
               (WasmModule *param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)((*(int *)(*(long *)(param_1 + 0x90) + -0xc) +
                   *(int *)(*(long *)(param_1 + 0x90) + -0x10)) -
                  *(int *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x3c) * 0x20 +
                          0x10));
  }
  lVar1 = 0xac;
  if (!param_2) {
    lVar1 = 0x4c;
  }
  lVar2 = 0xb;
  if (!param_2) {
    lVar2 = 4;
  }
  uVar3 = 0x220;
  if (FLAG_wasm_far_jump_table != '\0') {
    uVar3 = (ulong)(iVar4 * 0x10 + 0x22fU & 0xffffffe0);
  }
  return lVar1 * iVar4 + (long)(int)*(uint *)(param_1 + 0x3c) * 0x2ee +
         (ulong)(iVar4 * 4 + 0x1fU & 0xffffffe0) + lVar5 * lVar2 + uVar3;
}

