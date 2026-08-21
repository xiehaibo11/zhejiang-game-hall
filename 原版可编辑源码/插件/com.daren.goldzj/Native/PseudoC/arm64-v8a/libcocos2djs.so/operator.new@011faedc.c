
/* v8::internal::Malloced::operator new(unsigned long) */

void * __thiscall v8::internal::Malloced::operator_new(Malloced *this,ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)AllocWithRetry((ulong)this);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory((Isolate *)0x0,"Malloced operator new",false);
}

