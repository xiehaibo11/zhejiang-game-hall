
/* v8::internal::Isolate::Delete(v8::internal::Isolate*) */

void v8::internal::Isolate::Delete(Isolate *param_1)

{
  void *pvVar1;
  void *pvVar2;
  IsolateAllocator *this;
  
  pvVar1 = (void *)base::Thread::GetThreadLocal(per_isolate_thread_data_key_);
  pvVar2 = (void *)base::Thread::GetThreadLocal(isolate_key_);
  base::Thread::SetThreadLocal(isolate_key_,param_1);
  base::Thread::SetThreadLocal(per_isolate_thread_data_key_,(void *)0x0);
  Deinit(param_1);
  this = *(IsolateAllocator **)(param_1 + 0x8848);
  *(undefined8 *)(param_1 + 0x8848) = 0;
  ~Isolate(param_1);
  if (this != (IsolateAllocator *)0x0) {
    IsolateAllocator::~IsolateAllocator(this);
    operator_delete(this);
  }
  base::Thread::SetThreadLocal(isolate_key_,pvVar2);
  base::Thread::SetThreadLocal(per_isolate_thread_data_key_,pvVar1);
  return;
}

