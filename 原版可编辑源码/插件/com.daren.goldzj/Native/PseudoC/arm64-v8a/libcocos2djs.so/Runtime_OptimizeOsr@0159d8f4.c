
/* v8::internal::Runtime_OptimizeOsr(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_OptimizeOsr(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong local_600;
  StackFrameIterator aSStack_5f8 [1416];
  InterpretedFrame *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if (param_1 == 1) {
      iVar6 = (int)*param_2 >> 1;
    }
    else {
      iVar6 = 0;
    }
    StackFrameIterator::StackFrameIterator(aSStack_5f8,param_3);
    uVar4 = local_600;
    if (local_70 != (InterpretedFrame *)0x0) {
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8);
      while ((iVar6 != 0 && (local_70 != (InterpretedFrame *)0x0))) {
        iVar6 = iVar6 + -1;
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_5f8);
      }
      uVar4 = local_600;
      if (local_70 != (InterpretedFrame *)0x0) {
        uVar4 = (**(code **)(*(long *)local_70 + 0x98))();
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(param_3 + 0x95a0);
          if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar4;
          uVar4 = local_600;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar4);
          uVar4 = local_600;
        }
        if ((puVar5 != (ulong *)0x0) && (FLAG_opt != '\0')) {
          local_600 = *puVar5;
          if (((*(uint *)((local_600 & 0xffffffff00000000 | (ulong)*(uint *)(local_600 + 0xb)) +
                         0x1b) & 0xf00000) == 0) ||
             ((*(uint *)((local_600 & 0xffffffff00000000 | (ulong)*(uint *)(local_600 + 0xb)) + 0x1b
                        ) & 0xf00000) != 0xb00000)) {
            if (FLAG_testing_d8_test_runner != '\0') {
              PendingOptimizationTable::MarkedForOptimization(param_3,puVar5);
              local_600 = *puVar5;
            }
            uVar4 = JSFunction::HasOptimizedCode((JSFunction *)&local_600);
            if ((uVar4 & 1) == 0) {
              if (FLAG_trace_osr != '\0') {
                PrintF("[OSR - OptimizeOsr marking ");
                local_600 = *puVar5;
                Object::ShortPrint((Object *)&local_600,(__sFILE *)waitpid);
                PrintF(" for non-concurrent optimization]\n");
              }
              JSFunction::EnsureFeedbackVector(puVar5);
              local_600 = *puVar5;
              JSFunction::MarkForOptimization((JSFunction *)&local_600,0);
              iVar6 = (**(code **)(*(long *)local_70 + 8))();
              uVar4 = local_600;
              if (iVar6 == 0xc) {
                RuntimeProfiler::AttemptOnStackReplacement
                          (*(RuntimeProfiler **)(param_3 + 0x9510),local_70,6);
                uVar4 = local_600;
              }
            }
            else {
              uVar4 = local_600;
              if (FLAG_testing_d8_test_runner != '\0') {
                PendingOptimizationTable::FunctionWasOptimized(param_3,puVar5);
                uVar4 = local_600;
              }
            }
          }
        }
      }
    }
    local_600 = uVar4;
    uVar7 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar3 + 0x28) != local_58) {
LAB_0159db9c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar7 = FUN_0159dba0(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_0159db9c;
  }
  return uVar7;
}

