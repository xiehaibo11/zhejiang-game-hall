
/* v8::Int16Array::CheckCast(v8::Value*) */

void v8::Int16Array::CheckCast(Value *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong local_8;
  
  uVar3 = *(ulong *)param_1;
  if ((((uVar3 & 1) != 0) &&
      (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x41b)) &&
     (local_8 = uVar3, iVar1 = internal::JSTypedArray::type((JSTypedArray *)&local_8), iVar1 == 3))
  {
    return;
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))("v8::Int16Array::Cast()","Could not convert to Int16Array");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Int16Array::Cast()",
             "Could not convert to Int16Array");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

