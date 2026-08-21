
/* v8::Object::Has(v8::Local<v8::Context>, v8::Local<v8::Value>) */

ushort __thiscall v8::Object::Has(Object *this,long param_2,ulong *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  ulong uVar4;
  MicrotaskQueue *pMVar5;
  Isolate *pIVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  long lVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  Logger *this_00;
  Isolate *pIVar13;
  long lVar14;
  undefined8 uVar15;
  Isolate *pIVar16;
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
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  Object *pOStack_88;
  undefined8 local_80;
  Object *pOStack_78;
  ulong local_70;
  undefined8 uStack_68;
  
  pIVar12 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar12 + 0x2c20) != *(int *)(pIVar12 + 0xa8)) &&
     (*(int *)(pIVar12 + 0x2c20) == *(int *)(pIVar12 + 0x188))) {
    return 0;
  }
  uVar15 = *(undefined8 *)(pIVar12 + 0x95a0);
  pIVar13 = pIVar12 + 0x95a8;
  lVar14 = *(long *)pIVar13;
  pIVar16 = pIVar12 + 0x95b0;
  *(int *)pIVar16 = *(int *)pIVar16 + 1;
  FUN_00ea94b8(&local_108,pIVar12,param_2);
  local_110 = 0;
  uStack_128 = 0;
  local_130 = (RuntimeCallStats *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_130 = (RuntimeCallStats *)(*(long *)(pIVar12 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_130,(ulong)&local_130 | 8,0x3a0);
  }
  this_00 = *(Logger **)(pIVar12 + 0x9558);
  uVar4 = internal::Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Object::Has");
  }
  uVar1 = *(undefined4 *)(pIVar12 + 0x2c60);
  *(undefined4 *)(pIVar12 + 0x2c60) = 5;
  uVar4 = *param_3;
  if ((uVar4 & 1) == 0) {
    if ((int)uVar4 < 0) {
LAB_00eb9658:
      param_3 = (ulong *)internal::Object::ConvertToName(pIVar12,param_3);
      goto LAB_00eb9668;
    }
    dVar9 = (double)(uVar4 >> 1 & 0x7fffffff);
LAB_00eb95bc:
    local_70 = (ulong)dVar9 & 0xffffffff;
    local_a0 = (ulong)*(uint *)(this + 4) << 0x20;
    local_90 = 0;
    local_80 = 0;
    local_b8[0] = 3;
    local_ac = 0xc000000000;
    uStack_98 = 0;
    uStack_68 = 0xffffffffffffffff;
    pOStack_88 = this;
    pOStack_78 = this;
    internal::LookupIterator::Start<true>((LookupIterator *)local_b8);
LAB_00eb968c:
    uVar3 = internal::JSReceiver::HasProperty((LookupIterator *)local_b8);
    if ((uVar3 & 0xff) != 0) goto LAB_00eb96d4;
  }
  else {
    uVar7 = uVar4 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar4 - 1)) == 0x42) {
      dVar9 = *(double *)(uVar4 + 3) + 4503599627370496.0;
      if ((((ulong)dVar9 >> 0x20 == 0x43300000) && (SUB84(dVar9,0) != -1)) &&
         (*(double *)(uVar4 + 3) == (double)((ulong)dVar9 & 0xffffffff))) goto LAB_00eb95bc;
    }
    if (0x40 < *(ushort *)(uVar7 + *(uint *)(uVar4 - 1))) goto LAB_00eb9658;
LAB_00eb9668:
    if (param_3 != (ulong *)0x0) {
      internal::LookupIterator::PropertyOrElement
                ((LookupIterator *)local_b8,(ulong)*(uint *)(this + 4) << 0x20,this,param_3,this,3);
      goto LAB_00eb968c;
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
  uVar3 = 0;
LAB_00eb96d4:
  *(undefined4 *)(pIVar12 + 0x2c60) = uVar1;
  if (local_130 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_130,(RuntimeCallTimer *)((ulong)&local_130 | 8));
  }
  if (local_100 == (ulong *)0x0) {
    pIVar6 = local_108 + 0xb7c0;
  }
  else {
    lVar8 = *(long *)(local_108 + 0x95c0);
    lVar10 = *(long *)(lVar8 + 0x60) + -1;
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x50) + lVar10 * 8);
    *(long *)(lVar8 + 0x60) = lVar10;
    *(undefined8 *)(local_108 + 0x2bc8) = uVar11;
    uVar4 = *local_100 & 0xffffffff00000000;
    pIVar6 = (Isolate *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*local_100 - 1)) + 0x13)) + 0x423);
  }
  pMVar5 = *(MicrotaskQueue **)pIVar6;
  if (local_f8 == '\0') {
    *(long *)(local_108 + 0x2c08) = local_c0;
  }
  internal::Isolate::FireCallCompletedCallback(local_108,pMVar5);
  local_108[0xb828] = local_f6;
  local_f0 = &PTR__InterruptsScope_01c984b0;
  if (local_d0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_e8);
  }
  *(undefined8 *)(pIVar12 + 0x95a0) = uVar15;
  *(int *)pIVar16 = *(int *)pIVar16 + -1;
  if (*(long *)pIVar13 != lVar14) {
    *(long *)pIVar13 = lVar14;
    internal::HandleScope::DeleteExtensions(pIVar12);
  }
  return uVar3;
}

