
/* v8::internal::CancelableTaskManager::TryAbort(unsigned long) */

undefined4 __thiscall
v8::internal::CancelableTaskManager::TryAbort(CancelableTaskManager *this,ulong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  void *local_50 [3];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kInvalidTaskId != id");
  }
  base::Mutex::Lock((Mutex *)(this + 0x60));
  uVar7 = *(ulong *)(this + 0x10);
  if (uVar7 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & param_1;
    }
    else {
      uVar9 = param_1;
      if (uVar7 <= param_1) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = param_1 / uVar7;
        }
        uVar9 = param_1 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 8) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == param_1) {
          if (plVar10[2] == param_1) {
            piVar1 = (int *)(plVar10[3] + 0x10);
            goto LAB_011f7c3c;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar11 = uVar11 & uVar7 - 1;
          }
          else if (uVar7 <= uVar11) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar4 * uVar7;
          }
          if (uVar11 != uVar9) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  uVar12 = 0;
  goto LAB_011f7c00;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB_011f7c3c:
    if (*piVar1 != 0) {
      ClearExclusiveLocal();
      uVar12 = 1;
      goto LAB_011f7c00;
    }
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::Cancelable*>>>
  ::remove(local_50);
  pvVar6 = local_50[0];
  local_50[0] = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  base::ConditionVariable::NotifyOne((ConditionVariable *)(this + 0x30));
  uVar12 = 2;
LAB_011f7c00:
  base::Mutex::Unlock((Mutex *)(this + 0x60));
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}

