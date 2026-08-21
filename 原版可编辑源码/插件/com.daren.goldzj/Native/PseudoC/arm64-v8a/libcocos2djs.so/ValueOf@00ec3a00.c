
/* v8::BooleanObject::ValueOf() const */

bool __thiscall v8::BooleanObject::ValueOf(BooleanObject *this)

{
  bool bVar1;
  ulong uVar2;
  Logger *this_00;
  long lVar3;
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
  lVar3 = (ulong)*(uint *)(this + 4) << 0x20;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(lVar3 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x362);
  }
  this_00 = *(Logger **)(lVar3 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::BooleanObject::BooleanValue");
  }
  if ((*(uint *)(*(long *)this + 0xb) & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(uint *)(*(long *)this + 0xb) == *(uint *)(lVar3 + 0xb8);
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return bVar1;
}

