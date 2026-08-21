
undefined8 FUN_0159cc7c(int param_1,ulong *param_2,Isolate *param_3)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  ulong local_38;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x25c);
  }
  if (DAT_01d47478 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47478 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d47478;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47478 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"V8.Runtime_Runtime_OptimizeFunctionOnNextCall",0,0,0,0,0,
                       0,0,&local_60,0);
    plVar7 = local_58;
    local_58 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_60;
    local_60 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_OptimizeFunctionOnNextCall";
    local_a8 = pbVar5;
    local_98 = uVar8;
  }
  iVar4 = *(int *)(param_3 + 0x95b0);
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar4 + 1;
  if ((((1 < param_1 - 1U) || (uVar11 = *param_2, (uVar11 & 1) == 0)) ||
      (uVar10 = uVar11 & 0xffffffff00000000,
      *(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x439)) ||
     ((*(uint *)((uVar10 | *(uint *)(uVar11 + 0xb)) + 0x1b) >> 0xc & 1) == 0)) {
    uVar12 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = iVar4;
    goto joined_r0x0159cdf0;
  }
  v8::internal::IsCompiledScope::IsCompiledScope
            ((IsCompiledScope *)&local_60,uVar10 | *(uint *)(uVar11 + 0xb));
  if (((((ulong)local_58 & 0xff) != 0) ||
      (uVar11 = v8::internal::Compiler::Compile(param_2,1,&local_60), (uVar11 & 1) != 0)) &&
     (v8::internal::FLAG_opt != '\0')) {
    uVar10 = *param_2;
    uVar11 = uVar10 & 0xffffffff00000000;
    if ((((*(uint *)((uVar11 | *(uint *)(uVar10 + 0xb)) + 0x1b) & 0xf00000) == 0) ||
        ((*(uint *)((uVar11 | *(uint *)(uVar10 + 0xb)) + 0x1b) & 0xf00000) != 0xb00000)) &&
       ((uVar2 = *(uint *)((uVar11 | *(uint *)(uVar10 + 0xb)) + 3), (uVar2 & 1) == 0 ||
        (*(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar2) - 1)) != 0x57)))) {
      if (v8::internal::FLAG_testing_d8_test_runner != '\0') {
        v8::internal::PendingOptimizationTable::MarkedForOptimization(param_3,param_2);
      }
      local_38 = *param_2;
      uVar11 = v8::internal::JSFunction::HasOptimizedCode((JSFunction *)&local_38);
      if ((uVar11 & 1) == 0) {
        if (param_1 == 2) {
          uVar11 = param_2[-1];
          if (((uVar11 & 1) == 0) ||
             (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1))))
          goto LAB_0159d090;
          local_38 = uVar11;
          uVar11 = v8::internal::String::IsOneByteEqualTo(&local_38,"concurrent",10);
          if ((uVar11 & 1) == 0) goto LAB_0159cf84;
          bVar6 = *(long *)(param_3 + 0xc610) != 0;
        }
        else {
LAB_0159cf84:
          bVar6 = false;
        }
        if (v8::internal::FLAG_trace_opt != '\0') {
          v8::internal::PrintF("[manually marking ");
          local_38 = *param_2;
          v8::internal::Object::ShortPrint((Object *)&local_38,(__sFILE *)waitpid);
          pcVar1 = "concurrent";
          if (bVar6 == false) {
            pcVar1 = "non-concurrent";
          }
          v8::internal::PrintF(" for %s optimization]\n",pcVar1);
        }
        uVar10 = *param_2;
        uVar11 = uVar10 & 0xffffffff00000000;
        if (*(int *)((uVar11 | *(uint *)(uVar10 + 0x17)) + 0x27) == 0x42) {
LAB_0159d018:
          uVar10 = *param_2;
          puVar9 = (ulong *)v8::internal::Builtins::builtin_handle
                                      ((Builtins *)(param_3 + 0x9e00),0x38);
          uVar11 = *puVar9;
          *(int *)(uVar10 + 0x17) = (int)uVar11;
          if (((uVar11 & 1) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)
             ) {
            v8::internal::Heap_MarkingBarrierSlow(uVar10,uVar10 + 0x17);
          }
        }
        else {
          uVar2 = *(uint *)((uVar11 | *(uint *)(uVar10 + 0xb)) + 3);
          if ((uVar2 == 0x84) ||
             (((uVar2 & 1) != 0 &&
              (*(ushort *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar2) - 1)) - 0x95 < 2))))
          goto LAB_0159d018;
        }
        v8::internal::JSFunction::EnsureFeedbackVector(param_2);
        local_38 = *param_2;
        v8::internal::JSFunction::MarkForOptimization((JSFunction *)&local_38,bVar6);
      }
      else if (v8::internal::FLAG_testing_d8_test_runner != '\0') {
        v8::internal::PendingOptimizationTable::FunctionWasOptimized(param_3,param_2);
      }
    }
  }
LAB_0159d090:
  uVar12 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
joined_r0x0159cdf0:
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar12;
}

