
/* v8::internal::wasm::CompileLazy(v8::internal::Isolate*, v8::internal::wasm::NativeModule*, int)
    */

undefined4 v8::internal::wasm::CompileLazy(Isolate *param_1,NativeModule *param_2,int param_3)

{
  Mutex *this;
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  WasmCode *this_00;
  ulong uVar13;
  void *pvVar14;
  WasmFeatures *pWVar15;
  long lVar16;
  ulong uVar17;
  Counters *pCVar18;
  undefined4 uVar19;
  WasmFeatures *pWVar20;
  WasmEngine *pWVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  void *local_250;
  undefined8 uStack_248;
  void *local_240;
  undefined8 uStack_238;
  void *local_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 local_218 [2];
  undefined8 local_210;
  ulong local_208;
  void *local_200;
  long local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  int local_170;
  char local_16c;
  NativeModuleModificationScope aNStack_168 [8];
  undefined4 local_160 [2];
  undefined4 local_158 [2];
  undefined8 local_150;
  TimedHistogram *local_148;
  Isolate *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  long local_128;
  long lStack_120;
  undefined4 local_118 [2];
  undefined4 local_110;
  undefined3 uStack_10c;
  Isolate *local_108;
  __shared_weak_count *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  CompilationEnv aCStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  byte local_a0;
  undefined4 local_9f;
  undefined3 uStack_9b;
  ulong local_98;
  void *pvStack_90;
  long local_88;
  
  lVar10 = tpidr_el0;
  local_88 = *(long *)(lVar10 + 0x28);
  local_160[0] = *(undefined4 *)(param_2 + 0xc0);
  pWVar20 = *(WasmFeatures **)(param_2 + 200);
  pCVar18 = *(Counters **)(param_1 + 0x9520);
  TimedHistogram::Start
            ((TimedHistogram *)(pCVar18 + 0xbd8),(ElapsedTimer *)(pCVar18 + 0xc08),
             *(Isolate **)(*(long *)(pCVar18 + 0xbf8) + 0x10));
  NativeModuleModificationScope::NativeModuleModificationScope(aNStack_168,param_2);
  lVar12 = base::TimeTicks::HighResolutionNow();
  lVar23 = *(long *)(param_2 + 0x100);
  uVar11 = FUN_015e17e0(pWVar20,*(undefined1 *)(lVar23 + 0x18),local_160,param_3);
  cVar8 = (char)uVar11;
  local_170 = param_3;
  local_16c = cVar8;
  NativeModule::CreateCompilationEnv();
  pWVar21 = *(WasmEngine **)(param_1 + 0xc770);
  this = (Mutex *)(lVar23 + 0x100);
  base::Mutex::Lock(this);
  local_108 = *(Isolate **)(lVar23 + 0x148);
  local_100 = *(__shared_weak_count **)(lVar23 + 0x150);
  if (local_100 != (__shared_weak_count *)0x0) {
    p_Var1 = local_100 + 8;
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar9) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  base::Mutex::Unlock(this);
  pWVar15 = (WasmFeatures *)(lVar23 + 0x140);
  WasmCompilationUnit::ExecuteCompilation
            ((WasmCompilationUnit *)&local_170,pWVar21,aCStack_d8,(shared_ptr *)&local_108,pCVar18,
             pWVar15);
  p_Var1 = local_100;
  if (local_100 != (__shared_weak_count *)0x0) {
    p_Var2 = local_100 + 8;
    do {
      lVar16 = *(long *)p_Var2;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar9) {
        *(long *)p_Var2 = lVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*(long *)local_100 + 0x10))(local_100);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_1f8 == 0) && ((FLAG_wasm_lazy_validation & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",&BYTE_01a5437c);
  }
  lVar22 = *(long *)(pWVar20 + 0x88);
  lVar16 = (long)param_3;
  if (local_1f8 != 0) {
    WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)&local_108);
    local_230 = local_188;
    local_240 = local_198;
    local_250 = local_1a8;
    uStack_278 = uStack_1d0;
    local_280 = local_1d8;
    uStack_268 = uStack_1c0;
    uStack_270 = local_1c8;
    local_1a8 = (void *)0x0;
    local_198 = (void *)0x0;
    uStack_298 = uStack_1f0;
    local_2a0 = local_1f8;
    uStack_288 = uStack_1e0;
    uStack_290 = local_1e8;
    local_188 = (void *)0x0;
    uStack_258 = uStack_1b0;
    local_260 = local_1b8;
    uStack_248 = uStack_1a0;
    uStack_238 = uStack_190;
    uStack_228 = uStack_180;
    uStack_220 = uStack_178;
    this_00 = (WasmCode *)NativeModule::AddCompiledCode(param_2,&local_2a0);
    pvVar14 = local_230;
    local_230 = (void *)0x0;
    if (pvVar14 != (void *)0x0) {
      operator_delete__(pvVar14);
    }
    pvVar14 = local_240;
    local_240 = (void *)0x0;
    if (pvVar14 != (void *)0x0) {
      operator_delete__(pvVar14);
    }
    pvVar14 = local_250;
    local_250 = (void *)0x0;
    if (pvVar14 != (void *)0x0) {
      operator_delete__(pvVar14);
    }
    uVar13 = WasmCode::ShouldBeLogged(param_1);
    if ((uVar13 & 1) != 0) {
      WasmCode::LogCode(this_00,param_1);
    }
    NEON_ucvtf((ulong)*(uint *)(lVar22 + lVar16 * 0x20 + 0x14));
    lVar16 = base::TimeTicks::HighResolutionNow();
    local_b0 = lVar16 - lVar12;
    base::TimeDelta::InSecondsF((TimeDelta *)&local_b0);
    StatsCounterThreadSafe::Increment((StatsCounterThreadSafe *)(pCVar18 + 0x20a0));
    Histogram::AddSample((int)pCVar18 + 0x698);
    cVar7 = (char)(uVar11 >> 8);
    if ((FLAG_wasm_lazy_compilation == '\0') &&
       ((FLAG_asm_wasm_lazy_compilation == '\0' || (pWVar20[0x178] == (WasmFeatures)0x0)))) {
      if ((((((byte)local_160[0] >> 4 & 1) != 0) &&
           (lVar12 = *(long *)(pWVar20 + 0x130), lVar12 != 0)) &&
          (uVar13 = (ulong)(uint)(param_3 - *(int *)(pWVar20 + 0x3c)),
          uVar17 = (*(long *)(pWVar20 + 0x138) - lVar12) * -0x5555555555555555,
          uVar13 <= uVar17 && uVar17 - uVar13 != 0)) &&
         ((cVar8 < cVar7 && (*(char *)(lVar12 + uVar13 * 3) == '\x01')))) {
LAB_015e1400:
        local_b0 = CONCAT44(uVar11 >> 8,param_3) & 0xffffffffff;
        FUN_015e9c50(lVar23,0,0,&local_b0,1,0,0);
      }
    }
    else if (cVar8 < cVar7) goto LAB_015e1400;
    WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_108);
    uVar19 = 1;
    goto LAB_015e16d8;
  }
  local_100 = (__shared_weak_count *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_108 = param_1;
  base::Mutex::Lock(this);
  plVar4 = *(long **)(lVar23 + 0x148);
  p_Var1 = *(__shared_weak_count **)(lVar23 + 0x150);
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar9) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  base::Mutex::Unlock(this);
  auVar24 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar22 + lVar16 * 0x20 + 0x10));
  local_128 = auVar24._0_8_;
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      lVar12 = *(long *)p_Var2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar9) {
        *(long *)p_Var2 = lVar12 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  lVar12 = *(long *)(param_1 + 0xc770);
  lStack_120 = local_128 + auVar24._8_8_;
  local_118[0] = local_160[0];
  puVar3 = (undefined8 *)(*(long *)(pWVar20 + 0x88) + lVar16 * 0x20);
  uStack_138 = *puVar3;
  local_130 = *(undefined4 *)(puVar3 + 2);
  local_110 = 0;
  uStack_10c = 0;
  local_140 = (Isolate *)0x0;
  local_148 = (TimedHistogram *)(pCVar18 + 0x1120);
  if (pWVar20[0x178] != (WasmFeatures)0x0) {
    local_148 = (TimedHistogram *)(pCVar18 + 0x10f0);
  }
  local_150 = 0;
  TimedHistogram::Start(local_148,(ElapsedTimer *)&local_150,(Isolate *)0x0);
  local_158[0] = 0;
  VerifyWasmCode((wasm *)(lVar12 + 0x58),(AccountingAllocator *)local_118,pWVar20,
                 (WasmModule *)local_158,(WasmFeatures *)&uStack_138,pWVar15);
  local_110 = local_9f;
  uStack_10c = uStack_9b;
  TimedHistogram::Stop(local_148,(ElapsedTimer *)&local_150,local_140);
  uVar13 = (ulong)(local_a0 >> 1);
  if ((local_a0 & 1) != 0) {
    uVar13 = local_98;
  }
  local_b0._0_7_ = CONCAT43(CONCAT31(uStack_10c,local_110._3_1_),(int3)local_110);
  uVar17 = local_b0;
  if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",&BYTE_01a543ae);
  }
  uVar5 = **(undefined8 **)(param_2 + 0xe0);
  uVar6 = (*(undefined8 **)(param_2 + 0xe0))[1];
  local_218[0] = local_a8;
  local_210 = 0;
  local_208 = 0;
  local_200 = (void *)0x0;
  if ((local_a0 & 1) == 0) {
    local_210._0_5_ = CONCAT41((undefined4)local_b0,local_a0);
    local_210 = CONCAT44(CONCAT31(uStack_10c,local_110._3_1_),(undefined4)local_210);
    local_208 = local_98;
    local_200 = pvStack_90;
    local_b0 = uVar17;
  }
  else {
    if (0xffffffffffffffef < local_98) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (local_98 < 0x17) {
      pvVar14 = (void *)((long)&local_210 + 1);
      local_210 = (ulong)(byte)((int)local_98 << 1);
      if (local_98 != 0) goto LAB_015e1674;
    }
    else {
      uVar13 = local_98 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = operator_new(uVar13);
      local_210 = uVar13 | 1;
      local_208 = local_98;
      local_200 = pvVar14;
LAB_015e1674:
      memcpy(pvVar14,pvStack_90,local_98);
    }
    *(undefined1 *)((long)pvVar14 + local_98) = 0;
  }
  FUN_015e18d0(&local_108,uVar5,uVar6,lVar22 + lVar16 * 0x20,pWVar20,local_218);
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(pvStack_90);
  }
  ErrorThrower::~ErrorThrower((ErrorThrower *)&local_108);
  uVar19 = 0;
LAB_015e16d8:
  pvVar14 = local_188;
  local_188 = (void *)0x0;
  if (pvVar14 != (void *)0x0) {
    operator_delete__(pvVar14);
  }
  pvVar14 = local_198;
  local_198 = (void *)0x0;
  if (pvVar14 != (void *)0x0) {
    operator_delete__(pvVar14);
  }
  pvVar14 = local_1a8;
  local_1a8 = (void *)0x0;
  if (pvVar14 != (void *)0x0) {
    operator_delete__(pvVar14);
  }
  NativeModuleModificationScope::~NativeModuleModificationScope(aNStack_168);
  TimedHistogram::Stop
            ((TimedHistogram *)(pCVar18 + 0xbd8),(ElapsedTimer *)(pCVar18 + 0xc08),
             *(Isolate **)(*(long *)(pCVar18 + 0xbf8) + 0x10));
  if (*(long *)(lVar10 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}

