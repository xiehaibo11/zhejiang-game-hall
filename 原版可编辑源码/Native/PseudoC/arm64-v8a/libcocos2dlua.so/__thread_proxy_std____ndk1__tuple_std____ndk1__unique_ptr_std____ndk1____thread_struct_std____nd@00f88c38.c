
/* void* 
   std::__ndk1::__thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,
   std::__ndk1::default_delete<std::__ndk1::__thread_struct> >,
   cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}> >(void*) */

void * std::__ndk1::
       __thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,std::__ndk1::default_delete<std::__ndk1::__thread_struct>>,cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::_lambda()_1_>>
                 (void *param_1)

{
  pthread_key_t *ppVar1;
  void *__pointer;
  __thread_struct *this;
  
  ppVar1 = (pthread_key_t *)__thread_local_data();
  __pointer = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  pthread_setspecific(*ppVar1,__pointer);
  cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()
            ((_lambda___1_ *)((long)param_1 + 8));
  this = *(__thread_struct **)param_1;
  *(undefined8 *)param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    __thread_struct::~__thread_struct(this);
    operator_delete(this);
  }
  operator_delete(param_1);
  return (void *)0x0;
}

