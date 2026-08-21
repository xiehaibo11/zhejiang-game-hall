
/* void* 
   std::__ndk1::__thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,
   std::__ndk1::default_delete<std::__ndk1::__thread_struct> >, void
   (universe::core::Service::*)(int), universe::core::Service*, int> >(void*) */

void * std::__ndk1::
       __thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,std::__ndk1::default_delete<std::__ndk1::__thread_struct>>,void(universe::core::Service::*)(int),universe::core::Service*,int>>
                 (void *param_1)

{
  long *plVar1;
  pthread_key_t *ppVar2;
  void *__pointer;
  code *pcVar3;
  __thread_struct *this;
  
  ppVar2 = (pthread_key_t *)__thread_local_data();
  __pointer = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  pthread_setspecific(*ppVar2,__pointer);
  pcVar3 = *(code **)((long)param_1 + 8);
  plVar1 = (long *)(*(long *)((long)param_1 + 0x18) + ((long)*(ulong *)((long)param_1 + 0x10) >> 1))
  ;
  if ((*(ulong *)((long)param_1 + 0x10) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(plVar1,*(undefined4 *)((long)param_1 + 0x20));
  this = *(__thread_struct **)param_1;
  *(undefined8 *)param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    __thread_struct::~__thread_struct(this);
    operator_delete(this);
  }
  operator_delete(param_1);
  return (void *)0x0;
}

