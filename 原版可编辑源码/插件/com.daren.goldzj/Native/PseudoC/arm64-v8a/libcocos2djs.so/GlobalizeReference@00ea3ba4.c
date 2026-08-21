
/* v8::V8::GlobalizeReference(v8::internal::Isolate*, unsigned long*) */

undefined8 v8::V8::GlobalizeReference(Isolate *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  Logger *this;
  ulong local_68;
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
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3b7);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar1 = internal::Logger::is_logging(this);
  if ((uVar1 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Persistent::New");
  }
  uVar2 = internal::GlobalHandles::Create(*(ulong *)(param_1 + 0x95e0));
  if (internal::FLAG_verify_heap != '\0') {
    local_68 = *param_2;
    internal::Object::ObjectVerify((Object *)&local_68,param_1);
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return uVar2;
}

