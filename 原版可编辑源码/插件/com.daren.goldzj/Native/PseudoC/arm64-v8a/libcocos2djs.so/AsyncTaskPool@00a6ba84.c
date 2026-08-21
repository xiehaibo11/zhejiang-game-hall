
/* cocos2d::AsyncTaskPool::AsyncTaskPool() */

void __thiscall cocos2d::AsyncTaskPool::AsyncTaskPool(AsyncTaskPool *this)

{
  ThreadTasks::ThreadTasks((ThreadTasks *)this);
  ThreadTasks::ThreadTasks((ThreadTasks *)(this + 200));
                    /* try { // try from 00a6baac to 00b6baef has its CatchHandler @ 00a6baac
                       catch() { ... } // from try @ 00a6baac with catch @ 00a6baac
                       catch() { ... } // from try @ 00a6bb28 with catch @ 00a6baac */
  ThreadTasks::ThreadTasks((ThreadTasks *)(this + 400));
  return;
}

