
/* v8::internal::HeapStringAllocator::allocate(unsigned int) */

void __thiscall v8::internal::HeapStringAllocator::allocate(HeapStringAllocator *this,uint param_1)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = operator_new__((ulong)param_1,(nothrow_t *)&std::nothrow);
  if (pvVar1 == (void *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    pvVar1 = operator_new__((ulong)param_1,(nothrow_t *)&std::nothrow);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(void **)(this + 8) = pvVar1;
  return;
}

