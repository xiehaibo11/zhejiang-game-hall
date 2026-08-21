
/* v8::Object::SetPrivate(v8::Local<v8::Context>, v8::Local<v8::Private>, v8::Local<v8::Value>) */

undefined2 __thiscall
v8::Object::SetPrivate(Object *this,long param_2,ulong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  Logger *this_00;
  Isolate *pIVar9;
  long lVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  undefined4 local_138 [2];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulong local_120;
  ulong *local_118;
  undefined8 uStack_110;
  Object *local_108;
  undefined8 uStack_100;
  Object *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b8;
  long local_b0;
  char local_a8;
  Isolate local_a6;
  undefined **local_a0;
  StackGuard *local_98;
  int local_80;
  long local_70;
  
  pIVar8 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar8 + 0x2c20) == *(int *)(pIVar8 + 0xa8)) ||
     (*(int *)(pIVar8 + 0x2c20) != *(int *)(pIVar8 + 0x188))) {
    uVar11 = *(undefined8 *)(pIVar8 + 0x95a0);
    pIVar9 = pIVar8 + 0x95a8;
    lVar10 = *(long *)pIVar9;
    pIVar12 = pIVar8 + 0x95b0;
    *(int *)pIVar12 = *(int *)pIVar12 + 1;
    FUN_00eaadd8(&local_b8,pIVar8,param_2);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (RuntimeCallStats *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(pIVar8 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3aa);
    }
    this_00 = *(Logger **)(pIVar8 + 0x9558);
    uVar4 = internal::Logger::is_logging(this_00);
    if ((uVar4 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::Object::SetPrivate");
    }
    uVar1 = *(undefined4 *)(pIVar8 + 0x2c60);
    *(undefined4 *)(pIVar8 + 0x2c60) = 5;
    local_120 = *(ulong *)this & 0xffffffff00000000;
    if (*(short *)((local_120 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) == 0xa9) {
      local_120 = 0;
      local_118 = (ulong *)0x0;
      local_138[0] = CONCAT31(local_138[0]._1_3_,0x3e);
      local_130 = (undefined4)param_4;
      uStack_12c = (undefined4)((ulong)param_4 >> 0x20);
      uStack_128 = 0;
      uStack_124 = 0;
      uVar3 = internal::JSProxy::SetPrivateSymbol(pIVar8,this,param_3,local_138,0x100000001);
    }
    else {
      local_138[0] = 3;
      if ((*(short *)((local_120 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) &&
         (local_138[0] = 3, (*(byte *)(*param_3 + 7) & 1) != 0)) {
        local_138[0] = 0;
      }
      uStack_12c = 0;
      uStack_128 = 0xc0;
      if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) &
          0xffe0) == 0x20) {
        param_3 = (ulong *)internal::StringTable::LookupString(local_120,param_3);
      }
      uStack_110 = 0;
      uStack_100 = 0;
      local_e8 = 0xffffffffffffffff;
      uStack_f0 = 0xffffffffffffffff;
      local_118 = param_3;
      local_108 = this;
      local_f8 = this;
      internal::LookupIterator::Start<false>((LookupIterator *)local_138);
      lVar5 = internal::JSObject::DefineOwnPropertyIgnoreAttributes(local_138,param_4,2,1);
      if (lVar5 == 0) {
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
      else {
        uVar3 = 0x101;
      }
    }
    *(undefined4 *)(pIVar8 + 0x2c60) = uVar1;
    if (local_e0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (local_b0 != 0) {
      lVar5 = *(long *)(local_b8 + 0x95c0);
      lVar6 = *(long *)(lVar5 + 0x60) + -1;
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
      *(long *)(lVar5 + 0x60) = lVar6;
      *(undefined8 *)(local_b8 + 0x2bc8) = uVar7;
    }
    if (local_a8 == '\0') {
      *(long *)(local_b8 + 0x2c08) = local_70;
    }
    local_b8[0xb828] = local_a6;
    local_a0 = &PTR__InterruptsScope_01c984b0;
    if (local_80 != 2) {
      internal::StackGuard::PopInterruptsScope(local_98);
    }
    *(undefined8 *)(pIVar8 + 0x95a0) = uVar11;
    *(int *)pIVar12 = *(int *)pIVar12 + -1;
    if (*(long *)pIVar9 != lVar10) {
      *(long *)pIVar9 = lVar10;
      internal::HandleScope::DeleteExtensions(pIVar8);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

