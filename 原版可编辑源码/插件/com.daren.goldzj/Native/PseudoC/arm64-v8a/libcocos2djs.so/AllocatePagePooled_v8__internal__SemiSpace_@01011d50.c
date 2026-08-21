
/* v8::internal::MemoryChunk*
   v8::internal::MemoryAllocator::AllocatePagePooled<v8::internal::SemiSpace>(v8::internal::SemiSpace*)
    */

MemoryChunk * __thiscall
v8::internal::MemoryAllocator::AllocatePagePooled<v8::internal::SemiSpace>
          (MemoryAllocator *this,SemiSpace *param_1)

{
  MemoryChunk *pMVar1;
  MemoryChunk *pMVar2;
  char cVar3;
  bool bVar4;
  MemoryChunk *pMVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  MemoryAllocator *pMVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_70;
  MemoryChunk *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  MemoryChunk *local_50;
  undefined8 uStack_48;
  
  pMVar5 = (MemoryChunk *)Unmapper::TryGetPooledMemoryChunkSafe((Unmapper *)(this + 0x88));
  if (pMVar5 != (MemoryChunk *)0x0) {
    if (*(int *)(param_1 + 0x48) == 3) {
      if (FLAG_v8_os_page_size == 0) {
        lVar7 = CommitPageSize();
        uVar10 = lVar7 + 0x117U & -lVar7;
        if (FLAG_v8_os_page_size == 0) {
          uVar6 = CommitPageSize();
        }
        else {
          uVar6 = (long)FLAG_v8_os_page_size << 10;
        }
      }
      else {
        uVar6 = (long)FLAG_v8_os_page_size * 0x400;
        uVar10 = uVar6 & (long)FLAG_v8_os_page_size * -0x400;
      }
      lVar7 = uVar6 + uVar10;
    }
    else {
      lVar7 = 0x118;
    }
    local_58 = *(undefined8 *)(this + 0x20);
    uStack_48 = 0x40000;
    local_50 = pMVar5;
    uVar10 = VirtualMemory::SetPermissions(&local_58,pMVar5,0x40000,2);
    if ((uVar10 & 1) == 0) {
      pMVar5 = (MemoryChunk *)0x0;
    }
    else {
      pMVar1 = pMVar5 + 0x40000;
      pMVar9 = this + 0x60;
      do {
        while( true ) {
          if (*(MemoryChunk **)pMVar9 <= pMVar5) goto LAB_01011e38;
          if (*(MemoryChunk **)pMVar9 == *(MemoryChunk **)pMVar9) break;
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar9,0x10);
        if (bVar4) {
          *(MemoryChunk **)pMVar9 = pMVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01011e38:
      pMVar9 = this + 0x68;
      do {
        while( true ) {
          if (pMVar1 <= *(MemoryChunk **)pMVar9) goto LAB_01011e64;
          if (*(MemoryChunk **)pMVar9 == *(MemoryChunk **)pMVar9) break;
          ClearExclusiveLocal();
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar9,0x10);
        if (bVar4) {
          *(MemoryChunk **)pMVar9 = pMVar1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01011e64:
      lVar11 = *(long *)(*(long *)this + 0x9520);
      if (*(char *)(lVar11 + 0x1798) == '\0') {
        *(char *)(lVar11 + 0x1798) = '\x01';
        piVar8 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar11 + 0x1780));
        *(int **)(lVar11 + 0x1790) = piVar8;
        local_70 = local_58;
        local_68 = local_50;
        uStack_60 = uStack_48;
      }
      else {
        piVar8 = *(int **)(lVar11 + 0x1790);
        local_70 = local_58;
        local_68 = local_50;
        uStack_60 = uStack_48;
      }
      if (piVar8 != (int *)0x0) {
        *piVar8 = *piVar8 + 0x40000;
      }
      if (FLAG_verify_heap != '\0') {
        lVar11 = 0;
        do {
          pMVar2 = pMVar5 + lVar11;
          lVar11 = lVar11 + 0x20;
          *(undefined8 *)(pMVar2 + 8) = 0xbeadbeefbeadbeef;
          *(undefined8 *)pMVar2 = 0xbeadbeefbeadbeef;
          *(undefined8 *)(pMVar2 + 0x18) = 0xbeadbeefbeadbeef;
          *(undefined8 *)(pMVar2 + 0x10) = 0xbeadbeefbeadbeef;
        } while (lVar11 != 0x40000);
      }
      pMVar9 = this + 0x50;
      lVar11 = *(long *)this;
      local_58 = local_70;
      local_50 = local_68;
      uStack_48 = uStack_60;
      VirtualMemory::Reset((VirtualMemory *)&local_58);
      MemoryChunk::Initialize
                (lVar11 + 0x8850,pMVar5,0x40000,pMVar5 + lVar7,pMVar1,0,param_1,&local_70);
      VirtualMemory::~VirtualMemory((VirtualMemory *)&local_70);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar9,0x10);
        if (bVar4) {
          *(long *)pMVar9 = *(long *)pMVar9 + 0x40000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    VirtualMemory::~VirtualMemory((VirtualMemory *)&local_58);
  }
  return pMVar5;
}

