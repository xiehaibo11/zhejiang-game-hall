
/* v8::Object::GetPropertyAttributes(v8::Local<v8::Context>, v8::Local<v8::Value>) */

ulong __thiscall v8::Object::GetPropertyAttributes(Object *this,long param_2,ulong *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  MicrotaskQueue *pMVar4;
  Isolate *pIVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  Logger *this_00;
  Isolate *pIVar11;
  long lVar12;
  undefined8 uVar13;
  Isolate *pIVar14;
  RuntimeCallStats *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  Isolate *local_108;
  ulong *local_100;
  char local_f8;
  Isolate local_f6;
  undefined **local_f0;
  StackGuard *local_e8;
  int local_d0;
  long local_c0;
  LookupIterator aLStack_b8 [88];
  
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
  FUN_00ea94b8(&local_108,pIVar10,param_2);
  local_110 = 0;
  uStack_128 = 0;
  local_130 = (RuntimeCallStats *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_130 = (RuntimeCallStats *)(*(long *)(pIVar10 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_130,(ulong)&local_130 | 8,0x39a);
  }
  this_00 = *(Logger **)(pIVar10 + 0x9558);
  uVar3 = internal::Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::GetPropertyAttributes");
  }
  uVar1 = *(undefined4 *)(pIVar10 + 0x2c60);
  *(undefined4 *)(pIVar10 + 0x2c60) = 5;
  uVar3 = *param_3;
  if ((uVar3 & 1) == 0) {
LAB_00eb7aa0:
    param_3 = (ulong *)internal::Object::ConvertToString(pIVar10,param_3);
LAB_00eb7ab0:
    if (param_3 != (ulong *)0x0) goto LAB_00eb7ab4;
  }
  else {
    uVar6 = uVar3 & 0xffffffff00000000 | 7;
    if (0x40 < *(ushort *)(uVar6 + *(uint *)(uVar3 - 1))) {
      if (0x3f < *(ushort *)(uVar6 + *(uint *)(uVar3 - 1))) goto LAB_00eb7aa0;
      goto LAB_00eb7ab0;
    }
LAB_00eb7ab4:
    internal::LookupIterator::PropertyOrElement
              (aLStack_b8,(ulong)*(uint *)(this + 4) << 0x20,this,param_3,this,3);
    uVar3 = internal::JSReceiver::GetPropertyAttributes(aLStack_b8);
    if ((uVar3 & 0xff) != 0) {
      uVar6 = uVar3 & 0xffffffff00000000 | 1;
      if ((uVar3 & 0xffffffff00000000) == 0x4000000000) {
        uVar6 = 1;
      }
      goto LAB_00eb7b30;
    }
  }
  local_f8 = '\x01';
  *(long *)(local_108 + 0x2c08) = local_c0;
  if (local_c0 == 0) {
    bVar2 = *(long *)(local_108 + 0x2bb8) == 0;
  }
  else {
    bVar2 = false;
  }
  internal::Isolate::OptionalRescheduleException(local_108,bVar2);
  uVar6 = 0;
LAB_00eb7b30:
  *(undefined4 *)(pIVar10 + 0x2c60) = uVar1;
  if (local_130 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_130,(RuntimeCallTimer *)((ulong)&local_130 | 8));
  }
  if (local_100 == (ulong *)0x0) {
    pIVar5 = local_108 + 0xb7c0;
  }
  else {
    lVar7 = *(long *)(local_108 + 0x95c0);
    lVar8 = *(long *)(lVar7 + 0x60) + -1;
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8);
    *(long *)(lVar7 + 0x60) = lVar8;
    *(undefined8 *)(local_108 + 0x2bc8) = uVar9;
    uVar3 = *local_100 & 0xffffffff00000000;
    pIVar5 = (Isolate *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*local_100 - 1)) + 0x13)) + 0x423);
  }
  pMVar4 = *(MicrotaskQueue **)pIVar5;
  if (local_f8 == '\0') {
    *(long *)(local_108 + 0x2c08) = local_c0;
  }
  internal::Isolate::FireCallCompletedCallback(local_108,pMVar4);
  local_108[0xb828] = local_f6;
  local_f0 = &PTR__InterruptsScope_01c984b0;
  if (local_d0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_e8);
  }
  *(undefined8 *)(pIVar10 + 0x95a0) = uVar13;
  *(int *)pIVar14 = *(int *)pIVar14 + -1;
  if (*(long *)pIVar11 != lVar12) {
    *(long *)pIVar11 = lVar12;
    internal::HandleScope::DeleteExtensions(pIVar10);
  }
  return uVar6;
}

