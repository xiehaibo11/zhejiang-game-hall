
/* v8::Int32::CheckCast(v8::Value*) */

void v8::Int32::CheckCast(Value *param_1)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  
  uVar2 = *(ulong *)param_1;
  if (((uVar2 & 1) != 0) &&
     ((((*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x42 ||
        (dVar3 = *(double *)(uVar2 + 3), 2147483647.0 < dVar3)) || (dVar3 < -2147483648.0)) ||
      ((dVar3 == -0.0 || (dVar3 != (double)(int)dVar3)))))) {
    lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar1 + 0xb738))
                  ("v8::Int32::Cast","Could not convert to 32-bit signed integer");
        *(undefined1 *)(lVar1 + 0xb6b9) = 1;
        return;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Int32::Cast",
               "Could not convert to 32-bit signed integer");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
  return;
}

