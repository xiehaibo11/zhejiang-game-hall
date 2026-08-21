
/* cocos2d::renderer::ParallelTask::joinThread(int) */

void __thiscall cocos2d::renderer::ParallelTask::joinThread(ParallelTask *this,int param_1)

{
  thread *this_00;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 3))) &&
     (this_00 = *(thread **)(*(long *)(this + 0x20) + (long)param_1 * 8), *(long *)this_00 != 0)) {
    std::__ndk1::thread::join(this_00);
    return;
  }
  return;
}

