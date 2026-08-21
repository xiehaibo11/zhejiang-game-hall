
/* v8::internal::Sweeper::ParallelSweepPage(v8::internal::Page*, v8::internal::AllocationSpace,
   v8::internal::Sweeper::FreeSpaceMayContainInvalidatedSlots) */

undefined4 __thiscall
v8::internal::Sweeper::ParallelSweepPage
          (Sweeper *this,MemoryChunk *param_1,int param_3,undefined4 param_4)

{
  bool bVar1;
  MemoryChunk *pMVar2;
  undefined4 uVar3;
  Sweeper *pSVar4;
  long lVar5;
  Mutex *this_00;
  MemoryChunk *local_38;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    uVar3 = 0;
  }
  else {
    this_00 = *(Mutex **)(param_1 + 0xa0);
    local_38 = param_1;
    base::Mutex::Lock(this_00);
    if ((*(char *)(*(long *)(param_1 + 0x18) + 0x168) == '\0') || (((byte)param_1[8] & 1) == 0)) {
      bVar1 = true;
    }
    else {
      MemoryChunk::SetReadAndWritable(param_1);
      bVar1 = false;
    }
    pMVar2 = local_38;
    *(undefined8 *)(param_1 + 0xa8) = 2;
    uVar3 = RawSweep(this,local_38,0,FLAG_verify_heap,param_4);
    if (!bVar1) {
      if (FLAG_jitless == '\0') {
        MemoryChunk::SetReadAndExecutable(param_1);
      }
      else {
        MemoryChunk::SetReadable(param_1);
      }
    }
    base::Mutex::Unlock(this_00);
    base::Mutex::Lock((Mutex *)(this + 0x40));
    lVar5 = (long)param_3 + -2;
    pSVar4 = this + lVar5 * 0x18 + 0x70;
    if (*(undefined8 **)pSVar4 == *(undefined8 **)(this + lVar5 * 0x18 + 0x78)) {
      std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
      __push_back_slow_path<v8::internal::Page*const&>
                ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
                 (this + lVar5 * 0x18 + 0x68),(Page **)&local_38);
    }
    else {
      **(undefined8 **)pSVar4 = pMVar2;
      *(long *)pSVar4 = *(long *)pSVar4 + 8;
    }
    base::Mutex::Unlock((Mutex *)(this + 0x40));
  }
  return uVar3;
}

