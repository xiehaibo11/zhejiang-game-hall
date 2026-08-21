
/* v8::Object::HasOwnProperty(v8::Local<v8::Context>, unsigned int) */

ushort __thiscall v8::Object::HasOwnProperty(Object *this,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  ulong uVar4;
  MicrotaskQueue *pMVar5;
  Isolate *pIVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  Logger *this_00;
  Isolate *pIVar11;
  long lVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
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
  uVar13 = *(undefined8 *)(pIVar10 + 0x95a0);
  pIVar11 = pIVar10 + 0x95a8;
  lVar12 = *(long *)pIVar11;
  pIVar14 = pIVar10 + 0x95b0;
  *(int *)pIVar14 = *(int *)pIVar14 + 1;
  FUN_00ea94b8(&local_b0,pIVar10,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar10 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3a1);
  }
  this_00 = *(Logger **)(pIVar10 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::HasOwnProperty");
  }
  uVar1 = *(undefined4 *)(pIVar10 + 0x2c60);
  *(undefined4 *)(pIVar10 + 0x2c60) = 5;
  uVar3 = internal::JSReceiver::HasOwnProperty(this,param_3);
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
    uVar4 = *local_a8 & 0xffffffff00000000;
    pIVar6 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
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
  *(undefined8 *)(pIVar10 + 0x95a0) = uVar13;
  *(int *)pIVar14 = *(int *)pIVar14 + -1;
  if (*(long *)pIVar11 != lVar12) {
    *(long *)pIVar11 = lVar12;
    internal::HandleScope::DeleteExtensions(pIVar10);
  }
  return uVar3;
}

