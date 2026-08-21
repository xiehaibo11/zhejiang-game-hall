
/* cocos2d::ThreadPool::joinThread(int) */

void __thiscall cocos2d::ThreadPool::joinThread(ThreadPool *this,int param_1)

{
  thread *this_00;
  
                    /* try { // try from 0099ed50 to 00a9ed67 has its CatchHandler @ 0099ef5c */
  if ((-1 < param_1) && (param_1 < (int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 3))) {
                    /* try { // try from 0099ed70 to 00a9ed7b has its CatchHandler @ 0099ef58 */
    if ((**(byte **)(*(long *)(this + 0x48) +
                    (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff000000000 |
                    (ulong)(uint)param_1 << 4)) & 1) != 0) {
                    /* try { // try from 0099ed7c to 00a9ed87 has its CatchHandler @ 0099ef54 */
      this_00 = *(thread **)(*(long *)this + (long)param_1 * 8);
                    /* try { // try from 0099ed88 to 00a9eedb has its CatchHandler @ 0099ef6c */
      if (*(long *)this_00 != 0) {
        std::__ndk1::thread::join(this_00);
        **(undefined4 **)(*(long *)(this + 0x48) + (long)param_1 * 0x10) = 0;
        *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
      }
    }
    return;
  }
  __android_log_print(3,"ThreadPool","Invalid thread id %d\n");
  return;
}

