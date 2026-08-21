
/* cocos2d::ThreadPool::getDefaultThreadPool() */

ThreadPool * cocos2d::ThreadPool::getDefaultThreadPool(void)

{
  ThreadPool *this;
  
  this = DAT_01d37cb0;
                    /* try { // try from 0099d0fc to 00a9d107 has its CatchHandler @ 0099d264 */
                    /* try { // try from 0099d108 to 00a9d113 has its CatchHandler @ 0099d260 */
  if ((DAT_01d37cb0 == (ThreadPool *)0x0) &&
     (this = operator_new(0x170,(nothrow_t *)&std::nothrow), this != (ThreadPool *)0x0)) {
                    /* try { // try from 0099d114 to 00a9d1eb has its CatchHandler @ 0099d278 */
    ThreadPool(this,4,0x14);
    this[0x16c] = (ThreadPool)0x0;
    *(undefined4 *)(this + 0x160) = 0x40a00000;
    *(undefined8 *)(this + 0x164) = 0x200000002;
  }
  DAT_01d37cb0 = this;
  return DAT_01d37cb0;
}

