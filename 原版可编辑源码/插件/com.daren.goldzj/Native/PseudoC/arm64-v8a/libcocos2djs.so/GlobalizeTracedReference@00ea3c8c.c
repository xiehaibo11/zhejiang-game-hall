
/* v8::V8::GlobalizeTracedReference(v8::internal::Isolate*, unsigned long*, unsigned long*, bool) */

undefined8
v8::V8::GlobalizeTracedReference(Isolate *param_1,ulong *param_2,ulong *param_3,bool param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  Logger *this;
  ulong local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x3e1,param_4);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar1 = internal::Logger::is_logging(this);
  if ((uVar1 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::TracedGlobal::New");
  }
  uVar2 = internal::GlobalHandles::CreateTraced
                    (*(ulong *)(param_1 + 0x95e0),(ulong *)*param_2,SUB81(param_3,0));
  if (internal::FLAG_verify_heap != '\0') {
    local_78 = *param_2;
    internal::Object::ObjectVerify((Object *)&local_78,param_1);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return uVar2;
}

