
/* v8::internal::MemoryAllocator::CommitExecutableMemory(v8::internal::VirtualMemory*, unsigned
   long, unsigned long, unsigned long) */

undefined8 __thiscall
v8::internal::MemoryAllocator::CommitExecutableMemory
          (MemoryAllocator *this,VirtualMemory *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  MemoryAllocator *pMVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (FLAG_v8_os_page_size == 0) {
    lVar7 = CommitPageSize();
    if (FLAG_v8_os_page_size == 0) {
      lVar8 = CommitPageSize();
      if (FLAG_v8_os_page_size == 0) {
        lVar6 = CommitPageSize();
        uVar9 = lVar6 + 0x117U & -lVar6;
        if (FLAG_v8_os_page_size == 0) {
          lVar6 = CommitPageSize();
          uVar5 = lVar6 + 0x117U & -lVar6;
          if (FLAG_v8_os_page_size == 0) {
            uVar10 = CommitPageSize();
          }
          else {
            uVar10 = (long)FLAG_v8_os_page_size << 10;
          }
        }
        else {
          uVar10 = (long)FLAG_v8_os_page_size * 0x400;
          uVar5 = uVar10 & (long)FLAG_v8_os_page_size * -0x400;
        }
        goto LAB_01013674;
      }
    }
    else {
      lVar8 = (long)FLAG_v8_os_page_size << 10;
    }
  }
  else {
    lVar7 = (long)FLAG_v8_os_page_size << 10;
    lVar8 = lVar7;
  }
  uVar10 = (ulong)(FLAG_v8_os_page_size << 10);
  uVar9 = uVar10 & -uVar10;
  uVar5 = uVar9;
LAB_01013674:
  uVar4 = VirtualMemory::SetPermissions(param_1,param_2,uVar9,2);
  if ((uVar4 & 1) != 0) {
    uVar4 = VirtualMemory::SetPermissions(param_1,uVar9 + param_2,lVar7,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = uVar5 + param_2 + uVar10;
      uVar5 = VirtualMemory::SetPermissions(param_1,lVar6,param_3 - uVar9,2);
      if ((uVar5 & 1) != 0) {
        uVar5 = VirtualMemory::SetPermissions(param_1,(param_4 + param_2) - lVar8,lVar7,0);
        if ((uVar5 & 1) != 0) {
          pMVar1 = this + 0x60;
          do {
            while( true ) {
              if (*(ulong *)pMVar1 <= param_2) goto LAB_01013710;
              if (*(ulong *)pMVar1 == *(ulong *)pMVar1) break;
              ClearExclusiveLocal();
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
            if (bVar3) {
              *(ulong *)pMVar1 = param_2;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_01013710:
          pMVar1 = this + 0x68;
          do {
            while( true ) {
              if (lVar6 + param_3 <= *(ulong *)pMVar1) {
                return 1;
              }
              if (*(ulong *)pMVar1 == *(ulong *)pMVar1) break;
              ClearExclusiveLocal();
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
            if (bVar3) {
              *(ulong *)pMVar1 = lVar6 + param_3;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          return 1;
        }
        VirtualMemory::SetPermissions(param_1,lVar6,param_3,0);
      }
    }
    VirtualMemory::SetPermissions(param_1,param_2,uVar9,0);
  }
  return 0;
}

