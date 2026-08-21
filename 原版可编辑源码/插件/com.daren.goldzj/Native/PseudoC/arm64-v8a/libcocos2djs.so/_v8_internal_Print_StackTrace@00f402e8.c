
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* _v8_internal_Print_StackTrace() */

void _v8_internal_Print_StackTrace(void)

{
  Isolate *pIVar1;
  
  pIVar1 = (Isolate *)v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
  v8::internal::Isolate::PrintStack(pIVar1,waitpid,1);
  return;
}

