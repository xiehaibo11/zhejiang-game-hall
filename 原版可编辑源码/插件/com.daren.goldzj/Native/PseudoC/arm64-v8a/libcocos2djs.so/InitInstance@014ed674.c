
/* v8::base::LazyInstanceImpl<v8::base::RecursiveMutex,
   v8::base::StaticallyAllocatedInstanceTrait<v8::base::RecursiveMutex>,
   v8::base::DefaultConstructTrait<v8::base::RecursiveMutex>, v8::base::ThreadSafeInitOnceTrait,
   v8::base::LeakyInstanceTrait<v8::base::RecursiveMutex> >::InitInstance(void*) */

void v8::base::
     LazyInstanceImpl<v8::base::RecursiveMutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::RecursiveMutex>,v8::base::DefaultConstructTrait<v8::base::RecursiveMutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::RecursiveMutex>>
     ::InitInstance(void *param_1)

{
  RecursiveMutex::RecursiveMutex(param_1);
  return;
}

