
long FUN_0159e8c0(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte **local_650;
  byte *local_648;
  char *local_640;
  undefined8 local_638;
  RuntimeCallStats *local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  long *local_608;
  long *local_600;
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_610 = 0;
  uStack_628 = 0;
  local_630 = (RuntimeCallStats *)0x0;
  uStack_618 = 0;
  uStack_620 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_630 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_630,(ulong)&local_630 | 8,0x230);
  }
  if (DAT_01d474a0 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d474a0 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d474a0;
  local_650 = (byte **)0x0;
  if ((*DAT_01d474a0 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar3,"V8.Runtime_Runtime_GetOptimizationStatus",0,0,0,0,0,0,0,
                       &local_608,0);
    plVar6 = local_600;
    local_600 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_608;
    local_608 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_650 = &local_648;
    local_640 = "V8.Runtime_Runtime_GetOptimizationStatus";
    local_648 = pbVar3;
    local_638 = uVar7;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  uVar4 = (uint)(v8::internal::FLAG_jitless != '\0' || v8::internal::FLAG_lite_mode != '\0');
  uVar8 = v8::internal::Isolate::use_optimizer(param_3);
  uVar9 = uVar4 << 0xc;
  if ((uVar8 & 1) == 0) {
    uVar9 = uVar4 << 0xc | 2;
  }
  uVar8 = *param_2;
  if (v8::internal::FLAG_prepare_always_opt != '\0' || v8::internal::FLAG_always_opt != '\0') {
    uVar9 = uVar9 | 4;
  }
  if (v8::internal::FLAG_deopt_every_n_times != 0) {
    uVar9 = uVar9 | 8;
  }
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x439)) {
    lVar10 = (ulong)uVar9 << 1;
  }
  else {
    if (param_1 == 2) {
      plVar6 = (long *)param_2[-1];
      if ((((ulong)plVar6 & 1) == 0) ||
         (0x3f < *(ushort *)
                  (((ulong)plVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar6 - 1))))
      {
        lVar10 = *(long *)(param_3 + 0xa0);
        goto LAB_0159eaec;
      }
      local_608 = plVar6;
      uVar4 = v8::internal::String::IsOneByteEqualTo(&local_608,"no sync",7);
      uVar4 = uVar4 ^ 1;
      lVar10 = *(long *)(param_3 + 0xc610);
    }
    else {
      uVar4 = 1;
      lVar10 = *(long *)(param_3 + 0xc610);
    }
    if ((lVar10 != 0) && ((uVar4 & 1) != 0)) {
      uVar8 = *param_2;
      uVar11 = uVar8 & 0xffffffff00000000;
      uVar4 = *(uint *)((uVar11 | *(uint *)(uVar8 + 0xb)) + 3);
      uVar13 = (ulong)uVar4;
      if (uVar4 != 0x84) {
        uVar12 = uVar11 | uVar13;
        do {
          if (((((uVar13 & 1) != 0) &&
               (*(ushort *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) - 0x95 < 2)) ||
              (uVar8 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar8 + 0x13)) + 3),
              *(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x9f)) ||
             (*(int *)(uVar8 + 7) != 8)) break;
          v8::internal::OptimizingCompileDispatcher::InstallOptimizedFunctions
                    (*(OptimizingCompileDispatcher **)(param_3 + 0xc610));
          v8::base::OS::Sleep(50000);
          uVar8 = *param_2;
          uVar11 = uVar8 & 0xffffffff00000000;
          uVar4 = *(uint *)((uVar11 | *(uint *)(uVar8 + 0xb)) + 3);
          uVar13 = (ulong)uVar4;
          uVar12 = uVar11 | uVar13;
        } while (uVar4 != 0x84);
      }
    }
    uVar11 = *param_2;
    uVar8 = uVar11 & 0xffffffff00000000;
    uVar4 = *(uint *)((uVar8 | *(uint *)(uVar11 + 0xb)) + 3);
    if ((((uVar4 == 0x84) ||
         (((uVar4 & 1) != 0 &&
          (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar4) - 1)) - 0x95 < 2)))) ||
        (uVar11 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar11 + 0x13)) + 3),
        *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x9f)) ||
       (*(int *)(uVar11 + 7) != 4)) {
      uVar11 = *param_2;
      uVar8 = uVar11 & 0xffffffff00000000;
      uVar4 = *(uint *)((uVar8 | *(uint *)(uVar11 + 0xb)) + 3);
      if (((uVar4 == 0x84) ||
          (((uVar4 & 1) != 0 &&
           (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar4) - 1)) - 0x95 < 2)))) ||
         ((uVar11 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar11 + 0x13)) + 3),
          *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x9f ||
          (*(int *)(uVar11 + 7) != 8)))) {
        uVar11 = *param_2;
        uVar13 = (ulong)(uVar9 | 1);
        uVar8 = uVar11 & 0xffffffff00000000;
        uVar4 = *(uint *)((uVar8 | *(uint *)(uVar11 + 0xb)) + 3);
        if ((uVar4 != 0x84) &&
           ((((uVar4 & 1) == 0 ||
             (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar4) - 1)) - 0x95)) &&
            (uVar11 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar11 + 0x13)) + 3),
            *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x9f)))) {
          uVar4 = uVar9 | 0x201;
          if (*(int *)(uVar11 + 7) != 8) {
            uVar4 = uVar9 | 1;
          }
          uVar13 = (ulong)uVar4;
        }
      }
      else {
        uVar13 = (ulong)(uVar9 | 0x101);
      }
    }
    else {
      uVar13 = (ulong)(uVar9 | 0x81);
    }
    uVar11 = *param_2;
    uVar8 = uVar11 & 0xffffffff00000000;
    if (*(int *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0x27) != 0x42) {
      uVar9 = *(uint *)((uVar8 | *(uint *)(uVar11 + 0xb)) + 3);
      if ((((uVar9 != 0x84) &&
           (((uVar9 & 1) == 0 ||
            (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar9) - 1)) - 0x95)))) &&
          ((*(byte *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0x17) & 0x3e) == 0)) &&
         ((*(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0xf)) + 7) & 1) == 0))
      {
        uVar8 = *param_2 & 0xffffffff00000000;
        uVar9 = 0x10;
        if ((*(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*param_2 + 0x17)) + 0xf)) + 7) & 1) !=
            0) {
          uVar9 = 0x2000;
        }
        uVar13 = (ulong)(uVar9 | (uint)uVar13 |
                        *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17)
                                  ) + 0x17) >> 1 & 0x20);
      }
    }
    uVar11 = *param_2;
    uVar8 = uVar11 & 0xffffffff00000000;
    if (*(int *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0x27) != 0x42) {
      uVar9 = *(uint *)((uVar8 | *(uint *)(uVar11 + 0xb)) + 3);
      if (((uVar9 != 0x84) &&
          (((uVar9 & 1) == 0 ||
           (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar9) - 1)) - 0x95)))) &&
         (((uVar9 = *(int *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0x27) - 0x38, uVar9 < 9 &&
           ((1 << (ulong)(uVar9 & 0x1f) & 0x181U) != 0)) ||
          (((*(byte *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0x17) & 0x3e) == 0 &&
           ((*(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar11 + 0x17)) + 0xf)) + 7) & 1) != 0)
           ))))) {
        uVar13 = (ulong)((uint)uVar13 | 0x40);
      }
    }
    v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_608,param_3);
    if ((local_80 == (long *)0x0) ||
       (v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608),
       local_80 == (long *)0x0)) {
      lVar10 = uVar13 << 1;
    }
    else {
      do {
        iVar5 = (**(code **)(*local_80 + 0x98))();
        if (iVar5 == (int)*param_2) {
          if (local_80 != (long *)0x0) {
            iVar5 = (**(code **)(*local_80 + 8))();
            uVar9 = 0xc00;
            if (iVar5 != 4) {
              uVar9 = 0x400;
            }
            uVar13 = (ulong)(uVar9 | (uint)uVar13);
          }
          break;
        }
        v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
      } while (local_80 != (long *)0x0);
      lVar10 = uVar13 << 1;
      if (param_3 == (Isolate *)0x0) goto LAB_0159eb14;
    }
  }
LAB_0159eaec:
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_0159eb14:
  if ((local_650 != (byte **)0x0) && (*local_648 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_648,local_640,local_638);
  }
  if (local_630 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_630,(RuntimeCallTimer *)((ulong)&local_630 | 8));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

