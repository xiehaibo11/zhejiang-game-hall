
/* v8::internal::V8HeapExplorer::SetContextReference(v8::internal::HeapEntry*, v8::internal::String,
   v8::internal::Object, int) */

void __thiscall
v8::internal::V8HeapExplorer::SetContextReference
          (V8HeapExplorer *this,uint *param_1,undefined8 param_3,void *param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((((ulong)param_4 & 1) != 0) &&
     (lVar2 = HeapSnapshotGenerator::FindOrAddEntry
                        (*(HeapSnapshotGenerator **)(this + 0x30),param_4,
                         (HeapEntriesAllocator *)this), lVar2 != 0)) {
    uVar3 = StringsStorage::GetName(*(StringsStorage **)(this + 0x18),param_3);
    lVar9 = *(long *)(param_1 + 4);
    param_1[1] = param_1[1] + 1;
    lVar4 = *(long *)(lVar9 + 0x108);
    lVar6 = *(long *)(lVar9 + 0x110);
    uVar8 = 0;
    if (lVar6 - lVar4 != 0) {
      uVar8 = (lVar6 - lVar4 >> 3) * 0xaa - 1;
    }
    uVar7 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
    if (uVar8 == uVar7) {
      std::__ndk1::
      deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
      __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                           *)(lVar9 + 0x100));
      lVar4 = *(long *)(lVar9 + 0x108);
      lVar6 = *(long *)(lVar9 + 0x110);
      uVar7 = *(long *)(lVar9 + 0x120) + *(long *)(lVar9 + 0x128);
    }
    if (lVar6 == lVar4) {
      puVar5 = (uint *)0x0;
    }
    else {
      puVar5 = (uint *)(*(long *)(lVar4 + (uVar7 / 0xaa) * 8) + (uVar7 % 0xaa) * 0x18);
    }
    uVar1 = *param_1;
    *(long *)(puVar5 + 2) = lVar2;
    *(undefined8 *)(puVar5 + 4) = uVar3;
    *puVar5 = uVar1 >> 1 & 0x7ffffff8;
    *(long *)(lVar9 + 0x128) = *(long *)(lVar9 + 0x128) + 1;
    if (-1 < (int)param_5) {
      uVar8 = (ulong)(param_5 >> 5) & 0x7fffff8;
      *(ulong *)(*(long *)(this + 0xb8) + uVar8) =
           *(ulong *)(*(long *)(this + 0xb8) + uVar8) | 1L << ((ulong)(param_5 >> 2) & 0x3f);
    }
  }
  return;
}

