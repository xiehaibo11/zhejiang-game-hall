
/* v8::internal::wasm::AsyncStreamingProcessor::FinishAsyncCompileJobWithError(v8::internal::wasm::WasmError
   const&) */

void __thiscall
v8::internal::wasm::AsyncStreamingProcessor::FinishAsyncCompileJobWithError
          (AsyncStreamingProcessor *this,WasmError *param_1)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  __shared_weak_count *p_Var6;
  long *plVar7;
  CancelableTask *pCVar8;
  code *pcVar9;
  long lVar10;
  AsyncCompileJob *pAVar11;
  SharedMutex *this_00;
  long lVar12;
  long lVar13;
  long *plVar14;
  CancelableTask *local_48;
  
  CancelableTaskManager::CancelAndWait((CancelableTaskManager *)(*(long *)(this + 0x18) + 0x70));
  pAVar11 = *(AsyncCompileJob **)(this + 0x18);
  if (*(long *)(pAVar11 + 0x58) == 0) {
    AsyncCompileJob::
    NextStep<v8::internal::wasm::AsyncCompileJob::DecodeFail,v8::internal::wasm::WasmError_const&>
              (pAVar11,param_1);
    pCVar8 = operator_new(0x38);
    CancelableTask::CancelableTask(pCVar8,*(CancelableTaskManager **)(*(long *)pAVar11 + 0xc700));
    *(undefined ***)pCVar8 = &PTR__CompileTask_01cc9d78;
    local_48 = pCVar8 + 0x20;
    *(undefined **)local_48 = &DAT_01cc9da8;
    *(AsyncCompileJob **)(pCVar8 + 0x28) = pAVar11;
    pCVar8[0x30] = (CancelableTask)0x1;
    *(CancelableTask **)(pAVar11 + 0x118) = pCVar8;
    (**(code **)**(undefined8 **)(pAVar11 + 0x100))(*(undefined8 **)(pAVar11 + 0x100),&local_48);
    pCVar8 = local_48;
    local_48 = (CancelableTask *)0x0;
    if (pCVar8 != (CancelableTask *)0x0) {
      (**(code **)(*(long *)pCVar8 + 8))();
    }
  }
  else {
    lVar12 = *(long *)(*(long *)(pAVar11 + 0x58) + 0x100);
    this_00 = *(SharedMutex **)(lVar12 + 8);
    base::SharedMutex::LockExclusive(this_00);
    p_Var6 = *(__shared_weak_count **)(this_00 + 0x40);
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    if (p_Var6 != (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
    base::SharedMutex::UnlockExclusive(this_00);
    base::Mutex::Lock((Mutex *)(lVar12 + 0x158));
    plVar2 = *(long **)(lVar12 + 0x180);
    plVar14 = *(long **)(lVar12 + 0x188);
joined_r0x015e3e64:
    if (plVar14 != plVar2) {
      plVar7 = (long *)plVar14[-2];
      plVar14 = plVar14 + -6;
      if (plVar14 != plVar7) goto code_r0x015e3e90;
      pcVar9 = *(code **)(*plVar7 + 0x20);
      goto LAB_015e3e74;
    }
    *(long **)(lVar12 + 0x188) = plVar2;
    base::Mutex::Unlock((Mutex *)(lVar12 + 0x158));
    pAVar11 = *(AsyncCompileJob **)(this + 0x18);
    AsyncCompileJob::
    NextStep<v8::internal::wasm::AsyncCompileJob::DecodeFail,v8::internal::wasm::WasmError_const&>
              (pAVar11,param_1);
    if (*(long *)(pAVar11 + 0x118) == 0) {
      pCVar8 = operator_new(0x38);
      CancelableTask::CancelableTask(pCVar8,*(CancelableTaskManager **)(*(long *)pAVar11 + 0xc700));
      *(undefined ***)pCVar8 = &PTR__CompileTask_01cc9d78;
      local_48 = pCVar8 + 0x20;
      *(undefined **)local_48 = &DAT_01cc9da8;
      *(AsyncCompileJob **)(pCVar8 + 0x28) = pAVar11;
      pCVar8[0x30] = (CancelableTask)0x1;
      *(CancelableTask **)(pAVar11 + 0x118) = pCVar8;
      (**(code **)**(undefined8 **)(pAVar11 + 0x100))(*(undefined8 **)(pAVar11 + 0x100),&local_48);
      pCVar8 = local_48;
      local_48 = (CancelableTask *)0x0;
      if (pCVar8 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar8 + 8))();
      }
    }
    lVar12 = *(long *)(this + 0x28);
    if (lVar12 != 0) {
      lVar3 = *(long *)(lVar12 + 0x40);
      lVar13 = *(long *)(lVar12 + 0x48);
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar12 + 0x10);
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar12 + 0x28);
      while (lVar13 != lVar3) {
        p_Var6 = *(__shared_weak_count **)(lVar13 + -8);
        lVar13 = lVar13 + -0x10;
        if (p_Var6 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var6 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
          }
        }
      }
      *(long *)(lVar12 + 0x48) = lVar3;
    }
  }
  return;
code_r0x015e3e90:
  if (plVar7 != (long *)0x0) {
    pcVar9 = *(code **)(*plVar7 + 0x28);
LAB_015e3e74:
    (*pcVar9)();
  }
  goto joined_r0x015e3e64;
}

