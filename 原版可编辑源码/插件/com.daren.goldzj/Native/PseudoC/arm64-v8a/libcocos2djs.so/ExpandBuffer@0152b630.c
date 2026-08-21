
/* v8::internal::LiteralBuffer::ExpandBuffer() */

void __thiscall v8::internal::LiteralBuffer::ExpandBuffer(LiteralBuffer *this)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  
  iVar2 = *(int *)(this + 8);
  if (iVar2 < 0x11) {
    iVar2 = 0x10;
  }
  uVar1 = iVar2 << 2;
  if (0x55554 < iVar2) {
    uVar1 = iVar2 + 0x100000;
  }
  uVar5 = (ulong)uVar1;
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
  if (0 < (int)*(uint *)(this + 0x10)) {
    MemCopy(pvVar3,*(void **)this,(ulong)*(uint *)(this + 0x10));
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  *(void **)this = pvVar3;
  *(ulong *)(this + 8) = uVar5;
  return;
}

