
/* v8::internal::wasm::WasmCodeManager::EstimateNativeModuleCodeSize(int, int, int, bool) */

long v8::internal::wasm::WasmCodeManager::EstimateNativeModuleCodeSize
               (int param_1,int param_2,int param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0xac;
  if (!param_4) {
    lVar1 = 0x4c;
  }
  lVar2 = 0xb;
  if (!param_4) {
    lVar2 = 4;
  }
  uVar3 = 0x220;
  if (FLAG_wasm_far_jump_table != '\0') {
    uVar3 = (ulong)(param_1 * 0x10 + 0x22fU & 0xffffffe0);
  }
  return (ulong)(param_1 * 4 + 0x1fU & 0xffffffe0) + (long)param_2 * 0x2ee + lVar1 * param_1 +
         lVar2 * param_3 + uVar3;
}

