
/* v8::internal::MemoryAllocator::TearDown() */

void __thiscall v8::internal::MemoryAllocator::TearDown(MemoryAllocator *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *local_98;
  ulong auStack_90 [2];
  undefined **local_80;
  code *pcStack_78;
  undefined *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x138) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == pending_unmapping_tasks_");
  }
  Unmapper::PerformFreeMemoryOnQueuedChunks<(v8::internal::MemoryAllocator::Unmapper::FreeMode)1>
            ((Unmapper *)(this + 0x88));
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long *)(this + 0x78) != 0) {
    VirtualMemory::Free((VirtualMemory *)(this + 0x70));
  }
  if (*(long *)(this + 0x40) == 0) goto LAB_010127fc;
  if (DAT_01d3f4b8 != '\x02') {
    local_80 = &PTR_FUN_01c984d0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::internal::CodeRangeAddressHint,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::CodeRangeAddressHint>,v8::base::DefaultConstructTrait<v8::internal::CodeRangeAddressHint>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeRangeAddressHint>>
                 ::InitInstance;
    local_70 = &DAT_01d3f4c0;
    local_60 = &local_80;
    base::CallOnceImpl(&DAT_01d3f4b8,&local_80);
    if (&local_80 == local_60) {
      pcVar4 = (code *)(*local_60)[4];
    }
    else {
      if (local_60 == (undefined ***)0x0) goto LAB_01012764;
      pcVar4 = (code *)(*local_60)[5];
    }
    (*pcVar4)();
  }
LAB_01012764:
  uVar5 = *(ulong *)(this + 0x30);
  local_98 = *(undefined **)(this + 0x38);
  auStack_90[0] = uVar5;
  base::Mutex::Lock((Mutex *)&DAT_01d3f4c0);
  local_80 = &local_98;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)&DAT_01d3f4e8,(piecewise_construct_t *)&local_98,
                     (tuple *)&DAT_019c7168,(tuple *)&local_80);
  if (*(ulong **)(lVar2 + 0x20) == *(ulong **)(lVar2 + 0x28)) {
    std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
    __push_back_slow_path<unsigned_long_const&>
              ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(lVar2 + 0x18),
               auStack_90);
  }
  else {
    **(ulong **)(lVar2 + 0x20) = uVar5;
    *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 8;
  }
  base::Mutex::Unlock((Mutex *)&DAT_01d3f4c0);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  plVar3 = *(long **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
LAB_010127fc:
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

