
/* v8::internal::Heap::GarbageCollectionPrologue() */

void __thiscall v8::internal::Heap::GarbageCollectionPrologue(Heap *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte **local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Scope aSStack_90 [64];
  long *local_50;
  long *local_48;
  
  GCTracer::Scope::Scope(aSStack_90,*(undefined8 *)(this + 0x7f8),0x10);
  if (DAT_01d3f048 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f048 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f048;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f048 & 5) != 0) {
    uVar3 = GCTracer::Scope::Name(0x10);
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_50,0);
    plVar2 = local_48;
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_a0 = GCTracer::Scope::Name(0x10);
    local_b0 = &local_a8;
    local_a8 = pbVar1;
    local_98 = uVar3;
  }
  *(int *)(this + 0x1b4) = *(int *)(this + 0x1b4) + 1;
  if (FLAG_verify_heap != '\0') {
    Verify(this);
  }
  uVar3 = *(undefined8 *)(this + 0x7b8);
  *(undefined8 *)(this + 0x7a0) = 0;
  *(undefined8 *)(this + 0x7b8) = 0;
  *(undefined8 *)(this + 2000) = 0;
  *(undefined8 *)(this + 0x7c0) = uVar3;
  *(undefined4 *)(this + 0x7d8) = 0;
  if ((*(long *)(this + 0xe8) != 0) &&
     (uVar4 = CommittedMemory(this), *(ulong *)(this + 0x90) < uVar4)) {
    *(ulong *)(this + 0x90) = uVar4;
  }
  if (*(long *)(*(long *)(this + 0xe8) + 0x138) == *(long *)(*(long *)(this + 0xe8) + 0x140)) {
    iVar5 = *(int *)(this + 0x7dc) + 1;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(this + 0x7dc) = iVar5;
  CheckNewSpaceExpansionCriteria(this);
  lVar10 = *(long *)(this + 0xe8);
  lVar8 = *(long *)(this + 0x880);
  lVar7 = *(long *)(lVar10 + 0x150);
  lVar6 = *(long *)(lVar10 + 0x68);
  uVar4 = lVar7 - 4U & 0xfffffffffffc0000;
  uVar9 = lVar6 - 4U & 0xfffffffffffc0000;
  if (uVar4 != uVar9) {
    uVar12 = *(ulong *)(uVar4 + 0xe0);
    lVar11 = *(long *)(uVar4 + 0x28) - lVar7;
    if (uVar12 != uVar9) {
      do {
        lVar6 = MemoryChunkLayout::AllocatableMemoryInDataPage();
        uVar12 = *(ulong *)(uVar12 + 0xe0);
        lVar11 = lVar6 + lVar11;
      } while (uVar12 != uVar9);
      lVar6 = *(long *)(lVar10 + 0x68);
    }
    lVar7 = *(long *)(uVar9 + 0x20);
    lVar6 = lVar11 + lVar6;
  }
  *(long *)(this + 0x880) = (lVar6 - lVar7) + lVar8;
  if (FLAG_track_retaining_path != '\0') {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
               *)(this + 0xba8),*(__tree_node **)(this + 0xbb0));
    *(Heap **)(this + 0xba8) = this + 0xbb0;
    *(undefined8 *)(this + 3000) = 0;
    *(undefined8 *)(this + 0xbb0) = 0;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::HeapObject>>>
               *)(this + 0xbd8),*(__tree_node **)(this + 0xbe0));
    *(Heap **)(this + 0xbd8) = this + 0xbe0;
    *(undefined8 *)(this + 0xbe8) = 0;
    *(undefined8 *)(this + 0xbe0) = 0;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,std::__ndk1::__map_value_compare<v8::internal::HeapObject,std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>,v8::internal::Object::Comparer,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::HeapObject,v8::internal::Root>>>
               *)(this + 0xbc0),*(__tree_node **)(this + 0xbc8));
    *(Heap **)(this + 0xbc0) = this + 0xbc8;
    *(undefined8 *)(this + 0xbd0) = 0;
    *(undefined8 *)(this + 0xbc8) = 0;
  }
  MemoryAllocator::Unmapper::PrepareForGC((Unmapper *)(*(long *)(this + 0x820) + 0x88));
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_a8,local_a0,local_98);
  }
  GCTracer::Scope::~Scope(aSStack_90);
  return;
}

