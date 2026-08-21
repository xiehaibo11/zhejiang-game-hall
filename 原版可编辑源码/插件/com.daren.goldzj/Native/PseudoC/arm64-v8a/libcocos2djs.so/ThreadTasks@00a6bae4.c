
/* cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks() */

void __thiscall cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks(ThreadTasks *this)

{
  long lVar1;
  ThreadTasks *local_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 00a6baf0 to 00b6bb27 has its CatchHandler @ 00a6bb58 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this[0xc0] = (ThreadTasks)0x0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 00a6bb28 to 00b6bb6b has its CatchHandler @ 00a6baac */
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  local_58 = this;
  FUN_00a6bf28(&local_50,&local_58);
  if (*(long *)this != 0) {
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  *(undefined8 *)this = local_50;
                    /* catch() { ... } // from try @ 00a6baf0 with catch @ 00a6bb58 */
  local_50 = 0;
  std::__ndk1::thread::~thread((thread *)&local_50);
                    /* catch() { ... } // from try @ 00a6bbc8 with catch @ 00a6bb6c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

