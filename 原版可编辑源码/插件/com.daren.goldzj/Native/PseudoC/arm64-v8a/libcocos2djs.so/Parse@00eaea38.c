
/* v8::JSON::Parse(v8::Local<v8::Context>, v8::Local<v8::String>) */

ulong * v8::JSON::Parse(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  Logger *this;
  ulong uVar9;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  Isolate *local_f8;
  long local_f0;
  char local_e8;
  Isolate local_e6;
  undefined **local_e0;
  StackGuard *local_d8;
  int local_c0;
  long local_b0;
  Isolate *local_a8;
  undefined8 uStack_a0;
  long local_98;
  ulong *local_90;
  JsonParser<unsigned_char> aJStack_88 [72];
  
  if (param_1 == 0) {
    pIVar7 = (Isolate *)base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  }
  else {
    pIVar7 = (Isolate *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  }
  uVar9 = *(ulong *)(pIVar7 + 0xa8);
  if ((*(int *)(pIVar7 + 0x2c20) != (int)uVar9) &&
     (*(int *)(pIVar7 + 0x2c20) == *(int *)(pIVar7 + 0x188))) {
    return (ulong *)0x0;
  }
  local_90 = *(ulong **)(pIVar7 + 0x95a0);
  if (local_90 == *(ulong **)(pIVar7 + 0x95a8)) {
    local_90 = (ulong *)internal::HandleScope::Extend(pIVar7);
  }
  *(ulong **)(pIVar7 + 0x95a0) = local_90 + 1;
  *local_90 = uVar9;
  HandleScope::Initialize((HandleScope *)&local_a8,(Isolate *)pIVar7);
  FUN_00eaadd8(&local_f8,pIVar7,param_1);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_120 = (RuntimeCallStats *)(*(long *)(pIVar7 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0x37d);
  }
  this = *(Logger **)(pIVar7 + 0x9558);
  uVar9 = internal::Logger::is_logging(this);
  if ((uVar9 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::JSON::Parse");
  }
  uVar1 = *(undefined4 *)(pIVar7 + 0x2c60);
  *(undefined4 *)(pIVar7 + 0x2c60) = 5;
  puVar3 = (ulong *)internal::String::Flatten(pIVar7,param_2,0);
  if ((*(byte *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) >> 3 & 1) == 0)
  {
    internal::JsonParser<unsigned_short>::JsonParser();
    puVar3 = (ulong *)internal::JsonParser<unsigned_short>::ParseJson
                                ((JsonParser<unsigned_short> *)aJStack_88);
    internal::JsonParser<unsigned_short>::~JsonParser((JsonParser<unsigned_short> *)aJStack_88);
  }
  else {
    internal::JsonParser<unsigned_char>::JsonParser(aJStack_88,pIVar7,puVar3);
    puVar3 = (ulong *)internal::JsonParser<unsigned_char>::ParseJson(aJStack_88);
    internal::JsonParser<unsigned_char>::~JsonParser(aJStack_88);
  }
  if ((puVar3 == (ulong *)0x0) ||
     (((uVar9 = *(ulong *)(pIVar7 + 0xa0), (uVar9 & 1) != 0 &&
       ((*(byte *)((uVar9 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar9 - 1)) >> 1 & 1) != 0))
      && (puVar3 = (ulong *)internal::JsonParseInternalizer::Internalize
                                      (pIVar7,puVar3,pIVar7 + 0xa0), puVar3 == (ulong *)0x0)))) {
    local_e8 = '\x01';
    *(long *)(local_f8 + 0x2c08) = local_b0;
    if (local_b0 == 0) {
      bVar2 = *(long *)(local_f8 + 0x2bb8) == 0;
    }
    else {
      bVar2 = false;
    }
    internal::Isolate::OptionalRescheduleException(local_f8,bVar2);
    puVar8 = (ulong *)0x0;
  }
  else {
    puVar8 = local_90;
    if (((*local_90 & 1) == 0) || ((int)*local_90 != *(int *)(local_a8 + 0xa8))) {
      lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar4 == 0) {
LAB_00eaed84:
        base::OS::PrintError
                  ("\n#\n# Fatal error in %s\n# %s\n#\n\n","EscapableHandleScope::Escape",
                   "Escape value set twice");
                    /* WARNING: Subroutine does not return */
        base::OS::Abort();
      }
      if (*(code **)(lVar4 + 0xb738) == (code *)0x0) goto LAB_00eaed84;
      (**(code **)(lVar4 + 0xb738))("EscapableHandleScope::Escape","Escape value set twice");
      *(undefined1 *)(lVar4 + 0xb6b9) = 1;
    }
    *puVar8 = *puVar3;
  }
  *(undefined4 *)(pIVar7 + 0x2c60) = uVar1;
  if (local_120 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
  }
  if (local_f0 != 0) {
    lVar4 = *(long *)(local_f8 + 0x95c0);
    lVar5 = *(long *)(lVar4 + 0x60) + -1;
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x50) + lVar5 * 8);
    *(long *)(lVar4 + 0x60) = lVar5;
    *(undefined8 *)(local_f8 + 0x2bc8) = uVar6;
  }
  if (local_e8 == '\0') {
    *(long *)(local_f8 + 0x2c08) = local_b0;
  }
  local_f8[0xb828] = local_e6;
  local_e0 = &PTR__InterruptsScope_01c984b0;
  if (local_c0 != 2) {
    internal::StackGuard::PopInterruptsScope(local_d8);
  }
  *(undefined8 *)(local_a8 + 0x95a0) = uStack_a0;
  *(int *)(local_a8 + 0x95b0) = *(int *)(local_a8 + 0x95b0) + -1;
  if (*(long *)(local_a8 + 0x95a8) != local_98) {
    *(long *)(local_a8 + 0x95a8) = local_98;
    internal::HandleScope::DeleteExtensions(local_a8);
  }
  return puVar8;
}

