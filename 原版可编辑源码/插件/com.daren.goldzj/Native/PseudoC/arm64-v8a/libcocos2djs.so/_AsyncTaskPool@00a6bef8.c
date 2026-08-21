
/* cocos2d::AsyncTaskPool::~AsyncTaskPool() */

void __thiscall cocos2d::AsyncTaskPool::~AsyncTaskPool(AsyncTaskPool *this)

{
                    /* try { // try from 00a6bf08 to 00b6bfa3 has its CatchHandler @ 00a6bcbc */
  ThreadTasks::~ThreadTasks((ThreadTasks *)(this + 400));
  ThreadTasks::~ThreadTasks((ThreadTasks *)(this + 200));
                    /* catch() { ... } // from try @ 00a6bd7c with catch @ 00a6bf1c
                       catch() { ... } // from try @ 00a6bec4 with catch @ 00a6bf1c */
  ThreadTasks::~ThreadTasks((ThreadTasks *)this);
  return;
}

