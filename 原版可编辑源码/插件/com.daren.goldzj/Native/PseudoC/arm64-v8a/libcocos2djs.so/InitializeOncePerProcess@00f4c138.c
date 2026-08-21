
/* v8::internal::Isolate::InitializeOncePerProcess() */

void v8::internal::Isolate::InitializeOncePerProcess(void)

{
  isolate_key_ = base::Thread::CreateThreadLocalKey();
  per_isolate_thread_data_key_ = base::Thread::CreateThreadLocalKey();
  return;
}

