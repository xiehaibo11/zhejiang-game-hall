
/* v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile::RunInForeground(v8::internal::wasm::AsyncCompileJob*)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile::RunInForeground
          (PrepareAndStartCompile *this,AsyncCompileJob *param_1)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  Mutex *this_00;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 local_e0;
  __shared_weak_count *local_d8;
  long alStack_d0 [4];
  long *local_b0;
  undefined **local_a0;
  AsyncCompileJob *pAStack_98;
  undefined ***local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  CancelableTaskManager::CancelAndWait((CancelableTaskManager *)(param_1 + 0x70));
  local_e0 = *(undefined8 *)(this + 8);
  local_d8 = *(__shared_weak_count **)(this + 0x10);
  if (local_d8 != (__shared_weak_count *)0x0) {
    p_Var1 = local_d8 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  CreateNativeModule(param_1,&local_e0,*(undefined8 *)(this + 0x20));
  p_Var1 = local_d8;
  if (local_d8 != (__shared_weak_count *)0x0) {
    p_Var2 = local_d8 + 8;
    do {
      lVar12 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)local_d8 + 0x10))(local_d8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x58) + 0x100);
  local_80 = &local_a0;
  local_a0 = &PTR_FUN_01cc9c18;
  this_00 = (Mutex *)(lVar12 + 0x158);
  pAStack_98 = param_1;
  base::Mutex::Lock(this_00);
  uVar7 = *(ulong *)(lVar12 + 0x188);
  if (uVar7 < *(ulong *)(lVar12 + 400)) {
    if (local_80 == (undefined ***)0x0) {
      *(undefined8 *)(uVar7 + 0x20) = 0;
    }
    else if (&local_a0 == local_80) {
      *(ulong *)(uVar7 + 0x20) = uVar7;
      (*(code *)(*local_80)[3])();
    }
    else {
      *(undefined ****)(uVar7 + 0x20) = local_80;
      local_80 = (undefined ***)0x0;
    }
    *(long *)(lVar12 + 0x188) = *(long *)(lVar12 + 0x188) + 0x30;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
    ::__emplace_back_slow_path<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>
              ((vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
                *)(lVar12 + 0x180),(function *)&local_a0);
  }
  base::Mutex::Unlock(this_00);
  if (&local_a0 == local_80) {
    pcVar11 = (code *)(*local_80)[4];
LAB_015eb3cc:
    (*pcVar11)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar11 = (code *)(*local_80)[5];
    goto LAB_015eb3cc;
  }
  uVar7 = base::TimeTicks::IsHighResolution();
  if ((uVar7 & 1) == 0) goto LAB_015eb4f8;
  lVar3 = *(long *)(*(long *)param_1 + 0x9520);
  p_Var1 = *(__shared_weak_count **)(*(long *)param_1 + 0x9528);
  uVar10 = 1;
  if (*(long *)(param_1 + 0x120) != 0) {
    uVar10 = 2;
  }
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = base::TimeTicks::Now();
  local_b0 = (long *)0x0;
  plVar9 = operator_new(0x28);
  *plVar9 = (long)&PTR_FUN_01cc9a78;
  plVar9[1] = lVar8;
  plVar9[2] = lVar3;
  plVar9[3] = (long)p_Var1;
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(undefined4 *)(plVar9 + 4) = uVar10;
  local_b0 = plVar9;
  base::Mutex::Lock(this_00);
  if (*(ulong *)(lVar12 + 0x188) < *(ulong *)(lVar12 + 400)) {
    *(long **)(*(ulong *)(lVar12 + 0x188) + 0x20) = plVar9;
    local_b0 = (long *)0x0;
    *(long *)(lVar12 + 0x188) = *(long *)(lVar12 + 0x188) + 0x30;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
    ::__emplace_back_slow_path<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>
              ((vector<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>,std::__ndk1::allocator<std::__ndk1::function<void(v8::internal::wasm::CompilationEvent)>>>
                *)(lVar12 + 0x180),(function *)alStack_d0);
  }
  base::Mutex::Unlock(this_00);
  if (alStack_d0 == local_b0) {
    pcVar11 = *(code **)(*local_b0 + 0x20);
LAB_015eb4c0:
    (*pcVar11)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_b0 + 0x28);
    goto LAB_015eb4c0;
  }
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      lVar12 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
LAB_015eb4f8:
  if (this[0x18] != (PrepareAndStartCompile)0x0) {
    FUN_015e5e48(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 0x58));
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

