
undefined8 FUN_0159dba0(int param_1,int *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  undefined8 uVar9;
  byte **local_660;
  byte *local_658;
  char *local_650;
  undefined8 local_648;
  RuntimeCallStats *local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  ulong local_610;
  long *local_608;
  long *local_600;
  InterpretedFrame *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_620 = 0;
  uStack_638 = 0;
  local_640 = (RuntimeCallStats *)0x0;
  uStack_628 = 0;
  uStack_630 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_640 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_640,(ulong)&local_640 | 8,0x25d);
  }
  if (DAT_01d47490 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47490 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47490;
  local_660 = (byte **)0x0;
  if ((*DAT_01d47490 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_OptimizeOsr",0,0,0,0,0,0,0,&local_608,
                       0);
    plVar4 = local_600;
    local_600 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_608;
    local_608 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_660 = &local_658;
    local_650 = "V8.Runtime_Runtime_OptimizeOsr";
    local_658 = pbVar3;
    local_648 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 == 1) {
    iVar8 = *param_2 >> 1;
  }
  else {
    iVar8 = 0;
  }
  v8::internal::StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_608,param_3);
  uVar6 = local_610;
  if (local_80 != (InterpretedFrame *)0x0) {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
    while ((iVar8 != 0 && (local_80 != (InterpretedFrame *)0x0))) {
      iVar8 = iVar8 + -1;
      v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_608);
    }
    uVar6 = local_610;
    if (local_80 != (InterpretedFrame *)0x0) {
      uVar6 = (**(code **)(*(long *)local_80 + 0x98))();
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_3 + 0x95a0);
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar6;
        uVar6 = local_610;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
        uVar6 = local_610;
      }
      if ((puVar7 != (ulong *)0x0) && (v8::internal::FLAG_opt != '\0')) {
        local_610 = *puVar7;
        if (((*(uint *)((local_610 & 0xffffffff00000000 | (ulong)*(uint *)(local_610 + 0xb)) + 0x1b)
             & 0xf00000) == 0) ||
           ((*(uint *)((local_610 & 0xffffffff00000000 | (ulong)*(uint *)(local_610 + 0xb)) + 0x1b)
            & 0xf00000) != 0xb00000)) {
          if (v8::internal::FLAG_testing_d8_test_runner != '\0') {
            v8::internal::PendingOptimizationTable::MarkedForOptimization(param_3,puVar7);
            local_610 = *puVar7;
          }
          uVar6 = v8::internal::JSFunction::HasOptimizedCode((JSFunction *)&local_610);
          if ((uVar6 & 1) == 0) {
            if (v8::internal::FLAG_trace_osr != '\0') {
              v8::internal::PrintF("[OSR - OptimizeOsr marking ");
              local_610 = *puVar7;
              v8::internal::Object::ShortPrint((Object *)&local_610,(__sFILE *)waitpid);
              v8::internal::PrintF(" for non-concurrent optimization]\n");
            }
            v8::internal::JSFunction::EnsureFeedbackVector(puVar7);
            local_610 = *puVar7;
            v8::internal::JSFunction::MarkForOptimization((JSFunction *)&local_610,0);
            iVar8 = (**(code **)(*(long *)local_80 + 8))();
            uVar6 = local_610;
            if (iVar8 == 0xc) {
              v8::internal::RuntimeProfiler::AttemptOnStackReplacement
                        (*(RuntimeProfiler **)(param_3 + 0x9510),local_80,6);
              uVar6 = local_610;
            }
          }
          else {
            uVar6 = local_610;
            if (v8::internal::FLAG_testing_d8_test_runner != '\0') {
              v8::internal::PendingOptimizationTable::FunctionWasOptimized(param_3,puVar7);
              uVar6 = local_610;
            }
          }
        }
      }
    }
  }
  local_610 = uVar6;
  uVar9 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_660 != (byte **)0x0) && (*local_658 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_658,local_650,local_648);
  }
  if (local_640 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_640,(RuntimeCallTimer *)((ulong)&local_640 | 8));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

