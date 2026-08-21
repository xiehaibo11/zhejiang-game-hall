
/* v8::internal::Scavenger::Scavenger(v8::internal::ScavengerCollector*, v8::internal::Heap*, bool,
   v8::internal::Worklist<v8::internal::MemoryChunk*, 64>*,
   v8::internal::Worklist<std::__ndk1::pair<v8::internal::HeapObject, int>, 256>*,
   v8::internal::Scavenger::PromotionList*, v8::internal::Worklist<v8::internal::EphemeronHashTable,
   128>*, int) */

void __thiscall
v8::internal::Scavenger::Scavenger
          (Scavenger *this,ScavengerCollector *param_1,Heap *param_2,bool param_3,Worklist *param_4,
          Worklist *param_5,PromotionList *param_6,Worklist *param_7,int param_8)

{
  undefined8 uVar1;
  Scavenger SVar2;
  
  *(ScavengerCollector **)this = param_1;
  *(Heap **)(this + 8) = param_2;
  *(Worklist **)(this + 0x10) = param_4;
  *(PromotionList **)(this + 0x20) = param_6;
  *(Worklist **)(this + 0x30) = param_5;
  *(Worklist **)(this + 0x40) = param_7;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(int *)(this + 0x18) = param_8;
  *(int *)(this + 0x28) = param_8;
  *(int *)(this + 0x38) = param_8;
  *(int *)(this + 0x48) = param_8;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
  ::__rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
              *)(this + 0x50),0x100);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(Heap **)(this + 0x88) = param_2;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = FreeList::CreateFreeList();
  PagedSpace::PagedSpace((PagedSpace *)(this + 0xa0),param_2,2,0,uVar1,2);
  *(undefined ***)(this + 0xa0) = &PTR__PagedSpace_01ca9f28;
  uVar1 = FreeList::CreateFreeList();
  PagedSpace::PagedSpace((PagedSpace *)(this + 0x188),param_2,3,1,uVar1,2);
  *(undefined ***)(this + 0x188) = &PTR__PagedSpace_01ca9f28;
  LocalAllocationBuffer::LocalAllocationBuffer((LocalAllocationBuffer *)(this + 0x270),0,0,0);
  this[0x288] = (Scavenger)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2b0) = 0x3f800000;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  this[0x2e0] = (Scavenger)param_3;
  this[0x2e1] = (Scavenger)(1 < *(int *)(*(long *)(param_2 + 0x828) + 0x58));
  SVar2 = (Scavenger)0x0;
  if (1 < *(int *)(*(long *)(param_2 + 0x828) + 0x58)) {
    SVar2 = *(Scavenger *)(*(long *)(param_2 + 0x828) + 0x5c);
  }
  this[0x2e2] = SVar2;
  return;
}

