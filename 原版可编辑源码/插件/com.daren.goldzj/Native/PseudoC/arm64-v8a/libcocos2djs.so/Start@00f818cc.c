
/* v8::internal::GCTracer::Start(v8::internal::GarbageCollector,
   v8::internal::GarbageCollectionReason, char const*) */

void __thiscall
v8::internal::GCTracer::Start(GCTracer *this,uint param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  Heap HVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  Heap *this_00;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  uint local_538;
  uint local_520;
  uint local_508;
  uint local_4f0;
  uint local_4d8;
  uint local_4c0;
  uint local_4a8;
  uint local_490;
  uint local_478;
  undefined8 local_460;
  undefined4 local_458;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(this + 0xb18);
  *(int *)(this + 0xb18) = iVar1 + 1;
  if (iVar1 != 0) goto LAB_00f8190c;
  memcpy(this + 0x4e0,this + 8,0x4d8);
  dVar16 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  this_00 = *(Heap **)this;
  lVar15 = *(long *)(this_00 + 0xe8);
  lVar12 = *(long *)(this_00 + 0x880);
  lVar8 = *(long *)(lVar15 + 0x150);
  lVar7 = *(long *)(lVar15 + 0x68);
  uVar9 = lVar8 - 4U & 0xfffffffffffc0000;
  uVar13 = lVar7 - 4U & 0xfffffffffffc0000;
  if (uVar9 != uVar13) {
    uVar11 = *(ulong *)(uVar9 + 0xe0);
    lVar14 = *(long *)(uVar9 + 0x28) - lVar8;
    if (uVar11 != uVar13) {
      do {
        lVar7 = MemoryChunkLayout::AllocatableMemoryInDataPage();
        uVar11 = *(ulong *)(uVar11 + 0xe0);
        lVar14 = lVar7 + lVar14;
      } while (uVar11 != uVar13);
      lVar7 = *(long *)(lVar15 + 0x68);
      this_00 = *(Heap **)this;
    }
    lVar8 = *(long *)(uVar13 + 0x20);
    lVar7 = lVar14 + lVar7;
  }
  lVar15 = *(long *)(this_00 + 0x888);
  lVar12 = (lVar7 - lVar8) + lVar12;
  lVar7 = Heap::OldGenerationSizeOfObjects(this_00);
  lVar8 = (lVar7 + lVar15) - *(long *)(this_00 + 0x890);
  lVar7 = Heap::EmbedderAllocationCounter(*(Heap **)this);
  dVar17 = *(double *)(this + 0xad0);
  if (dVar17 == 0.0) {
    *(double *)(this + 0xad0) = dVar16;
    *(long *)(this + 0xad8) = lVar12;
    *(long *)(this + 0xae0) = lVar8;
    *(long *)(this + 0xae8) = lVar7;
  }
  else {
    lVar15 = *(long *)(this + 0xad8);
    lVar14 = *(long *)(this + 0xae0);
    lVar10 = *(long *)(this + 0xae8);
    *(double *)(this + 0xad0) = dVar16;
    *(long *)(this + 0xad8) = lVar12;
    *(long *)(this + 0xae0) = lVar8;
    *(long *)(this + 0xae8) = lVar7;
    *(double *)(this + 0xaf0) = (dVar16 - dVar17) + *(double *)(this + 0xaf0);
    *(long *)(this + 0xaf8) = (lVar12 - lVar15) + *(long *)(this + 0xaf8);
    *(long *)(this + 0xb00) = (lVar8 - lVar14) + *(long *)(this + 0xb00);
    *(long *)(this + 0xb08) = (lVar7 - lVar10) + *(long *)(this + 0xb08);
  }
  if (param_2 == 2) {
    memset((void *)((long)&local_460 + 7),0,0x3d4);
    uVar6 = 3;
LAB_00f81ce8:
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = param_4;
    this[0x28] = (GCTracer)0x0;
    *(undefined4 *)(this + 8) = uVar6;
    *(undefined4 *)(this + 0xc) = param_3;
LAB_00f81cf8:
    memcpy(this + 0x29,&local_460,0x3db);
    *(undefined8 *)(this + 0x40c) = 0;
    *(ulong *)(this + 0x404) = (ulong)local_478;
    *(undefined8 *)(this + 0x414) = 0;
    *(undefined8 *)(this + 0x424) = 0;
    *(ulong *)(this + 0x41c) = (ulong)local_490;
    *(undefined8 *)(this + 0x42c) = 0;
    *(undefined8 *)(this + 0x43c) = 0;
    *(ulong *)(this + 0x434) = (ulong)local_4a8;
    *(undefined8 *)(this + 0x444) = 0;
    *(undefined8 *)(this + 0x454) = 0;
    *(ulong *)(this + 0x44c) = (ulong)local_4c0;
    *(undefined8 *)(this + 0x45c) = 0;
    *(undefined8 *)(this + 0x46c) = 0;
    *(ulong *)(this + 0x464) = (ulong)local_4d8;
    *(undefined8 *)(this + 0x474) = 0;
    *(undefined8 *)(this + 0x484) = 0;
    *(ulong *)(this + 0x47c) = (ulong)local_4f0;
    *(undefined8 *)(this + 0x48c) = 0;
    *(undefined8 *)(this + 0x49c) = 0;
    *(ulong *)(this + 0x494) = (ulong)local_508;
    *(undefined8 *)(this + 0x4a4) = 0;
    *(undefined8 *)(this + 0x4b4) = 0;
    *(ulong *)(this + 0x4ac) = (ulong)local_520;
    *(undefined8 *)(this + 0x4bc) = 0;
    *(undefined8 *)(this + 0x4cc) = 0;
    *(ulong *)(this + 0x4c4) = (ulong)local_538;
    *(undefined8 *)(this + 0x4d4) = 0;
  }
  else {
    if (param_2 == 1) {
      uVar9 = IncrementalMarking::WasActivated(*(IncrementalMarking **)(*(long *)this + 0x828));
      if ((uVar9 & 1) == 0) {
        memset((void *)((long)&local_460 + 7),0,0x3d4);
        uVar6 = 1;
      }
      else {
        memset((void *)((long)&local_460 + 7),0,0x3d4);
        uVar6 = 2;
      }
      goto LAB_00f81ce8;
    }
    if (param_2 == 0) {
      memset((void *)((long)&local_460 + 7),0,0x3d4);
      *(undefined4 *)(this + 8) = 0;
      *(undefined4 *)(this + 0xc) = param_3;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x10) = param_4;
      this[0x28] = (GCTracer)0x0;
      goto LAB_00f81cf8;
    }
  }
  HVar2 = (*(Heap **)this)[0xad4];
  *(double *)(this + 0x18) = dVar16;
  this[0x28] = (GCTracer)((byte)HVar2 & 1);
  uVar4 = Heap::SizeOfObjects(*(Heap **)this);
  *(undefined8 *)(this + 0x30) = uVar4;
  local_460 = *(undefined8 *)this;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(*(long *)(*(long *)this + 0x820) + 0x50);
  local_458 = 2;
  plVar5 = (long *)PagedSpaceIterator::Next((PagedSpaceIterator *)&local_460);
  if (plVar5 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar12 = (**(code **)(*plVar5 + 0x90))(plVar5);
      lVar8 = (**(code **)(*plVar5 + 0x60))(plVar5);
      lVar7 = lVar12 + lVar7 + lVar8;
      plVar5 = (long *)PagedSpaceIterator::Next((PagedSpaceIterator *)&local_460);
    } while (plVar5 != (long *)0x0);
  }
  *(long *)(this + 0x50) = lVar7;
  lVar7 = (**(code **)(**(long **)(*(long *)this + 0xe8) + 0x48))();
  lVar12 = (**(code **)(**(long **)(*(long *)this + 0x118) + 0x50))
                     (*(long **)(*(long *)this + 0x118));
  *(long *)(this + 0x60) = lVar12 + lVar7;
  memset(this + 0x70,0,0x380);
  iVar1 = (int)*(undefined8 *)(*(long *)this + 0xcd0);
  if ((param_2 & 0xfffffffd) == 0) {
    Histogram::AddSample(iVar1 + 0x378);
  }
  else {
    Histogram::AddSample(iVar1 + 0x170);
    if (FLAG_trace_gc_freelists != '\0') {
      PrintIsolate((void *)(*(long *)this + -0x8850),"FreeLists statistics before collection:\n");
      Heap::PrintFreeListsStats(*(Heap **)this);
    }
  }
LAB_00f8190c:
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

