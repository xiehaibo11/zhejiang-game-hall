
/* v8::TryCatch::StackTrace(v8::Local<v8::Context>) const */

ulong * __thiscall v8::TryCatch::StackTrace(TryCatch *this,long param_2)

{
  undefined4 uVar1;
  Isolate *pIVar2;
  bool bVar3;
  ushort uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  Isolate *pIVar10;
  ulong uVar11;
  ulong uVar12;
  Logger *this_00;
  ulong uVar13;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  Isolate *local_118;
  long local_110;
  char local_108;
  Isolate local_106;
  undefined **local_100;
  StackGuard *local_f8;
  int local_e0;
  long local_d0;
  Isolate *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  ulong *local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  Isolate *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar12 = *(ulong *)(this + 0x10);
  if ((((uVar12 & 1) == 0) || ((int)uVar12 == *(int *)(*(long *)this + 0xa8))) ||
     (uVar11 = uVar12 & 0xffffffff00000000,
     *(ushort *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) < 0xaa)) {
    return (ulong *)0x0;
  }
  if (param_2 == 0) {
    pIVar10 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar10 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  }
  uVar13 = *(ulong *)(pIVar10 + 0xa8);
  if ((*(int *)(pIVar10 + 0x2c20) != (int)uVar13) &&
     (*(int *)(pIVar10 + 0x2c20) == *(int *)(pIVar10 + 0x188))) {
    return (ulong *)0x0;
  }
  local_b0 = *(ulong **)(pIVar10 + 0x95a0);
  if (local_b0 == *(ulong **)(pIVar10 + 0x95a8)) {
    local_b0 = (ulong *)internal::HandleScope::Extend(pIVar10);
  }
  *(ulong **)(pIVar10 + 0x95a0) = local_b0 + 1;
  *local_b0 = uVar13;
  HandleScope::Initialize((HandleScope *)&local_c8,(Isolate *)pIVar10);
  FUN_00eaadd8(&local_118,pIVar10,param_2);
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(pIVar10 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x3e2);
  }
  this_00 = *(Logger **)(pIVar10 + 0x9558);
  uVar13 = internal::Logger::is_logging(this_00);
  if ((uVar13 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::TryCatch::StackTrace");
  }
  uVar1 = *(undefined4 *)(pIVar10 + 0x2c60);
  *(undefined4 *)(pIVar10 + 0x2c60) = 5;
  pIVar5 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)internal::HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar12);
    uVar11 = (ulong)*(uint *)((long)puVar6 + 4) << 0x20;
  }
  pIVar5 = pIVar10 + 0x9e0;
  internal::LookupIterator::PropertyOrElement
            ((LookupIterator *)&local_a8,uVar11,puVar6,pIVar5,puVar6,3);
  uVar4 = internal::JSReceiver::HasProperty((LookupIterator *)&local_a8);
  if ((uVar4 & 0xff) == 0) {
LAB_00eacff0:
    local_108 = '\x01';
    *(long *)(local_118 + 0x2c08) = local_d0;
    if (local_d0 == 0) {
      bVar3 = *(long *)(local_118 + 0x2bb8) == 0;
    }
    else {
      bVar3 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_118,bVar3);
  }
  else if (0xff < uVar4) {
    uVar12 = *(ulong *)(pIVar10 + 0x9e0);
    local_a8 = 3;
    if ((*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x40) &&
       (local_a8 = 3, (*(byte *)(uVar12 + 7) & 1) != 0)) {
      local_a8 = 0;
    }
    local_9c = 0xc000000000;
    local_90 = pIVar10;
    if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
        0x20) {
      pIVar5 = (Isolate *)internal::StringTable::LookupString(pIVar10,pIVar5);
    }
    uStack_80 = 0;
    uStack_70 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_88 = pIVar5;
    local_78 = puVar6;
    local_68 = puVar6;
    internal::LookupIterator::Start<false>((LookupIterator *)&local_a8);
    if (local_a4 == 4) {
      pIVar5 = local_90 + 0xa0;
    }
    else {
      pIVar5 = (Isolate *)internal::Object::GetProperty((LookupIterator *)&local_a8,false);
      if (pIVar5 == (Isolate *)0x0) goto LAB_00eacff0;
    }
    puVar6 = local_b0;
    pIVar2 = local_c8;
    if (((*local_b0 & 1) == 0) || ((int)*local_b0 != *(int *)(local_c8 + 0xa8))) {
      lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar7 == 0) {
LAB_00ead12c:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar7 + 0xb738) == (code *)0x0) goto LAB_00ead12c;
      (**(code **)(lVar7 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar7 + 0xb6b9) = 1;
    }
    if (pIVar5 != (Isolate *)0x0) {
      *puVar6 = *(ulong *)pIVar5;
      goto LAB_00ead024;
    }
    *puVar6 = *(ulong *)(pIVar2 + 0xa0);
  }
  puVar6 = (ulong *)0x0;
LAB_00ead024:
  *(undefined4 *)(pIVar10 + 0x2c60) = uVar1;
  if (local_140 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  if (local_110 != 0) {
    lVar7 = *(long *)(local_118 + 0x95c0);
    lVar8 = *(long *)(lVar7 + 0x60) + -1;
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x50) + lVar8 * 8);
    *(long *)(lVar7 + 0x60) = lVar8;
    *(undefined8 *)(local_118 + 0x2bc8) = uVar9;
  }
  if (local_108 == '\0') {
    *(long *)(local_118 + 0x2c08) = local_d0;
  }
  local_118[0xb828] = local_106;
  local_100 = &PTR__InterruptsScope_01c984b0;
  if (local_e0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_f8);
  }
  *(undefined8 *)(local_c8 + 0x95a0) = uStack_c0;
  *(int *)(local_c8 + 0x95b0) = *(int *)(local_c8 + 0x95b0) + -1;
  if (*(long *)(local_c8 + 0x95a8) != local_b8) {
    *(long *)(local_c8 + 0x95a8) = local_b8;
    internal::HandleScope::DeleteExtensions(local_c8);
    return puVar6;
  }
  return puVar6;
}

