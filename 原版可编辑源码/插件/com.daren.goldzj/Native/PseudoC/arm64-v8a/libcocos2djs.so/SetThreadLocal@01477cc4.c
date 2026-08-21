
/* v8::base::Thread::SetThreadLocal(int, void*) */

int v8::base::Thread::SetThreadLocal(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(param_1,param_2);
  return iVar1;
}

