
/* v8::Object::DefineOwnProperty(v8::Local<v8::Context>, v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyAttribute) */

undefined2 __thiscall
v8::Object::DefineOwnProperty
          (Object *this,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  ulong uVar4;
  MicrotaskQueue *pMVar5;
  Isolate *pIVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  byte bVar11;
  Isolate *pIVar12;
  Logger *pLVar13;
  long lVar14;
  undefined8 uVar15;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  Isolate *local_d8;
  ulong *local_d0;
  char local_c8;
  Isolate local_c6;
  undefined **local_c0;
  StackGuard *local_b8;
  int local_a0;
  undefined8 local_90;
  byte local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar9 = 0x30;
  if ((param_5 & 1) != 0) {
    bVar9 = 0x20;
  }
  bVar11 = 0xc;
  if ((param_5 & 4) != 0) {
    bVar11 = 8;
  }
  local_88[0] = (bVar9 | (byte)(param_5 >> 1) & 1 | bVar11) ^ 3;
  local_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  pIVar12 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (*(int *)(pIVar12 + 0x2c20) == *(int *)(pIVar12 + 0xa8)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(pIVar12 + 0x2c20) == *(int *)(pIVar12 + 0x188);
  }
  local_80 = param_4;
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      != 0xa9) {
    if (bVar2) {
      return 0;
    }
    uVar15 = *(undefined8 *)(pIVar12 + 0x95a0);
    lVar14 = *(long *)(pIVar12 + 0x95a8);
    *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
    FUN_00eaadd8(&local_d8,pIVar12,param_2);
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = (RuntimeCallStats *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_100 = (RuntimeCallStats *)(*(long *)(pIVar12 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x392);
    }
    pLVar13 = *(Logger **)(pIVar12 + 0x9558);
    uVar4 = internal::Logger::is_logging(pLVar13);
    if ((uVar4 & 1) != 0) {
      internal::Logger::ApiEntryCall(pLVar13,"v8::Object::DefineOwnProperty");
    }
    uVar1 = *(undefined4 *)(pIVar12 + 0x2c60);
    *(undefined4 *)(pIVar12 + 0x2c60) = 5;
    uVar3 = internal::JSReceiver::DefineOwnProperty(pIVar12,this,param_3,local_88,0x100000001);
    *(undefined4 *)(pIVar12 + 0x2c60) = uVar1;
    if (local_100 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
    }
    if (local_d0 != (ulong *)0x0) {
      lVar7 = *(long *)(local_d8 + 0x95c0);
      lVar8 = *(long *)(lVar7 + 0x60) + -1;
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8);
      *(long *)(lVar7 + 0x60) = lVar8;
      *(undefined8 *)(local_d8 + 0x2bc8) = uVar10;
    }
    if (local_c8 == '\0') {
      *(undefined8 *)(local_d8 + 0x2c08) = local_90;
    }
    goto LAB_00eb6d5c;
  }
  if (bVar2) {
    return 0;
  }
  uVar15 = *(undefined8 *)(pIVar12 + 0x95a0);
  lVar14 = *(long *)(pIVar12 + 0x95a8);
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + 1;
  FUN_00ea94b8(&local_d8,pIVar12,param_2);
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(pIVar12 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x392);
  }
  pLVar13 = *(Logger **)(pIVar12 + 0x9558);
  uVar4 = internal::Logger::is_logging(pLVar13);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(pLVar13,"v8::Object::DefineOwnProperty");
  }
  uVar1 = *(undefined4 *)(pIVar12 + 0x2c60);
  *(undefined4 *)(pIVar12 + 0x2c60) = 5;
  uVar3 = internal::JSReceiver::DefineOwnProperty(pIVar12,this,param_3,local_88,0x100000001);
  *(undefined4 *)(pIVar12 + 0x2c60) = uVar1;
  if (local_100 == (RuntimeCallStats *)0x0) {
    if (local_d0 != (ulong *)0x0) goto LAB_00eb6c68;
LAB_00eb6d34:
    pIVar6 = local_d8 + 0xb7c0;
  }
  else {
    internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
    if (local_d0 == (ulong *)0x0) goto LAB_00eb6d34;
LAB_00eb6c68:
    lVar7 = *(long *)(local_d8 + 0x95c0);
    lVar8 = *(long *)(lVar7 + 0x60) + -1;
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8);
    *(long *)(lVar7 + 0x60) = lVar8;
    *(undefined8 *)(local_d8 + 0x2bc8) = uVar10;
    uVar4 = *local_d0 & 0xffffffff00000000;
    pIVar6 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_d0 - 1)) + 0x13)) + 0x423);
  }
  pMVar5 = *(MicrotaskQueue **)pIVar6;
  if (local_c8 == '\0') {
    *(undefined8 *)(local_d8 + 0x2c08) = local_90;
  }
  internal::Isolate::FireCallCompletedCallback(local_d8,pMVar5);
LAB_00eb6d5c:
  local_d8[0xb828] = local_c6;
  local_c0 = &PTR__InterruptsScope_01c984b0;
  if (local_a0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_b8);
  }
  *(undefined8 *)(pIVar12 + 0x95a0) = uVar15;
  *(int *)(pIVar12 + 0x95b0) = *(int *)(pIVar12 + 0x95b0) + -1;
  if (*(long *)(pIVar12 + 0x95a8) != lVar14) {
    *(long *)(pIVar12 + 0x95a8) = lVar14;
    internal::HandleScope::DeleteExtensions(pIVar12);
  }
  return uVar3;
}

