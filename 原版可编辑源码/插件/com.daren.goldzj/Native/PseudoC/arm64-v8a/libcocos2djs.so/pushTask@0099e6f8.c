
/* cocos2d::ThreadPool::pushTask(std::__ndk1::function<void (int)> const&,
   cocos2d::ThreadPool::TaskType) */

void __thiscall cocos2d::ThreadPool::pushTask(ThreadPool *this,long *param_1,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  timeval local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
                    /* try { // try from 0099e6fc to 00a9e70f has its CatchHandler @ 0099e7cc */
                    /* try { // try from 0099e710 to 00a9e7e7 has its CatchHandler @ 0099e6b4 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0x16c] == (ThreadPool)0x0) {
    std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
    iVar1 = *(int *)(this + 0xbc);
    std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
    if (*(int *)(this + 0x140) < iVar1) {
      std::__ndk1::mutex::lock((mutex *)(this + 0x90));
      lVar8 = *(long *)(this + 0x88);
      std::__ndk1::mutex::unlock((mutex *)(this + 0x90));
                    /* catch() { ... } // from try @ 0099e6fc with catch @ 0099e7cc */
                    /* try { // try from 0099e7e8 to 00a9e83b has its CatchHandler @ 0099e7e8
                       catch() { ... } // from try @ 0099e7e8 with catch @ 0099e7e8
                       catch() { ... } // from try @ 0099e948 with catch @ 0099e7e8 */
      if ((lVar8 == 0) &&
         (gettimeofday(&local_90,(__timezone_ptr_t)0x0),
         *(float *)(this + 0x160) <
         (float)(local_90.tv_usec - *(long *)(this + 0x158)) / 1e+06 +
         (float)(CONCAT44(local_90.tv_sec._4_4_,(undefined4)local_90.tv_sec) -
                *(long *)(this + 0x150)))) {
        tryShrinkPool(this);
        *(__suseconds_t *)(this + 0x158) = local_90.tv_usec;
        *(ulong *)(this + 0x150) = CONCAT44(local_90.tv_sec._4_4_,(undefined4)local_90.tv_sec);
      }
    }
    else if (iVar1 == 0) {
      stretchPool(this,*(int *)(this + 0x168));
    }
  }
  pvVar3 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pvVar3 != (void *)0x0) {
    plVar4 = (long *)param_1[4];
    if (plVar4 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else if (param_1 == plVar4) {
      local_60 = alStack_80;
      (**(code **)(*plVar4 + 0x18))(plVar4,alStack_80);
    }
    else {
      local_60 = (long *)(**(code **)(*plVar4 + 0x10))();
    }
    *(undefined8 *)((long)pvVar3 + 0x20) = 0;
                    /* try { // try from 0099e83c to 00a9e853 has its CatchHandler @ 0099e9c4 */
    puVar5 = operator_new(0x40);
    *puVar5 = &PTR_FUN_01c6a6c0;
                    /* try { // try from 0099e85c to 00a9e867 has its CatchHandler @ 0099e9c0 */
    if (local_60 == (long *)0x0) {
      puVar5[6] = 0;
    }
    else {
                    /* try { // try from 0099e868 to 00a9e873 has its CatchHandler @ 0099e9bc */
      if (alStack_80 == local_60) {
        puVar5[6] = puVar5 + 2;
        (**(code **)(*local_60 + 0x18))();
      }
      else {
                    /* try { // try from 0099e874 to 00a9e947 has its CatchHandler @ 0099e9d4 */
        uVar6 = (**(code **)(*local_60 + 0x10))();
        puVar5[6] = uVar6;
      }
    }
    *(undefined8 **)((long)pvVar3 + 0x20) = puVar5;
    if (alStack_80 == local_60) {
      pcVar7 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_0099e8cc;
      pcVar7 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar7)();
  }
LAB_0099e8cc:
  local_90.tv_sec._0_4_ = param_3;
  local_90.tv_usec = (__suseconds_t)pvVar3;
  ThreadSafeQueue<cocos2d::ThreadPool::Task>::push
            ((ThreadSafeQueue<cocos2d::ThreadPool::Task> *)(this + 0x60),(Task *)&local_90);
  std::__ndk1::mutex::lock((mutex *)(this + 0xe8));
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xe8));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

