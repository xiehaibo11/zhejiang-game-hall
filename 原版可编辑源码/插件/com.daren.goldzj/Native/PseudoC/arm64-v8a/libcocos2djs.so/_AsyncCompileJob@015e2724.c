
/* v8::internal::wasm::AsyncCompileJob::~AsyncCompileJob() */

void __thiscall v8::internal::wasm::AsyncCompileJob::~AsyncCompileJob(AsyncCompileJob *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  __shared_weak_count *p_Var10;
  SharedMutex *this_00;
  
  CancelableTaskManager::CancelAndWait((CancelableTaskManager *)(this + 0x70));
  if ((*(long *)(this + 0x58) == 0) || (*(long *)(this + 0x50) != 0)) {
    plVar7 = *(long **)(this + 0x120);
  }
  else {
    lVar9 = *(long *)(*(long *)(this + 0x58) + 0x100);
    this_00 = *(SharedMutex **)(lVar9 + 8);
    base::SharedMutex::LockExclusive(this_00);
    p_Var10 = *(__shared_weak_count **)(this_00 + 0x40);
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    if (p_Var10 != (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    }
    base::SharedMutex::UnlockExclusive(this_00);
    base::Mutex::Lock((Mutex *)(lVar9 + 0x158));
    plVar7 = *(long **)(lVar9 + 0x180);
    plVar4 = *(long **)(lVar9 + 0x188);
joined_r0x015e2834:
    if (plVar4 != plVar7) {
      plVar5 = (long *)plVar4[-2];
      plVar4 = plVar4 + -6;
      if (plVar4 != plVar5) goto code_r0x015e2860;
      pcVar8 = *(code **)(*plVar5 + 0x20);
      goto LAB_015e2844;
    }
    *(long **)(lVar9 + 0x188) = plVar7;
    base::Mutex::Unlock((Mutex *)(lVar9 + 0x158));
    plVar7 = *(long **)(this + 0x120);
  }
  if (plVar7 != (long *)0x0) {
    plVar4 = (long *)*plVar7;
    *plVar7 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(long *)(this + 0x118) != 0) {
    *(undefined8 *)(*(long *)(this + 0x118) + 0x28) = 0;
    *(undefined8 *)(this + 0x118) = 0;
  }
  GlobalHandles::Destroy(*(ulong **)(this + 0x38));
  if (*(ulong **)(this + 0x50) != (ulong *)0x0) {
    GlobalHandles::Destroy(*(ulong **)(this + 0x50));
  }
  p_Var10 = *(__shared_weak_count **)(this + 0x128);
  if (p_Var10 == (__shared_weak_count *)0x0) {
LAB_015e27bc:
    p_Var10 = *(__shared_weak_count **)(this + 0x108);
  }
  else {
    p_Var1 = p_Var10 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 != 0) goto LAB_015e27bc;
    (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    p_Var10 = *(__shared_weak_count **)(this + 0x108);
  }
  if (p_Var10 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var10 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    }
  }
  CancelableTaskManager::~CancelableTaskManager((CancelableTaskManager *)(this + 0x70));
  plVar7 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  p_Var10 = *(__shared_weak_count **)(this + 0x60);
  if (p_Var10 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var10 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
      p_Var10 = *(__shared_weak_count **)(this + 0x48);
      goto joined_r0x015e28d4;
    }
  }
  p_Var10 = *(__shared_weak_count **)(this + 0x48);
joined_r0x015e28d4:
  if (p_Var10 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var10 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    }
  }
  pvVar6 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
    return;
  }
  return;
code_r0x015e2860:
  if (plVar5 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar5 + 0x28);
LAB_015e2844:
    (*pcVar8)();
  }
  goto joined_r0x015e2834;
}

