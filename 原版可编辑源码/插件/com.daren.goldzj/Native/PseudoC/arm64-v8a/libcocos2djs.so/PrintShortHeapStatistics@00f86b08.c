
/* v8::internal::Heap::PrintShortHeapStatistics() */

void __thiscall v8::internal::Heap::PrintShortHeapStatistics(Heap *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  long *plVar21;
  long lVar22;
  
  if (FLAG_trace_gc_verbose != '\0') {
    uVar19 = *(ulong *)(*(long *)(this + 0x820) + 0x50);
    uVar18 = *(ulong *)(*(long *)(this + 0x820) + 0x48);
    uVar1 = 0;
    if (uVar19 <= uVar18) {
      uVar1 = uVar18 - uVar19;
    }
    PrintIsolate(*(void **)(this + 0x30),
                 "Memory allocator,       used: %6zu KB, available: %6zu KB\n",
                 *(ulong *)(*(long *)(this + 0x820) + 0x50) >> 10,uVar1 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0x120) + 0x48))();
    uVar18 = (**(code **)(**(long **)(this + 0x120) + 0x60))(*(long **)(this + 0x120));
    uVar19 = (**(code **)(**(long **)(this + 0x120) + 0x38))(*(long **)(this + 0x120));
    PrintIsolate(pvVar20,
                 "Read-only space,        used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0xe8) + 0x48))();
    uVar18 = (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8));
    uVar19 = (**(code **)(**(long **)(this + 0xe8) + 0x38))(*(long **)(this + 0xe8));
    PrintIsolate(pvVar20,
                 "New space,              used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0x118) + 0x50))();
    uVar18 = (**(code **)(**(long **)(this + 0x118) + 0x60))(*(long **)(this + 0x118));
    uVar19 = (**(code **)(**(long **)(this + 0x118) + 0x38))(*(long **)(this + 0x118));
    PrintIsolate(pvVar20,
                 "New large object space, used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0xf0) + 0x50))();
    uVar18 = (**(code **)(**(long **)(this + 0xf0) + 0x60))(*(long **)(this + 0xf0));
    uVar19 = (**(code **)(**(long **)(this + 0xf0) + 0x38))(*(long **)(this + 0xf0));
    PrintIsolate(pvVar20,
                 "Old space,              used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0xf8) + 0x50))();
    uVar18 = (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8));
    uVar19 = (**(code **)(**(long **)(this + 0xf8) + 0x38))(*(long **)(this + 0xf8));
    PrintIsolate(pvVar20,
                 "Code space,             used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0x100) + 0x50))();
    uVar18 = (**(code **)(**(long **)(this + 0x100) + 0x60))(*(long **)(this + 0x100));
    uVar19 = (**(code **)(**(long **)(this + 0x100) + 0x38))(*(long **)(this + 0x100));
    PrintIsolate(pvVar20,
                 "Map space,              used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    uVar18 = (**(code **)(**(long **)(this + 0x108) + 0x60))(*(long **)(this + 0x108));
    uVar19 = (**(code **)(**(long **)(this + 0x108) + 0x38))(*(long **)(this + 0x108));
    PrintIsolate(pvVar20,
                 "Large object space,     used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(**(long **)(this + 0x110) + 0x50))();
    uVar18 = (**(code **)(**(long **)(this + 0x110) + 0x60))(*(long **)(this + 0x110));
    uVar19 = (**(code **)(**(long **)(this + 0x110) + 0x38))(*(long **)(this + 0x110));
    PrintIsolate(pvVar20,
                 "Code large object space,     used: %6zu KB, available: %6zu KB, committed: %6zu KB\n"
                 ,uVar1 >> 10,uVar18 >> 10,uVar19 >> 10);
    plVar21 = *(long **)(this + 0x120);
    pvVar20 = *(void **)(this + 0x30);
    lVar2 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
    lVar3 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
    lVar4 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
    lVar5 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
    lVar6 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
    lVar7 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
    lVar8 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
    lVar9 = (**(code **)(*plVar21 + 0x50))(plVar21);
    if (*(long *)(this + 0xe8) == 0) {
      lVar22 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(this + 0x130) + 0x60))();
      lVar11 = (**(code **)(**(long **)(this + 0x138) + 0x60))(*(long **)(this + 0x138));
      lVar12 = (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
      lVar13 = (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148));
      lVar14 = (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150));
      lVar15 = (**(code **)(**(long **)(this + 0x158) + 0x60))(*(long **)(this + 0x158));
      lVar16 = (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160));
      uVar18 = *(ulong *)(*(long *)(this + 0x820) + 0x50);
      uVar1 = *(ulong *)(*(long *)(this + 0x820) + 0x48);
      lVar22 = 0;
      if (uVar18 <= uVar1) {
        lVar22 = uVar1 - uVar18;
      }
      lVar22 = lVar11 + lVar10 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + lVar22;
    }
    lVar10 = (**(code **)(*plVar21 + 0x60))(plVar21);
    lVar11 = CommittedMemory(this);
    lVar12 = (**(code **)(*plVar21 + 0x38))(plVar21);
    PrintIsolate(pvVar20,
                 "All spaces,             used: %6zu KB, available: %6zu KB, committed: %6zu KB\n",
                 (ulong)(lVar3 + lVar2 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9) >> 10,
                 (ulong)(lVar10 + lVar22) >> 10,(ulong)(lVar12 + lVar11) >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar17 = MemoryAllocator::Unmapper::NumberOfCommittedChunks
                       ((Unmapper *)(*(long *)(this + 0x820) + 0x88));
    if (*(long *)(this + 0xe8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = MemoryAllocator::Unmapper::CommittedBufferedMemory
                        ((Unmapper *)(*(long *)(this + 0x820) + 0x88));
      uVar1 = uVar1 >> 10;
    }
    PrintIsolate(pvVar20,"Unmapper buffering %zu chunks of committed: %6zu KB\n",uVar17,uVar1);
    lVar3 = *(long *)(this + -0x8830);
    lVar2 = lVar3 + 0x3ff;
    if (-1 < lVar3) {
      lVar2 = lVar3;
    }
    PrintIsolate(*(void **)(this + 0x30),"External memory reported: %6ld KB\n",lVar2 >> 10);
    PrintIsolate(*(void **)(this + 0x30),"Backing store memory: %6zu KB\n",
                 *(ulong *)(this + 0xa0) >> 10);
    pvVar20 = *(void **)(this + 0x30);
    uVar1 = (**(code **)(this + 0x628))();
    PrintIsolate(pvVar20,"External memory global %zu KB\n",uVar1 >> 10);
    PrintIsolate(*(void **)(this + 0x30),"Total time spent in GC  : %.1f ms\n",
                 *(undefined8 *)(this + 0x7e0));
    return;
  }
  return;
}

