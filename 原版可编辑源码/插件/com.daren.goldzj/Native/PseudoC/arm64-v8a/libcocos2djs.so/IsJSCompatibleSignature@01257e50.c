
/* v8::internal::wasm::IsJSCompatibleSignature(v8::internal::Signature<v8::internal::wasm::ValueType>
   const*, v8::internal::wasm::WasmFeatures const&) */

undefined8 v8::internal::wasm::IsJSCompatibleSignature(Signature *param_1,WasmFeatures *param_2)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)param_1;
  if (((*(uint *)param_2 >> 7 & 1) == 0) && (1 < uVar2)) {
    return 0;
  }
  pcVar1 = *(char **)(param_1 + 0x10);
  if (pcVar1 != pcVar1 + *(long *)(param_1 + 8) + uVar2) {
    lVar3 = uVar2 + *(long *)(param_1 + 8);
    do {
      if (*pcVar1 == '\x05') {
        return 0;
      }
      if ((*(uint *)param_2 & 0x40) == 0 && *pcVar1 == '\x02') {
        return 0;
      }
      lVar3 = lVar3 + -1;
      pcVar1 = pcVar1 + 1;
    } while (lVar3 != 0);
  }
  return 1;
}

