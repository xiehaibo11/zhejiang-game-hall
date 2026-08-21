
/* v8::Object::Set(v8::Local<v8::Context>, v8::Local<v8::Value>, v8::Local<v8::Value>) */

undefined8 __thiscall
v8::Object::Set(Object *this,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  MicrotaskQueue *pMVar5;
  Isolate *pIVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
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
  
  pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar9 + 0x2c20) != *(int *)(pIVar9 + 0xa8)) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    return 0;
  }
  uVar13 = *(undefined8 *)(pIVar9 + 0x95a0);
  pIVar11 = pIVar9 + 0x95a8;
  lVar12 = *(long *)pIVar11;
  pIVar14 = pIVar9 + 0x95b0;
  *(int *)pIVar14 = *(int *)pIVar14 + 1;
  FUN_00ea94b8(&local_b0,pIVar9,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3a7);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar3 = internal::Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::Set");
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  lVar4 = internal::Runtime::SetObjectProperty(pIVar9,this,param_3,param_4,0,0x100000001);
  if (lVar4 == 0) {
    local_a0 = '\x01';
    *(long *)(local_b0 + 0x2c08) = local_68;
    if (local_68 == 0) {
      bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
    uVar10 = 0;
  }
  else {
    uVar10 = 0x101;
  }
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 == (ulong *)0x0) {
    pIVar6 = local_b0 + 0xb7c0;
  }
  else {
    lVar4 = *(long *)(local_b0 + 0x95c0);
    lVar7 = *(long *)(lVar4 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar7 * 8);
    *(long *)(lVar4 + 0x60) = lVar7;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar8;
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
  *(undefined8 *)(pIVar9 + 0x95a0) = uVar13;
  *(int *)pIVar14 = *(int *)pIVar14 + -1;
  if (*(long *)pIVar11 != lVar12) {
    *(long *)pIVar11 = lVar12;
    internal::HandleScope::DeleteExtensions(pIVar9);
  }
  return uVar10;
}

