
/* v8::base::Thread::GetThreadLocal(int) */

void v8::base::Thread::GetThreadLocal(int param_1)

{
  pthread_getspecific(param_1);
  return;
}

