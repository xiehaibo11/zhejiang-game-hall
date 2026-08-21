
/* v8::Exception::RangeError(v8::Local<v8::String>) */

ulong * v8::Exception::RangeError(undefined8 param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  Logger *this;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pIVar3 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(pIVar3 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x3c3);
  }
  this = *(Logger **)(pIVar3 + 0x9558);
  uVar4 = internal::Logger::is_logging(this);
  if ((uVar4 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::RangeError::New");
  }
  uVar2 = *(undefined4 *)(pIVar3 + 0x2c60);
  *(undefined4 *)(pIVar3 + 0x2c60) = 5;
  puVar6 = *(ulong **)(pIVar3 + 0x95a0);
  puVar1 = *(ulong **)(pIVar3 + 0x95a8);
  *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
  uVar4 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1))
                                              + 0x13)) + 0x397);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar6;
    if (puVar1 == puVar6) {
      puVar5 = (ulong *)internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
  }
  puVar5 = (ulong *)internal::Factory::NewError((Factory *)pIVar3,puVar5,param_1);
  uVar4 = *puVar5;
  *(ulong **)(pIVar3 + 0x95a0) = puVar6;
  *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
  if (*(ulong **)(pIVar3 + 0x95a8) != puVar1) {
    *(ulong **)(pIVar3 + 0x95a8) = puVar1;
    internal::HandleScope::DeleteExtensions(pIVar3);
  }
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar6 = (ulong *)internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar4;
  }
  else {
    puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
  }
  *(undefined4 *)(pIVar3 + 0x2c60) = uVar2;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return puVar6;
}

