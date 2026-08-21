
/* v8::internal::HeapStringAllocator::grow(unsigned int*) */

void * __thiscall v8::internal::HeapStringAllocator::grow(HeapStringAllocator *this,uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  long *plVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar1 = uVar4 << 1;
  if (uVar4 < uVar1) {
    pvVar2 = operator_new__((ulong)uVar1,(nothrow_t *)&std::nothrow);
    if (pvVar2 == (void *)0x0) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar3 + 0x18))();
      pvVar2 = operator_new__((ulong)uVar1,(nothrow_t *)&std::nothrow);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
      uVar4 = *param_1;
    }
    MemCopy(pvVar2,*(void **)(this + 8),(ulong)uVar4);
    *param_1 = uVar1;
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
    }
    *(void **)(this + 8) = pvVar2;
  }
  else {
    pvVar2 = *(void **)(this + 8);
  }
  return pvVar2;
}

