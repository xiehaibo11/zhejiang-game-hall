
/* cocos2d::experimental::ThreadPool::destroyDefaultThreadPool() */

void cocos2d::experimental::ThreadPool::destroyDefaultThreadPool(void)

{
  ThreadPool *pTVar1;
  
  pTVar1 = DAT_0178f3f0;
  if (DAT_0178f3f0 != (ThreadPool *)0x0) {
    ~ThreadPool(DAT_0178f3f0);
    operator_delete(pTVar1);
  }
  DAT_0178f3f0 = (ThreadPool *)0x0;
  return;
}

