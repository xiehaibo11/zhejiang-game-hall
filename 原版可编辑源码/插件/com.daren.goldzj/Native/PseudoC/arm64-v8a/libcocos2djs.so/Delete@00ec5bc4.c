
/* v8::Map::Delete(v8::Local<v8::Context>, v8::Local<v8::Value>) */

undefined8 __thiscall v8::Map::Delete(Map *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  MicrotaskQueue *pMVar5;
  Isolate *pIVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  undefined8 uVar11;
  Logger *this_00;
  Isolate *pIVar12;
  long lVar13;
  undefined8 uVar14;
  Isolate *pIVar15;
  undefined8 local_e8;
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
  
  pIVar10 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar10 + 0x2c20) != *(int *)(pIVar10 + 0xa8)) &&
     (*(int *)(pIVar10 + 0x2c20) == *(int *)(pIVar10 + 0x188))) {
    return 0;
  }
  uVar14 = *(undefined8 *)(pIVar10 + 0x95a0);
  pIVar12 = pIVar10 + 0x95a8;
  lVar13 = *(long *)pIVar12;
  pIVar15 = pIVar10 + 0x95b0;
  *(int *)pIVar15 = *(int *)pIVar15 + 1;
  FUN_00ea94b8(&local_b0,pIVar10,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar10 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x381);
  }
  this_00 = *(Logger **)(pIVar10 + 0x9558);
  uVar3 = internal::Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Map::Delete");
  }
  uVar1 = *(undefined4 *)(pIVar10 + 0x2c60);
  *(undefined4 *)(pIVar10 + 0x2c60) = 5;
  uVar3 = *(ulong *)(pIVar10 + 0x2bc8) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(pIVar10 + 0x2bc8) - 1))
                                              + 0x13)) + 0x373);
  local_e8 = param_3;
  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar4 == *(ulong **)pIVar12) {
      puVar4 = (ulong *)internal::HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar3);
  }
  puVar4 = (ulong *)internal::Execution::CallBuiltin(pIVar10,puVar4,this,1,&local_e8);
  if (puVar4 == (ulong *)0x0) {
    local_a0 = '\x01';
    *(long *)(local_b0 + 0x2c08) = local_68;
    if (local_68 == 0) {
      bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
    uVar11 = 0;
  }
  else if ((*puVar4 & 1) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0x101;
    if ((int)*puVar4 != *(int *)(pIVar10 + 0xb8)) {
      uVar11 = 1;
    }
  }
  *(undefined4 *)(pIVar10 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 == (ulong *)0x0) {
    pIVar6 = local_b0 + 0xb7c0;
  }
  else {
    lVar7 = *(long *)(local_b0 + 0x95c0);
    lVar8 = *(long *)(lVar7 + 0x60) + -1;
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8);
    *(long *)(lVar7 + 0x60) = lVar8;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar9;
    uVar3 = *local_a8 & 0xffffffff00000000;
    pIVar6 = (Isolate *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
  }
  pMVar5 = *(MicrotaskQueue **)pIVar6;
  if (local_a0 == '\0') {
    *(long *)(local_b0 + 0x2c08) = local_68;
  }
  internal::Isolate::FireCallCompletedCallback(local_b0,pMVar5);
  local_b0[0xb828] = local_9e;
  local_98 = &PTR__InterruptsScope_01c984b0;
  if (local_78 != 2) {
    internal::StackGuard::PopInterruptsScope(local_90);
  }
  *(undefined8 *)(pIVar10 + 0x95a0) = uVar14;
  *(int *)pIVar15 = *(int *)pIVar15 + -1;
  if (*(long *)pIVar12 != lVar13) {
    *(long *)pIVar12 = lVar13;
    internal::HandleScope::DeleteExtensions(pIVar10);
  }
  return uVar11;
}

