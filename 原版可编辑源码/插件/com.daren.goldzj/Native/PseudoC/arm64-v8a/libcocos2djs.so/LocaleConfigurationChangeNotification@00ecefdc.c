
/* v8::Isolate::LocaleConfigurationChangeNotification() */

void __thiscall v8::Isolate::LocaleConfigurationChangeNotification(Isolate *this)

{
  ulong uVar1;
  Logger *this_00;
  RuntimeCallStats *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  uStack_48 = 0;
  local_50 = (RuntimeCallStats *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_50 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_50,(ulong)&local_50 | 8,0x37b);
  }
  this_00 = *(Logger **)(this + 0x9558);
  uVar1 = internal::Logger::is_logging(this_00);
  if ((uVar1 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Isolate::LocaleConfigurationChangeNotification");
  }
  if (local_50 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_50,(RuntimeCallTimer *)((ulong)&local_50 | 8));
  }
  return;
}

