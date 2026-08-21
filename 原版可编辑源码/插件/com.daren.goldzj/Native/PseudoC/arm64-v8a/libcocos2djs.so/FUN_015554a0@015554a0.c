
undefined8 FUN_015554a0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  CanonicalHandleScope *this;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0xe1);
  }
  if (DAT_01d46d80 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46d80 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46d80;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46d80 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_ThrowConstructorNonCallableError",0,0,
                       0,0,0,0,0,&local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ThrowConstructorNonCallableError";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if ((uVar10 & 1) == 0) {
LAB_01555790:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar11 = uVar10 & 0xffffffff00000000;
  uVar12 = uVar11 | 7;
  if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x439) goto LAB_01555790;
  uVar10 = uVar11 | *(uint *)(uVar10 + 0xb);
  uVar2 = *(uint *)(uVar10 + 7);
  plVar4 = (long *)(uVar11 | uVar2);
  if (((uVar2 & 1) == 0) || (*(short *)(uVar12 + *(uint *)((long)plVar4 - 1)) != 0x83)) {
    if (uVar2 != 0) goto joined_r0x01555634;
LAB_01555674:
    plVar4 = *(long **)(uVar11 + 200);
  }
  else {
    local_60 = plVar4;
    uVar6 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_60);
    if ((uVar6 & 1) == 0) goto LAB_01555674;
    uVar2 = *(uint *)(uVar10 + 7);
    plVar4 = (long *)(uVar11 | uVar2);
joined_r0x01555634:
    if (((uVar2 & 1) != 0) && (*(short *)(uVar12 + *(uint *)((long)plVar4 - 1)) == 0x83)) {
      local_60 = plVar4;
      uVar10 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_60);
      if ((uVar10 & 1) != 0) {
        local_60 = plVar4;
        plVar4 = (long *)v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_60);
        this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
        goto joined_r0x0155567c;
      }
      goto LAB_01555674;
    }
  }
  this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
joined_r0x0155567c:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_3 + 0x95a0);
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = (ulong)plVar4;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,(ulong)plVar4);
  }
  puVar8 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x26,puVar7,0,0);
  uVar9 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar9;
}

