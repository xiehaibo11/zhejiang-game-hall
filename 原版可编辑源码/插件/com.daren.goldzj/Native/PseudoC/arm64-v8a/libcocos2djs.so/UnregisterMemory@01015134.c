
/* v8::internal::MemoryAllocator::UnregisterMemory(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::MemoryAllocator::UnregisterMemory(MemoryAllocator *this,MemoryChunk *param_1)

{
  MemoryAllocator *pMVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  void *local_60 [3];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar14 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar14 = 0x50;
  }
  lVar14 = *(long *)(param_1 + lVar14);
  pMVar1 = this + 0x50;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
    if (bVar3) {
      *(long *)pMVar1 = *(long *)pMVar1 - lVar14;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar15 = *(long *)(*(long *)this + 0x9520);
  if (*(char *)(lVar15 + 0x1798) == '\0') {
    *(char *)(lVar15 + 0x1798) = '\x01';
    piVar7 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar15 + 0x1780));
    *(int **)(lVar15 + 0x1790) = piVar7;
  }
  else {
    piVar7 = *(int **)(lVar15 + 0x1790);
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 - (int)lVar14;
  }
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    pMVar1 = this + 0x58;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pMVar1,0x10);
      if (bVar3) {
        *(long *)pMVar1 = *(long *)pMVar1 - lVar14;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(this + 0x150);
      if (uVar8 != 0) {
        uVar9 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) *
                -0x622015f714c7d297;
        uVar17 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar8 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar8 >> 8)),POPCOUNT((char)uVar8))))))));
        uVar16 = NEON_uaddlv(uVar17,1);
        uVar10 = (uVar9 ^ (ulong)param_1 >> 0x20 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
        uVar9 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
        uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
        if (uVar9 < 2) {
          uVar11 = uVar8 - 1 & uVar10;
        }
        else {
          uVar11 = uVar10;
          if (uVar8 <= uVar10) {
            uVar11 = 0;
            if (uVar8 != 0) {
              uVar11 = uVar10 / uVar8;
            }
            uVar11 = uVar10 - uVar11 * uVar8;
          }
        }
        plVar12 = *(long **)(*(long *)(this + 0x148) + uVar11 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          do {
            uVar13 = plVar12[1];
            if (uVar13 == uVar10) {
              if ((MemoryChunk *)plVar12[2] == param_1) {
                std::__ndk1::
                __hash_table<v8::internal::MemoryChunk*,std::__ndk1::hash<v8::internal::MemoryChunk*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,std::__ndk1::allocator<v8::internal::MemoryChunk*>>
                ::remove(local_60);
                pvVar6 = local_60[0];
                local_60[0] = (void *)0x0;
                if (pvVar6 != (void *)0x0) {
                  operator_delete(pvVar6);
                }
                break;
              }
            }
            else {
              if (uVar9 < 2) {
                uVar13 = uVar13 & uVar8 - 1;
              }
              else if (uVar8 <= uVar13) {
                uVar4 = 0;
                if (uVar8 != 0) {
                  uVar4 = uVar13 / uVar8;
                }
                uVar13 = uVar13 - uVar4 * uVar8;
              }
              if (uVar13 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
      Heap::UnregisterUnprotectedMemoryChunk(*(Heap **)(param_1 + 0x18),param_1);
      uVar8 = *(ulong *)(param_1 + 8);
    }
  }
  *(ulong *)(param_1 + 8) = uVar8 | 0x100000;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

