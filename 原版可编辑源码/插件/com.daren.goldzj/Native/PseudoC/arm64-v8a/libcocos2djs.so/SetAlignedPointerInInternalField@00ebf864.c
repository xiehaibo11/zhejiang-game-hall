
/* v8::Object::SetAlignedPointerInInternalField(int, void*) */

void __thiscall v8::Object::SetAlignedPointerInInternalField(Object *this,int param_1,void *param_2)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_00ebf580(this,param_1,"v8::Object::SetAlignedPointerInInternalField()");
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)this;
    uVar3 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1);
    sVar1 = *(short *)(uVar3 + 7);
    if (sVar1 == 0x421) {
      iVar2 = 0xc;
    }
    else {
      iVar2 = internal::JSObject::GetHeaderSize(sVar1,*(char *)(uVar3 + 9) < '\0');
    }
    if (((ulong)param_2 & 1) != 0) {
      lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
      if (lVar4 != 0) {
        if (*(code **)(lVar4 + 0xb738) != (code *)0x0) {
          (**(code **)(lVar4 + 0xb738))
                    ("v8::Object::SetAlignedPointerInInternalField()","Unaligned pointer");
          *(undefined1 *)(lVar4 + 0xb6b9) = 1;
          return;
        }
      }
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
                 "v8::Object::SetAlignedPointerInInternalField()","Unaligned pointer");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    *(void **)((uVar5 - 1) + (long)(iVar2 + param_1 * 8)) = param_2;
  }
  return;
}

