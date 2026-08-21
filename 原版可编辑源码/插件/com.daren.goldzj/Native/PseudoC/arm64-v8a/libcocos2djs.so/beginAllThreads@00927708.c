
/* cocos2d::renderer::ParallelTask::beginAllThreads() */

void __thiscall cocos2d::renderer::ParallelTask::beginAllThreads(ParallelTask *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    memset(*(void **)(this + 0x38),0,(long)*(int *)(this + 0x44));
    std::__ndk1::mutex::lock((mutex *)(this + 0x48));
    std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x70));
    std::__ndk1::mutex::unlock((mutex *)(this + 0x48));
    return;
  }
  return;
}

