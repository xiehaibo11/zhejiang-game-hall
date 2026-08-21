
/* v8::internal::MemoryAllocator::AllocateAlignedMemory(unsigned long, unsigned long, unsigned long,
   v8::internal::Executability, void*, v8::internal::VirtualMemory*) */

ulong __thiscall
v8::internal::MemoryAllocator::AllocateAlignedMemory
          (MemoryAllocator *this,ulong param_1,ulong param_2,ulong param_3,int param_5,void *param_6
          ,undefined8 *param_7)

{
  MemoryAllocator *pMVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_68;
  ulong local_60;
  long lStack_58;
  
  lVar2 = 0x28;
  if (param_5 != 1) {
    lVar2 = 0x20;
  }
  VirtualMemory::VirtualMemory
            ((VirtualMemory *)&local_68,*(PageAllocator **)(this + lVar2),param_1,param_6,param_3);
  uVar6 = local_60;
  if (local_60 == 0) goto LAB_010135bc;
  pMVar1 = this + 0x50;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
    if (bVar4) {
      *(long *)pMVar1 = *(long *)pMVar1 + lStack_58;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (param_5 == 1) {
    uVar5 = CommitExecutableMemory(this,(VirtualMemory *)&local_68,local_60,param_2,param_1);
    if ((uVar5 & 1) != 0) {
LAB_01013584:
      *param_7 = local_68;
      param_7[2] = lStack_58;
      param_7[1] = local_60;
      VirtualMemory::Reset((VirtualMemory *)&local_68);
      goto LAB_010135bc;
    }
  }
  else {
    uVar5 = VirtualMemory::SetPermissions(&local_68,local_60,param_2,2);
    if ((uVar5 & 1) != 0) {
      pMVar1 = this + 0x60;
      do {
        while( true ) {
          if (*(ulong *)pMVar1 <= uVar6) goto LAB_01013558;
          if (*(ulong *)pMVar1 == *(ulong *)pMVar1) break;
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
        if (bVar4) {
          *(ulong *)pMVar1 = uVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01013558:
      this = this + 0x68;
      do {
        while( true ) {
          if (uVar6 + param_2 <= *(ulong *)this) goto LAB_01013584;
          if (*(ulong *)this == *(ulong *)this) break;
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(this,0x10);
        if (bVar4) {
          *(ulong *)this = uVar6 + param_2;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01013584;
    }
  }
  VirtualMemory::Free((VirtualMemory *)&local_68);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
    if (bVar4) {
      *(ulong *)pMVar1 = *(long *)pMVar1 - param_1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar6 = 0;
LAB_010135bc:
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_68);
  return uVar6;
}

