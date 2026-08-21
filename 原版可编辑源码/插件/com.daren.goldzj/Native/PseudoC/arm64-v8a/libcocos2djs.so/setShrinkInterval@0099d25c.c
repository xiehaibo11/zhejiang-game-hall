
/* cocos2d::ThreadPool::setShrinkInterval(int) */

void __thiscall cocos2d::ThreadPool::setShrinkInterval(ThreadPool *this,int param_1)

{
  if (-1 < param_1) {
                    /* catch() { ... } // from try @ 0099d108 with catch @ 0099d260 */
                    /* catch() { ... } // from try @ 0099d0fc with catch @ 0099d264 */
    *(float *)(this + 0x160) = (float)param_1;
  }
                    /* catch() { ... } // from try @ 0099d0dc with catch @ 0099d268 */
  return;
}

