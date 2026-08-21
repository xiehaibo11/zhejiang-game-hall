
/* v8::WasmStreaming::SetCompiledModuleBytes(unsigned char const*, unsigned long) */

undefined8 __thiscall
v8::WasmStreaming::SetCompiledModuleBytes(WasmStreaming *this,uchar *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  uVar1 = internal::wasm::IsSupportedVersion((wasm *)param_1,param_2);
  if ((uVar1 & 1) != 0) {
    uVar2 = internal::wasm::StreamingDecoder::SetCompiledModuleBytes
                      (*(undefined8 *)(lVar3 + 8),param_1,param_2);
    return uVar2;
  }
  return 0;
}

