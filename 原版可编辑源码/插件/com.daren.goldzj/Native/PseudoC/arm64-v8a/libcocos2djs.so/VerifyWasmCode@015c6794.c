
/* v8::internal::wasm::VerifyWasmCode(v8::internal::AccountingAllocator*,
   v8::internal::wasm::WasmFeatures const&, v8::internal::wasm::WasmModule const*,
   v8::internal::wasm::WasmFeatures*, v8::internal::wasm::FunctionBody const&) */

void __thiscall
v8::internal::wasm::VerifyWasmCode
          (wasm *this,AccountingAllocator *param_1,WasmFeatures *param_2,WasmModule *param_3,
          WasmFeatures *param_4,FunctionBody *param_5)

{
  long lVar1;
  undefined8 *in_x8;
  _func_decltype_nullptr *local_1a8 [2];
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined **local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_150;
  ulong local_148;
  undefined8 uStack_140;
  void *local_138;
  WasmFeatures *pWStack_130;
  undefined4 local_128;
  WasmModule *local_120;
  undefined8 uStack_118;
  long *local_110;
  Zone *pZStack_108;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  Zone *pZStack_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  Zone *pZStack_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  Zone *pZStack_a0;
  Zone aZStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Zone::Zone(aZStack_98,(AccountingAllocator *)this,"../../src/wasm/function-body-decoder.cc:49");
  uStack_118 = *(undefined8 *)param_4;
  uStack_160 = *(undefined8 *)(param_4 + 0x18);
  local_170 = *(undefined8 *)(param_4 + 0x10);
  local_158 = *(undefined4 *)(param_4 + 8);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = (void *)0x0;
  local_150 = 0;
  local_178 = &PTR__WasmFullDecoder_01cc3be8;
  local_128 = *(undefined4 *)param_1;
  local_110 = &local_f8;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_168 = local_170;
  pWStack_130 = param_2;
  local_120 = param_3;
  pZStack_108 = aZStack_98;
  pZStack_e0 = aZStack_98;
  pZStack_c0 = aZStack_98;
  pZStack_a0 = aZStack_98;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
  Decode((WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
          *)&local_178);
  local_1a8[0] = (_func_decltype_nullptr *)0x0;
  Decoder::toResult<decltype(nullptr),decltype(nullptr)>((Decoder *)&local_178,local_1a8);
  *in_x8 = 0;
  *(undefined4 *)(in_x8 + 1) = local_198;
  in_x8[4] = local_180;
  in_x8[3] = uStack_188;
  in_x8[2] = local_190;
  if (local_b8 != 0) {
    local_b0 = local_b8;
  }
  if (local_d8 != 0) {
    local_d0 = local_d8;
  }
  if (local_f8 != 0) {
    local_f0 = local_f8;
  }
  local_178 = &PTR__Decoder_01cbc3a8;
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  Zone::~Zone(aZStack_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

