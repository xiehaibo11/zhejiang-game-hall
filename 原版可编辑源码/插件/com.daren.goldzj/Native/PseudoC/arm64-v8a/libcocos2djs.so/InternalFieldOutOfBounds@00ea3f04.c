
/* v8::V8::InternalFieldOutOfBounds(int) */

void v8::V8::InternalFieldOutOfBounds(int param_1)

{
  long lVar1;
  
  if ((uint)param_1 < 2) {
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))
                ("WeakCallbackInfo::GetInternalField","Internal field out of bounds.");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","WeakCallbackInfo::GetInternalField",
             "Internal field out of bounds.");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

