
/* v8::Isolate::GetCurrent() */

void v8::Isolate::GetCurrent(void)

{
  base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  return;
}

