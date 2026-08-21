
/* v8::Object::Has(v8::Local<v8::Context>, unsigned int) */

ushort __thiscall v8::Object::Has(Object *this,long param_2,uint param_3)

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
  Isolate *pIVar11;
  Factory *this_00;
  Logger *this_01;
  Isolate *pIVar12;
  long lVar13;
  undefined8 uVar14;
  Isolate *pIVar15;
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
  undefined4 local_b8 [3];
  undefined8 local_ac;
  Factory *local_a0;
  ulong *local_98;
  undefined8 local_90;
  Object *pOStack_88;
  undefined8 local_80;
  Object *pOStack_78;
  ulong local_70;
  undefined8 uStack_68;
  
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
  FUN_00ea94b8(&local_108,pIVar11,param_2);
  local_110 = 0;
  uStack_128 = 0;
  local_130 = (RuntimeCallStats *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_130 = (RuntimeCallStats *)(*(long *)(pIVar11 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_130,(ulong)&local_130 | 8,0x3a0);
  }
  this_01 = *(Logger **)(pIVar11 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_01);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::Object::Has");
  }
  uVar1 = *(undefined4 *)(pIVar11 + 0x2c60);
  *(undefined4 *)(pIVar11 + 0x2c60) = 5;
  local_70 = (ulong)param_3;
  this_00 = (Factory *)(*(ulong *)this & 0xffffffff00000000);
  local_b8[0] = 3;
  local_90 = 0;
  local_80 = 0;
  local_ac = 0xc000000000;
  local_98 = (ulong *)0x0;
  uStack_68 = 0xffffffffffffffff;
  local_a0 = this_00;
  puVar5 = local_98;
  pOStack_88 = this;
  pOStack_78 = this;
  if (((param_3 == 0xffffffff) &&
      (*(short *)(((ulong)this_00 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) != 0x41b)) &&
     (puVar5 = (ulong *)internal::Factory::SizeToString(this_00,0xffffffff,true),
     (*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 0xffe0) ==
     0x20)) {
    puVar5 = (ulong *)internal::StringTable::LookupString(this_00);
  }
  local_98 = puVar5;
  internal::LookupIterator::Start<true>((LookupIterator *)local_b8);
  uVar3 = internal::JSReceiver::HasProperty((LookupIterator *)local_b8);
  if ((uVar3 & 0xff) == 0) {
    local_f8 = '\x01';
    *(long *)(local_108 + 0x2c08) = local_c0;
    if (local_c0 == 0) {
      bVar2 = *(long *)(local_108 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_108,bVar2);
    uVar3 = 0;
  }
  *(undefined4 *)(pIVar11 + 0x2c60) = uVar1;
  if (local_130 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_130,(RuntimeCallTimer *)((ulong)&local_130 | 8));
  }
  if (local_100 == (ulong *)0x0) {
    pIVar7 = local_108 + 0xb7c0;
  }
  else {
    lVar8 = *(long *)(local_108 + 0x95c0);
    lVar9 = *(long *)(lVar8 + 0x60) + -1;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar9 * 8);
    *(long *)(lVar8 + 0x60) = lVar9;
    *(undefined8 *)(local_108 + 0x2bc8) = uVar10;
    uVar4 = *local_100 & 0xffffffff00000000;
    pIVar7 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_100 - 1)) + 0x13)) + 0x423);
  }
  pMVar6 = *(MicrotaskQueue **)pIVar7;
  if (local_f8 == '\0') {
    *(long *)(local_108 + 0x2c08) = local_c0;
  }
  internal::Isolate::FireCallCompletedCallback(local_108,pMVar6);
  local_108[0xb828] = local_f6;
  local_f0 = &PTR__InterruptsScope_01c984b0;
  if (local_d0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_e8);
  }
  *(undefined8 *)(pIVar11 + 0x95a0) = uVar14;
  *(int *)pIVar15 = *(int *)pIVar15 + -1;
  if (*(long *)pIVar12 != lVar13) {
    *(long *)pIVar12 = lVar13;
    internal::HandleScope::DeleteExtensions(pIVar11);
  }
  return uVar3;
}

