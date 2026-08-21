
/* v8::internal::Runtime_FunctionFirstExecution(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_FunctionFirstExecution(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  Logger *this;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_0155cfc8(param_1,param_2,param_3);
    return uVar9;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) != 0) &&
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x439)) {
    uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = puVar1;
      if (puVar2 == puVar1) {
        puVar7 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar9;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
    }
    this = *(Logger **)(param_3 + 0x9558);
    uVar9 = Logger::is_logging(this);
    if ((uVar9 & 1) != 0) {
      local_68 = *puVar7;
      uVar10 = local_68 & 0xffffffff00000000;
      uVar9 = uVar10 | *(uint *)(local_68 + 0xf);
      if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x5b) {
        uVar9 = uVar10 | *(uint *)(uVar9 + 0xb);
      }
      iVar3 = *(int *)(uVar9 + 0x1f);
      uVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_68);
      local_70 = *puVar7;
      uVar6 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_70);
      local_78 = *puVar7;
      uVar8 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_78);
      Logger::FunctionEvent((Logger *)0x0,this,"first-execution",iVar3 >> 1,uVar5,uVar6,uVar8);
    }
    local_68 = *param_2 & 0xffffffff00000000;
    local_68 = local_68 | *(uint *)((local_68 | *(uint *)(*param_2 + 0x13)) + 3);
    FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_68);
    uVar9 = *param_2;
    uVar4 = *(uint *)(uVar9 + 0x17);
    *(ulong **)(param_3 + 0x95a0) = puVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
      *(ulong **)(param_3 + 0x95a8) = puVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar9 & 0xffffffff00000000 | (ulong)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

