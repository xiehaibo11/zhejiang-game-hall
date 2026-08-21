
/* v8::internal::wasm::DecodeWasmFunctionForTesting(v8::internal::wasm::WasmFeatures const&,
   v8::internal::Zone*, v8::internal::wasm::ModuleWireBytes const&, v8::internal::wasm::WasmModule
   const*, unsigned char const*, unsigned char const*, v8::internal::Counters*) */

void __thiscall
v8::internal::wasm::DecodeWasmFunctionForTesting
          (wasm *this,WasmFeatures *param_1,Zone *param_2,ModuleWireBytes *param_3,
          WasmModule *param_4,uchar *param_5,uchar *param_6,Counters *param_7)

{
  __shared_weak_count *p_Var1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined7 uVar12;
  undefined1 uVar13;
  undefined7 uVar14;
  __shared_weak_count *this_00;
  undefined8 *in_x8;
  long lVar15;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128 [2];
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 local_110;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  WasmModule *local_f8;
  uchar *puStack_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  __shared_weak_count *local_b0;
  uchar *local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_5 < param_4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","function_start <= function_end");
  }
  iVar2 = (int)param_6 + 0x4b8;
  if (param_3[0x178] != (ModuleWireBytes)0x0) {
    iVar2 = (int)param_6 + 0x490;
  }
  Histogram::AddSample(iVar2);
  if ((ulong)((long)param_5 - (long)param_4) < 0x74cbb2) {
    local_e0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = (void *)0x0;
    uStack_108 = 0x1cc9e28;
    uVar12 = uStack_108;
    local_101 = 0;
    uVar11 = local_101;
    uStack_100 = SUB87(param_4,0);
    uStack_f9 = (undefined1)((ulong)param_4 >> 0x38);
    local_78 = FLAG_assume_asmjs_origin;
    local_c0 = *(undefined4 *)this;
    local_b8 = 0;
    local_b0 = (__shared_weak_count *)0x0;
    local_a0 = 1;
    local_9c = 0;
    uStack_98 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    local_f8 = param_4;
    puStack_f0 = param_5;
    local_a8 = param_6;
    local_158 = operator_new(0x20);
    local_158[1] = 0;
    *local_158 = 0;
    local_158[3] = 0;
    local_158[2] = 0;
    ModuleDecoderImpl::DecodeSingleFunction
              (&uStack_150,&uStack_108,param_1,param_2,param_3,&local_158);
    uVar10 = local_130;
    uVar9 = uStack_138;
    uVar8 = local_140;
    uVar7 = uStack_150;
    puVar6 = local_158;
    uStack_138 = 0;
    local_130 = 0;
    local_140 = 0;
    local_158 = (undefined8 *)0x0;
    uStack_150 = 0;
    *in_x8 = uVar7;
    *(undefined4 *)(in_x8 + 1) = local_148;
    in_x8[4] = uVar10;
    in_x8[3] = uVar9;
    in_x8[2] = uVar8;
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
    uStack_108 = uVar12;
    local_101 = uVar11;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    this_00 = local_b0;
    if (local_b0 != (__shared_weak_count *)0x0) {
      p_Var1 = local_b0 + 8;
      do {
        lVar15 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*(long *)local_b0 + 0x10))(local_b0);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    uStack_108 = 0x1cbc3a8;
    local_101 = 0;
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
  }
  else {
    WasmError::WasmError
              ((WasmError *)local_128,0,"size > maximum function size (%zu): %zu",0x74cbb1,
               (long)param_5 - (long)param_4);
    uVar7 = local_110;
    uVar14 = uStack_117;
    uVar13 = uStack_118;
    uVar12 = uStack_11f;
    uVar11 = local_120;
    *in_x8 = 0;
    local_110 = 0;
    uStack_108 = uStack_11f;
    local_101 = uStack_118;
    uStack_100 = uStack_117;
    local_120 = 0;
    uStack_11f = 0;
    uStack_118 = 0;
    uStack_117 = 0;
    *(undefined4 *)(in_x8 + 1) = local_128[0];
    *(undefined1 *)(in_x8 + 2) = uVar11;
    in_x8[3] = CONCAT71(uVar14,uVar13);
    in_x8[4] = uVar7;
    *(ulong *)((long)in_x8 + 0x11) = CONCAT17(uVar13,uVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

