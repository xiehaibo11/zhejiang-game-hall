
/* v8::base::LazyInstanceImpl<v8::internal::ICStats,
   v8::base::StaticallyAllocatedInstanceTrait<v8::internal::ICStats>,
   v8::base::DefaultConstructTrait<v8::internal::ICStats>, v8::base::ThreadSafeInitOnceTrait,
   v8::base::LeakyInstanceTrait<v8::internal::ICStats> >::InitInstance(void*) */

void v8::base::
     LazyInstanceImpl<v8::internal::ICStats,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::ICStats>,v8::base::DefaultConstructTrait<v8::internal::ICStats>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::ICStats>>
     ::InitInstance(void *param_1)

{
  internal::ICStats::ICStats(param_1);
  return;
}

