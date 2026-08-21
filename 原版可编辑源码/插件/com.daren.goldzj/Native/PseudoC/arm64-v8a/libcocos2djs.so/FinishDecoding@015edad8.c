
/* v8::internal::wasm::ModuleDecoder::FinishDecoding(bool) */

void __thiscall v8::internal::wasm::ModuleDecoder::FinishDecoding(ModuleDecoder *this,bool param_1)

{
  undefined8 *in_x8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  ModuleDecoderImpl::FinishDecoding(SUB81(*(undefined8 *)(this + 8),0));
  in_x8[1] = uStack_48;
  *in_x8 = local_50;
  *(undefined4 *)(in_x8 + 2) = local_40;
  in_x8[5] = local_28;
  in_x8[4] = uStack_30;
  in_x8[3] = local_38;
  return;
}

