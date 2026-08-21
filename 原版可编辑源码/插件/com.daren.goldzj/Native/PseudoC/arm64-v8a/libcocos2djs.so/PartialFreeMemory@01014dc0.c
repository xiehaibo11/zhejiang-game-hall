
/* v8::internal::MemoryAllocator::PartialFreeMemory(v8::internal::MemoryChunk*, unsigned long,
   unsigned long, unsigned long) */

void __thiscall
v8::internal::MemoryAllocator::PartialFreeMemory
          (MemoryAllocator *this,MemoryChunk *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  MemoryAllocator *pMVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  
  *(ulong *)param_1 = *(long *)param_1 - param_3;
  *(ulong *)(param_1 + 0x28) = param_4;
  if (((byte)param_1[8] & 1) != 0) {
    if (FLAG_v8_os_page_size == 0) {
      lVar5 = CommitPageSize();
      param_4 = *(ulong *)(param_1 + 0x28);
    }
    else {
      lVar5 = (long)FLAG_v8_os_page_size << 10;
    }
    VirtualMemory::SetPermissions((VirtualMemory *)(param_1 + 0x40),param_4,lVar5,0);
  }
  lVar5 = VirtualMemory::Release((VirtualMemory *)(param_1 + 0x40),param_2);
  pMVar1 = this + 0x50;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
    if (bVar3) {
      *(long *)pMVar1 = *(long *)pMVar1 - lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(*(long *)this + 0x9520);
  if (*(char *)(lVar6 + 0x1798) == '\0') {
    *(char *)(lVar6 + 0x1798) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar6 + 0x1780))
    ;
    *(int **)(lVar6 + 0x1790) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0x1790);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 - (int)lVar5;
  }
  return;
}

