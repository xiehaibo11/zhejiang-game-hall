
/* v8::internal::compiler::ExecuteInterpreterEntryCompilation(v8::internal::wasm::WasmEngine*,
   v8::internal::wasm::CompilationEnv*, v8::internal::wasm::FunctionBody const&, int,
   v8::internal::Counters*, v8::internal::wasm::WasmFeatures*) */

void __thiscall
v8::internal::compiler::ExecuteInterpreterEntryCompilation
          (compiler *this,WasmEngine *param_1,CompilationEnv *param_2,FunctionBody *param_3,
          int param_4,Counters *param_5,WasmFeatures *param_6)

{
  ulong uVar1;
  long lVar2;
  Signature *pSVar3;
  undefined8 *in_x8;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined3 uStack_194;
  undefined **local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_168;
  ulong local_160;
  ulong local_158;
  void *local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  Counters *local_138;
  undefined8 uStack_130;
  long *local_128;
  Zone *pZStack_120;
  long local_110;
  long local_108;
  undefined8 local_100;
  Zone *pZStack_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  Zone *pZStack_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  Zone *pZStack_b8;
  Zone aZStack_b0 [64];
  long local_70;
  
  pSVar3 = (Signature *)(ulong)(uint)param_4;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  Zone::Zone(aZStack_b0,(AccountingAllocator *)(this + 0x58),
             "../../src/compiler/wasm-compiler.cc:6915");
  if (param_1 == (WasmEngine *)0x0) {
    uStack_148 = 0;
  }
  else {
    uStack_148 = *(undefined8 *)param_1;
  }
  uStack_178 = *(undefined8 *)(param_2 + 0x18);
  local_188 = *(undefined8 *)(param_2 + 0x10);
  local_170 = *(undefined4 *)(param_2 + 8);
  uStack_130 = *(undefined8 *)param_2;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = (void *)0x0;
  local_140 = *(undefined4 *)(param_1 + 0x20);
  local_190 = &PTR__WasmFullDecoder_01cc3be8;
  local_128 = &local_110;
  local_100 = 0;
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_180 = local_188;
  local_138 = param_5;
  pZStack_120 = aZStack_b0;
  pZStack_f8 = aZStack_b0;
  pZStack_d8 = aZStack_b0;
  pZStack_b8 = aZStack_b0;
  wasm::
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
  Decode((WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
          *)&local_190);
  uVar1 = local_160 >> 1 & 0x7f;
  if ((local_160 & 1) != 0) {
    uVar1 = local_158;
  }
  if (uVar1 == 0) {
    CompileWasmInterpreterEntry
              (this,param_1 + 0x20,(WasmFeatures *)((ulong)param_3 & 0xffffffff),
               (uint)*(undefined8 *)param_2,pSVar3);
    in_x8[1] = uStack_210;
    *in_x8 = local_218;
    in_x8[3] = uStack_200;
    in_x8[2] = local_208;
    in_x8[7] = uStack_1e0;
    in_x8[6] = local_1e8;
    in_x8[9] = uStack_1d0;
    in_x8[8] = local_1d8;
    in_x8[5] = uStack_1f0;
    in_x8[4] = local_1f8;
    in_x8[0xb] = uStack_1c0;
    in_x8[10] = local_1c8;
    in_x8[0xd] = uStack_1b0;
    in_x8[0xc] = local_1b8;
    in_x8[0xf] = uStack_1a0;
    in_x8[0xe] = local_1a8;
    *(uint *)((long)in_x8 + 0x83) = CONCAT31(uStack_194,local_198._3_1_);
    *(undefined4 *)(in_x8 + 0x10) = local_198;
  }
  else {
    *(undefined4 *)(in_x8 + 8) = 0;
    in_x8[0xf] = 0;
    *(undefined2 *)((long)in_x8 + 0x84) = 0;
    in_x8[5] = 0;
    in_x8[4] = 0;
    in_x8[7] = 0;
    in_x8[6] = 0;
    in_x8[1] = 0;
    *in_x8 = 0;
    in_x8[3] = 0;
    in_x8[2] = 0;
    in_x8[10] = 0;
    in_x8[9] = 0;
    in_x8[0xc] = 0;
    in_x8[0xb] = 0;
    in_x8[0xe] = 0;
    in_x8[0xd] = 0;
    *(undefined4 *)(in_x8 + 0x10) = 0xffffffff;
    *(undefined1 *)((long)in_x8 + 0x86) = 0;
  }
  if (local_d0 != 0) {
    local_c8 = local_d0;
  }
  if (local_f0 != 0) {
    local_e8 = local_f0;
  }
  if (local_110 != 0) {
    local_108 = local_110;
  }
  local_190 = &PTR__Decoder_01cbc3a8;
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  Zone::~Zone(aZStack_b0);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

