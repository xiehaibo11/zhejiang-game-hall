
/* v8::internal::MemoryChunk::DecrementWriteUnprotectCounterAndMaybeSetPermissions(v8::PageAllocator::Permission)
    */

void __thiscall
v8::internal::MemoryChunk::DecrementWriteUnprotectCounterAndMaybeSetPermissions
          (MemoryChunk *this,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  Mutex *this_00;
  ulong uVar3;
  MemoryChunk *pMVar4;
  
  this_00 = *(Mutex **)(this + 0xb0);
  base::Mutex::Lock(this_00);
  if ((*(long *)(this + 0xb8) == 0) ||
     (lVar1 = *(long *)(this + 0xb8) + -1, *(long *)(this + 0xb8) = lVar1, lVar1 != 0))
  goto LAB_01013c7c;
  if (FLAG_v8_os_page_size == 0) {
    lVar1 = CommitPageSize();
    uVar3 = lVar1 + 0x117U & -lVar1;
    if (FLAG_v8_os_page_size != 0) {
      uVar2 = (long)FLAG_v8_os_page_size << 10;
      goto LAB_01013c40;
    }
    lVar1 = CommitPageSize();
    pMVar4 = this + lVar1 + uVar3;
    if (FLAG_v8_os_page_size != 0) goto LAB_01013c48;
    lVar1 = CommitPageSize();
  }
  else {
    uVar2 = (long)FLAG_v8_os_page_size * 0x400;
    uVar3 = uVar2 & (long)FLAG_v8_os_page_size * -0x400;
LAB_01013c40:
    pMVar4 = this + uVar2 + uVar3;
LAB_01013c48:
    lVar1 = (long)(FLAG_v8_os_page_size << 10);
  }
  uVar3 = VirtualMemory::SetPermissions
                    (this + 0x40,pMVar4,
                     *(long *)(this + 0x28) + lVar1 + ~*(ulong *)(this + 0x20) & -lVar1,param_2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "reservation_.SetPermissions(protect_start, protect_size, permission)");
  }
LAB_01013c7c:
  base::Mutex::Unlock(this_00);
  return;
}

