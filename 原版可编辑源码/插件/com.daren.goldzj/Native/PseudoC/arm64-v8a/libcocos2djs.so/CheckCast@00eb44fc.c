
/* v8::NumberObject::CheckCast(v8::Value*) */

void v8::NumberObject::CheckCast(Value *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)param_1;
  if ((uVar3 & 1) != 0) {
    uVar2 = uVar3 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) == 0x411) {
      if ((*(uint *)(uVar3 + 0xb) & 1) == 0) {
        return;
      }
      if (*(short *)(uVar2 + *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb))
                                      - 1)) == 0x42) {
        return;
      }
    }
  }
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))("v8::NumberObject::Cast()","Could not convert to NumberObject");
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::NumberObject::Cast()",
             "Could not convert to NumberObject");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

