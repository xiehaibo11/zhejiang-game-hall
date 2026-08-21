
/* cocos2d::experimental::ThreadPool::setStretchStep(int) */

void __thiscall cocos2d::experimental::ThreadPool::setStretchStep(ThreadPool *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x168) = param_1;
  }
  return;
}

