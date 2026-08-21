
/* cocos2d::ThreadPool::newCachedThreadPool(int, int, int, int, int) */

ThreadPool *
cocos2d::ThreadPool::newCachedThreadPool
          (int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ThreadPool *this;
  
  this = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this != (ThreadPool *)0x0) {
    ThreadPool(this,param_1,param_2);
    this[0x16c] = (ThreadPool)0x0;
    if (-1 < param_3) {
      *(float *)(this + 0x160) = (float)param_3;
    }
    if (0 < param_4) {
      *(int *)(this + 0x164) = param_4;
    }
    if (0 < param_5) {
      *(int *)(this + 0x168) = param_5;
    }
  }
                    /* try { // try from 0099d1ec to 00a9d2cf has its CatchHandler @ 0099d088 */
  return this;
}

