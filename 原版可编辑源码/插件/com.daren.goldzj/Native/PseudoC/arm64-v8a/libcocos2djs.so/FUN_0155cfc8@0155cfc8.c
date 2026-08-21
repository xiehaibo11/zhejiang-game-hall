
ulong FUN_0155cfc8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  Logger *this;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0xf3);
  }
  if (DAT_01d46e20 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e20 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d46e20;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d46e20 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar5,"V8.Runtime_Runtime_FunctionFirstExecution",0,0,0,0,0,0,0,
                       &local_70,0);
    plVar8 = local_68;
    local_68 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_70;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_FunctionFirstExecution";
    local_c8 = pbVar5;
    local_b8 = uVar9;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) != 0) &&
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x439)) {
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = puVar1;
      if (puVar2 == puVar1) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar10 + 1;
      *puVar10 = uVar11;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    }
    this = *(Logger **)(param_3 + 0x9558);
    uVar11 = v8::internal::Logger::is_logging(this);
    if ((uVar11 & 1) != 0) {
      local_70 = (long *)*puVar10;
      uVar12 = (ulong)local_70 & 0xffffffff00000000;
      uVar11 = uVar12 | *(uint *)((long)local_70 + 0xf);
      if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
        uVar11 = uVar12 | *(uint *)(uVar11 + 0xb);
      }
      iVar3 = *(int *)(uVar11 + 0x1f);
      uVar6 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_70);
      local_78 = *puVar10;
      uVar7 = v8::internal::SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_78);
      local_80 = *puVar10;
      uVar9 = v8::internal::SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_80);
      v8::internal::Logger::FunctionEvent
                ((Logger *)0x0,this,"first-execution",iVar3 >> 1,uVar6,uVar7,uVar9);
    }
    uVar11 = *param_2 & 0xffffffff00000000;
    local_70 = (long *)(uVar11 | *(uint *)((uVar11 | *(uint *)(*param_2 + 0x13)) + 3));
    v8::internal::FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_70);
    uVar11 = *param_2;
    uVar4 = *(uint *)(uVar11 + 0x17);
    *(ulong **)(param_3 + 0x95a0) = puVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
      *(ulong **)(param_3 + 0x95a8) = puVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
      plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar8 + 0x28))(plVar8,local_c8,local_c0,local_b8);
    }
    if (local_b0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
    }
    return uVar11 & 0xffffffff00000000 | (ulong)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

