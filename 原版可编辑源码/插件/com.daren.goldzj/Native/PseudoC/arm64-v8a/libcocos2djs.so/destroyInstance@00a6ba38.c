
/* cocos2d::AsyncTaskPool::destroyInstance() */

void cocos2d::AsyncTaskPool::destroyInstance(void)

{
  ThreadTasks *this;
  
  this = s_asyncTaskPool;
                    /* catch() { ... } // from try @ 00a6b900 with catch @ 00a6ba40 */
                    /* catch() { ... } // from try @ 00a6b8d4 with catch @ 00a6ba44 */
  if (s_asyncTaskPool != (ThreadTasks *)0x0) {
                    /* catch() { ... } // from try @ 00a6b944 with catch @ 00a6ba54 */
    ThreadTasks::~ThreadTasks(s_asyncTaskPool + 400);
    ThreadTasks::~ThreadTasks(this + 200);
    ThreadTasks::~ThreadTasks(this);
    operator_delete(this);
  }
  s_asyncTaskPool = (ThreadTasks *)0x0;
  return;
}

