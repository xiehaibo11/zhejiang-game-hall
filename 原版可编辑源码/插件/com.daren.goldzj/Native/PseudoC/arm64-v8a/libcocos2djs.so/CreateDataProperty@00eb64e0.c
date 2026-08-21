
/* v8::Object::CreateDataProperty(v8::Local<v8::Context>, unsigned int, v8::Local<v8::Value>) */

ushort __thiscall
v8::Object::CreateDataProperty(Object *this,long param_2,uint param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  ulong uVar4;
  ulong *puVar5;
  MicrotaskQueue *pMVar6;
  Isolate *pIVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  Factory *this_00;
  Logger *this_01;
  Factory *pFVar11;
  long lVar12;
  undefined8 uVar13;
  Factory *pFVar14;
  undefined4 local_138 [3];
  undefined8 local_12c;
  Factory *local_120;
  ulong *local_118;
  undefined8 local_110;
  Object *pOStack_108;
  undefined8 local_100;
  Object *pOStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b8;
  ulong *local_b0;
  char local_a8;
  Isolate local_a6;
  undefined **local_a0;
  StackGuard *local_98;
  int local_80;
  long local_70;
  
  this_00 = (Factory *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) &&
     (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0x188))) {
    return 0;
  }
  uVar13 = *(undefined8 *)(this_00 + 0x95a0);
  pFVar11 = this_00 + 0x95a8;
  lVar12 = *(long *)pFVar11;
  pFVar14 = this_00 + 0x95b0;
  *(int *)pFVar14 = *(int *)pFVar14 + 1;
  FUN_00ea94b8(&local_b8,this_00,param_2);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x391);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_01);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::Object::CreateDataProperty");
  }
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  local_f0 = (ulong)param_3;
  local_138[0] = 1;
  local_118 = (ulong *)0x0;
  local_110 = 0;
  local_100 = 0;
  local_12c = 0xc000000000;
  uStack_e8 = 0xffffffffffffffff;
  local_120 = this_00;
  puVar5 = local_118;
  pOStack_108 = this;
  pOStack_f8 = this;
  if (((param_3 == 0xffffffff) &&
      (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
       != 0x41b)) &&
     (puVar5 = (ulong *)internal::Factory::SizeToString(this_00,0xffffffff,true),
     (*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 0xffe0) ==
     0x20)) {
    puVar5 = (ulong *)internal::StringTable::LookupString(this_00);
  }
  local_118 = puVar5;
  internal::LookupIterator::Start<true>((LookupIterator *)local_138);
  uVar3 = internal::JSReceiver::CreateDataProperty(local_138,param_4,0x100000001);
  if ((uVar3 & 0xff) == 0) {
    local_a8 = '\x01';
    *(long *)(local_b8 + 0x2c08) = local_70;
    if (local_70 == 0) {
      bVar2 = *(long *)(local_b8 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_b8,bVar2);
    uVar3 = 0;
  }
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  if (local_e0 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (local_b0 == (ulong *)0x0) {
    pIVar7 = local_b8 + 0xb7c0;
  }
  else {
    lVar8 = *(long *)(local_b8 + 0x95c0);
    lVar9 = *(long *)(lVar8 + 0x60) + -1;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar9 * 8);
    *(long *)(lVar8 + 0x60) = lVar9;
    *(undefined8 *)(local_b8 + 0x2bc8) = uVar10;
    uVar4 = *local_b0 & 0xffffffff00000000;
    pIVar7 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_b0 - 1)) + 0x13)) + 0x423);
  }
  pMVar6 = *(MicrotaskQueue **)pIVar7;
  if (local_a8 == '\0') {
    *(long *)(local_b8 + 0x2c08) = local_70;
  }
  internal::Isolate::FireCallCompletedCallback(local_b8,pMVar6);
  local_b8[0xb828] = local_a6;
  local_a0 = &PTR__InterruptsScope_01c984b0;
  if (local_80 != 2) {
    internal::StackGuard::PopInterruptsScope(local_98);
  }
  *(undefined8 *)(this_00 + 0x95a0) = uVar13;
  *(int *)pFVar14 = *(int *)pFVar14 + -1;
  if (*(long *)pFVar11 != lVar12) {
    *(long *)pFVar11 = lVar12;
    internal::HandleScope::DeleteExtensions((Isolate *)this_00);
  }
  return uVar3;
}

