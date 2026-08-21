
/* v8::internal::V8HeapExplorer::SetNativeBindReference(v8::internal::HeapEntry*, char const*,
   v8::internal::Object) */

void __thiscall
v8::internal::V8HeapExplorer::SetNativeBindReference
          (V8HeapExplorer *this,uint *param_1,undefined8 param_2,void *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if ((((ulong)param_4 & 1) != 0) &&
     (lVar3 = HeapSnapshotGenerator::FindOrAddEntry
                        (*(HeapSnapshotGenerator **)(this + 0x30),param_4,
                         (HeapEntriesAllocator *)this), lVar3 != 0)) {
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
    *(long *)(puVar5 + 2) = lVar3;
    *(undefined8 *)(puVar5 + 4) = param_2;
    *puVar5 = uVar2 >> 1 & 0x7ffffff8 | 5;
    *(long *)(lVar8 + 0x128) = *(long *)(lVar8 + 0x128) + 1;
  }
  return;
}

