
/* v8::Map::New(v8::Isolate*) */

undefined8 v8::Map::New(Isolate *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Logger *this;
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
    local_50 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_50,(ulong)&local_50 | 8,900);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Map::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  uVar3 = internal::Factory::NewJSMap((Factory *)param_1);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_50 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_50,(RuntimeCallTimer *)((ulong)&local_50 | 8));
  }
  return uVar3;
}

