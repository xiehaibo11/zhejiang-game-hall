
/* v8::internal::Heap::SetUpSpaces() */

void v8::internal::Heap::SetUpSpaces(void)

{
  __shared_weak_count *p_Var1;
  Isolate *this;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  Heap *in_x0;
  NewSpace *this_00;
  PagedSpace *pPVar5;
  FreeListMap *this_01;
  OldLargeObjectSpace *this_02;
  NewLargeObjectSpace *this_03;
  long lVar6;
  CodeLargeObjectSpace *this_04;
  GCTracer *this_05;
  MinorMarkCompactCollector *this_06;
  undefined8 *puVar7;
  MemoryMeasurement *this_07;
  MemoryReducer *this_08;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined2 *puVar15;
  long *plVar16;
  RandomNumberGenerator *this_09;
  StressMarkingObserver *this_10;
  StressScavengeObserver *this_11;
  ObjectStats *pOVar17;
  ulong in_x1;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  void *pvVar21;
  ArrayBufferCollector *this_12;
  Logger *pLVar22;
  __shared_weak_count *this_13;
  
  this_00 = Malloced::operator_new((Malloced *)0x228,in_x1);
  NewSpace::NewSpace(this_00,in_x0,*(PageAllocator **)(*(long *)(in_x0 + 0x820) + 0x20),
                     *(ulong *)(in_x0 + 0x48),*(ulong *)(in_x0 + 0x40));
  *(NewSpace **)(in_x0 + 0xe8) = this_00;
  *(NewSpace **)(in_x0 + 0x130) = this_00;
  pPVar5 = Malloced::operator_new((Malloced *)0xe8,extraout_x1);
  FreeList::CreateFreeList();
  PagedSpace::PagedSpace(pPVar5);
  *(undefined ***)pPVar5 = &PTR__PagedSpace_01ca7a58;
  *(PagedSpace **)(in_x0 + 0xf0) = pPVar5;
  *(PagedSpace **)(in_x0 + 0x138) = pPVar5;
  pPVar5 = Malloced::operator_new((Malloced *)0xe8,extraout_x1_00);
  FreeList::CreateFreeList();
  PagedSpace::PagedSpace(pPVar5);
  *(undefined ***)pPVar5 = &PTR__PagedSpace_01ca7b28;
  *(PagedSpace **)(in_x0 + 0xf8) = pPVar5;
  *(PagedSpace **)(in_x0 + 0x140) = pPVar5;
  pPVar5 = Malloced::operator_new((Malloced *)0xe8,extraout_x1_01);
  this_01 = operator_new(0x30);
  FreeListMap::FreeListMap(this_01);
  PagedSpace::PagedSpace(pPVar5);
  *(undefined ***)pPVar5 = &PTR__PagedSpace_01ca9ff8;
  *(PagedSpace **)(in_x0 + 0x100) = pPVar5;
  *(PagedSpace **)(in_x0 + 0x148) = pPVar5;
  this_02 = Malloced::operator_new((Malloced *)0x80,extraout_x1_02);
  OldLargeObjectSpace::OldLargeObjectSpace(this_02,in_x0);
  *(OldLargeObjectSpace **)(in_x0 + 0x108) = this_02;
  *(OldLargeObjectSpace **)(in_x0 + 0x150) = this_02;
  this_03 = Malloced::operator_new((Malloced *)0x90,extraout_x1_03);
  uVar18 = *(ulong *)(*(long *)(in_x0 + 0xe8) + 0x138);
  lVar6 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  NewLargeObjectSpace::NewLargeObjectSpace(this_03,in_x0,(uVar18 >> 0x12) * lVar6);
  *(NewLargeObjectSpace **)(in_x0 + 0x118) = this_03;
  *(NewLargeObjectSpace **)(in_x0 + 0x160) = this_03;
  this_04 = Malloced::operator_new((Malloced *)0xa8,extraout_x1_04);
  CodeLargeObjectSpace::CodeLargeObjectSpace(this_04,in_x0);
  *(CodeLargeObjectSpace **)(in_x0 + 0x110) = this_04;
  *(CodeLargeObjectSpace **)(in_x0 + 0x158) = this_04;
  *(undefined8 *)(in_x0 + 0x638) = 0;
  *(undefined8 *)(in_x0 + 0x630) = 0;
  *(undefined8 *)(in_x0 + 0x648) = 0;
  *(undefined8 *)(in_x0 + 0x640) = 0;
  *(undefined8 *)(in_x0 + 0x658) = 0;
  *(undefined8 *)(in_x0 + 0x650) = 0;
  *(undefined8 *)(in_x0 + 0x668) = 0;
  *(undefined8 *)(in_x0 + 0x660) = 0;
  *(undefined8 *)(in_x0 + 0x678) = 0;
  *(undefined8 *)(in_x0 + 0x670) = 0;
  *(undefined8 *)(in_x0 + 0x688) = 0;
  *(undefined8 *)(in_x0 + 0x680) = 0;
  *(undefined8 *)(in_x0 + 0x698) = 0;
  *(undefined8 *)(in_x0 + 0x690) = 0;
  *(undefined8 *)(in_x0 + 0x6a8) = 0;
  *(undefined8 *)(in_x0 + 0x6a0) = 0;
  *(undefined8 *)(in_x0 + 0x6b8) = 0;
  *(undefined8 *)(in_x0 + 0x6b0) = 0;
  *(undefined8 *)(in_x0 + 0x6c8) = 0;
  *(undefined8 *)(in_x0 + 0x6c0) = 0;
  *(undefined8 *)(in_x0 + 0x6d8) = 0;
  *(undefined8 *)(in_x0 + 0x6d0) = 0;
  *(undefined8 *)(in_x0 + 0x6e8) = 0;
  *(undefined8 *)(in_x0 + 0x6e0) = 0;
  *(undefined8 *)(in_x0 + 0x6f8) = 0;
  *(undefined8 *)(in_x0 + 0x6f0) = 0;
  *(undefined8 *)(in_x0 + 0x708) = 0;
  *(undefined8 *)(in_x0 + 0x700) = 0;
  *(undefined8 *)(in_x0 + 0x718) = 0;
  *(undefined8 *)(in_x0 + 0x710) = 0;
  *(undefined8 *)(in_x0 + 0x728) = 0;
  *(undefined8 *)(in_x0 + 0x720) = 0;
  *(undefined8 *)(in_x0 + 0x738) = 0;
  *(undefined8 *)(in_x0 + 0x730) = 0;
  *(undefined8 *)(in_x0 + 0x748) = 0;
  *(undefined8 *)(in_x0 + 0x740) = 0;
  *(undefined8 *)(in_x0 + 0x758) = 0;
  *(undefined8 *)(in_x0 + 0x750) = 0;
  *(undefined8 *)(in_x0 + 0x768) = 0;
  *(undefined8 *)(in_x0 + 0x760) = 0;
  *(undefined8 *)(in_x0 + 0x778) = 0;
  *(undefined8 *)(in_x0 + 0x770) = 0;
  *(undefined8 *)(in_x0 + 0x788) = 0;
  *(undefined8 *)(in_x0 + 0x780) = 0;
  *(undefined8 *)(in_x0 + 0x798) = 0;
  *(undefined8 *)(in_x0 + 0x790) = 0;
  this_05 = operator_new(0x11b0);
  GCTracer::GCTracer(this_05,in_x0);
  pvVar21 = *(void **)(in_x0 + 0x7f8);
  *(GCTracer **)(in_x0 + 0x7f8) = this_05;
  if (pvVar21 != (void *)0x0) {
    base::Mutex::~Mutex((Mutex *)((long)pvVar21 + 0x1130));
    operator_delete(pvVar21);
  }
  this_06 = operator_new(0x70);
  MinorMarkCompactCollector::MinorMarkCompactCollector(this_06,in_x0);
  *(MinorMarkCompactCollector **)(in_x0 + 0x808) = this_06;
  puVar7 = operator_new(0x48);
  *puVar7 = in_x0;
  base::Mutex::Mutex((Mutex *)(puVar7 + 1));
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  this_12 = *(ArrayBufferCollector **)(in_x0 + 0x818);
  *(undefined8 **)(in_x0 + 0x818) = puVar7;
  if (this_12 != (ArrayBufferCollector *)0x0) {
    ArrayBufferCollector::~ArrayBufferCollector(this_12);
    operator_delete(this_12);
  }
  pvVar21 = operator_new(1);
  pvVar19 = *(void **)(in_x0 + 0x838);
  *(void **)(in_x0 + 0x838) = pvVar21;
  if (pvVar19 != (void *)0x0) {
    operator_delete(pvVar19);
  }
  this_07 = operator_new(8);
  this = (Isolate *)(in_x0 + -0x8850);
  MemoryMeasurement::MemoryMeasurement(this_07,this);
  pvVar21 = *(void **)(in_x0 + 0x840);
  *(MemoryMeasurement **)(in_x0 + 0x840) = this_07;
  if (pvVar21 != (void *)0x0) {
    operator_delete(pvVar21);
  }
  this_08 = operator_new(0x48);
  MemoryReducer::MemoryReducer(this_08,in_x0);
  pvVar21 = *(void **)(in_x0 + 0x848);
  *(MemoryReducer **)(in_x0 + 0x848) = this_08;
  if (pvVar21 != (void *)0x0) {
    this_13 = *(__shared_weak_count **)((long)pvVar21 + 0x10);
    if (this_13 != (__shared_weak_count *)0x0) {
      p_Var1 = this_13 + 8;
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
        (**(code **)(*(long *)this_13 + 0x10))(this_13);
        std::__ndk1::__shared_weak_count::__release_weak(this_13);
      }
    }
    operator_delete(pvVar21);
  }
  if (TracingFlags::gc_stats != 0) {
    pOVar17 = operator_new(0x53ea8);
    *(Heap **)pOVar17 = in_x0;
    ObjectStats::ClearObjectStats(pOVar17,false);
    pvVar21 = *(void **)(in_x0 + 0x850);
    *(ObjectStats **)(in_x0 + 0x850) = pOVar17;
    if (pvVar21 != (void *)0x0) {
      operator_delete(pvVar21);
    }
    pOVar17 = operator_new(0x53ea8);
    *(Heap **)pOVar17 = in_x0;
    ObjectStats::ClearObjectStats(pOVar17,false);
    pvVar21 = *(void **)(in_x0 + 0x858);
    *(ObjectStats **)(in_x0 + 0x858) = pOVar17;
    if (pvVar21 != (void *)0x0) {
      operator_delete(pvVar21);
    }
  }
  puVar7 = operator_new(0x38);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = this;
  *(undefined8 *)((long)puVar7 + 0x15) = 0;
  pvVar21 = *(void **)(in_x0 + 0x870);
  *(undefined8 **)(in_x0 + 0x870) = puVar7;
  if (pvVar21 != (void *)0x0) {
    if (*(long *)((long)pvVar21 + 8) != 0) {
      *(undefined8 *)(*(long *)((long)pvVar21 + 8) + 8) = 0;
    }
    operator_delete(pvVar21);
  }
  pLVar22 = *(Logger **)(*(long *)(in_x0 + 0x30) + 0x9558);
  uVar18 = Logger::is_logging(pLVar22);
  if ((uVar18 & 1) != 0) {
    lVar6 = Capacity(in_x0);
    Logger::IntPtrTEvent(pLVar22,"heap-capacity",lVar6);
  }
  pLVar22 = *(Logger **)(*(long *)(in_x0 + 0x30) + 0x9558);
  uVar18 = Logger::is_logging(pLVar22);
  if ((uVar18 & 1) != 0) {
    if (*(long *)(in_x0 + 0xe8) == 0) {
      lVar6 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(in_x0 + 0x130) + 0x60))();
      lVar9 = (**(code **)(**(long **)(in_x0 + 0x138) + 0x60))(*(long **)(in_x0 + 0x138));
      lVar10 = (**(code **)(**(long **)(in_x0 + 0x140) + 0x60))(*(long **)(in_x0 + 0x140));
      lVar11 = (**(code **)(**(long **)(in_x0 + 0x148) + 0x60))(*(long **)(in_x0 + 0x148));
      lVar12 = (**(code **)(**(long **)(in_x0 + 0x150) + 0x60))(*(long **)(in_x0 + 0x150));
      lVar13 = (**(code **)(**(long **)(in_x0 + 0x158) + 0x60))(*(long **)(in_x0 + 0x158));
      lVar14 = (**(code **)(**(long **)(in_x0 + 0x160) + 0x60))(*(long **)(in_x0 + 0x160));
      uVar20 = *(ulong *)(*(long *)(in_x0 + 0x820) + 0x50);
      uVar18 = *(ulong *)(*(long *)(in_x0 + 0x820) + 0x48);
      lVar6 = 0;
      if (uVar20 <= uVar18) {
        lVar6 = uVar18 - uVar20;
      }
      lVar6 = lVar9 + lVar8 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar6;
    }
    Logger::IntPtrTEvent(pLVar22,"heap-available",lVar6);
  }
  MarkCompactCollector::SetUp();
  if (*(long *)(in_x0 + 0x808) != 0) {
    MinorMarkCompactCollector::SetUp();
  }
  if (FLAG_idle_time_scavenge != '\0') {
    puVar15 = operator_new(8);
    *puVar15 = 0;
    *(undefined4 *)(puVar15 + 2) = 0;
    pvVar21 = *(void **)(in_x0 + 0x860);
    *(undefined2 **)(in_x0 + 0x860) = puVar15;
    if (pvVar21 != (void *)0x0) {
      operator_delete(pvVar21);
    }
    puVar7 = operator_new(0x20);
    puVar7[2] = 0x100000;
    puVar7[1] = 0x100000;
    *puVar7 = &PTR__AllocationObserver_01ca7bf8;
    puVar7[3] = in_x0;
    plVar16 = *(long **)(in_x0 + 0x868);
    *(undefined8 **)(in_x0 + 0x868) = puVar7;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
      puVar7 = *(undefined8 **)(in_x0 + 0x868);
    }
    (**(code **)(**(long **)(in_x0 + 0xe8) + 0x10))(*(long **)(in_x0 + 0xe8),puVar7);
  }
  *(code **)(in_x0 + 0x628) = DefaultGetExternallyAllocatedMemoryInBytesCallback;
  if (0 < FLAG_stress_marking) {
    this_09 = (RandomNumberGenerator *)Isolate::fuzzer_rng(this);
    uVar4 = base::RandomNumberGenerator::NextInt(this_09,FLAG_stress_marking + 1);
    *(undefined4 *)(in_x0 + 0x188) = uVar4;
    this_10 = operator_new(0x20);
    StressMarkingObserver::StressMarkingObserver(this_10,in_x0);
    *(StressMarkingObserver **)(in_x0 + 400) = this_10;
    AddAllocationObserversToAllSpaces
              (in_x0,(AllocationObserver *)this_10,(AllocationObserver *)this_10);
  }
  if (0 < FLAG_stress_scavenge) {
    this_11 = operator_new(0x30);
    StressScavengeObserver::StressScavengeObserver(this_11,in_x0);
    *(StressScavengeObserver **)(in_x0 + 0x198) = this_11;
    (**(code **)(**(long **)(in_x0 + 0xe8) + 0x10))(*(long **)(in_x0 + 0xe8),this_11);
  }
  in_x0[0x168] = FLAG_write_protect_code_memory;
  return;
}

