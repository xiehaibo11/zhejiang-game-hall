
/* v8::Context::SlowGetAlignedPointerFromEmbedderData(int) */

ulong __thiscall v8::Context::SlowGetAlignedPointerFromEmbedderData(Context *this,int param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  Isolate *local_38;
  undefined8 uStack_30;
  long local_28;
  
  HandleScope::Initialize((HandleScope *)&local_38,(Isolate *)((ulong)*(uint *)(this + 4) << 0x20));
  plVar1 = (long *)FUN_00ea45f0(this,param_1,0,"v8::Context::GetAlignedPointerFromEmbedderData()");
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(*plVar1 + ((long)(param_1 << 3) | 7U));
    if ((uVar3 & 1) != 0) {
      lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
          (**(code **)(lVar2 + 0xb738))
                    ("v8::Context::GetAlignedPointerFromEmbedderData()","Pointer is not aligned");
          *(undefined1 *)(lVar2 + 0xb6b9) = 1;
          goto LAB_00ea4978;
        }
      }
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
                 "v8::Context::GetAlignedPointerFromEmbedderData()","Pointer is not aligned");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
  }
LAB_00ea4978:
  *(undefined8 *)(local_38 + 0x95a0) = uStack_30;
  *(int *)(local_38 + 0x95b0) = *(int *)(local_38 + 0x95b0) + -1;
  if (*(long *)(local_38 + 0x95a8) != local_28) {
    *(long *)(local_38 + 0x95a8) = local_28;
    internal::HandleScope::DeleteExtensions(local_38);
  }
  return uVar3;
}

