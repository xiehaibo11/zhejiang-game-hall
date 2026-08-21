
/* v8::internal::MemoryAllocator::PerformFreeMemory(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::MemoryAllocator::PerformFreeMemory(MemoryAllocator *this,MemoryChunk *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  
  MemoryChunk::ReleaseAllAllocatedMemory(param_1);
  if (((uint)*(ulong *)(param_1 + 8) >> 0xe & 1) == 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      VirtualMemory::Free((VirtualMemory *)(param_1 + 0x40));
      return;
    }
    lVar4 = 0x20;
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      lVar4 = 0x28;
    }
    uVar3 = FreePages(*(PageAllocator **)(this + lVar4),param_1,*(ulong *)param_1);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","FreePages(page_allocator, reinterpret_cast<void*>(base), size)")
      ;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = VirtualMemory::SetPermissions
                      ((VirtualMemory *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar1,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(*(long *)this + 0x9520);
      if (*(char *)(lVar4 + 0x1798) == '\0') {
        *(char *)(lVar4 + 0x1798) = '\x01';
        piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar4 + 0x1780));
        *(int **)(lVar4 + 0x1790) = piVar2;
      }
      else {
        piVar2 = *(int **)(lVar4 + 0x1790);
      }
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 - (int)uVar1;
      }
    }
  }
  return;
}

