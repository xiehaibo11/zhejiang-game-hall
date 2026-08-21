
/* v8::internal::wasm::BuildTFGraph(v8::internal::AccountingAllocator*,
   v8::internal::wasm::WasmFeatures const&, v8::internal::wasm::WasmModule const*,
   v8::internal::compiler::WasmGraphBuilder*, v8::internal::wasm::WasmFeatures*,
   v8::internal::wasm::FunctionBody const&, v8::internal::compiler::NodeOriginTable*) */

void __thiscall
v8::internal::wasm::BuildTFGraph
          (wasm *this,AccountingAllocator *param_1,WasmFeatures *param_2,WasmModule *param_3,
          WasmGraphBuilder *param_4,WasmFeatures *param_5,FunctionBody *param_6,
          NodeOriginTable *param_7)

{
  long lVar1;
  undefined8 *in_x8;
  _func_decltype_nullptr *local_1c8 [2];
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_170;
  ulong local_168;
  undefined8 uStack_160;
  void *local_158;
  WasmFeatures *pWStack_150;
  undefined4 local_148;
  WasmGraphBuilder *local_140;
  undefined8 uStack_138;
  long *local_130;
  Zone *pZStack_128;
  WasmModule *local_118;
  undefined4 local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  Zone *pZStack_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  Zone *pZStack_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  Zone *pZStack_b0;
  Zone aZStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Zone::Zone(aZStack_a8,(AccountingAllocator *)this,"../../src/wasm/graph-builder-interface.cc:949")
  ;
  uStack_180 = *(undefined8 *)(param_5 + 0x18);
  local_190 = *(undefined8 *)(param_5 + 0x10);
  local_178 = *(undefined4 *)(param_5 + 8);
  uStack_138 = *(undefined8 *)param_5;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = (void *)0x0;
  local_170 = 0;
  local_148 = *(undefined4 *)param_1;
  local_130 = &local_108;
  local_198 = &PTR_FUN_01cc9768;
  local_110 = 0xffffffff;
  local_f8 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_188 = local_190;
  pWStack_150 = param_2;
  local_140 = param_4;
  pZStack_128 = aZStack_a8;
  local_118 = param_3;
  pZStack_f0 = aZStack_a8;
  pZStack_d0 = aZStack_a8;
  pZStack_b0 = aZStack_a8;
  if (param_6 == (FunctionBody *)0x0) {
    FUN_015cb908(&local_198);
  }
  else {
    compiler::WasmGraphBuilder::AddBytecodePositionDecorator
              ((WasmGraphBuilder *)param_3,(NodeOriginTable *)param_6,(Decoder *)&local_198);
    FUN_015cb908(&local_198);
    compiler::WasmGraphBuilder::RemoveBytecodePositionDecorator((WasmGraphBuilder *)param_3);
  }
  local_1c8[0] = (_func_decltype_nullptr *)0x0;
  Decoder::toResult<decltype(nullptr),decltype(nullptr)>((Decoder *)&local_198,local_1c8);
  *in_x8 = 0;
  *(undefined4 *)(in_x8 + 1) = local_1b8;
  in_x8[4] = local_1a0;
  in_x8[3] = uStack_1a8;
  in_x8[2] = local_1b0;
  if (local_c8 != 0) {
    local_c0 = local_c8;
  }
  if (local_e8 != 0) {
    local_e0 = local_e8;
  }
  if (local_108 != 0) {
    local_100 = local_108;
  }
  local_198 = &PTR__Decoder_01cbc3a8;
  if ((local_168 & 1) != 0) {
    operator_delete(local_158);
  }
  Zone::~Zone(aZStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

