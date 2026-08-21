
/* v8::platform::DefaultWorkerThreadsTaskRunner::GetNext() */

void v8::platform::DefaultWorkerThreadsTaskRunner::GetNext(void)

{
  DelayedTaskQueue::GetNext();
  return;
}

