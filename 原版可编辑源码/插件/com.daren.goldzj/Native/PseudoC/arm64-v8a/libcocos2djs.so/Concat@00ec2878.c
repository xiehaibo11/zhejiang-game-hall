
/* v8::String::Concat(v8::Isolate*, v8::Local<v8::String>, v8::Local<v8::String>) */

long v8::String::Concat(Factory *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  Logger *this;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x3d3);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::String::Concat");
  }
  if (*(int *)(*param_3 + 7) + *(int *)(*param_2 + 7) < 0xffffff1) {
    lVar3 = internal::Factory::NewConsString(param_1,param_2,param_3);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  else {
    lVar3 = 0;
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return lVar3;
}

