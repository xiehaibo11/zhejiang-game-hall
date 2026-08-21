
/* v8::NumberObject::ValueOf() const */

undefined1  [16] __thiscall v8::NumberObject::ValueOf(NumberObject *this)

{
  uint uVar1;
  ulong uVar2;
  Logger *this_00;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = *(uint *)(this + 4);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(((ulong)uVar1 << 0x20) + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x38e);
  }
  this_00 = *(Logger **)(((ulong)uVar1 << 0x20) + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::NumberObject::NumberValue");
  }
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  if ((uVar1 & 1) == 0) {
    dVar4 = (double)((int)uVar1 >> 1);
  }
  else {
    dVar4 = *(double *)((*(ulong *)this & 0xffffffff00000000 | (ulong)uVar1) + 3);
  }
  uVar5 = 0;
  if (local_60 != (RuntimeCallStats *)0x0) {
    uVar5 = 0;
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = dVar4;
  return auVar3;
}

