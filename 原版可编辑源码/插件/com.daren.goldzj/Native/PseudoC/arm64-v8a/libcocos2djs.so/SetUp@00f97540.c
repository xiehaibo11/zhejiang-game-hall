
/* v8::internal::Heap::SetUp() */

void __thiscall v8::internal::Heap::SetUp(Heap *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  MemoryAllocator *this_00;
  MarkCompactCollector *this_01;
  ScavengerCollector *this_02;
  IncrementalMarking *this_03;
  ConcurrentMarking *this_04;
  Worklist *pWVar3;
  Worklist *pWVar4;
  Worklist *pWVar5;
  WeakObjects *pWVar6;
  MemoryAllocator *this_05;
  MarkCompactCollector *this_06;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (this[0xad0] == (Heap)0x0) {
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    ConfigureHeap(this,(ResourceConstraints *)&local_70);
  }
  uVar2 = GetRandomMmapAddr();
  *(ulong *)(this + 0x1c0) = uVar2 & 0xffffffff00000000;
  this_00 = operator_new(0x170);
  MemoryAllocator::MemoryAllocator
            (this_00,*(Isolate **)(this + 0x30),*(long *)(this + 0x40) * 3 + *(long *)(this + 0x58),
             *(ulong *)(this + 0x38));
  this_05 = *(MemoryAllocator **)(this + 0x820);
  *(MemoryAllocator **)(this + 0x820) = this_00;
  if (this_05 != (MemoryAllocator *)0x0) {
    MemoryAllocator::~MemoryAllocator(this_05);
    operator_delete(this_05);
  }
  this_01 = operator_new(0x2708);
  MarkCompactCollector::MarkCompactCollector(this_01,this);
  this_06 = *(MarkCompactCollector **)(this + 0x800);
  *(MarkCompactCollector **)(this + 0x800) = this_01;
  if (this_06 != (MarkCompactCollector *)0x0) {
    MarkCompactCollector::~MarkCompactCollector(this_06);
    operator_delete(this_06);
  }
  this_02 = operator_new(0x48);
  ScavengerCollector::ScavengerCollector(this_02,this);
  pvVar7 = *(void **)(this + 0x810);
  *(ScavengerCollector **)(this + 0x810) = this_02;
  if (pvVar7 != (void *)0x0) {
    puVar1 = *(void **)((long)pvVar7 + 0x30);
    while (puVar1 != (void *)0x0) {
      pvVar8 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar8;
    }
    pvVar8 = *(void **)((long)pvVar7 + 0x20);
    *(undefined8 *)((long)pvVar7 + 0x20) = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    base::Semaphore::~Semaphore((Semaphore *)((long)pvVar7 + 0x10));
    operator_delete(pvVar7);
  }
  this_03 = operator_new(0xb0);
  IncrementalMarking::IncrementalMarking
            (this_03,this,(MarkingWorklist *)(*(long *)(this + 0x800) + 0x58),
             (WeakObjects *)(*(long *)(this + 0x800) + 0x880));
  pvVar7 = *(void **)(this + 0x828);
  *(IncrementalMarking **)(this + 0x828) = this_03;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (FLAG_parallel_marking == '\0' && FLAG_concurrent_marking == '\0') {
    this_04 = operator_new(0x4e0);
    pWVar3 = (Worklist *)0x0;
    pWVar4 = (Worklist *)0x0;
    pWVar5 = (Worklist *)0x0;
    pWVar6 = (WeakObjects *)0x0;
  }
  else {
    lVar9 = *(long *)(this + 0x800);
    this_04 = operator_new(0x4e0);
    pWVar3 = (Worklist *)(lVar9 + 0x58);
    pWVar4 = (Worklist *)(lVar9 + 0x310);
    pWVar5 = (Worklist *)(lVar9 + 0x5c8);
    pWVar6 = (WeakObjects *)(lVar9 + 0x880);
  }
  ConcurrentMarking::ConcurrentMarking(this_04,this,pWVar3,pWVar4,pWVar5,pWVar6);
  lVar9 = *(long *)(this + 0x830);
  *(ConcurrentMarking **)(this + 0x830) = this_04;
  if (lVar9 != 0) {
    FUN_00fa4710(this + 0x830);
  }
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  return;
}

