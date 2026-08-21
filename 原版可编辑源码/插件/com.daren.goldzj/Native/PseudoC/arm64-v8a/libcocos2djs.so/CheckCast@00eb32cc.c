
/* v8::Promise::Resolver::CheckCast(v8::Value*) */

void v8::Promise::Resolver::CheckCast(Value *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)param_1;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42d)) {
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))
                ("v8::Promise::Resolver::Cast","Could not convert to promise resolver");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Promise::Resolver::Cast",
             "Could not convert to promise resolver");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

