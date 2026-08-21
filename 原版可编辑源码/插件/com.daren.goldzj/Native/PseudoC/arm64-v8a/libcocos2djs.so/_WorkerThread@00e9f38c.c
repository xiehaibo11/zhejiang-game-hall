
/* v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread::~WorkerThread() */

void __thiscall
v8::platform::DefaultWorkerThreadsTaskRunner::WorkerThread::~WorkerThread(WorkerThread *this)

{
  *(undefined ***)this = &PTR__WorkerThread_01c981e0;
  base::Thread::Join((Thread *)this);
  base::Thread::~Thread((Thread *)this);
  return;
}

