
/* v8::internal::wasm::WasmEngine::AsyncCompile(v8::internal::Isolate*,
   v8::internal::wasm::WasmFeatures const&,
   std::__ndk1::shared_ptr<v8::internal::wasm::CompilationResultResolver>,
   v8::internal::wasm::ModuleWireBytes const&, bool, char const*) */

void __thiscall
v8::internal::wasm::WasmEngine::AsyncCompile
          (WasmEngine *this,Isolate *param_1,WasmFeatures *param_2,undefined8 *param_4,
          ModuleWireBytes *param_5,ulong param_6,undefined8 param_7)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  Isolate *pIVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  StreamingDecoder *__dest;
  void *pvVar8;
  AsyncCompileJob *this_00;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_c0;
  __shared_weak_count *p_Stack_b8;
  void *local_a8;
  StreamingDecoder *local_a0;
  __shared_weak_count *local_98;
  Isolate *local_90;
  __shared_weak_count *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *local_48;
  
  if (FLAG_wasm_async_compilation == '\0') {
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = param_1;
    local_88 = (__shared_weak_count *)param_7;
    if ((param_6 & 1) == 0) {
      lVar10 = SyncCompile(this,param_1,param_2,(ErrorThrower *)&local_90,param_5);
    }
    else {
      iVar4 = *(int *)(param_5 + 8);
      __dest = operator_new__((long)iVar4);
      memcpy(__dest,*(void **)param_5,(long)iVar4);
      local_98 = (__shared_weak_count *)(long)*(int *)(param_5 + 8);
      local_a0 = __dest;
      lVar10 = SyncCompile(this,param_1,param_2,(ErrorThrower *)&local_90,
                           (ModuleWireBytes *)&local_a0);
      operator_delete__(__dest);
    }
    if (local_80 == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      plVar11 = (long *)*param_4;
      pcVar9 = *(code **)*plVar11;
    }
    else {
      plVar11 = (long *)*param_4;
      lVar10 = ErrorThrower::Reify((ErrorThrower *)&local_90);
      pcVar9 = *(code **)(*plVar11 + 8);
    }
    (*pcVar9)(plVar11,lVar10);
    ErrorThrower::~ErrorThrower((ErrorThrower *)&local_90);
    return;
  }
  pIVar3 = param_1 + 0x95a0;
  if (FLAG_wasm_test_streaming == '\0') {
    iVar4 = *(int *)(param_5 + 8);
    pvVar8 = operator_new__((long)iVar4);
    memcpy(pvVar8,*(void **)param_5,(long)iVar4);
    iVar4 = *(int *)(param_5 + 8);
    uVar12 = *(ulong *)(param_1 + 0x2bc8);
    local_a8 = pvVar8;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar3;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar7 + 1;
      *puVar7 = uVar12;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    }
    p_Stack_b8 = (__shared_weak_count *)param_4[1];
    local_c0 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
    this_00 = (AsyncCompileJob *)
              CreateAsyncCompileJob
                        (this,param_1,param_2,&local_a8,(long)iVar4,puVar7,param_7,&local_c0);
    p_Var2 = p_Stack_b8;
    if (p_Stack_b8 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Stack_b8 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar6) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)p_Stack_b8 + 0x10))(p_Stack_b8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
    pvVar8 = local_a8;
    local_a8 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
    }
    AsyncCompileJob::Start(this_00);
    return;
  }
  uVar12 = *(ulong *)(param_1 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar3;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar7 + 1;
    *puVar7 = uVar12;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
  }
  local_90 = (Isolate *)*param_4;
  local_88 = (__shared_weak_count *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  local_48 = (void *)0x0;
  CreateAsyncCompileJob(this,param_1,param_2,&local_48,0,puVar7,param_7,&local_90);
  p_Var2 = local_88;
  if (local_88 != (__shared_weak_count *)0x0) {
    p_Var1 = local_88 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)local_88 + 0x10))(local_88);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    }
  }
  pvVar8 = local_48;
  local_48 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  AsyncCompileJob::CreateStreamingDecoder();
  StreamingDecoder::OnBytesReceived(local_a0,*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8));
  StreamingDecoder::Finish(local_a0);
  if (local_98 != (__shared_weak_count *)0x0) {
    p_Var2 = local_98 + 8;
    do {
      lVar10 = *(long *)p_Var2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)local_98 + 0x10))(local_98);
      std::__ndk1::__shared_weak_count::__release_weak(local_98);
      return;
    }
    return;
  }
  return;
}

