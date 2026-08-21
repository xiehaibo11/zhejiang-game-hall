
undefined8 FUN_01560eec(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x11a);
  }
  if (DAT_01d46e88 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e88 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46e88;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46e88 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_FunctionGetSourceCode",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_FunctionGetSourceCode";
    local_98 = pbVar4;
    local_88 = uVar6;
  }
  iVar3 = *(int *)(param_3 + 0x95b0);
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar3 + 1;
  uVar9 = *param_2;
  if ((uVar9 & 1) != 0) {
    uVar10 = uVar9 & 0xffffffff00000000 | 7;
    if (0xa8 < *(ushort *)(uVar10 + *(uint *)(uVar9 - 1))) {
      if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x439) {
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xb);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = puVar1;
          if (puVar2 == puVar1) {
            puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar9;
        }
        else {
          v8::internal::CanonicalHandleScope::Lookup
                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
        }
        puVar8 = (undefined8 *)v8::internal::SharedFunctionInfo::GetSourceCode();
        uVar6 = *puVar8;
        *(ulong **)(param_3 + 0x95a0) = puVar1;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
          *(ulong **)(param_3 + 0x95a8) = puVar2;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_3 + 0xa0);
        *(ulong **)(param_3 + 0x95a0) = puVar1;
        *(int *)(param_3 + 0x95b0) = iVar3;
      }
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

