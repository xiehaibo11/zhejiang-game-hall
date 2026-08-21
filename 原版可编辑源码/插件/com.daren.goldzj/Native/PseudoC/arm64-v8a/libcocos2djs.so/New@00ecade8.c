
/* v8::Int32Array::New(v8::Local<v8::SharedArrayBuffer>, unsigned long, unsigned long) */

undefined8 v8::Int32Array::New(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  Factory *pFVar5;
  Logger *this;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (internal::FLAG_harmony_sharedarraybuffer != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","i::FLAG_harmony_sharedarraybuffer");
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  pFVar5 = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  if (internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(pFVar5 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x378);
  }
  this = *(Logger **)(pFVar5 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Int32Array::New");
  }
  uVar1 = *(undefined4 *)(pFVar5 + 0x2c60);
  *(undefined4 *)(pFVar5 + 0x2c60) = 5;
  if (param_3 >> 0x1f == 0) {
    uVar3 = internal::Factory::NewJSTypedArray(pFVar5,5,param_1,param_2,param_3);
LAB_00ecaee0:
    *(undefined4 *)(pFVar5 + 0x2c60) = uVar1;
    if (local_70 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
    }
    return uVar3;
  }
  lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar4 != 0) {
    if (*(code **)(lVar4 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar4 + 0xb738))
                ("v8::Int32Array::New(Local<SharedArrayBuffer>, size_t, size_t)",
                 "length exceeds max allowed value");
      uVar3 = 0;
      *(undefined1 *)(lVar4 + 0xb6b9) = 1;
      goto LAB_00ecaee0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
             "v8::Int32Array::New(Local<SharedArrayBuffer>, size_t, size_t)",
             "length exceeds max allowed value");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

