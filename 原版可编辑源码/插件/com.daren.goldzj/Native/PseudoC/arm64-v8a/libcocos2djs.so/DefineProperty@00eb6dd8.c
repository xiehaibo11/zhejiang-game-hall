
/* v8::Object::DefineProperty(v8::Local<v8::Context>, v8::Local<v8::Name>, v8::PropertyDescriptor&)
    */

undefined2 __thiscall
v8::Object::DefineProperty(Object *this,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  MicrotaskQueue *pMVar4;
  Isolate *pIVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  Logger *this_00;
  Isolate *pIVar10;
  long lVar11;
  undefined8 uVar12;
  Isolate *pIVar13;
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
  undefined8 local_68;
  
  pIVar9 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar9 + 0x2c20) != *(int *)(pIVar9 + 0xa8)) &&
     (*(int *)(pIVar9 + 0x2c20) == *(int *)(pIVar9 + 0x188))) {
    return 0;
  }
  uVar12 = *(undefined8 *)(pIVar9 + 0x95a0);
  pIVar10 = pIVar9 + 0x95a8;
  lVar11 = *(long *)pIVar10;
  pIVar13 = pIVar9 + 0x95b0;
  *(int *)pIVar13 = *(int *)pIVar13 + 1;
  FUN_00ea94b8(&local_b0,pIVar9,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x392);
  }
  this_00 = *(Logger **)(pIVar9 + 0x9558);
  uVar3 = internal::Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::DefineOwnProperty");
  }
  uVar1 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  uVar2 = internal::JSReceiver::DefineOwnProperty(pIVar9,this,param_3,*param_4,0x100000001);
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_a8 == (ulong *)0x0) {
    pIVar5 = local_b0 + 0xb7c0;
  }
  else {
    lVar6 = *(long *)(local_b0 + 0x95c0);
    lVar7 = *(long *)(lVar6 + 0x60) + -1;
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x50) + lVar7 * 8);
    *(long *)(lVar6 + 0x60) = lVar7;
    *(undefined8 *)(local_b0 + 0x2bc8) = uVar8;
    uVar3 = *local_a8 & 0xffffffff00000000;
    pIVar5 = (Isolate *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*local_a8 - 1)) + 0x13)) + 0x423);
  }
  pMVar4 = *(MicrotaskQueue **)pIVar5;
  if (local_a0 == '\0') {
    *(undefined8 *)(local_b0 + 0x2c08) = local_68;
  }
  internal::Isolate::FireCallCompletedCallback(local_b0,pMVar4);
  local_b0[0xb828] = local_9e;
  local_98 = &PTR__InterruptsScope_01c984b0;
  if (local_78 != 2) {
    internal::StackGuard::PopInterruptsScope(local_90);
  }
  *(undefined8 *)(pIVar9 + 0x95a0) = uVar12;
  *(int *)pIVar13 = *(int *)pIVar13 + -1;
  if (*(long *)pIVar10 != lVar11) {
    *(long *)pIVar10 = lVar11;
    internal::HandleScope::DeleteExtensions(pIVar9);
  }
  return uVar2;
}

