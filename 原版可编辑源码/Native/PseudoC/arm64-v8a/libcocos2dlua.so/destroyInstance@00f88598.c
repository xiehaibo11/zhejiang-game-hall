
/* cocos2d::AsyncTaskPool::destroyInstance() */

void cocos2d::AsyncTaskPool::destroyInstance(void)

{
  ThreadTasks *this;
  
  this = s_asyncTaskPool;
  if (s_asyncTaskPool != (ThreadTasks *)0x0) {
    ThreadTasks::~ThreadTasks(s_asyncTaskPool + 400);
    ThreadTasks::~ThreadTasks(this + 200);
    ThreadTasks::~ThreadTasks(this);
    operator_delete(this);
  }
  s_asyncTaskPool = (ThreadTasks *)0x0;
  return;
}

