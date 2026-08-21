
/* v8::base::Thread::CreateThreadLocalKey() */

pthread_key_t v8::base::Thread::CreateThreadLocalKey(void)

{
  pthread_key_t local_14;
  
  pthread_key_create(&local_14,(__destr_function *)0x0);
  return local_14;
}

