
/* v8::base::LazyInstanceImpl<v8::internal::CodeEntry,
   v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,
   v8::internal::CodeEntry::UnresolvedEntryCreateTrait, v8::base::ThreadSafeInitOnceTrait,
   v8::base::LeakyInstanceTrait<v8::internal::CodeEntry> >::InitInstance(void*) */

void v8::base::
     LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::UnresolvedEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
     ::InitInstance(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = internal::CodeEntry::UnresolvedEntryCreateTrait::Create();
  *(undefined8 *)param_1 = uVar1;
  return;
}

