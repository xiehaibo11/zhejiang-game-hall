
/* v8::internal::wasm::DecodeWasmModule(v8::internal::wasm::WasmFeatures const&, unsigned char
   const*, unsigned char const*, bool, v8::internal::wasm::ModuleOrigin, v8::internal::Counters*,
   v8::internal::AccountingAllocator*) */

void __thiscall
v8::internal::wasm::DecodeWasmModule
          (undefined8 *param_1_00,wasm *this,ulong param_1,ulong param_2,undefined8 param_5,
          char param_4,AccountingAllocator *param_7,bool param_8)

{
  __shared_weak_count *p_Var1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  undefined1 uVar10;
  undefined7 uVar11;
  undefined8 uVar12;
  __shared_weak_count *this_00;
  long lVar13;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  byte local_160;
  undefined4 local_15f;
  undefined3 uStack_15b;
  ulong local_158;
  undefined8 uStack_150;
  undefined4 local_148 [2];
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined8 local_130;
  undefined8 local_128;
  TimedHistogram *local_120;
  Isolate *local_118;
  undefined4 local_110;
  undefined3 uStack_10c;
  undefined7 local_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  ulong local_f8;
  ulong uStack_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  __shared_weak_count *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  char local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_120 = (TimedHistogram *)(param_7 + 0x10c0);
  if (param_4 != '\0') {
    local_120 = (TimedHistogram *)(param_7 + 0x1090);
  }
  local_128 = 0;
  local_118 = (Isolate *)0x0;
  TimedHistogram::Start(local_120,(ElapsedTimer *)&local_128,(Isolate *)0x0);
  if (param_2 < param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","module_start <= module_end");
  }
  if (param_2 - param_1 >> 0x1e == 0) {
    iVar7 = (int)param_7;
    iVar2 = iVar7 + 0x508;
    if (param_4 != '\0') {
      iVar2 = iVar7 + 0x4e0;
    }
    Histogram::AddSample(iVar2);
    local_e0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = (void *)0x0;
    local_108 = 0x1cc9e28;
    uVar9 = local_108;
    uStack_101 = 0;
    uVar8 = uStack_101;
    uStack_100 = (undefined7)param_1;
    uStack_f9 = (undefined1)(param_1 >> 0x38);
    local_c0 = *(undefined4 *)this;
    local_a0 = 1;
    local_b0 = (__shared_weak_count *)0x0;
    uStack_a8 = 0;
    local_b8 = 0;
    local_78 = param_4;
    if (FLAG_assume_asmjs_origin != '\0') {
      local_78 = '\x01';
    }
    local_9c = 0;
    uStack_98 = 0;
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    local_f8 = param_1;
    uStack_f0 = param_2;
    ModuleDecoderImpl::DecodeModule((Counters *)&local_108,param_7,param_8);
    uVar3 = (ulong)(local_160 >> 1);
    if ((local_160 & 1) != 0) {
      uVar3 = local_158;
    }
    local_110 = local_15f;
    uStack_10c = uStack_15b;
    if (uVar3 == 0) {
      iVar2 = iVar7 + 0x5d0;
      if (param_4 != '\0') {
        iVar2 = iVar7 + 0x5a8;
      }
      Histogram::AddSample(iVar2);
    }
    *param_1_00 = local_178;
    param_1_00[1] = uStack_170;
    *(undefined4 *)(param_1_00 + 2) = local_168;
    *(byte *)(param_1_00 + 3) = local_160;
    param_1_00[4] = local_158;
    param_1_00[5] = uStack_150;
    *(uint *)((long)param_1_00 + 0x1c) = CONCAT31(uStack_10c,local_110._3_1_);
    *(undefined4 *)((long)param_1_00 + 0x19) = local_110;
    local_108 = uVar9;
    uStack_101 = uVar8;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    this_00 = local_b0;
    if (local_b0 != (__shared_weak_count *)0x0) {
      p_Var1 = local_b0 + 8;
      do {
        lVar13 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*(long *)local_b0 + 0x10))(local_b0);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    local_108 = 0x1cbc3a8;
    uStack_101 = 0;
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
  }
  else {
    WasmError::WasmError
              ((WasmError *)local_148,0,"size > maximum module size (%zu): %zu",0x40000000);
    uVar12 = local_130;
    uVar11 = uStack_137;
    uVar10 = uStack_138;
    uVar9 = uStack_13f;
    uVar8 = local_140;
    local_130 = 0;
    *param_1_00 = 0;
    param_1_00[1] = 0;
    local_108 = uStack_13f;
    uStack_101 = uStack_138;
    uStack_100 = uStack_137;
    local_140 = 0;
    uStack_13f = 0;
    uStack_138 = 0;
    uStack_137 = 0;
    *(undefined4 *)(param_1_00 + 2) = local_148[0];
    *(undefined1 *)(param_1_00 + 3) = uVar8;
    param_1_00[4] = CONCAT71(uVar11,uVar10);
    param_1_00[5] = uVar12;
    *(ulong *)((long)param_1_00 + 0x19) = CONCAT17(uVar10,uVar9);
  }
  TimedHistogram::Stop(local_120,(ElapsedTimer *)&local_128,local_118);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

