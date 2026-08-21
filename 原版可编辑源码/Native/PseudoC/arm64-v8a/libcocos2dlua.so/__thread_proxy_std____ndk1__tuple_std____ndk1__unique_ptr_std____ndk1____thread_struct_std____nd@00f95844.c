
/* void* 
   std::__ndk1::__thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,
   std::__ndk1::default_delete<std::__ndk1::__thread_struct> >, std::__ndk1::__bind<void
   (cocos2d::Console::*)(), cocos2d::Console*> > >(void*) */

void * std::__ndk1::
       __thread_proxy<std::__ndk1::tuple<std::__ndk1::unique_ptr<std::__ndk1::__thread_struct,std::__ndk1::default_delete<std::__ndk1::__thread_struct>>,std::__ndk1::__bind<void(cocos2d::Console::*)(),cocos2d::Console*>>>
                 (void *param_1)

{
  pthread_key_t *ppVar1;
  void *__pointer;
  code *pcVar2;
  __thread_struct *this;
  
  ppVar1 = (pthread_key_t *)__thread_local_data();
  __pointer = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  pthread_setspecific(*ppVar1,__pointer);
  pcVar2 = *(code **)((long)param_1 + 8);
  if ((*(ulong *)((long)param_1 + 0x10) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)((long)param_1 + 0x18) +
                                          ((long)*(ulong *)((long)param_1 + 0x10) >> 1)));
  }
  (*pcVar2)();
  this = *(__thread_struct **)param_1;
  *(undefined8 *)param_1 = 0;
  if (this != (__thread_struct *)0x0) {
    __thread_struct::~__thread_struct(this);
    operator_delete(this);
  }
  operator_delete(param_1);
  return (void *)0x0;
}

