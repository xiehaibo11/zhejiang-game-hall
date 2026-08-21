
/* cocos2d::AsyncTaskPool::getInstance() */

ThreadTasks * cocos2d::AsyncTaskPool::getInstance(void)

{
  ThreadTasks *this;
  
                    /* try { // try from 00a6b994 to 00b6baab has its CatchHandler @ 00a6b884 */
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

