
/* cocos2d::AsyncTaskPool::AsyncTaskPool() */

void __thiscall cocos2d::AsyncTaskPool::AsyncTaskPool(AsyncTaskPool *this)

{
  ThreadTasks::ThreadTasks((ThreadTasks *)this);
  ThreadTasks::ThreadTasks((ThreadTasks *)(this + 200));
  ThreadTasks::ThreadTasks((ThreadTasks *)(this + 400));
  return;
}

