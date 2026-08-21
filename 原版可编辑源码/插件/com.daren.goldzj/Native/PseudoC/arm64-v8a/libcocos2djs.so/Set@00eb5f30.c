
/* v8::Object::Set(v8::Local<v8::Context>, unsigned int, v8::Local<v8::Value>) */

undefined8 __thiscall v8::Object::Set(Object *this,long param_2,uint param_3,long param_4)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  ulong *puVar5;
  MicrotaskQueue *pMVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  Factory *this_00;
  undefined8 uVar12;
  Logger *this_01;
  Factory *pFVar13;
  long lVar14;
  Factory *pFVar15;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  Isolate *local_110;
  ulong *local_108;
  char local_100;
  Isolate local_fe;
  undefined **local_f8;
  StackGuard *local_f0;
  int local_d8;
  long local_c8;
  undefined4 local_c0 [3];
  undefined8 local_b4;
  Factory *local_a8;
  ulong *local_a0;
  undefined8 local_98;
  Object *pOStack_90;
  undefined8 local_88;
  Object *pOStack_80;
  ulong local_78;
  undefined8 uStack_70;
  
  this_00 = (Factory *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) &&
     (*(int *)(this_00 + 0x2c20) == *(int *)(this_00 + 0x188))) {
    return 0;
  }
  uVar7 = *(undefined8 *)(this_00 + 0x95a0);
  pFVar13 = this_00 + 0x95a8;
  lVar14 = *(long *)pFVar13;
  pFVar15 = this_00 + 0x95b0;
  *(int *)pFVar15 = *(int *)pFVar15 + 1;
  FUN_00ea94b8(&local_110,this_00,param_2);
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(this_00 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x3a7);
  }
  this_01 = *(Logger **)(this_00 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_01);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_01,"v8::Object::Set");
  }
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  uVar4 = (ulong)param_3;
  if (((*(ulong *)this & 1) == 0) ||
     (pOStack_80 = this,
     *(ushort *)(((ulong)this_00 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) < 0xa9)) {
    pOStack_80 = (Object *)internal::LookupIterator::GetRootForNonJSReceiver(this_00,this,uVar4);
  }
  local_a0 = (ulong *)0x0;
  local_98 = 0;
  local_88 = 0;
  local_c0[0] = 3;
  local_b4 = 0xc000000000;
  uStack_70 = 0xffffffffffffffff;
  local_a8 = this_00;
  puVar5 = local_a0;
  pOStack_90 = this;
  local_78 = uVar4;
  if (((param_3 == 0xffffffff) &&
      (*(short *)((*(ulong *)pOStack_80 & 0xffffffff00000000 | 7) +
                 (ulong)*(uint *)(*(ulong *)pOStack_80 - 1)) != 0x41b)) &&
     (puVar5 = (ulong *)internal::Factory::SizeToString(this_00,0xffffffff,true),
     (*(ushort *)((*puVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar5 - 1)) & 0xffe0) ==
     0x20)) {
    puVar5 = (ulong *)internal::StringTable::LookupString(this_00);
  }
  local_a0 = puVar5;
  internal::LookupIterator::Start<true>((LookupIterator *)local_c0);
  cVar3 = internal::Object::SetProperty(local_c0,param_4,0,0x100000001);
  if ((param_4 == 0) || (cVar3 == '\0')) {
    local_100 = '\x01';
    *(long *)(local_110 + 0x2c08) = local_c8;
    if (local_c8 == 0) {
      bVar2 = *(long *)(local_110 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_110,bVar2);
    uVar12 = 0;
  }
  else {
    uVar12 = 0x101;
  }
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  if (local_140 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  if (local_108 == (ulong *)0x0) {
    pIVar8 = local_110 + 0xb7c0;
  }
  else {
    lVar9 = *(long *)(local_110 + 0x95c0);
    lVar10 = *(long *)(lVar9 + 0x60) + -1;
    uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + lVar10 * 8);
    *(long *)(lVar9 + 0x60) = lVar10;
    *(undefined8 *)(local_110 + 0x2bc8) = uVar11;
    uVar4 = *local_108 & 0xffffffff00000000;
    pIVar8 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_108 - 1)) + 0x13)) + 0x423);
  }
  pMVar6 = *(MicrotaskQueue **)pIVar8;
  if (local_100 == '\0') {
    *(long *)(local_110 + 0x2c08) = local_c8;
  }
  internal::Isolate::FireCallCompletedCallback(local_110,pMVar6);
  local_110[0xb828] = local_fe;
  local_f8 = &PTR__InterruptsScope_01c984b0;
  if (local_d8 != 2) {
    internal::StackGuard::PopInterruptsScope(local_f0);
  }
  *(undefined8 *)(this_00 + 0x95a0) = uVar7;
  *(int *)pFVar15 = *(int *)pFVar15 + -1;
  if (*(long *)pFVar13 != lVar14) {
    *(long *)pFVar13 = lVar14;
    internal::HandleScope::DeleteExtensions((Isolate *)this_00);
  }
  return uVar12;
}

