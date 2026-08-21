
/* v8::FinalizationGroup::Cleanup(v8::Local<v8::FinalizationGroup>) */

undefined8 v8::FinalizationGroup::Cleanup(ulong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  CanonicalHandleScope *pCVar4;
  ulong *puVar5;
  MicrotaskQueue *pMVar6;
  Isolate *pIVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  undefined8 uVar12;
  ulong uVar13;
  Logger *this;
  Isolate *pIVar14;
  long lVar15;
  undefined8 uVar16;
  Isolate *pIVar17;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b0;
  ulong *local_a8;
  char local_a0;
  Isolate local_9e;
  undefined **local_98;
  StackGuard *local_90;
  int local_78;
  long local_68;
  
  pIVar11 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar4 = *(CanonicalHandleScope **)((ulong)pIVar11 | 0x95b8);
  uVar13 = (ulong)pIVar11 | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar5 = (ulong *)internal::HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar13;
  }
  else {
    puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar4,uVar13);
  }
  if ((*(int *)(pIVar11 + 0x2c20) != *(int *)(pIVar11 + 0xa8)) &&
     (*(int *)(pIVar11 + 0x2c20) == *(int *)(pIVar11 + 0x188))) {
    return 0;
  }
  uVar16 = *(undefined8 *)(pIVar11 + 0x95a0);
  pIVar14 = pIVar11 + 0x95a8;
  lVar15 = *(long *)pIVar14;
  pIVar17 = pIVar11 + 0x95b0;
  *(int *)pIVar17 = *(int *)pIVar17 + 1;
  FUN_00ea94b8(&local_b0,pIVar11,puVar5);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar11 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x37c);
  }
  this = *(Logger **)(pIVar11 + 0x9558);
  uVar13 = internal::Logger::is_logging(this);
  if ((uVar13 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::FinalizationGroup::Cleanup");
  }
  uVar1 = *(undefined4 *)(pIVar11 + 0x2c60);
  *(undefined4 *)(pIVar11 + 0x2c60) = 5;
  pCVar4 = *(CanonicalHandleScope **)((ulong)pIVar11 | 0x95b8);
  uVar13 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xf);
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar5 == *(ulong **)pIVar14) {
      puVar5 = (ulong *)internal::HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar13;
  }
  else {
    puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup(pCVar4,uVar13);
  }
  *(uint *)(*param_1 + 0x23) = *(uint *)(*param_1 + 0x23) & 0xfffffffc;
  cVar3 = internal::JSFinalizationGroup::Cleanup(pIVar11,param_1,puVar5);
  if (cVar3 == '\0') {
    local_a0 = '\x01';
    *(long *)(local_b0 + 0x2c08) = local_68;
    if (local_68 == 0) {
      bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
    uVar12 = 0;
  }
  else {
    uVar12 = 0x101;
  }
  *(undefined4 *)(pIVar11 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 == (ulong *)0x0) {
    pIVar7 = local_b0 + 0xb7c0;
  }
  else {
    lVar8 = *(long *)(local_b0 + 0x95c0);
    lVar9 = *(long *)(lVar8 + 0x60) + -1;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar9 * 8);
    *(long *)(lVar8 + 0x60) = lVar9;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar10;
    uVar13 = *local_a8 & 0xffffffff00000000;
    pIVar7 = (Isolate *)((uVar13 | *(uint *)((uVar13 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
  }
  pMVar6 = *(MicrotaskQueue **)pIVar7;
  if (local_a0 == '\0') {
    *(long *)(local_b0 + 0x2c08) = local_68;
  }
  internal::Isolate::FireCallCompletedCallback(local_b0,pMVar6);
  local_b0[0xb828] = local_9e;
  local_98 = &PTR__InterruptsScope_01c984b0;
  if (local_78 != 2) {
    internal::StackGuard::PopInterruptsScope(local_90);
  }
  *(undefined8 *)(pIVar11 + 0x95a0) = uVar16;
  *(int *)pIVar17 = *(int *)pIVar17 + -1;
  if (*(long *)pIVar14 != lVar15) {
    *(long *)pIVar14 = lVar15;
    internal::HandleScope::DeleteExtensions(pIVar11);
  }
  return uVar12;
}

