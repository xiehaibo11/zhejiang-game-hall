
/* v8::internal::SamplingThread::~SamplingThread() */

void __thiscall v8::internal::SamplingThread::~SamplingThread(SamplingThread *this)

{
  base::Thread::~Thread((Thread *)this);
  operator_delete(this);
  return;
}

