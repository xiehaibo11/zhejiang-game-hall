
/* v8::internal::RegExpBytecodeGenerator::Expand() */

void __thiscall v8::internal::RegExpBytecodeGenerator::Expand(RegExpBytecodeGenerator *this)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  
  pvVar1 = *(void **)(this + 0x28);
  uVar2 = *(undefined8 *)(this + 0x30);
  uVar5 = (ulong)((int)uVar2 << 1);
  pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  if (pvVar3 == (void *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(void **)(this + 0x28) = pvVar3;
  *(ulong *)(this + 0x30) = uVar5;
  MemCopy(pvVar3,pvVar1,(long)(int)uVar2);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

