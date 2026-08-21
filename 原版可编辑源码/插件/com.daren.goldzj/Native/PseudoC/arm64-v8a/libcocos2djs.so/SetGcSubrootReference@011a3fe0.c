
/* v8::internal::V8HeapExplorer::SetGcSubrootReference(v8::internal::Root, char const*, bool,
   v8::internal::Object) */

void __thiscall
v8::internal::V8HeapExplorer::SetGcSubrootReference
          (V8HeapExplorer *this,int param_2,undefined8 param_3,ulong param_4,void *param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong extraout_x1;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  HeapEntry *pHVar10;
  long lVar11;
  void *local_60;
  ulong local_58;
  
  if ((((ulong)param_5 & 1) != 0) &&
     (lVar3 = HeapSnapshotGenerator::FindOrAddEntry
                        (*(HeapSnapshotGenerator **)(this + 0x30),param_5,
                         (HeapEntriesAllocator *)this), lVar3 != 0)) {
    lVar4 = GetStrongGcSubrootName(this,param_5);
    pHVar10 = *(HeapEntry **)(*(long *)(this + 0x10) + (long)param_2 * 8 + 0x18);
    uVar5 = 6;
    if ((param_4 & 1) == 0) {
      uVar5 = 3;
    }
    if (lVar4 == 0) {
      HeapEntry::SetNamedAutoIndexReference
                (pHVar10,uVar5,param_3,lVar3,*(undefined8 *)(this + 0x18));
    }
    else {
      lVar11 = *(long *)(pHVar10 + 0x10);
      *(int *)(pHVar10 + 4) = *(int *)(pHVar10 + 4) + 1;
      lVar6 = *(long *)(lVar11 + 0x108);
      lVar8 = *(long *)(lVar11 + 0x110);
      uVar1 = 0;
      if (lVar8 - lVar6 != 0) {
        uVar1 = (lVar8 - lVar6 >> 3) * 0xaa - 1;
      }
      uVar9 = *(long *)(lVar11 + 0x128) + *(long *)(lVar11 + 0x120);
      if (uVar1 == uVar9) {
        std::__ndk1::
        deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>::
        __add_back_capacity((deque<v8::internal::HeapGraphEdge,std::__ndk1::allocator<v8::internal::HeapGraphEdge>>
                             *)(lVar11 + 0x100));
        lVar6 = *(long *)(lVar11 + 0x108);
        lVar8 = *(long *)(lVar11 + 0x110);
        uVar9 = *(long *)(lVar11 + 0x120) + *(long *)(lVar11 + 0x128);
      }
      if (lVar8 == lVar6) {
        puVar7 = (uint *)0x0;
      }
      else {
        puVar7 = (uint *)(*(long *)(lVar6 + (uVar9 / 0xaa) * 8) + (uVar9 % 0xaa) * 0x18);
      }
      uVar2 = *(uint *)pHVar10;
      *(long *)(puVar7 + 2) = lVar3;
      *(long *)(puVar7 + 4) = lVar4;
      *puVar7 = uVar2 >> 1 & 0x7ffffff8 | uVar5;
      *(long *)(lVar11 + 0x128) = *(long *)(lVar11 + 0x128) + 1;
    }
    if (((((param_4 & 1) == 0) &&
         (*(short *)(((ulong)param_5 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((long)param_5 + -1)) == 0x8f)) &&
        (local_60 = param_5, local_58 = Context::global_object((Context *)&local_60),
        *(short *)((local_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_58 - 1)) == 0xaa))
       && (std::__ndk1::
           __hash_table<v8::internal::JSGlobalObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::JSGlobalObject>,std::__ndk1::allocator<v8::internal::JSGlobalObject>>
           ::
           __emplace_unique_key_args<v8::internal::JSGlobalObject,v8::internal::JSGlobalObject_const&>
                     ((__hash_table<v8::internal::JSGlobalObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::JSGlobalObject>,std::__ndk1::allocator<v8::internal::JSGlobalObject>>
                       *)(this + 0x88),(JSGlobalObject *)&local_58,(JSGlobalObject *)&local_58),
          (extraout_x1 & 1) != 0)) {
      SetUserGlobalReference(this,local_58);
    }
  }
  return;
}

