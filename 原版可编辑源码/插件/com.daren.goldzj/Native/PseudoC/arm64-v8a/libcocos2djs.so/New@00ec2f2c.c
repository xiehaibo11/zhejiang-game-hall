
/* v8::Object::New(v8::Isolate*) */

undefined8 v8::Object::New(Isolate *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  Logger *this;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3a5);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Object::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  uVar2 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
  }
  uVar4 = internal::Factory::NewJSObject((Factory *)param_1,puVar3,0);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return uVar4;
}

