
/* v8::V8::FromJustIsNothing() */

void v8::V8::FromJustIsNothing(void)

{
  long lVar1;
  
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))("v8::FromJust","Maybe value is Nothing.");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FromJust","Maybe value is Nothing.");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

