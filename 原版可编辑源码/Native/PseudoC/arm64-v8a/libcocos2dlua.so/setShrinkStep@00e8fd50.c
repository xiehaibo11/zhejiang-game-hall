
/* cocos2d::experimental::ThreadPool::setShrinkStep(int) */

void __thiscall cocos2d::experimental::ThreadPool::setShrinkStep(ThreadPool *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x164) = param_1;
  }
  return;
}

