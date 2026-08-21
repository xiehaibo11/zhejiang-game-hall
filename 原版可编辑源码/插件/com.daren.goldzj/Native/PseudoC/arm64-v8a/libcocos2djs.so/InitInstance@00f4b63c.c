
/* v8::base::LazyInstanceImpl<v8::base::Mutex,
   v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,
   v8::base::DefaultConstructTrait<v8::base::Mutex>, v8::base::ThreadSafeInitOnceTrait,
   v8::base::LeakyInstanceTrait<v8::base::Mutex> >::InitInstance(void*) */

void v8::base::
     LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
     ::InitInstance(void *param_1)

{
  Mutex::Mutex(param_1);
  return;
}

