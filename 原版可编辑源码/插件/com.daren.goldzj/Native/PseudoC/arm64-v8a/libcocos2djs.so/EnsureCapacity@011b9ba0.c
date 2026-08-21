
/* v8::internal::RegExpStack::EnsureCapacity(unsigned long) */

long __thiscall v8::internal::RegExpStack::EnsureCapacity(RegExpStack *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_1 < 0x4000001) {
    uVar4 = *(ulong *)(this + 0x210);
    if (param_1 < 0x401) {
      param_1 = 0x400;
    }
    if (uVar4 < param_1) {
      pvVar2 = operator_new__(param_1,(nothrow_t *)&std::nothrow);
      if (pvVar2 == (void *)0x0) {
        plVar3 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar3 + 0x18))();
        pvVar2 = operator_new__(param_1,(nothrow_t *)&std::nothrow);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
        uVar4 = *(ulong *)(this + 0x210);
      }
      if (((uVar4 != 0) &&
          (MemCopy((void *)((long)pvVar2 + (param_1 - uVar4)),*(void **)(this + 0x200),uVar4),
          this[0x220] != (RegExpStack)0x0)) && (*(void **)(this + 0x200) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x200));
      }
      lVar1 = (long)pvVar2 + param_1;
      *(void **)(this + 0x200) = pvVar2;
      *(ulong *)(this + 0x210) = param_1;
      *(long *)(this + 0x208) = lVar1;
      *(long *)(this + 0x218) = (long)pvVar2 + 0x100;
      this[0x220] = (RegExpStack)0x1;
    }
    else {
      lVar1 = *(long *)(this + 0x208);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

