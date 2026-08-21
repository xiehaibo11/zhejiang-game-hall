
/* v8::Context::SetAlignedPointerInEmbedderData(int, void*) */

void __thiscall
v8::Context::SetAlignedPointerInEmbedderData(Context *this,int param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00ea45f0(this,param_1,1,"v8::Context::SetAlignedPointerInEmbedderData()");
  if (((ulong)param_2 & 1) == 0) {
    *(void **)(*plVar1 + (long)(int)(param_1 << 3 | 7)) = param_2;
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::Context::SetAlignedPointerInEmbedderData()","Pointer is not aligned");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
             "v8::Context::SetAlignedPointerInEmbedderData()","Pointer is not aligned");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

