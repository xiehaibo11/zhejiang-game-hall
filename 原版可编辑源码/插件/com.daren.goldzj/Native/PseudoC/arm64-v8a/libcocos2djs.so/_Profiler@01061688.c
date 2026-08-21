
/* v8::internal::Profiler::~Profiler() */

void __thiscall v8::internal::Profiler::~Profiler(Profiler *this)

{
  *(undefined ***)this = &PTR__Profiler_01cb2280;
  base::Semaphore::~Semaphore((Semaphore *)(this + 0x81444));
  base::Thread::~Thread((Thread *)this);
  operator_delete(this);
  return;
}

