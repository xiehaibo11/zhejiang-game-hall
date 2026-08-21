
/* cocos2d::ThreadPool::newSingleThreadPool() */

ThreadPool * cocos2d::ThreadPool::newSingleThreadPool(void)

{
  ThreadPool *this;
  
  this = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this != (ThreadPool *)0x0) {
                    /* try { // try from 0099d324 to 00a9d33b has its CatchHandler @ 0099d4b0 */
    ThreadPool(this,1,1);
    this[0x16c] = (ThreadPool)0x1;
  }
  return this;
}

