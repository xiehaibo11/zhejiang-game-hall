
/* v8::internal::wasm::CompilationState::~CompilationState() */

void __thiscall v8::internal::wasm::CompilationState::~CompilationState(CompilationState *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  __shared_weak_count *p_Var10;
  Mutex *pMVar11;
  long *plVar12;
  Mutex *pMVar13;
  void *pvVar14;
  Mutex *pMVar15;
  
  pvVar4 = *(void **)(this + 0x1a0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar4;
    operator_delete(pvVar4);
  }
  plVar9 = *(long **)(this + 0x180);
  if (plVar9 != (long *)0x0) {
    plVar12 = *(long **)(this + 0x188);
    plVar5 = plVar9;
    if (plVar12 != plVar9) {
      do {
        plVar5 = (long *)plVar12[-2];
        plVar12 = plVar12 + -6;
        if (plVar12 == plVar5) {
          pcVar7 = *(code **)(*plVar5 + 0x20);
LAB_015e07f8:
          (*pcVar7)();
        }
        else if (plVar5 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar5 + 0x28);
          goto LAB_015e07f8;
        }
      } while (plVar9 != plVar12);
      plVar5 = *(long **)(this + 0x180);
    }
    *(long **)(this + 0x188) = plVar9;
    operator_delete(plVar5);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x158));
  p_Var10 = *(__shared_weak_count **)(this + 0x150);
  if (p_Var10 == (__shared_weak_count *)0x0) {
LAB_015e0858:
    pvVar4 = *(void **)(this + 0x128);
  }
  else {
    p_Var1 = p_Var10 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 != 0) goto LAB_015e0858;
    (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
    pvVar4 = *(void **)(this + 0x128);
  }
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar4;
    operator_delete(pvVar4);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x100));
  pvVar4 = *(void **)(this + 0xe8);
  if (pvVar4 != (void *)0x0) {
    pvVar14 = *(void **)(this + 0xf0);
    pvVar6 = pvVar4;
    if (pvVar14 != pvVar4) {
      do {
        p_Var10 = *(__shared_weak_count **)((long)pvVar14 + -8);
        pvVar14 = (void *)((long)pvVar14 + -0x10);
        if (p_Var10 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var10 + 8;
          do {
            lVar8 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
          }
        }
      } while (pvVar14 != pvVar4);
      pvVar6 = *(void **)(this + 0xe8);
    }
    *(void **)(this + 0xf0) = pvVar4;
    operator_delete(pvVar6);
  }
  pvVar4 = *(void **)(this + 0xa0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x80);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar4;
    operator_delete(pvVar4);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0x50));
  pMVar13 = *(Mutex **)(this + 0x38);
  if (pMVar13 != (Mutex *)0x0) {
    pMVar11 = pMVar13;
    pMVar15 = *(Mutex **)(this + 0x40);
    if (*(Mutex **)(this + 0x40) != pMVar13) {
      do {
        pvVar4 = *(void **)(pMVar15 + -0x20);
        if (pvVar4 != (void *)0x0) {
          *(void **)(pMVar15 + -0x18) = pvVar4;
          operator_delete(pvVar4);
        }
        pvVar4 = *(void **)(pMVar15 + -0x38);
        pMVar11 = pMVar15 + -0x60;
        if (pvVar4 != (void *)0x0) {
          *(void **)(pMVar15 + -0x30) = pvVar4;
          operator_delete(pvVar4);
        }
        base::Mutex::~Mutex(pMVar11);
        pMVar15 = pMVar11;
      } while (pMVar13 != pMVar11);
      pMVar11 = *(Mutex **)(this + 0x38);
    }
    *(Mutex **)(this + 0x40) = pMVar13;
    operator_delete(pMVar11);
  }
  p_Var10 = *(__shared_weak_count **)(this + 0x28);
  if (p_Var10 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var10 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
      p_Var10 = *(__shared_weak_count **)(this + 0x10);
      goto joined_r0x015e0a10;
    }
  }
  p_Var10 = *(__shared_weak_count **)(this + 0x10);
joined_r0x015e0a10:
  if (p_Var10 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var10 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
      return;
    }
  }
  return;
}

