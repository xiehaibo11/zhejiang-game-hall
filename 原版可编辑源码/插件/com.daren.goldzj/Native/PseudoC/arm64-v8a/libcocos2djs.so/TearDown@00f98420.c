
/* v8::internal::Heap::TearDown() */

void __thiscall v8::internal::Heap::TearDown(Heap *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  MarkCompactCollector *this_00;
  MinorMarkCompactCollector *this_01;
  ArrayBufferCollector *this_02;
  MemoryAllocator *this_03;
  void *pvVar10;
  __shared_weak_count *this_04;
  
  if (FLAG_verify_heap != '\0') {
    Verify(this);
  }
  if ((*(long *)(this + 0xe8) != 0) &&
     (uVar6 = CommittedMemory(this), *(ulong *)(this + 0x90) < uVar6)) {
    *(ulong *)(this + 0x90) = uVar6;
  }
  if ((FLAG_fuzzer_gc_analysis != '\0') &&
     (uVar4 = (*(int *)(this + 0x184) * 9 ^ (uint)(*(int *)(this + 0x184) * 9) >> 0xb) * 0x8001,
     PrintF("\n### Allocations = %u, hash = 0x%08x\n",(ulong)*(uint *)(this + 0x180),
            (ulong)((int)((uVar4 & 0x1fffffff) - 1) >> 0x1f & 0x1bU | uVar4)),
     FLAG_fuzzer_gc_analysis != '\0')) {
    if (0 < FLAG_stress_marking) {
      PrintF("\n### Maximum marking limit reached = %.02lf\n",*(undefined8 *)(this + 0x1a8));
    }
    if (0 < FLAG_stress_scavenge) {
      StressScavengeObserver::MaxNewSpaceSizeReached(*(StressScavengeObserver **)(this + 0x198));
      PrintF("\n### Maximum new space size reached = %.02lf\n");
    }
  }
  if (FLAG_idle_time_scavenge != '\0') {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))
              (*(long **)(this + 0xe8),*(undefined8 *)(this + 0x868));
    plVar7 = *(long **)(this + 0x868);
    *(undefined8 *)(this + 0x868) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    pvVar8 = *(void **)(this + 0x860);
    *(undefined8 *)(this + 0x860) = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
  if (0 < FLAG_stress_marking) {
    RemoveAllocationObserversFromAllSpaces
              (this,*(AllocationObserver **)(this + 400),*(AllocationObserver **)(this + 400));
    if (*(long **)(this + 400) != (long *)0x0) {
      (**(code **)(**(long **)(this + 400) + 8))();
    }
    *(undefined8 *)(this + 400) = 0;
  }
  if (0 < FLAG_stress_scavenge) {
    (**(code **)(**(long **)(this + 0xe8) + 0x18))
              (*(long **)(this + 0xe8),*(undefined8 *)(this + 0x198));
    if (*(long **)(this + 0x198) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x198) + 8))();
    }
    *(undefined8 *)(this + 0x198) = 0;
  }
  if (*(MarkCompactCollector **)(this + 0x800) != (MarkCompactCollector *)0x0) {
    MarkCompactCollector::TearDown(*(MarkCompactCollector **)(this + 0x800));
    this_00 = *(MarkCompactCollector **)(this + 0x800);
    *(undefined8 *)(this + 0x800) = 0;
    if (this_00 != (MarkCompactCollector *)0x0) {
      MarkCompactCollector::~MarkCompactCollector(this_00);
      operator_delete(this_00);
    }
  }
  if (*(long *)(this + 0x808) != 0) {
    MinorMarkCompactCollector::TearDown();
    this_01 = *(MinorMarkCompactCollector **)(this + 0x808);
    if (this_01 != (MinorMarkCompactCollector *)0x0) {
      MinorMarkCompactCollector::~MinorMarkCompactCollector(this_01);
      operator_delete(this_01);
    }
    *(undefined8 *)(this + 0x808) = 0;
  }
  pvVar8 = *(void **)(this + 0x810);
  *(undefined8 *)(this + 0x810) = 0;
  if (pvVar8 != (void *)0x0) {
    puVar5 = *(void **)((long)pvVar8 + 0x30);
    while (puVar5 != (void *)0x0) {
      pvVar10 = (void *)*puVar5;
      operator_delete(puVar5);
      puVar5 = pvVar10;
    }
    pvVar10 = *(void **)((long)pvVar8 + 0x20);
    *(undefined8 *)((long)pvVar8 + 0x20) = 0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    base::Semaphore::~Semaphore((Semaphore *)((long)pvVar8 + 0x10));
    operator_delete(pvVar8);
  }
  this_02 = *(ArrayBufferCollector **)(this + 0x818);
  *(undefined8 *)(this + 0x818) = 0;
  if (this_02 != (ArrayBufferCollector *)0x0) {
    ArrayBufferCollector::~ArrayBufferCollector(this_02);
    operator_delete(this_02);
  }
  pvVar8 = *(void **)(this + 0x828);
  *(undefined8 *)(this + 0x828) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  lVar9 = *(long *)(this + 0x830);
  *(undefined8 *)(this + 0x830) = 0;
  if (lVar9 != 0) {
    FUN_00fa4710(this + 0x830);
  }
  pvVar8 = *(void **)(this + 0x838);
  *(undefined8 *)(this + 0x838) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  if (*(MemoryReducer **)(this + 0x848) != (MemoryReducer *)0x0) {
    MemoryReducer::TearDown(*(MemoryReducer **)(this + 0x848));
    pvVar8 = *(void **)(this + 0x848);
    *(undefined8 *)(this + 0x848) = 0;
    if (pvVar8 != (void *)0x0) {
      this_04 = *(__shared_weak_count **)((long)pvVar8 + 0x10);
      if (this_04 != (__shared_weak_count *)0x0) {
        p_Var1 = this_04 + 8;
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
          (**(code **)(*(long *)this_04 + 0x10))(this_04);
          std::__ndk1::__shared_weak_count::__release_weak(this_04);
        }
      }
      operator_delete(pvVar8);
    }
  }
  pvVar8 = *(void **)(this + 0x850);
  *(undefined8 *)(this + 0x850) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x858);
  *(undefined8 *)(this + 0x858) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x870);
  *(undefined8 *)(this + 0x870) = 0;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)((long)pvVar8 + 8) != 0) {
      *(undefined8 *)(*(long *)((long)pvVar8 + 8) + 8) = 0;
    }
    operator_delete(pvVar8);
  }
  ExternalStringTable::TearDown((ExternalStringTable *)(this + 0xae0));
  ArrayBufferTracker::TearDown(this);
  pvVar8 = *(void **)(this + 0x7f8);
  *(undefined8 *)(this + 0x7f8) = 0;
  if (pvVar8 != (void *)0x0) {
    base::Mutex::~Mutex((Mutex *)((long)pvVar8 + 0x1130));
    operator_delete(pvVar8);
  }
  ReadOnlyHeap::OnHeapTearDown(*(ReadOnlyHeap **)(this + 0xc28));
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  if (*(long **)(this + 0x130) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x130) + 8))();
  }
  *(undefined8 *)(this + 0x130) = 0;
  if (*(long **)(this + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x138) + 8))();
  }
  *(undefined8 *)(this + 0x138) = 0;
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 8))();
  }
  *(undefined8 *)(this + 0x140) = 0;
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  *(undefined8 *)(this + 0x148) = 0;
  if (*(long **)(this + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x150) + 8))();
  }
  *(undefined8 *)(this + 0x150) = 0;
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 8))();
  }
  *(undefined8 *)(this + 0x158) = 0;
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 8))();
  }
  *(undefined8 *)(this + 0x160) = 0;
  MemoryAllocator::TearDown(*(MemoryAllocator **)(this + 0x820));
  pvVar8 = *(void **)(this + 0x878);
  while (pvVar8 != (void *)0x0) {
    pvVar10 = *(void **)((long)pvVar8 + 0x10);
    operator_delete(pvVar8);
    pvVar8 = pvVar10;
  }
  this_03 = *(MemoryAllocator **)(this + 0x820);
  *(undefined8 *)(this + 0x878) = 0;
  *(undefined8 *)(this + 0x820) = 0;
  if (this_03 == (MemoryAllocator *)0x0) {
    return;
  }
  MemoryAllocator::~MemoryAllocator(this_03);
  operator_delete(this_03);
  return;
}

