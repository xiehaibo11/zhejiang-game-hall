
/* v8::internal::Internals::CheckInitializedImpl(v8::Isolate*) */

void v8::internal::Internals::CheckInitializedImpl(Isolate *param_1)

{
  long lVar1;
  
  if ((param_1 != (Isolate *)0x0) && (param_1[0xb6b9] == (Isolate)0x0)) {
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))
                ("v8::internal::Internals::CheckInitialized",
                 "Isolate is not initialized or V8 has died");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::internal::Internals::CheckInitialized",
             "Isolate is not initialized or V8 has died");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

