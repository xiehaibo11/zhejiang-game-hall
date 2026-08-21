
/* v8::internal::StrDup(char const*) */

void * v8::internal::StrDup(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  long *plVar3;
  
  sVar1 = strlen(param_1);
  pvVar2 = operator_new__(sVar1 + 1,(nothrow_t *)&std::nothrow);
  if (pvVar2 == (void *)0x0) {
    plVar3 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar3 + 0x18))();
    pvVar2 = operator_new__(sVar1 + 1,(nothrow_t *)&std::nothrow);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  MemCopy(pvVar2,param_1,sVar1);
  *(undefined1 *)((long)pvVar2 + sVar1) = 0;
  return pvVar2;
}

