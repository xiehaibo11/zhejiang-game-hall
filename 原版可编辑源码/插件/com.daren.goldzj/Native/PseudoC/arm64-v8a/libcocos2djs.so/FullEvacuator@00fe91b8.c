
/* v8::internal::FullEvacuator::FullEvacuator(v8::internal::MarkCompactCollector*) */

void __thiscall
v8::internal::FullEvacuator::FullEvacuator(FullEvacuator *this,MarkCompactCollector *param_1)

{
  FullEvacuator *pFVar1;
  FullEvacuator *pFVar2;
  int iVar3;
  FullEvacuator FVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
  *this_00;
  
  *(undefined ***)this = &PTR__FullEvacuator_01ca8178;
  FVar4 = FLAG_always_promote_young_mc;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)this = &PTR__Evacuator_01ca8be0;
  *(undefined8 *)(this + 8) = uVar5;
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
             *)(this + 0x10);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this_00 = 0;
  pFVar1 = this + 0x180;
  pFVar2 = this + 0x198;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
  ::__rehash(this_00,0x100);
  *(FullEvacuator **)(this + 0x48) = pFVar2;
  *(FullEvacuator **)(this + 0x50) = pFVar1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  lVar6 = *(long *)(this + 8);
  *(undefined8 *)(this + 0x68) = 0;
  *(code **)(this + 0x70) =
       EvacuateVisitorBase::RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)0>;
  *(undefined ***)(this + 0x38) = &PTR__EvacuateNewSpaceVisitor_01ca8c40;
  *(long *)(this + 0x40) = lVar6;
  LocalAllocationBuffer::LocalAllocationBuffer((LocalAllocationBuffer *)(this + 0x78),0,0,0);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
    **)(this + 0xa0) = this_00;
  lVar7 = *(long *)(this + 8);
  iVar3 = *(int *)(*(long *)(lVar6 + 0x828) + 0x58);
  this[0xa9] = FVar4;
  *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
    **)(this + 0xd0) = this_00;
  *(undefined ***)(this + 0xd8) = &PTR__HeapObjectVisitor_01ca8e70;
  *(undefined8 *)(this + 0xf0) = 0;
  *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
    **)(this + 0xf8) = this_00;
  *(undefined ***)(this + 0xb0) = &PTR__HeapObjectVisitor_01ca8e48;
  *(long *)(this + 0xb8) = lVar7;
  *(long *)(this + 0xe0) = lVar7;
  *(FullEvacuator **)(this + 0xe8) = pFVar1;
  *(FullEvacuator **)(this + 0x110) = pFVar2;
  *(FullEvacuator **)(this + 0x118) = pFVar1;
  *(FullEvacuator **)(this + 0xc0) = pFVar1;
  *(undefined8 *)(this + 200) = 0;
  *(undefined ***)(this + 0x100) = &PTR__EvacuateVisitorBase_01ca8e98;
  *(long *)(this + 0x108) = lVar7;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(code **)(this + 0x138) =
       EvacuateVisitorBase::RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)0>;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(FullEvacuator **)(this + 0x140) = pFVar2;
  *(undefined ***)this = &PTR__FullEvacuator_01ca8178;
  this[0xa8] = (FullEvacuator)(1 < iVar3);
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x178) = 0x3f800000;
  *(undefined ***)(this + 0x180) = &PTR__ObjectVisitor_01ca85c8;
  *(MarkCompactCollector **)(this + 0x188) = param_1;
  *(FullEvacuator **)(this + 400) = this + 0x158;
  *(long *)(this + 0x198) = lVar7;
  *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(lVar7 + 0xe8);
  uVar5 = FreeList::CreateFreeList();
  PagedSpace::PagedSpace((PagedSpace *)(this + 0x1b0),lVar7,2,0,uVar5,3);
  *(undefined ***)(this + 0x1b0) = &PTR__PagedSpace_01ca9f28;
  uVar5 = FreeList::CreateFreeList();
  PagedSpace::PagedSpace((PagedSpace *)(this + 0x298),lVar7,3,1,uVar5,3);
  *(undefined ***)(this + 0x298) = &PTR__PagedSpace_01ca9f28;
  LocalAllocationBuffer::LocalAllocationBuffer((LocalAllocationBuffer *)(this + 0x380),0,0,0);
  this[0x398] = (FullEvacuator)0x0;
  *(MarkCompactCollector **)(this + 0x3a0) = param_1;
  return;
}

