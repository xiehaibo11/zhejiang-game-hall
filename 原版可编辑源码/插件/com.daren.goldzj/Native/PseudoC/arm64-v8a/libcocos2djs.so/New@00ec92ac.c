
/* v8::ArrayBuffer::New(v8::Isolate*, unsigned long) */

long v8::ArrayBuffer::New(Isolate *param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
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
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x359);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::ArrayBuffer::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  lVar3 = internal::Factory::NewJSArrayBufferAndBackingStore((Factory *)param_1,param_2,1,0);
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    if (local_60 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  internal::FatalProcessOutOfMemory((Isolate *)param_1,"v8::ArrayBuffer::New");
}

