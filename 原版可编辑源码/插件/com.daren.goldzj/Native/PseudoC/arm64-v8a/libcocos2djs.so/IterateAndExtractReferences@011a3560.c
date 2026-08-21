
/* v8::internal::V8HeapExplorer::IterateAndExtractReferences(v8::internal::HeapSnapshotGenerator*)
    */

uint __thiscall
v8::internal::V8HeapExplorer::IterateAndExtractReferences
          (V8HeapExplorer *this,HeapSnapshotGenerator *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  void *local_100;
  long local_f8 [8];
  undefined **local_b8;
  V8HeapExplorer *pVStack_b0;
  void *local_a8;
  long lStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined **local_80;
  V8HeapExplorer *pVStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(HeapSnapshotGenerator **)(this + 0x30) = param_1;
  puVar13 = *(uint **)(*(long *)(this + 0x10) + 8);
  uVar14 = *(undefined8 *)(*(long *)(this + 0x10) + 0x10);
  uVar5 = puVar13[1];
  lVar10 = *(long *)(puVar13 + 4);
  puVar13[1] = uVar5 + 1;
  lVar11 = *(long *)(lVar10 + 0x108);
  lVar8 = *(long *)(lVar10 + 0x110);
  uVar1 = 0;
  if (lVar8 - lVar11 != 0) {
    uVar1 = (lVar8 - lVar11 >> 3) * 0xaa - 1;
  }
  uVar9 = *(long *)(lVar10 + 0x128) + *(long *)(lVar10 + 0x120);
  if (uVar1 == uVar9) {
    std::__ndk1::
    deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
    __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                         *)(lVar10 + 0x100));
    lVar11 = *(long *)(lVar10 + 0x108);
    lVar8 = *(long *)(lVar10 + 0x110);
    uVar9 = *(long *)(lVar10 + 0x120) + *(long *)(lVar10 + 0x128);
  }
  if (lVar8 == lVar11) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)(*(long *)(lVar11 + (uVar9 / 0xaa) * 8) + (uVar9 % 0xaa) * 0x18);
  }
  uVar3 = *puVar13;
  *(undefined8 *)(puVar7 + 2) = uVar14;
  puVar7[4] = uVar5 + 1;
  *puVar7 = uVar3 >> 1 & 0x7ffffff8 | 1;
  *(long *)(lVar10 + 0x128) = *(long *)(lVar10 + 0x128) + 1;
  lVar11 = 0x18;
  do {
    puVar13 = *(uint **)(*(long *)(this + 0x10) + 0x10);
    uVar14 = *(undefined8 *)(*(long *)(this + 0x10) + lVar11);
    uVar5 = puVar13[1];
    lVar12 = *(long *)(puVar13 + 4);
    puVar13[1] = uVar5 + 1;
    lVar8 = *(long *)(lVar12 + 0x108);
    lVar10 = *(long *)(lVar12 + 0x110);
    uVar1 = 0;
    if (lVar10 - lVar8 != 0) {
      uVar1 = (lVar10 - lVar8 >> 3) * 0xaa - 1;
    }
    uVar9 = *(long *)(lVar12 + 0x128) + *(long *)(lVar12 + 0x120);
    if (uVar1 == uVar9) {
      std::__ndk1::
      deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
      __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                           *)(lVar12 + 0x100));
      lVar8 = *(long *)(lVar12 + 0x108);
      lVar10 = *(long *)(lVar12 + 0x110);
      uVar9 = *(long *)(lVar12 + 0x120) + *(long *)(lVar12 + 0x128);
    }
    if (lVar10 == lVar8) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)(*(long *)(lVar8 + (uVar9 / 0xaa) * 8) + (uVar9 % 0xaa) * 0x18);
    }
    uVar3 = *puVar13;
    *(undefined8 *)(puVar7 + 2) = uVar14;
    puVar7[4] = uVar5 + 1;
    lVar11 = lVar11 + 8;
    *puVar7 = uVar3 >> 1 & 0x7ffffff8 | 1;
    *(long *)(lVar12 + 0x128) = *(long *)(lVar12 + 0x128) + 1;
  } while (lVar11 != 0xd0);
  local_70 = 0;
  local_80 = &PTR__RootVisitor_01cb74e0;
  local_f8[0] = *(long *)(this + 8) + -0x87d0;
  pVStack_78 = this;
  ReadOnlyRoots::Iterate((ReadOnlyRoots *)local_f8,(RootVisitor *)&local_80);
  Heap::IterateRoots(*(Heap **)(this + 8),&local_80,5);
  local_70 = 1;
  Heap::IterateWeakGlobalHandles(*(Heap **)(this + 8),(RootVisitor *)&local_80);
  CombinedHeapObjectIterator::CombinedHeapObjectIterator
            ((CombinedHeapObjectIterator *)local_f8,*(undefined8 *)(this + 8),1);
  local_100 = (void *)CombinedHeapObjectIterator::Next((CombinedHeapObjectIterator *)local_f8);
  if ((int)local_100 == 0) {
    *(undefined8 *)(this + 0x30) = 0;
LAB_011a390c:
    uVar5 = (**(code **)(**(long **)(this + 0x28) + 0x18))(*(long **)(this + 0x28),1);
LAB_011a3924:
    HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)local_f8);
    if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5 & 1;
  }
  do {
    uVar3 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_100,
                       (ulong)local_100 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_100 - 1)
                      );
    uVar5 = uVar3 + 3;
    if (-1 < (int)uVar3) {
      uVar5 = uVar3;
    }
    uVar1 = (long)((ulong)uVar5 << 0x20) >> 0x22;
    if (*(ulong *)(this + 0xc0) < uVar1) {
      pvVar6 = *(void **)(this + 0xb8);
      *(undefined8 *)(this + 0xb8) = 0;
      *(undefined8 *)(this + 0xc0) = 0;
      *(undefined8 *)(this + 200) = 0;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
                ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0xb8),uVar1,false);
    }
    if (((ulong)local_100 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = HeapSnapshotGenerator::FindOrAddEntry
                         (*(HeapSnapshotGenerator **)(this + 0x30),local_100,
                          (HeapEntriesAllocator *)this);
    }
    ExtractReferences(this,uVar14,local_100);
    SetInternalReference
              (this,uVar14,"map",
               (ulong)local_100 & 0xffffffff00000000 | (ulong)*(uint *)((long)local_100 + -1),0);
    lStack_a0 = (long)local_100 + -1;
    local_a8 = local_100;
    local_b8 = &PTR__ObjectVisitor_01cb7518;
    pVStack_b0 = this;
    iVar4 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_a8,
                       (ulong)local_100 & 0xffffffff00000000 |
                       (ulong)*(uint *)((long)local_100 + -1));
    local_88 = 0;
    local_98 = (long)local_a8 + (long)iVar4 + -1;
    uStack_90 = uVar14;
    HeapObject::Iterate((HeapObject *)&local_100,(ObjectVisitor *)&local_b8);
    ExtractLocation(this,uVar14,local_100);
    uVar5 = (**(code **)(**(long **)(this + 0x28) + 0x18))(*(long **)(this + 0x28),0);
    uVar5 = uVar5 ^ 1;
    while( true ) {
      local_100 = (void *)CombinedHeapObjectIterator::Next((CombinedHeapObjectIterator *)local_f8);
      (**(code **)(**(long **)(this + 0x28) + 0x10))();
      if ((int)local_100 == 0) {
        *(undefined8 *)(this + 0x30) = 0;
        if ((uVar5 & 1) == 0) goto LAB_011a390c;
        uVar5 = 0;
        goto LAB_011a3924;
      }
      if ((uVar5 & 1) == 0) break;
      uVar5 = 1;
    }
  } while( true );
}

