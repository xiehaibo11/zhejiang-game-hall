
/* v8::internal::wasm::StackEffect(v8::internal::wasm::WasmModule const*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*, unsigned char const*, unsigned char
   const*) */

undefined8
v8::internal::wasm::StackEffect
          (WasmModule *param_1,Signature *param_2,uchar *param_3,uchar *param_4)

{
  undefined8 uVar1;
  undefined **local_90;
  uchar *puStack_88;
  uchar *local_80;
  uchar *puStack_78;
  undefined4 local_70;
  undefined4 local_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  WasmModule *pWStack_48;
  undefined4 local_40;
  undefined4 *local_38;
  Signature *pSStack_30;
  undefined8 local_28;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_40 = 0xfff;
  local_38 = local_8;
  local_90 = &PTR__Decoder_01cc9558;
  local_28 = 0;
  puStack_88 = param_3;
  local_80 = param_3;
  puStack_78 = param_4;
  pWStack_48 = param_1;
  pSStack_30 = param_2;
  uVar1 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::StackEffect
                    ((WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0> *)&local_90,param_3)
  ;
  local_90 = &PTR__Decoder_01cbc3a8;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  return uVar1;
}

