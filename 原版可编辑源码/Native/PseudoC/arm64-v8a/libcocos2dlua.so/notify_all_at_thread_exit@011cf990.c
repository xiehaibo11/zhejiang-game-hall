
/* std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&,
   std::__ndk1::unique_lock<std::__ndk1::mutex>) */

void std::__ndk1::notify_all_at_thread_exit(mutex *param_1,undefined8 *param_2)

{
  pthread_key_t *ppVar1;
  void *pvVar2;
  __thread_struct *this;
  condition_variable *pcVar3;
  
  ppVar1 = (pthread_key_t *)__thread_local_data();
  pvVar2 = pthread_getspecific(*ppVar1);
  if (pvVar2 == (void *)0x0) {
    this = operator_new(8);
    __thread_struct::__thread_struct(this);
    pthread_setspecific(*ppVar1,this);
  }
  ppVar1 = (pthread_key_t *)__thread_local_data();
  pcVar3 = pthread_getspecific(*ppVar1);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  __thread_struct::notify_all_at_thread_exit(pcVar3,param_1);
  return;
}

