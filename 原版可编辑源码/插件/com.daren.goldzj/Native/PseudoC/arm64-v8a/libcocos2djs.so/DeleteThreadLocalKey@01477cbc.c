
/* v8::base::Thread::DeleteThreadLocalKey(int) */

void v8::base::Thread::DeleteThreadLocalKey(int param_1)

{
  pthread_key_delete(param_1);
  return;
}

