
/* cocos2d::ThreadPool::destroyDefaultThreadPool() */

void cocos2d::ThreadPool::destroyDefaultThreadPool(void)

{
  ThreadPool *pTVar1;
  
  pTVar1 = DAT_01d37cb0;
  if (DAT_01d37cb0 != (ThreadPool *)0x0) {
    ~ThreadPool(DAT_01d37cb0);
    operator_delete(pTVar1);
  }
  DAT_01d37cb0 = (ThreadPool *)0x0;
  return;
}

