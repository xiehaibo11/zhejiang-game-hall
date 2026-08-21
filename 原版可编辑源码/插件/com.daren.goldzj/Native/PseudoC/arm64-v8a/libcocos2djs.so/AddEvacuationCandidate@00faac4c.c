
/* v8::internal::MarkCompactCollector::AddEvacuationCandidate(v8::internal::Page*) */

void __thiscall
v8::internal::MarkCompactCollector::AddEvacuationCandidate(MarkCompactCollector *this,Page *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  Page *local_38;
  
  local_38 = param_1;
  if (FLAG_trace_evacuation_candidates != '\0') {
    lVar4 = *(long *)(this + 8);
    lVar1 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 0xc0);
    uVar3 = MemoryChunk::FreeListsLength((MemoryChunk *)param_1);
    PrintIsolate((void *)(lVar4 + -0x8850),
                 "Evacuation candidate: Free bytes: %6zu. Free Lists length: %4d.\n",
                 (lVar2 - lVar1) - lVar5,uVar3 & 0xffffffff);
  }
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 0x40;
  FreeList::EvictFreeListItems(*(FreeList **)(*(long *)(param_1 + 0x58) + 0x60),param_1);
  if (*(undefined8 **)(this + 0x26a0) == *(undefined8 **)(this + 0x26a8)) {
    std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
    __push_back_slow_path<v8::internal::Page*const&>
              ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
               (this + 0x2698),&local_38);
  }
  else {
    **(undefined8 **)(this + 0x26a0) = local_38;
    *(long *)(this + 0x26a0) = *(long *)(this + 0x26a0) + 8;
  }
  return;
}

