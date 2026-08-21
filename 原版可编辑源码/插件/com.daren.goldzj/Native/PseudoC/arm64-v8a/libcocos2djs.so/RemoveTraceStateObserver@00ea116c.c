
/* v8::platform::tracing::TracingController::RemoveTraceStateObserver(v8::TracingController::TraceStateObserver*)
    */

void __thiscall
v8::platform::tracing::TracingController::RemoveTraceStateObserver
          (TracingController *this,TraceStateObserver *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  Mutex *this_00;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = *(Mutex **)(this + 0x18);
  base::Mutex::Lock(this_00);
  uVar4 = *(ulong *)(this + 0x28);
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = (uVar5 ^ (ulong)param_1 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar7 = uVar4 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x20) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if ((TraceStateObserver *)plVar8[2] == param_1) {
            std::__ndk1::
            __hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
            ::remove(local_50);
            pvVar3 = local_50[0];
            local_50[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            break;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  base::Mutex::Unlock(this_00);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

