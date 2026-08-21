
/* v8::Promise::State() */

undefined4 __thiscall v8::Promise::State(Promise *this)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  Logger *this_00;
  undefined8 local_58;
  RuntimeCallStats *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = *(uint *)(this + 4);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = (RuntimeCallStats *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_50 = (RuntimeCallStats *)(*(long *)(((ulong)uVar1 << 0x20) + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_50,(ulong)&local_50 | 8,0x3c0);
  }
  this_00 = *(Logger **)(((ulong)uVar1 << 0x20) + 0x9558);
  uVar3 = internal::Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Promise::Status");
  }
  local_58 = *(undefined8 *)this;
  uVar2 = internal::JSPromise::status((JSPromise *)&local_58);
  if (local_50 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_50,(RuntimeCallTimer *)((ulong)&local_50 | 8));
  }
  return uVar2;
}

