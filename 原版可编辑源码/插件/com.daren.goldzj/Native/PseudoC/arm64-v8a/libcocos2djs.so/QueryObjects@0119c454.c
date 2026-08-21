
/* v8::internal::HeapProfiler::QueryObjects(v8::internal::Handle<v8::internal::Context>,
   v8::debug::QueryObjectPredicate*, v8::PersistentValueVector<v8::Object,
   v8::DefaultPersistentValueVectorTraits>*) */

void __thiscall
v8::internal::HeapProfiler::QueryObjects
          (HeapProfiler *this,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_a8;
  CombinedHeapObjectIterator aCStack_a0 [64];
  ulong local_48;
  
  CombinedHeapObjectIterator::CombinedHeapObjectIterator
            (aCStack_a0,*(undefined8 *)(*(long *)(this + 8) + 0x78),1);
  uVar2 = CombinedHeapObjectIterator::Next(aCStack_a0);
  iVar1 = (int)uVar2;
  uVar4 = local_48;
  while (local_48 = uVar2, iVar1 != 0) {
    if (*(short *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0x9f) {
      FeedbackVector::ClearSlots
                ((FeedbackVector *)&local_48,
                 (Isolate *)(*(long *)(*(long *)(this + 8) + 0x78) + -0x8850));
      uVar4 = local_48;
    }
    local_48 = uVar4;
    uVar2 = CombinedHeapObjectIterator::Next(aCStack_a0);
    iVar1 = (int)uVar2;
    uVar4 = local_48;
  }
  local_48 = uVar4;
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_a0);
  Heap::CollectAllAvailableGarbage(*(Heap **)(*(long *)(this + 8) + 0x78),0xb);
  CombinedHeapObjectIterator::CombinedHeapObjectIterator
            (aCStack_a0,*(undefined8 *)(*(long *)(this + 8) + 0x78),1);
  local_a8 = CombinedHeapObjectIterator::Next(aCStack_a0);
  if ((int)local_a8 != 0) {
    do {
      if ((0xa9 < *(ushort *)((local_a8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_a8 - 1)))
         && (uVar2 = HeapObject::IsExternal
                               ((HeapObject *)&local_a8,
                                (Isolate *)(*(long *)(*(long *)(this + 8) + 0x78) + -0x8850)),
            uVar4 = local_a8, (uVar2 & 1) == 0)) {
        lVar5 = *(long *)(*(long *)(this + 8) + 0x78);
        if (*(CanonicalHandleScope **)(lVar5 + 0xd68) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(lVar5 + 0xd50);
          if (puVar3 == *(ulong **)(lVar5 + 0xd58)) {
            puVar3 = (ulong *)HandleScope::Extend((Isolate *)(lVar5 + -0x8850));
          }
          *(ulong **)(lVar5 + 0xd50) = puVar3 + 1;
          *puVar3 = uVar4;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(lVar5 + 0xd68),local_a8);
        }
        uVar4 = (**(code **)(*param_3 + 0x10))(param_3,puVar3);
        if ((uVar4 & 1) != 0) {
          if (puVar3 == (ulong *)0x0) {
            local_48 = 0;
          }
          else {
            local_48 = v8::V8::GlobalizeReference((Isolate *)*param_4,puVar3);
          }
          if ((ulong *)param_4[2] == (ulong *)param_4[3]) {
            std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
            __push_back_slow_path<unsigned_long_const&>
                      ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(param_4 + 1),
                       &local_48);
          }
          else {
            *(ulong *)param_4[2] = local_48;
            param_4[2] = param_4[2] + 8;
          }
        }
      }
      local_a8 = CombinedHeapObjectIterator::Next(aCStack_a0);
    } while ((int)local_a8 != 0);
  }
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_a0);
  return;
}

