
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00ff2c24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*) */

void __thiscall
v8::internal::PageMarkingItem::MarkUntypedPointers
          (PageMarkingItem *this,YoungGenerationMarkingTask *param_1)

{
  __tree_node **pp_Var1;
  long lVar2;
  MemoryChunk *pMVar3;
  MemoryChunk *extraout_x1;
  long *plVar4;
  PageMarkingItem *local_c8;
  YoungGenerationMarkingTask *pYStack_c0;
  PageMarkingItem **local_b8;
  undefined8 uStack_a4;
  __tree_node **local_98;
  __tree_node *local_90;
  long local_88;
  PageMarkingItem *local_80;
  YoungGenerationMarkingTask *pYStack_78;
  PageMarkingItem **ppPStack_70;
  undefined8 uStack_5c;
  __tree_node **local_50;
  __tree_node *local_48;
  long local_40;
  
  InvalidatedSlotsFilter::OldToNew(*(InvalidatedSlotsFilter **)(this + 0x10),(MemoryChunk *)param_1)
  ;
  pMVar3 = *(MemoryChunk **)(this + 0x10);
  lVar2 = *(long *)(pMVar3 + 0x30);
  if (lVar2 != 0) {
    local_c8 = this;
    pYStack_c0 = param_1;
    local_b8 = &local_80;
    SlotSet::
    Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_>(unsigned_long,unsigned_long,v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
              (lVar2,pMVar3,*(long *)pMVar3 + 0xfffU >> 0xc,&local_c8,lVar2,0);
    pMVar3 = extraout_x1;
  }
  InvalidatedSlotsFilter::OldToNew(*(InvalidatedSlotsFilter **)(this + 0x10),pMVar3);
  pYStack_78 = pYStack_c0;
  local_80 = local_c8;
  ppPStack_70 = local_b8;
  uStack_5c = uStack_a4;
  std::__ndk1::
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  ::destroy((__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
             *)&local_50,local_48);
  local_50 = local_98;
  local_48 = local_90;
  local_40 = local_88;
  pp_Var1 = &local_48;
  if (local_88 != 0) {
    local_98 = &local_90;
    *(__tree_node ***)(local_90 + 0x10) = &local_48;
    local_90 = (__tree_node *)0x0;
    local_88 = 0;
    pp_Var1 = local_50;
  }
  local_50 = pp_Var1;
  std::__ndk1::
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  ::destroy((__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
             *)&local_98,local_90);
  plVar4 = *(long **)(this + 0x10);
  lVar2 = plVar4[0xe];
  if (lVar2 != 0) {
    local_b8 = &local_80;
    local_c8 = this;
    pYStack_c0 = param_1;
    SlotSet::
    Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_>(unsigned_long,unsigned_long,v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
              (lVar2,plVar4,*plVar4 + 0xfffU >> 0xc,&local_c8,lVar2,0);
  }
  std::__ndk1::
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  ::destroy((__tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
             *)&local_50,local_48);
  return;
}

