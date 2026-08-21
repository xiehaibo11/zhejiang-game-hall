
/* v8::internal::SerializedData::AllocateData(unsigned int) */

void __thiscall v8::internal::SerializedData::AllocateData(SerializedData *this,uint param_1)

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
  *(uint *)(this + 0x10) = param_1;
  this[0x14] = (SerializedData)0x1;
  return;
}

