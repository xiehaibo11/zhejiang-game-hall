
/* v8::internal::Isolate::SetIsolateThreadLocals(v8::internal::Isolate*,
   v8::internal::Isolate::PerIsolateThreadData*) */

void v8::internal::Isolate::SetIsolateThreadLocals(Isolate *param_1,PerIsolateThreadData *param_2)

{
  base::Thread::SetThreadLocal(isolate_key_,param_1);
  base::Thread::SetThreadLocal(per_isolate_thread_data_key_,param_2);
  return;
}

