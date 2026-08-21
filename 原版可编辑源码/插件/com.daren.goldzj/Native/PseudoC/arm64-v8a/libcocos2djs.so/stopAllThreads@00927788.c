
/* cocos2d::renderer::ParallelTask::stopAllThreads() */

void __thiscall cocos2d::renderer::ParallelTask::stopAllThreads(ParallelTask *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    memset(*(void **)(this + 0x38),1,(long)*(int *)(this + 0x44));
    return;
  }
  return;
}

