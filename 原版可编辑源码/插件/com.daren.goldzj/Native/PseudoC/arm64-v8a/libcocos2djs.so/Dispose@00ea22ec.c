
/* v8::Isolate::Dispose() */

void __thiscall v8::Isolate::Dispose(Isolate *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x9488) == 0) {
    internal::Isolate::Delete((Isolate *)this);
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))
                ("v8::Isolate::Dispose()","Disposing the isolate that is entered by a thread.");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Isolate::Dispose()",
             "Disposing the isolate that is entered by a thread.");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

