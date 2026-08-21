
/* v8::Object::SetIntegrityLevel(v8::Local<v8::Context>, v8::IntegrityLevel) */

ushort __thiscall v8::Object::SetIntegrityLevel(Object *this,long param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  ulong uVar4;
  MicrotaskQueue *pMVar5;
  undefined4 uVar6;
  Isolate *pIVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
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
  
  pIVar11 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar11 + 0x2c20) != *(int *)(pIVar11 + 0xa8)) &&
     (*(int *)(pIVar11 + 0x2c20) == *(int *)(pIVar11 + 0x188))) {
    return 0;
  }
  uVar14 = *(undefined8 *)(pIVar11 + 0x95a0);
  pIVar12 = pIVar11 + 0x95a8;
  lVar13 = *(long *)pIVar12;
  pIVar15 = pIVar11 + 0x95b0;
  *(int *)pIVar15 = *(int *)pIVar15 + 1;
  FUN_00ea94b8(&local_b0,pIVar11,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar11 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3a9);
  }
  this_00 = *(Logger **)(pIVar11 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::SetIntegrityLevel");
  }
  uVar1 = *(undefined4 *)(pIVar11 + 0x2c60);
  *(undefined4 *)(pIVar11 + 0x2c60) = 5;
  uVar6 = 4;
  if (param_3 == 0) {
    uVar6 = 5;
  }
  uVar3 = internal::JSReceiver::SetIntegrityLevel(this,uVar6,0);
  if ((uVar3 & 0xff) == 0) {
    local_a0 = '\x01';
    *(long *)(local_b0 + 0x2c08) = local_68;
    if (local_68 == 0) {
      bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
    uVar3 = 0;
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
    uVar4 = *local_a8 & 0xffffffff00000000;
    pIVar7 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
  }
  pMVar5 = *(MicrotaskQueue **)pIVar7;
  if (local_a0 == '\0') {
    *(long *)(local_b0 + 0x2c08) = local_68;
  }
  internal::Isolate::FireCallCompletedCallback(local_b0,pMVar5);
  local_b0[0xb828] = local_9e;
  local_98 = &PTR__InterruptsScope_01c984b0;
  if (local_78 != 2) {
    internal::StackGuard::PopInterruptsScope(local_90);
  }
  *(undefined8 *)(pIVar11 + 0x95a0) = uVar14;
  *(int *)pIVar15 = *(int *)pIVar15 + -1;
  if (*(long *)pIVar12 != lVar13) {
    *(long *)pIVar12 = lVar13;
    internal::HandleScope::DeleteExtensions(pIVar11);
  }
  return uVar3;
}

