
/* cocos2d::ThreadPool::setShrinkStep(int) */

void __thiscall cocos2d::ThreadPool::setShrinkStep(ThreadPool *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x164) = param_1;
  }
                    /* catch() { ... } // from try @ 0099d114 with catch @ 0099d278 */
  return;
}

