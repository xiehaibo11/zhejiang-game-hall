
/* v8::internal::V8HeapExplorer::ExtractJSArrayBufferReferences(v8::internal::HeapEntry*,
   v8::internal::JSArrayBuffer) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractJSArrayBufferReferences
          (V8HeapExplorer *this,uint *param_1,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined **local_48;
  undefined8 uStack_40;
  V8HeapExplorer *local_38;
  
  if (*(long *)(param_3 + 0x13) != 0) {
    uStack_40 = *(undefined8 *)(param_3 + 0xb);
    local_48 = &PTR__HeapEntriesAllocator_01cb74b8;
    local_38 = this;
    uVar3 = HeapSnapshotGenerator::FindOrAddEntry
                      (*(HeapSnapshotGenerator **)(this + 0x30),*(void **)(param_3 + 0x13),
                       (HeapEntriesAllocator *)&local_48);
    lVar8 = *(long *)(param_1 + 4);
    param_1[1] = param_1[1] + 1;
    lVar4 = *(long *)(lVar8 + 0x108);
    lVar6 = *(long *)(lVar8 + 0x110);
    uVar1 = 0;
    if (lVar6 - lVar4 != 0) {
      uVar1 = (lVar6 - lVar4 >> 3) * 0xaa - 1;
    }
    uVar7 = *(long *)(lVar8 + 0x128) + *(long *)(lVar8 + 0x120);
    if (uVar1 == uVar7) {
      std::__ndk1::
      deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
      __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                           *)(lVar8 + 0x100));
      lVar4 = *(long *)(lVar8 + 0x108);
      lVar6 = *(long *)(lVar8 + 0x110);
      uVar7 = *(long *)(lVar8 + 0x120) + *(long *)(lVar8 + 0x128);
    }
    if (lVar6 == lVar4) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)(*(long *)(lVar4 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
    }
    uVar2 = *param_1;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(char **)(puVar5 + 4) = "backing_store";
    *puVar5 = uVar2 >> 1 & 0x7ffffff8 | 3;
    *(long *)(lVar8 + 0x128) = *(long *)(lVar8 + 0x128) + 1;
  }
  return;
}

