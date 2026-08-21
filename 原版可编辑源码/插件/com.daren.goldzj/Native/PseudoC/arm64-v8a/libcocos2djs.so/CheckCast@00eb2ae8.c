
/* v8::String::CheckCast(v8::Value*) */

void v8::String::CheckCast(Value *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)param_1;
  if (((uVar2 & 1) != 0) &&
     (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x40)) {
    return;
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))("v8::String::Cast","Could not convert to string");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::String::Cast",
             "Could not convert to string");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

