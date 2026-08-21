
/* v8::Promise::Resolver::Resolve(v8::Local<v8::Context>, v8::Local<v8::Value>) */

undefined8 __thiscall v8::Promise::Resolver::Resolve(Resolver *this,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  MicrotaskQueue *pMVar6;
  Isolate *pIVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  undefined8 uVar11;
  Logger *this_00;
  Isolate *pIVar12;
  long lVar13;
  undefined8 uVar14;
  Isolate *pIVar15;
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
  undefined8 local_48;
  
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
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3be);
  }
  this_00 = *(Logger **)(pIVar10 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Promise_Resolver::Resolve");
  }
  uVar1 = *(undefined4 *)(pIVar10 + 0x2c60);
  *(undefined4 *)(pIVar10 + 0x2c60) = 5;
  local_48 = *(undefined8 *)this;
  iVar3 = internal::JSPromise::status((JSPromise *)&local_48);
  if ((iVar3 == 0) && (lVar5 = internal::JSPromise::Resolve(this,param_3), lVar5 == 0)) {
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
  else {
    uVar11 = 0x101;
  }
  *(undefined4 *)(pIVar10 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 == (ulong *)0x0) {
    pIVar7 = local_b0 + 0xb7c0;
  }
  else {
    lVar5 = *(long *)(local_b0 + 0x95c0);
    lVar8 = *(long *)(lVar5 + 0x60) + -1;
    uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar8 * 8);
    *(long *)(lVar5 + 0x60) = lVar8;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar9;
    uVar4 = *local_a8 & 0xffffffff00000000;
    pIVar7 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
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
  *(undefined8 *)(pIVar10 + 0x95a0) = uVar14;
  *(int *)pIVar15 = *(int *)pIVar15 + -1;
  if (*(long *)pIVar12 != lVar13) {
    *(long *)pIVar12 = lVar13;
    internal::HandleScope::DeleteExtensions(pIVar10);
  }
  return uVar11;
}

