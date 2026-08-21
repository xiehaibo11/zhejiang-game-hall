
/* v8::internal::Isolate::~Isolate() */

void __thiscall v8::internal::Isolate::~Isolate(Isolate *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *extraout_x1_07;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  IsolateAllocator *this_00;
  RegExpStack *this_01;
  void *pvVar10;
  ThreadManager *this_02;
  GlobalHandles *this_03;
  EternalHandles *this_04;
  undefined8 *puVar11;
  Debug *this_05;
  CancelableTaskManager *this_06;
  MicrotaskQueue *this_07;
  TracingCpuProfilerImpl *this_08;
  __shared_weak_count *p_Var12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (*(void **)(this + 0x9488) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x9488));
    in_x1 = extraout_x1;
  }
  *(undefined8 *)(this + 0x9488) = 0;
  if (*(long **)(this + 0xb638) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb638) + 8))();
    in_x1 = extraout_x1_00;
  }
  this_01 = *(RegExpStack **)(this + 0xb618);
  *(undefined8 *)(this + 0xb638) = 0;
  if (this_01 != (RegExpStack *)0x0) {
    RegExpStack::~RegExpStack(this_01);
    operator_delete(this_01);
    in_x1 = extraout_x1_01;
  }
  *(undefined8 *)(this + 0xb618) = 0;
  if (*(void **)(this + 0x9598) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x9598));
    in_x1 = extraout_x1_02;
  }
  *(undefined8 *)(this + 0x9598) = 0;
  if (*(void **)(this + 0x9560) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x9560));
    in_x1 = extraout_x1_03;
  }
  *(undefined8 *)(this + 0x9560) = 0;
  if (*(void **)(this + 0x9568) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x9568));
    in_x1 = extraout_x1_04;
  }
  pvVar10 = *(void **)(this + 0x9580);
  *(undefined8 *)(this + 0x9568) = 0;
  if (pvVar10 != (void *)0x0) {
    pvVar4 = *(void **)((long)pvVar10 + 8);
    if (pvVar4 != (void *)0x0) {
      *(void **)((long)pvVar10 + 0x10) = pvVar4;
      operator_delete(pvVar4);
    }
    operator_delete(pvVar10);
    in_x1 = extraout_x1_05;
  }
  *(undefined8 *)(this + 0x9580) = 0;
  if (*(long **)(this + 0x9558) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x9558) + 8))();
    in_x1 = extraout_x1_06;
  }
  pvVar10 = *(void **)(this + 0x95c0);
  *(undefined8 *)(this + 0x9558) = 0;
  if (pvVar10 != (void *)0x0) {
    if (*(void **)((long)pvVar10 + 0x68) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x68));
    }
    if (*(void **)((long)pvVar10 + 0x50) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x50));
    }
    if (*(void **)((long)pvVar10 + 0x38) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x38));
    }
    if (*(void **)((long)pvVar10 + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x20));
    }
    if (*(void **)((long)pvVar10 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 8));
    }
    operator_delete(pvVar10);
    in_x1 = extraout_x1_07;
  }
  *(undefined8 *)(this + 0x95c0) = 0;
  if (*(Malloced **)(this + 0xb7d0) != (Malloced *)0x0) {
    Malloced::operator_delete(*(Malloced **)(this + 0xb7d0),in_x1);
  }
  pvVar10 = *(void **)(this + 0x9518);
  *(undefined8 *)(this + 0xb7d0) = 0;
  if (pvVar10 != (void *)0x0) {
    if (*(void **)((long)pvVar10 + 0x60) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x60));
    }
    if (*(void **)((long)pvVar10 + 0x48) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x48));
    }
    if (*(void **)((long)pvVar10 + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x30));
    }
    if (*(void **)((long)pvVar10 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar10 + 0x18));
    }
    operator_delete(pvVar10);
  }
  *(undefined8 *)(this + 0x9518) = 0;
  if (*(void **)(this + 0x9508) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x9508));
  }
  *(undefined8 *)(this + 0x9508) = 0;
  if (*(void **)(this + 0x95d8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x95d8));
  }
  this_02 = *(ThreadManager **)(this + 0x95f0);
  *(undefined8 *)(this + 0x95d8) = 0;
  if (this_02 != (ThreadManager *)0x0) {
    ThreadManager::~ThreadManager(this_02);
    operator_delete(this_02);
  }
  this_03 = *(GlobalHandles **)(this + 0x95e0);
  *(undefined8 *)(this + 0x95f0) = 0;
  if (this_03 != (GlobalHandles *)0x0) {
    GlobalHandles::~GlobalHandles(this_03);
    operator_delete(this_03);
  }
  this_04 = *(EternalHandles **)(this + 0x95e8);
  *(undefined8 *)(this + 0x95e0) = 0;
  if (this_04 != (EternalHandles *)0x0) {
    EternalHandles::~EternalHandles(this_04);
    operator_delete(this_04);
  }
  puVar11 = *(undefined8 **)(this + 47000);
  *(undefined8 *)(this + 0x95e8) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    pvVar10 = (void *)*puVar11;
    if (pvVar10 != (void *)0x0) {
      puVar11[1] = pvVar10;
      operator_delete(pvVar10);
    }
    operator_delete(puVar11);
  }
  *(undefined8 *)(this + 47000) = 0;
  if (*(void **)(this + 0xb640) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb640));
  }
  *(undefined8 *)(this + 0xb640) = 0;
  if (*(void **)(this + 0xb648) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb648));
  }
  this_05 = *(Debug **)(this + 0xb6c8);
  *(undefined8 *)(this + 0xb648) = 0;
  if (this_05 != (Debug *)0x0) {
    Debug::~Debug(this_05);
    operator_delete(this_05);
  }
  this_06 = *(CancelableTaskManager **)(this + 0xc700);
  *(undefined8 *)(this + 0xb6c8) = 0;
  if (this_06 != (CancelableTaskManager *)0x0) {
    CancelableTaskManager::~CancelableTaskManager(this_06);
    operator_delete(this_06);
  }
  *(undefined8 *)(this + 0xc700) = 0;
  if (*(long **)(this + 0x95d0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x95d0) + 8))();
  }
  this_07 = *(MicrotaskQueue **)(this + 0xb7c0);
  *(undefined8 *)(this + 0x95d0) = 0;
  if (this_07 != (MicrotaskQueue *)0x0) {
    MicrotaskQueue::~MicrotaskQueue(this_07);
    operator_delete(this_07);
  }
  *(undefined8 *)(this + 0xb7c0) = 0;
  puVar11 = *(void **)(this + 0xc7d8);
  while (puVar11 != (void *)0x0) {
    pvVar10 = (void *)*puVar11;
    operator_delete(puVar11);
    puVar11 = pvVar10;
  }
  pvVar10 = *(void **)(this + 0xc7c8);
  *(undefined8 *)(this + 0xc7c8) = 0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0xc7a0));
  this_08 = *(TracingCpuProfilerImpl **)(this + 0xc780);
  *(undefined8 *)(this + 0xc780) = 0;
  if (this_08 != (TracingCpuProfilerImpl *)0x0) {
    TracingCpuProfilerImpl::~TracingCpuProfilerImpl(this_08);
    operator_delete(this_08);
  }
  p_Var12 = *(__shared_weak_count **)(this + 0xc778);
  if (p_Var12 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var12 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
    }
  }
  base::Mutex::~Mutex((Mutex *)(this + 0xc72c));
  base::ConditionVariable::~ConditionVariable((ConditionVariable *)(this + 0xc6a8));
  p_Var12 = *(__shared_weak_count **)(this + 0xc6a0);
  if (p_Var12 == (__shared_weak_count *)0x0) {
LAB_00f53674:
    pvVar10 = *(void **)(this + 0xc660);
  }
  else {
    p_Var1 = p_Var12 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 != 0) goto LAB_00f53674;
    (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
    pvVar10 = *(void **)(this + 0xc660);
  }
  if (pvVar10 != (void *)0x0) {
    *(void **)(this + 0xc668) = pvVar10;
    operator_delete(pvVar10);
  }
  pvVar10 = *(void **)(this + 0xc640);
  if (pvVar10 != (void *)0x0) {
    *(void **)(this + 0xc648) = pvVar10;
    operator_delete(pvVar10);
  }
  pvVar10 = *(void **)(this + 0xc628);
  if (pvVar10 != (void *)0x0) {
    *(void **)(this + 0xc630) = pvVar10;
    operator_delete(pvVar10);
  }
  puVar11 = *(undefined8 **)(this + 0xb710);
  puVar14 = *(undefined8 **)(this + 0xb718);
  lVar6 = (long)puVar14 - (long)puVar11;
  if (lVar6 != 0) {
    uVar7 = *(ulong *)(this + 0xb728);
    plVar8 = (long *)((long)puVar11 + (uVar7 >> 5 & 0x7fffffffffffff8));
    lVar9 = *plVar8 + (uVar7 & 0xff) * 0x10;
    while (*(long *)((long)puVar11 + (*(long *)(this + 0xb730) + uVar7 >> 5 & 0x7fffffffffffff8)) +
           (*(long *)(this + 0xb730) + uVar7 & 0xff) * 0x10 != lVar9) {
      lVar9 = lVar9 + 0x10;
      if (lVar9 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar9 = *plVar8;
      }
    }
  }
  *(undefined8 *)(this + 0xb730) = 0;
  while (uVar7 = lVar6 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar11);
    puVar14 = *(undefined8 **)(this + 0xb718);
    puVar11 = (undefined8 *)(*(long *)(this + 0xb710) + 8);
    *(undefined8 **)(this + 0xb710) = puVar11;
    lVar6 = (long)puVar14 - (long)puVar11;
  }
  if (uVar7 == 1) {
    uVar5 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_00f5377c;
    uVar5 = 0x100;
  }
  *(undefined8 *)(this + 0xb728) = uVar5;
LAB_00f5377c:
  if (puVar11 != puVar14) {
    do {
      puVar13 = puVar11 + 1;
      operator_delete((void *)*puVar11);
      puVar11 = puVar13;
    } while (puVar14 != puVar13);
    lVar6 = *(long *)(this + 0xb718) - *(long *)(this + 0xb710);
    if (lVar6 != 0) {
      *(ulong *)(this + 0xb718) =
           *(long *)(this + 0xb718) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0xb708) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb708));
  }
  puVar11 = *(undefined8 **)(this + 0xb6d8);
  *(undefined8 *)(this + 0xb6d8) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    base::Mutex::~Mutex((Mutex *)(puVar11 + 5));
    puVar14 = (void *)puVar11[2];
    while (puVar14 != (void *)0x0) {
      pvVar10 = (void *)*puVar14;
      operator_delete(puVar14);
      puVar14 = pvVar10;
    }
    pvVar10 = (void *)*puVar11;
    *puVar11 = 0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    operator_delete(puVar11);
  }
  base::Mutex::~Mutex((Mutex *)(this + 0xb688));
  pvVar10 = *(void **)(this + 0xb620);
  if (pvVar10 != (void *)0x0) {
    *(void **)(this + 0xb628) = pvVar10;
    operator_delete(pvVar10);
  }
  pvVar10 = *(void **)(this + 0x9df8);
  *(undefined8 *)(this + 0x9df8) = 0;
  if (pvVar10 != (void *)0x0) {
    operator_delete__(pvVar10);
  }
  base::RecursiveMutex::~RecursiveMutex((RecursiveMutex *)(this + 0x9530));
  p_Var12 = *(__shared_weak_count **)(this + 0x9528);
  if (p_Var12 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var12 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
    }
  }
  Heap::~Heap((Heap *)(this + 0x8850));
  this_00 = *(IsolateAllocator **)(this + 0x8848);
  *(undefined8 *)(this + 0x8848) = 0;
  if (this_00 != (IsolateAllocator *)0x0) {
    IsolateAllocator::~IsolateAllocator(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

