
/* cocos2d::experimental::ThreadPool::joinThread(int) */

void __thiscall cocos2d::experimental::ThreadPool::joinThread(ThreadPool *this,int param_1)

{
  thread *this_00;
  ulong uVar1;
  
  if ((-1 < param_1) &&
     (uVar1 = (ulong)param_1, uVar1 < (ulong)(*(long *)(this + 8) - *(long *)this >> 3))) {
    if (((**(byte **)(*(long *)(this + 0x48) + uVar1 * 0x10) & 1) != 0) &&
       (this_00 = *(thread **)(*(long *)this + uVar1 * 8), *(long *)this_00 != 0)) {
      std::__ndk1::thread::join(this_00);
      **(undefined4 **)(*(long *)(this + 0x48) + uVar1 * 0x10) = 0;
      *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
    }
    return;
  }
  __android_log_print(3,"ThreadPool","Invalid thread id %d\n");
  return;
}

