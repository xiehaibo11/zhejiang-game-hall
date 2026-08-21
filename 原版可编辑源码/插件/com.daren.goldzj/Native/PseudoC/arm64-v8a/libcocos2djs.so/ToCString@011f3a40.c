
/* v8::internal::StringStream::ToCString() const */

void v8::internal::StringStream::ToCString(void)

{
  long in_x0;
  void *pvVar1;
  long *plVar2;
  undefined8 *in_x8;
  uint uVar3;
  
  uVar3 = *(uint *)(in_x0 + 0x10);
  pvVar1 = operator_new__((ulong)(uVar3 + 1),(nothrow_t *)&std::nothrow);
  if (pvVar1 == (void *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    pvVar1 = operator_new__((ulong)(uVar3 + 1),(nothrow_t *)&std::nothrow);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
    uVar3 = *(uint *)(in_x0 + 0x10);
  }
  MemCopy(pvVar1,*(void **)(in_x0 + 0x18),(ulong)uVar3);
  uVar3 = *(uint *)(in_x0 + 0x10);
  *in_x8 = pvVar1;
  *(undefined1 *)((long)pvVar1 + (ulong)uVar3) = 0;
  return;
}

