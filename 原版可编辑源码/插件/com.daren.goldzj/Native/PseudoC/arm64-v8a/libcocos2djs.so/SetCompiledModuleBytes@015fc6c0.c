
/* v8::internal::wasm::StreamingDecoder::SetCompiledModuleBytes(v8::internal::Vector<unsigned char
   const>) */

undefined8
v8::internal::wasm::StreamingDecoder::SetCompiledModuleBytes
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return 1;
}

