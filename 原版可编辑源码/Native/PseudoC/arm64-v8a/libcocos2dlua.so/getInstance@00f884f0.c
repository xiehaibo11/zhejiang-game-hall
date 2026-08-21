
/* cocos2d::AsyncTaskPool::getInstance() */

ThreadTasks * cocos2d::AsyncTaskPool::getInstance(void)

{
  ThreadTasks *this;
  
  this = s_asyncTaskPool;
  if ((s_asyncTaskPool == (ThreadTasks *)0x0) &&
     (this = operator_new(600,(nothrow_t *)&std::nothrow), this != (ThreadTasks *)0x0)) {
    ThreadTasks::ThreadTasks(this);
    ThreadTasks::ThreadTasks(this + 200);
    ThreadTasks::ThreadTasks(this + 400);
  }
  s_asyncTaskPool = this;
  return s_asyncTaskPool;
}

