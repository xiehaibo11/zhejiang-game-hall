
/* cocos2d::experimental::ThreadPool::setShrinkInterval(int) */

void __thiscall cocos2d::experimental::ThreadPool::setShrinkInterval(ThreadPool *this,int param_1)

{
  if (-1 < param_1) {
    *(float *)(this + 0x160) = (float)param_1;
  }
  return;
}

