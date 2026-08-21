
/* v8::Isolate::DateTimeConfigurationChangeNotification(v8::Isolate::TimeZoneDetection) */

void __thiscall
v8::Isolate::DateTimeConfigurationChangeNotification(Isolate *this,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Logger *this_00;
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
    local_60 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x37a);
  }
  this_00 = *(Logger **)(this + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Isolate::DateTimeConfigurationChangeNotification");
  }
  uVar1 = *(undefined4 *)(this + 0x2c60);
  *(undefined4 *)(this + 0x2c60) = 5;
  internal::DateCache::ResetDateCache(*(undefined8 *)(this + 0xb638),param_2);
  *(undefined4 *)(this + 0x2c60) = uVar1;
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return;
}

