
/* v8::internal::wasm::CompileToNativeModule(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&, v8::internal::wasm::ErrorThrower*,
   std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule const>,
   v8::internal::wasm::ModuleWireBytes const&, v8::internal::Handle<v8::internal::FixedArray>*) */

void __thiscall
v8::internal::wasm::CompileToNativeModule
          (undefined8 *param_1_00,wasm *this,undefined8 param_1,long param_2,long *param_3,
          undefined8 *param_6,undefined8 param_7)

{
  Semaphore *this_00;
  Mutex *this_01;
  __shared_weak_count *p_Var1;
  wasm *pwVar2;
  __shared_weak_count *this_02;
  char cVar3;
  bool bVar4;
  long lVar5;
  NativeModule *pNVar6;
  bool bVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  __shared_weak_count *p_Var11;
  long lVar12;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  void *__src;
  ulong uVar18;
  __shared_weak_count *p_Var19;
  void *local_190;
  ulong uStack_188;
  long local_180;
  __shared_weak_count *p_Stack_178;
  NativeModule *local_170;
  __shared_weak_count *p_Stack_168;
  undefined8 local_158;
  TimedHistogram *local_150;
  Isolate *local_148;
  long alStack_140 [4];
  long *local_120;
  undefined **local_110;
  Semaphore *pSStack_108;
  __shared_weak_count *local_100;
  undefined ***local_f0;
  CanonicalHandleScope aCStack_d8 [104];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pwVar2 = this + 0x9520;
  lVar17 = *param_3;
  local_150 = (TimedHistogram *)(*(long *)pwVar2 + 0x1180);
  if (*(char *)(lVar17 + 0x178) != '\0') {
    local_150 = (TimedHistogram *)(*(long *)pwVar2 + 0x1150);
  }
  local_148 = (Isolate *)0x0;
  local_158 = 0;
  TimedHistogram::Start(local_150,(ElapsedTimer *)&local_158,(Isolate *)0x0);
  if (*(char *)(lVar17 + 0x10) != '\0') {
    Isolate::CountUsage(this,0x32);
  }
  uVar18 = param_6[1];
  if (uVar18 == 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    __src = (void *)*param_6;
    pvVar8 = operator_new__(uVar18);
    memmove(pvVar8,__src,uVar18);
  }
  uVar9 = WasmCodeManager::EstimateNativeModuleCodeSize
                    ((WasmModule *)*param_3,
                     (bool)(FLAG_liftoff & ((WasmModule *)*param_3)[0x178] == (WasmModule)0x0));
  p_Stack_178 = (__shared_weak_count *)param_3[1];
  local_180 = *param_3;
  uVar10 = *(undefined8 *)(this + 0xc770);
  *param_3 = 0;
  param_3[1] = 0;
  WasmEngine::NewNativeModule(&local_170,uVar10,this,param_1,&local_180,uVar9);
  p_Var11 = p_Stack_178;
  if (p_Stack_178 != (__shared_weak_count *)0x0) {
    p_Var19 = p_Stack_178 + 8;
    do {
      lVar15 = *(long *)p_Var19;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
      if (bVar7) {
        *(long *)p_Var19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)p_Stack_178 + 0x10))(p_Stack_178);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
    }
  }
  local_190 = pvVar8;
  uStack_188 = uVar18;
  NativeModule::SetWireBytes(local_170,&local_190);
  pvVar8 = local_190;
  local_190 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  pNVar6 = local_170;
  if (FLAG_wasm_lazy_compilation == '\0') {
    if (FLAG_asm_wasm_lazy_compilation == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *(char *)(lVar17 + 0x178) != '\0';
    }
  }
  else {
    bVar7 = true;
  }
  if ((((FLAG_wasm_lazy_validation != '\0') || (*(char *)(lVar17 + 0x178) != '\0')) ||
      ((bVar7 == false && (((byte)local_170[0xc0] >> 4 & 1) == 0)))) ||
     (FUN_015e373c(lVar17,local_170,*(long *)pwVar2,*(undefined8 *)(this + 0x95d0),param_2,bVar7,1),
     *(int *)(param_2 + 0x10) == 0)) {
    CanonicalHandleScope::CanonicalHandleScope(aCStack_d8,(Isolate *)this);
    p_Var11 = operator_new(0x28);
    *(undefined8 *)(p_Var11 + 0x10) = 0;
    this_00 = (Semaphore *)(p_Var11 + 0x18);
    p_Var19 = p_Var11 + 8;
    *(long *)p_Var19 = 0;
    *(undefined ***)p_Var11 = &PTR____shared_ptr_emplace_01cc99f8;
    base::Semaphore::Semaphore(this_00,0);
    lVar15 = *(long *)(pNVar6 + 0x100);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
      if (bVar4) {
        *(long *)p_Var19 = *(long *)p_Var19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    this_01 = (Mutex *)(lVar15 + 0x158);
    local_f0 = &local_110;
    local_110 = &PTR_FUN_01cc9a30;
    pSStack_108 = this_00;
    local_100 = p_Var11;
    base::Mutex::Lock(this_01);
    uVar18 = *(ulong *)(lVar15 + 0x188);
    if (uVar18 < *(ulong *)(lVar15 + 400)) {
      if (local_f0 == (undefined ***)0x0) {
        *(undefined8 *)(uVar18 + 0x20) = 0;
      }
      else if (&local_110 == local_f0) {
        *(ulong *)(uVar18 + 0x20) = uVar18;
        (*(code *)(*local_f0)[3])();
      }
      else {
        *(undefined ****)(uVar18 + 0x20) = local_f0;
        local_f0 = (undefined ***)0x0;
      }
      *(long *)(lVar15 + 0x188) = *(long *)(lVar15 + 0x188) + 0x30;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
      ::__emplace_back_slow_path<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>
                ((vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
                  *)(lVar15 + 0x180),(function *)&local_110);
    }
    base::Mutex::Unlock(this_01);
    if (&local_110 == local_f0) {
      pcVar14 = (code *)(*local_f0)[4];
LAB_015e1d18:
      (*pcVar14)();
    }
    else if (local_f0 != (undefined ***)0x0) {
      pcVar14 = (code *)(*local_f0)[5];
      goto LAB_015e1d18;
    }
    uVar18 = base::TimeTicks::IsHighResolution();
    if ((uVar18 & 1) != 0) {
      lVar16 = *(long *)pwVar2;
      this_02 = *(__shared_weak_count **)(this + 0x9528);
      if (this_02 != (__shared_weak_count *)0x0) {
        p_Var1 = this_02 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar12 = base::TimeTicks::Now();
      local_120 = (long *)0x0;
      plVar13 = operator_new(0x28);
      *plVar13 = (long)&PTR_FUN_01cc9a78;
      plVar13[1] = lVar12;
      plVar13[2] = lVar16;
      plVar13[3] = (long)this_02;
      if (this_02 != (__shared_weak_count *)0x0) {
        p_Var1 = this_02 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined4 *)(plVar13 + 4) = 0;
      local_120 = plVar13;
      base::Mutex::Lock(this_01);
      if (*(ulong *)(lVar15 + 0x188) < *(ulong *)(lVar15 + 400)) {
        *(long **)(*(ulong *)(lVar15 + 0x188) + 0x20) = plVar13;
        local_120 = (long *)0x0;
        *(long *)(lVar15 + 0x188) = *(long *)(lVar15 + 0x188) + 0x30;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
        ::
        __emplace_back_slow_path<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>
                  ((vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
                    *)(lVar15 + 0x180),(function *)alStack_140);
      }
      base::Mutex::Unlock(this_01);
      if (alStack_140 == local_120) {
        pcVar14 = *(code **)(*local_120 + 0x20);
LAB_015e1df8:
        (*pcVar14)();
      }
      else if (local_120 != (long *)0x0) {
        pcVar14 = *(code **)(*local_120 + 0x28);
        goto LAB_015e1df8;
      }
      if (this_02 != (__shared_weak_count *)0x0) {
        p_Var1 = this_02 + 8;
        do {
          lVar16 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar16 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*(long *)this_02 + 0x10))(this_02);
          std::__ndk1::__shared_weak_count::__release_weak(this_02);
        }
      }
    }
    FUN_015e5e48(this,pNVar6);
    if (1 < FLAG_wasm_num_compilation_tasks) {
      cVar3 = *(char *)(lVar15 + 0x18);
      do {
        uVar18 = FUN_015e61b4(lVar15 + 8,*(long *)pwVar2,0xffffffff,cVar3 == '\x01');
      } while ((uVar18 & 1) != 0);
    }
    base::Semaphore::Wait(this_00);
    base::Mutex::Lock((Mutex *)(lVar15 + 0x100));
    if ((*(byte *)(lVar15 + 0x140) >> 1 & 1) != 0) {
      Isolate::CountUsage(this,0x33);
    }
    base::Mutex::Unlock((Mutex *)(lVar15 + 0x100));
    if (((*(byte *)(lVar15 + 0x30) & 1) != 0) &&
       (FUN_015e373c(lVar17,pNVar6,*(long *)pwVar2,*(undefined8 *)(this + 0x95d0),param_2,bVar7,0),
       *(int *)(param_2 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","thrower->error()");
    }
    do {
      lVar17 = *(long *)p_Var19;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
      if (bVar7) {
        *(long *)p_Var19 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
    }
    CanonicalHandleScope::~CanonicalHandleScope(aCStack_d8);
    if (*(int *)(param_2 + 0x10) == 0) {
      FUN_015e1fe0(*(undefined8 *)(local_170 + 0x100),this,*(undefined8 *)(local_170 + 200),param_7)
      ;
      WasmEngine::LogOutstandingCodesForIsolate(*(WasmEngine **)(this + 0xc770),(Isolate *)this);
      p_Var11 = p_Stack_168;
      pNVar6 = local_170;
      local_170 = (NativeModule *)0x0;
      p_Stack_168 = (__shared_weak_count *)0x0;
      param_1_00[1] = p_Var11;
      *param_1_00 = pNVar6;
      goto LAB_015e1f8c;
    }
  }
  p_Var11 = p_Stack_168;
  *param_1_00 = 0;
  param_1_00[1] = 0;
  if (p_Stack_168 != (__shared_weak_count *)0x0) {
    p_Var19 = p_Stack_168 + 8;
    do {
      lVar17 = *(long *)p_Var19;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
      if (bVar7) {
        *(long *)p_Var19 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*(long *)p_Stack_168 + 0x10))(p_Stack_168);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
    }
  }
LAB_015e1f8c:
  TimedHistogram::Stop(local_150,(ElapsedTimer *)&local_158,local_148);
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

