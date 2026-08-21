
undefined8 FUN_011c1994(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x100);
  }
  if (DAT_01d3f990 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f990 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3f990;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d3f990 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_DebugGetLoadedScriptIds",0,0,0,0,0,0,0
                       ,&local_a8,0);
    plVar4 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_DebugGetLoadedScriptIds";
    local_e8 = pbVar3;
    local_d8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::DebugScope::DebugScope((DebugScope *)&local_a8,*(Debug **)(param_3 + 0xb6c8));
  puVar6 = (ulong *)v8::internal::Debug::GetLoadedScripts(*(Debug **)(param_3 + 0xb6c8));
  v8::internal::DebugScope::~DebugScope((DebugScope *)&local_a8);
  uVar9 = *puVar6;
  if (*(int *)(uVar9 + 3) < 2) {
    iVar1 = *(int *)(uVar9 + 3) >> 1;
  }
  else {
    iVar12 = 0;
    lVar13 = 0;
    do {
      lVar10 = (long)iVar12;
      uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(lVar10 + 7 + uVar9);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_3 + 0x95a0);
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar9;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
        uVar9 = *puVar7;
      }
      lVar13 = lVar13 + 1;
      iVar12 = iVar12 + 4;
      *(uint *)(*puVar6 + lVar10 + 7) = *(uint *)(uVar9 + 0x1f) & 0xfffffffe;
      uVar9 = *puVar6;
      iVar1 = *(int *)(uVar9 + 3) >> 1;
    } while (lVar13 < iVar1);
  }
  puVar8 = (undefined8 *)v8::internal::Factory::NewJSArrayWithElements(param_3,puVar6,3,iVar1,0);
  uVar11 = *puVar8;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  return uVar11;
}

