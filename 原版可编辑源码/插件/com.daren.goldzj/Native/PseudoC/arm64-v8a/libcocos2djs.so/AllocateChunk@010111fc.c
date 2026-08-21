
/* v8::internal::MemoryAllocator::AllocateChunk(unsigned long, unsigned long,
   v8::internal::Executability, v8::internal::Space*) */

MemoryChunk * __thiscall
v8::internal::MemoryAllocator::AllocateChunk
          (MemoryAllocator *this,long param_1,ulong param_2,int param_4,undefined8 param_5)

{
  MemoryAllocator *pMVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  MemoryChunk *pMVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  void *pvVar17;
  Logger *this_00;
  long lVar18;
  MemoryChunk *local_a8;
  void *local_a0;
  long lStack_98;
  MemoryChunk *local_90;
  void *local_88;
  long lStack_80;
  MemoryChunk *local_78;
  void *local_70;
  long lStack_68;
  
  lVar18 = *(long *)this;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  local_90 = (MemoryChunk *)0x0;
  uVar5 = GetRandomMmapAddr();
  lVar8 = (long)FLAG_v8_os_page_size;
  if (param_4 == 1) {
    if (FLAG_v8_os_page_size == 0) {
      lVar8 = CommitPageSize();
      uVar16 = lVar8 + 0x117U & -lVar8;
      if (FLAG_v8_os_page_size != 0) {
        uVar9 = (long)FLAG_v8_os_page_size << 10;
        goto LAB_010112b8;
      }
      lVar8 = CommitPageSize();
      lVar8 = uVar16 + param_1 + lVar8;
      if (FLAG_v8_os_page_size != 0) goto LAB_010112c4;
      lVar10 = CommitPageSize();
      lVar8 = lVar10 + lVar8;
      if (FLAG_v8_os_page_size != 0) {
        lVar10 = (long)FLAG_v8_os_page_size << 10;
        goto LAB_010112d4;
      }
      lVar10 = CommitPageSize();
      uVar16 = (lVar8 + lVar10) - 1U & -lVar10;
      if (FLAG_v8_os_page_size != 0) goto LAB_010112e8;
      lVar8 = CommitPageSize();
      lVar8 = (lVar8 + 0x117U & -lVar8) + param_2;
      if (FLAG_v8_os_page_size == 0) {
        uVar9 = CommitPageSize();
      }
      else {
        uVar9 = (long)FLAG_v8_os_page_size << 10;
      }
    }
    else {
      uVar9 = lVar8 * 0x400;
      uVar16 = uVar9 & lVar8 * -0x400;
LAB_010112b8:
      lVar8 = uVar16 + param_1 + uVar9;
LAB_010112c4:
      lVar10 = (long)(FLAG_v8_os_page_size << 10);
      lVar8 = lVar8 + lVar10;
LAB_010112d4:
      uVar16 = (lVar8 + lVar10) - 1U & -lVar10;
LAB_010112e8:
      uVar9 = (ulong)(FLAG_v8_os_page_size << 10);
      lVar8 = (uVar9 & -uVar9) + param_2;
    }
    VirtualMemory::VirtualMemory
              ((VirtualMemory *)&local_78,*(PageAllocator **)(this + 0x28),uVar16,
               (void *)(uVar5 & 0xfffffffffffc0000),0x40000);
    pvVar17 = local_70;
    if (local_70 != (void *)0x0) {
      pMVar1 = this + 0x50;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
        if (bVar4) {
          *(long *)pMVar1 = *(long *)pMVar1 + lStack_68;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar5 = CommitExecutableMemory
                        (this,(VirtualMemory *)&local_78,(ulong)local_70,
                         (lVar8 + uVar9) - 1 & -uVar9,uVar16);
      if ((uVar5 & 1) == 0) {
        VirtualMemory::Free((VirtualMemory *)&local_78);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
          if (bVar4) {
            *(ulong *)pMVar1 = *(long *)pMVar1 - uVar16;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pvVar17 = (void *)0x0;
      }
      else {
        local_90 = local_78;
        lStack_80 = lStack_68;
        local_88 = local_70;
        VirtualMemory::Reset((VirtualMemory *)&local_78);
      }
    }
    VirtualMemory::~VirtualMemory((VirtualMemory *)&local_78);
    if (pvVar17 == (void *)0x0) {
LAB_010114d0:
      pMVar7 = (MemoryChunk *)0x0;
      goto LAB_01011818;
    }
    pMVar1 = this + 0x58;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
      if (bVar4) {
        *(long *)pMVar1 = *(long *)pMVar1 + lStack_80;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (FLAG_verify_heap != '\0') {
      if (FLAG_v8_os_page_size == 0) {
        lVar8 = CommitPageSize();
      }
      else {
        lVar8 = (long)FLAG_v8_os_page_size << 10;
      }
      uVar9 = lVar8 + 0x117U & -lVar8;
      uVar5 = uVar9 >> 2;
      if (uVar5 != 0) {
        if (uVar9 < 0x20) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar5 & 0x3ffffffffffffff8;
          puVar13 = (undefined8 *)((long)pvVar17 + 0x10);
          uVar9 = uVar11;
          do {
            puVar13[-1] = 0xbeadbeefbeadbeef;
            puVar13[-2] = 0xbeadbeefbeadbeef;
            puVar13[1] = 0xbeadbeefbeadbeef;
            *puVar13 = 0xbeadbeefbeadbeef;
            uVar9 = uVar9 - 8;
            puVar13 = puVar13 + 4;
          } while (uVar9 != 0);
          if (uVar5 == uVar11) goto LAB_01011524;
        }
        lVar8 = uVar5 - uVar11;
        puVar12 = (undefined4 *)((long)pvVar17 + uVar11 * 4);
        do {
          lVar8 = lVar8 + -1;
          *puVar12 = 0xbeadbeef;
          puVar12 = puVar12 + 1;
        } while (lVar8 != 0);
      }
LAB_01011524:
      if (FLAG_v8_os_page_size == 0) {
        lVar8 = CommitPageSize();
        uVar5 = lVar8 + 0x117U & -lVar8;
        if (FLAG_v8_os_page_size == 0) {
          uVar9 = CommitPageSize();
        }
        else {
          uVar9 = (long)FLAG_v8_os_page_size << 10;
        }
      }
      else {
        uVar9 = (long)FLAG_v8_os_page_size * 0x400;
        uVar5 = uVar9 & (long)FLAG_v8_os_page_size * -0x400;
      }
      if (param_2 >> 2 != 0) {
        uVar11 = param_2 >> 2;
        if (param_2 < 0x20) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar11 & 0x3ffffffffffffff8;
          puVar13 = (undefined8 *)((long)pvVar17 + uVar9 + uVar5 + 0x10);
          uVar15 = uVar14;
          do {
            puVar13[-1] = 0xbeadbeefbeadbeef;
            puVar13[-2] = 0xbeadbeefbeadbeef;
            puVar13[1] = 0xbeadbeefbeadbeef;
            *puVar13 = 0xbeadbeefbeadbeef;
            uVar15 = uVar15 - 8;
            puVar13 = puVar13 + 4;
          } while (uVar15 != 0);
          if (uVar11 == uVar14) goto LAB_01011634;
        }
        lVar8 = uVar11 - uVar14;
        puVar12 = (undefined4 *)((long)pvVar17 + uVar14 * 4 + uVar9 + uVar5);
        do {
          lVar8 = lVar8 + -1;
          *puVar12 = 0xbeadbeef;
          puVar12 = puVar12 + 1;
        } while (lVar8 != 0);
      }
    }
LAB_01011634:
    if (FLAG_v8_os_page_size == 0) {
      lVar8 = CommitPageSize();
      uVar5 = lVar8 + 0x117U & -lVar8;
      if (FLAG_v8_os_page_size == 0) {
        uVar9 = CommitPageSize();
      }
      else {
        uVar9 = (long)FLAG_v8_os_page_size << 10;
      }
    }
    else {
      uVar9 = (long)FLAG_v8_os_page_size * 0x400;
      uVar5 = uVar9 & (long)FLAG_v8_os_page_size * -0x400;
    }
    lVar8 = (long)pvVar17 + uVar9 + uVar5;
  }
  else {
    if (FLAG_v8_os_page_size == 0) {
      lVar8 = CommitPageSize();
      uVar16 = param_1 + lVar8 + 0x117U & -lVar8;
      if (FLAG_v8_os_page_size == 0) {
        lVar10 = CommitPageSize();
      }
      else {
        lVar10 = (long)FLAG_v8_os_page_size << 10;
      }
    }
    else {
      lVar10 = lVar8 * 0x400;
      uVar16 = param_1 + lVar10 + 0x117U & lVar8 * -0x400;
    }
    uVar9 = param_2 + 0x118;
    pvVar17 = (void *)AllocateAlignedMemory
                                (this,uVar16,(uVar9 + lVar10) - 1 & -lVar10,0x40000,param_4,
                                 (void *)(uVar5 & 0xfffffffffffc0000),&local_90);
    if (pvVar17 == (void *)0x0) goto LAB_010114d0;
    if ((FLAG_verify_heap != '\0') && (uVar5 = uVar9 >> 2, uVar5 != 0)) {
      if (uVar9 < 0x20) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar5 & 0x3ffffffffffffff8;
        puVar13 = (undefined8 *)((long)pvVar17 + 0x10);
        uVar9 = uVar11;
        do {
          puVar13[-1] = 0xbeadbeefbeadbeef;
          puVar13[-2] = 0xbeadbeefbeadbeef;
          puVar13[1] = 0xbeadbeefbeadbeef;
          *puVar13 = 0xbeadbeefbeadbeef;
          uVar9 = uVar9 - 8;
          puVar13 = puVar13 + 4;
        } while (uVar9 != 0);
        if (uVar5 == uVar11) goto LAB_010115b8;
      }
      lVar8 = uVar5 - uVar11;
      puVar12 = (undefined4 *)((long)pvVar17 + uVar11 * 4);
      do {
        lVar8 = lVar8 + -1;
        *puVar12 = 0xbeadbeef;
        puVar12 = puVar12 + 1;
      } while (lVar8 != 0);
    }
LAB_010115b8:
    lVar8 = (long)pvVar17 + 0x118;
  }
  lVar10 = *(long *)(*(long *)this + 0x9520);
  if (*(char *)(lVar10 + 0x1798) == '\0') {
    *(char *)(lVar10 + 0x1798) = '\x01';
    piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar10 + 0x1780));
    *(int **)(lVar10 + 0x1790) = piVar6;
  }
  else {
    piVar6 = *(int **)(lVar10 + 0x1790);
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + (int)uVar16;
  }
  this_00 = *(Logger **)(*(long *)this + 0x9558);
  uVar5 = Logger::is_logging(this_00);
  if ((uVar5 & 1) != 0) {
    Logger::NewEvent(this_00,"MemoryChunk",pvVar17,uVar16);
  }
  if ((long)pvVar17 + uVar16 == 0) {
    if (*(long *)(this + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!last_chunk_.IsReserved()");
    }
    *(MemoryChunk **)(this + 0x70) = local_90;
    *(long *)(this + 0x80) = lStack_80;
    *(void **)(this + 0x78) = local_88;
    VirtualMemory::Reset((VirtualMemory *)&local_90);
    uVar2 = *(undefined8 *)(this + 0x80);
    uVar5 = VirtualMemory::SetPermissions(this + 0x70,*(undefined8 *)(this + 0x78),uVar2,0);
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(*(long *)this + 0x9520);
      if (*(char *)(lVar8 + 0x1798) == '\0') {
        *(char *)(lVar8 + 0x1798) = '\x01';
        piVar6 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar8 + 0x1780));
        *(int **)(lVar8 + 0x1790) = piVar6;
      }
      else {
        piVar6 = *(int **)(lVar8 + 0x1790);
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar6 - (int)uVar2;
      }
    }
    pMVar1 = this + 0x50;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
      if (bVar4) {
        *(ulong *)pMVar1 = *(long *)pMVar1 - uVar16;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_4 == 1) {
      pMVar1 = this + 0x58;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
        if (bVar4) {
          *(ulong *)pMVar1 = *(long *)pMVar1 - uVar16;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(long *)(this + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","last_chunk_.IsReserved()");
    }
    pMVar7 = (MemoryChunk *)AllocateChunk(this,param_1,param_2,param_4,param_5);
  }
  else {
    local_a8 = local_90;
    lStack_98 = lStack_80;
    local_a0 = local_88;
    VirtualMemory::Reset((VirtualMemory *)&local_90);
    pMVar7 = (MemoryChunk *)
             MemoryChunk::Initialize
                       (lVar18 + 0x8850,pvVar17,uVar16,lVar8,lVar8 + param_2,param_4,param_5,
                        &local_a8);
    VirtualMemory::~VirtualMemory((VirtualMemory *)&local_a8);
    if (((byte)pMVar7[8] & 1) != 0) {
      local_78 = pMVar7;
      std::__ndk1::
      __hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
      ::__emplace_unique_key_args<v8::internal::MemoryChunk*,v8::internal::MemoryChunk*const&>
                ((__hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
                  *)(this + 0x148),&local_78,&local_78);
    }
  }
LAB_01011818:
  VirtualMemory::~VirtualMemory((VirtualMemory *)&local_90);
  return pMVar7;
}

