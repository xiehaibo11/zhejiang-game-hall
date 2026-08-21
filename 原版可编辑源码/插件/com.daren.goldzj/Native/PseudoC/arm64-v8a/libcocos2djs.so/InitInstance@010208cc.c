
/* v8::base::LazyInstanceImpl<v8::internal::CodeRangeAddressHint,
   v8::base::StaticallyAllocatedInstanceTrait<v8::internal::CodeRangeAddressHint>,
   v8::base::DefaultConstructTrait<v8::internal::CodeRangeAddressHint>,
   v8::base::ThreadSafeInitOnceTrait,
   v8::base::LeakyInstanceTrait<v8::internal::CodeRangeAddressHint> >::InitInstance(void*) */

void v8::base::
     LazyInstanceImpl<v8::internal::CodeRangeAddressHint,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::CodeRangeAddressHint>,v8::base::DefaultConstructTrait<v8::internal::CodeRangeAddressHint>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeRangeAddressHint>>
     ::InitInstance(void *param_1)

{
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x48) = 0;
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x28) = 0;
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  Mutex::Mutex(param_1);
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x28) = 0;
  *(undefined4 *)((long)param_1 + 0x48) = 0x3f800000;
  return;
}

