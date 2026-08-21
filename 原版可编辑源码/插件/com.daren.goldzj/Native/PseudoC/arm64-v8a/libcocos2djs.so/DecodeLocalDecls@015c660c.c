
/* v8::internal::wasm::DecodeLocalDecls(v8::internal::wasm::WasmFeatures const&,
   v8::internal::wasm::BodyLocalDecls*, unsigned char const*, unsigned char const*) */

bool v8::internal::wasm::DecodeLocalDecls
               (WasmFeatures *param_1,BodyLocalDecls *param_2,uchar *param_3,uchar *param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined **local_78;
  uchar *local_70;
  uchar *local_68;
  uchar *puStack_60;
  int local_58;
  undefined4 local_50;
  ulong local_48;
  undefined8 uStack_40;
  void *local_38;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  local_78 = &PTR__Decoder_01cbc3a8;
  local_70 = param_3;
  local_68 = param_3;
  puStack_60 = param_4;
  uVar2 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
                    (param_1,(Decoder *)&local_78,(Signature *)0x0,(ZoneVector *)(param_2 + 8));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(int *)param_2 = local_58 + ((int)local_68 - (int)local_70);
  }
  if ((local_48 & 1) != 0) {
    local_78 = &PTR__Decoder_01cbc3a8;
    operator_delete(local_38);
  }
  return bVar1;
}

