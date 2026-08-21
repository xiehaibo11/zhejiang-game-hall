
/* v8::internal::wasm::AnalyzeLoopAssignmentForTesting(v8::internal::Zone*, unsigned long, unsigned
   char const*, unsigned char const*) */

undefined8
v8::internal::wasm::AnalyzeLoopAssignmentForTesting
          (Zone *param_1,ulong param_2,uchar *param_3,uchar *param_4)

{
  undefined8 uVar1;
  undefined **local_68;
  uchar *puStack_60;
  uchar *local_58;
  uchar *puStack_50;
  undefined4 local_48;
  undefined4 local_40;
  ulong local_38;
  undefined8 uStack_30;
  void *local_28;
  
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (void *)0x0;
  local_68 = &PTR__Decoder_01cbc3a8;
  puStack_60 = param_3;
  local_58 = param_3;
  puStack_50 = param_4;
  uVar1 = WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::AnalyzeLoopAssignment
                    ((Decoder *)&local_68,param_3,(uint)param_2,param_1);
  if ((local_38 & 1) != 0) {
    local_68 = &PTR__Decoder_01cbc3a8;
    operator_delete(local_28);
  }
  return uVar1;
}

