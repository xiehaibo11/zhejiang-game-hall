
/* v8::ArrayBuffer::Detach() */

void __thiscall v8::ArrayBuffer::Detach(ArrayBuffer *this)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  Logger *this_00;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_18;
  
  uVar4 = *(ulong *)this;
  if ((*(uint *)(uVar4 + 0x1b) >> 1 & 1) != 0) {
LAB_00ec91c4:
    local_40 = 0;
    uStack_58 = 0;
    local_60 = (RuntimeCallStats *)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar4 = uVar4 & 0xffffffff00000000;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_60 = (RuntimeCallStats *)(*(long *)(uVar4 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x358);
    }
    this_00 = *(Logger **)(uVar4 + 0x9558);
    uVar3 = internal::Logger::is_logging(this_00);
    if ((uVar3 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::ArrayBuffer::Detach");
    }
    uVar1 = *(undefined4 *)(uVar4 + 0x2c60);
    *(undefined4 *)(uVar4 + 0x2c60) = 5;
    local_18 = *(undefined8 *)this;
    internal::JSArrayBuffer::Detach((JSArrayBuffer *)&local_18,false);
    *(undefined4 *)(uVar4 + 0x2c60) = uVar1;
    if (local_60 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::ArrayBuffer::Detach","Only detachable ArrayBuffers can be detached");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      goto LAB_00ec91c4;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ArrayBuffer::Detach",
             "Only detachable ArrayBuffers can be detached");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

