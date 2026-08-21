
undefined8 FUN_0155632c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  CanonicalHandleScope *pCVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xe2);
  }
  if (DAT_01d46da0 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46da0 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d46da0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46da0 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar5,"V8.Runtime_Runtime_ThrowNotSuperConstructor",0,0,0,0,0,0,
                       0,&local_70,0);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_70;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_ThrowNotSuperConstructor";
    local_b8 = pbVar5;
    local_a8 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar15 = param_2[-1];
  if (((uVar15 & 1) == 0) ||
     (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSFunction()");
  }
  uVar15 = *param_2;
  if ((uVar15 & 1) == 0) {
LAB_0155647c:
    pIVar8 = (Isolate *)v8::internal::Object::NoSideEffectsToString(param_3,param_2);
  }
  else {
    uVar16 = uVar15 & 0xffffffff00000000;
    uVar9 = uVar16 | 7;
    if (*(short *)(uVar9 + *(uint *)(uVar15 - 1)) == 0x439) {
      uVar15 = uVar16 | *(uint *)(uVar15 + 0xb);
      uVar3 = *(uint *)(uVar15 + 7);
      plVar6 = (long *)(uVar16 | uVar3);
      if (((uVar3 & 1) == 0) || (*(short *)(uVar9 + *(uint *)((long)plVar6 - 1)) != 0x83)) {
        if (uVar3 != 0) {
          if ((uVar3 & 1) != 0) goto LAB_015566d0;
          goto LAB_01556710;
        }
LAB_0155670c:
        plVar6 = *(long **)(uVar16 + 200);
LAB_01556710:
        pCVar11 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      }
      else {
        local_70 = plVar6;
        uVar10 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_70);
        if ((uVar10 & 1) == 0) goto LAB_0155670c;
        uVar3 = *(uint *)(uVar15 + 7);
        plVar6 = (long *)(uVar16 | uVar3);
        if ((uVar3 & 1) == 0) goto LAB_01556710;
LAB_015566d0:
        if (*(short *)(uVar9 + *(uint *)((long)plVar6 - 1)) != 0x83) goto LAB_01556710;
        local_70 = plVar6;
        uVar15 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_70);
        if ((uVar15 & 1) == 0) goto LAB_0155670c;
        local_70 = plVar6;
        plVar6 = (long *)v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_70);
        pCVar11 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      }
      if (pCVar11 == (CanonicalHandleScope *)0x0) {
        pIVar8 = *(Isolate **)(param_3 + 0x95a0);
        if (pIVar8 == *(Isolate **)(param_3 + 0x95a8)) {
          pIVar8 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
        }
        *(Isolate **)(param_3 + 0x95a0) = pIVar8 + 8;
        *(long **)pIVar8 = plVar6;
      }
      else {
        pIVar8 = (Isolate *)v8::internal::CanonicalHandleScope::Lookup(pCVar11,(ulong)plVar6);
      }
    }
    else {
      if (*(short *)(uVar9 + *(uint *)(uVar15 - 1)) != 0x43) goto LAB_0155647c;
      pIVar8 = param_3 + 0x878;
    }
  }
  uVar15 = param_2[-1] & 0xffffffff00000000;
  uVar16 = uVar15 | *(uint *)(param_2[-1] + 0xb);
  uVar3 = *(uint *)(uVar16 + 7);
  pIVar1 = param_3 + 0x878;
  if (*(int *)(*(ulong *)pIVar8 + 7) != 0) {
    pIVar1 = pIVar8;
  }
  plVar6 = (long *)(uVar15 | uVar3);
  if (((uVar3 & 1) == 0) || (*(short *)((uVar15 | 7) + (ulong)*(uint *)((long)plVar6 - 1)) != 0x83))
  {
    if (uVar3 != 0) goto joined_r0x015564f8;
LAB_0155659c:
    plVar6 = *(long **)(uVar15 + 200);
  }
  else {
    local_70 = plVar6;
    uVar9 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_70);
    if ((uVar9 & 1) == 0) goto LAB_0155659c;
    uVar3 = *(uint *)(uVar16 + 7);
    plVar6 = (long *)(uVar15 | uVar3);
joined_r0x015564f8:
    if (((uVar3 & 1) != 0) &&
       (*(short *)((uVar15 | 7) + (ulong)*(uint *)((long)plVar6 - 1)) == 0x83)) {
      local_70 = plVar6;
      uVar16 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_70);
      if ((uVar16 & 1) != 0) {
        local_70 = plVar6;
        plVar6 = (long *)v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_70);
        pCVar11 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
        goto joined_r0x015565a4;
      }
      goto LAB_0155659c;
    }
  }
  pCVar11 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
joined_r0x015565a4:
  if (pCVar11 == (CanonicalHandleScope *)0x0) {
    puVar12 = *(ulong **)(param_3 + 0x95a0);
    if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
      puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar12 + 1;
    *puVar12 = (ulong)plVar6;
    iVar4 = *(int *)((long)plVar6 + 7);
  }
  else {
    puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar11,(ulong)plVar6);
    iVar4 = *(int *)(*puVar12 + 7);
  }
  if (iVar4 == 0) {
    uVar14 = 0x65;
    puVar12 = (ulong *)0x0;
  }
  else {
    uVar14 = 100;
  }
  puVar13 = (undefined8 *)
            v8::internal::Factory::NewTypeError((Factory *)param_3,uVar14,pIVar1,puVar12,0);
  uVar14 = v8::internal::Isolate::Throw(param_3,*puVar13,0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar14;
}

