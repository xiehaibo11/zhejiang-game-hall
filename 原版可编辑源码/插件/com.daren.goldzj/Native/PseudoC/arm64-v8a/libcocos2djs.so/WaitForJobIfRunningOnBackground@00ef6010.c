
/* v8::internal::CompilerDispatcher::WaitForJobIfRunningOnBackground(v8::internal::CompilerDispatcher::Job*)
    */

void __thiscall
v8::internal::CompilerDispatcher::WaitForJobIfRunningOnBackground
          (CompilerDispatcher *this,Job *param_1)

{
  Mutex *this_00;
  ulong uVar1;
  byte *pbVar2;
  RuntimeCallStats *pRVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  RuntimeCallStats *local_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  byte **local_58;
  byte *local_50;
  char *local_48;
  undefined8 local_40;
  Job *local_38;
  
  local_38 = param_1;
  if (DAT_01d3ec40 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec40 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.compile");
  }
  pbVar2 = DAT_01d3ec40;
  local_58 = (byte **)0x0;
  if ((*DAT_01d3ec40 & 5) != 0) {
    local_80 = (RuntimeCallStats *)0x0;
    plStack_78 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.CompilerDispatcherWaitForBackgroundJob",0,0,0,0,0,0,0,
                       &local_80,0);
    plVar4 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pRVar3 = local_80;
    local_80 = (RuntimeCallStats *)0x0;
    if (pRVar3 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar3 + 8))();
    }
    local_58 = &local_50;
    local_48 = "V8.CompilerDispatcherWaitForBackgroundJob";
    local_50 = pbVar2;
    local_40 = uVar5;
  }
  local_60 = 0;
  plStack_78 = (long *)0x0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(*(long *)this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x7e);
  }
  this_00 = (Mutex *)(this + 0xb0);
  base::Mutex::Lock(this_00);
  uVar6 = *(ulong *)(this + 0x110);
  if (uVar6 != 0) {
    uVar7 = ((ulong)(uint)((int)local_38 << 3) + 8 ^ (ulong)local_38 >> 0x20) * -0x622015f714c7d297;
    uVar5 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar6 >> 
                                                  8)),POPCOUNT((char)uVar6))))))));
    uVar11 = NEON_uaddlv(uVar5,1);
    uVar8 = (uVar7 ^ (ulong)local_38 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar11) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar8 & uVar6 - 1;
    }
    else {
      uVar9 = uVar8;
      if (uVar6 <= uVar8) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar8 / uVar6;
        }
        uVar9 = uVar8 - uVar9 * uVar6;
      }
    }
    plVar4 = *(long **)(*(long *)(this + 0x108) + uVar9 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar10 = plVar4[1];
        if (uVar10 == uVar8) {
          if ((Job *)plVar4[2] == local_38) {
            *(Job **)(this + 0x130) = local_38;
            if (local_38 != (Job *)0x0) {
              do {
                base::ConditionVariable::Wait((ConditionVariable *)(this + 0x138),this_00);
              } while (*(long *)(this + 0x130) != 0);
            }
            goto LAB_00ef6210;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar1 * uVar6;
          }
          if (uVar10 != uVar9) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  FUN_00ef62c8(this + 0xe0,&local_38);
LAB_00ef6210:
  base::Mutex::Unlock(this_00);
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  if ((local_58 != (byte **)0x0) && (*local_50 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_50,local_48,local_40);
  }
  return;
}

