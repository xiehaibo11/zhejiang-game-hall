
/* v8::DataView::New(v8::Local<v8::SharedArrayBuffer>, unsigned long, unsigned long) */

undefined8 v8::DataView::New(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Factory *pFVar4;
  Logger *this;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (internal::FLAG_harmony_sharedarraybuffer == '\x01') {
    local_50 = 0;
    uStack_68 = 0;
    local_70 = (RuntimeCallStats *)0x0;
    uStack_58 = 0;
    uStack_60 = 0;
    pFVar4 = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
    if (internal::TracingFlags::runtime_stats != 0) {
      local_70 = (RuntimeCallStats *)(*(long *)(pFVar4 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x366);
    }
    this = *(Logger **)(pFVar4 + 0x9558);
    uVar2 = internal::Logger::is_logging(this);
    if ((uVar2 & 1) != 0) {
      internal::Logger::ApiEntryCall(this,"v8::DataView::New");
    }
    uVar1 = *(undefined4 *)(pFVar4 + 0x2c60);
    *(undefined4 *)(pFVar4 + 0x2c60) = 5;
    uVar3 = internal::Factory::NewJSDataView(pFVar4,param_1,param_2,param_3);
    *(undefined4 *)(pFVar4 + 0x2c60) = uVar1;
    if (local_70 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","i::FLAG_harmony_sharedarraybuffer");
}

