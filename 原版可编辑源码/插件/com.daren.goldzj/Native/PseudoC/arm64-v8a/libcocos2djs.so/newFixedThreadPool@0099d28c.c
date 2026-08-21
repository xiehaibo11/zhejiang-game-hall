
/* cocos2d::ThreadPool::newFixedThreadPool(int) */

ThreadPool * cocos2d::ThreadPool::newFixedThreadPool(int param_1)

{
  ThreadPool *this;
  
  this = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this != (ThreadPool *)0x0) {
    ThreadPool(this,param_1,param_1);
    this[0x16c] = (ThreadPool)0x1;
  }
                    /* try { // try from 0099d2d0 to 00a9d323 has its CatchHandler @ 0099d2d0
                       catch() { ... } // from try @ 0099d2d0 with catch @ 0099d2d0
                       catch() { ... } // from try @ 0099d434 with catch @ 0099d2d0 */
  return this;
}

