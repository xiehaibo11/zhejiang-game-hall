
/* v8::internal::wasm::StreamingDecoder::DecodingState::ReadBytes(v8::internal::wasm::StreamingDecoder*,
   v8::internal::Vector<unsigned char const>) */

size_t v8::internal::wasm::StreamingDecoder::DecodingState::ReadBytes
                 (long *param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  size_t __n;
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)(*param_1 + 0x20))();
  __n = auVar1._8_8_ - param_1[1];
  if (param_4 <= __n) {
    __n = param_4;
  }
  memcpy((void *)(auVar1._0_8_ + param_1[1]),param_3,__n);
  param_1[1] = __n + param_1[1];
  return __n;
}

