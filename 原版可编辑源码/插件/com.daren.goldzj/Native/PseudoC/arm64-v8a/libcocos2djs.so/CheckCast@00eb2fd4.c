
/* v8::BigInt::CheckCast(v8::Value*) */

void v8::BigInt::CheckCast(Value *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)param_1;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x41)) {
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))("v8::BigInt::Cast","Could not convert to BigInt");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::BigInt::Cast",
             "Could not convert to BigInt");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

