
/* v8::internal::wasm::StreamingDecoder::StreamingDecoder(std::__ndk1::unique_ptr<v8::internal::wasm::StreamingProcessor,
   std::__ndk1::default_delete<v8::internal::wasm::StreamingProcessor> >) */

void __thiscall
v8::internal::wasm::StreamingDecoder::StreamingDecoder(StreamingDecoder *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  *(undefined8 *)this = uVar2;
  puVar1 = operator_new(0x18);
  puVar1[2] = 0;
  *puVar1 = &PTR__DecodingState_01cca260;
  puVar1[1] = 0;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x28] = (StreamingDecoder)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  return;
}

