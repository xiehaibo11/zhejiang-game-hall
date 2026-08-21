
/* cocos2d::ThreadPool::tryShrinkPool() */

void __thiscall cocos2d::ThreadPool::tryShrinkPool(ThreadPool *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  thread *this_00;
  timeval local_80;
  uint *local_70;
  uint *local_68;
  uint *puStack_60;
  timeval local_58;
  long local_48;
  
                    /* catch() { ... } // from try @ 0099e124 with catch @ 0099e32c */
                    /* catch() { ... } // from try @ 0099e118 with catch @ 0099e330 */
                    /* catch() { ... } // from try @ 0099e16c with catch @ 0099e334
                       catch() { ... } // from try @ 0099e2d4 with catch @ 0099e334 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0099e0f8 with catch @ 0099e34c */
  std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
  uVar1 = *(undefined4 *)(this + 0xbc);
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
                    /* catch() { ... } // from try @ 0099e130 with catch @ 0099e35c
                       catch() { ... } // from try @ 0099e1bc with catch @ 0099e35c */
  __android_log_print(3,"ThreadPool","shrink pool, _idleThreadNum = %d \n",uVar1);
  gettimeofday(&local_58,(__timezone_ptr_t)0x0);
  local_68 = (uint *)0x0;
  puStack_60 = (uint *)0x0;
  local_70 = (uint *)0x0;
  local_80.tv_sec._0_4_ = 0;
  iVar2 = *(int *)(this + 0x164);
  if (*(int *)(this + 0x148) - *(int *)(this + 0x140) <= *(int *)(this + 0x164)) {
    iVar2 = *(int *)(this + 0x148) - *(int *)(this + 0x140);
  }
                    /* try { // try from 0099e3b4 to 00a9e403 has its CatchHandler @ 0099e3b4
                       catch() { ... } // from try @ 0099e3b4 with catch @ 0099e3b4
                       catch() { ... } // from try @ 0099e4c4 with catch @ 0099e3b4 */
  if ((0 < *(int *)(this + 0x144)) && (0 < iVar2)) {
    uVar7 = 0;
    do {
      if ((**(byte **)(*(long *)(this + 0x30) + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4)
                      ) & 1) != 0) {
        **(undefined4 **)(*(long *)(this + 0x18) + (long)(int)(uint)local_80.tv_sec * 0x10) = 1;
        if (local_68 == puStack_60) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_70,(int *)&local_80);
        }
        else {
          *local_68 = (uint)local_80.tv_sec;
          local_68 = local_68 + 1;
                    /* try { // try from 0099e404 to 00a9e41b has its CatchHandler @ 0099e574 */
        }
      }
      local_80.tv_sec._0_4_ = (uint)local_80.tv_sec + 1;
      uVar7 = (ulong)(uint)local_80.tv_sec;
    } while (((int)(uint)local_80.tv_sec < *(int *)(this + 0x144)) &&
            ((int)((ulong)((long)local_68 - (long)local_70) >> 2) < iVar2
                    /* try { // try from 0099e430 to 00a9e443 has its CatchHandler @ 0099e570 */));
  }
                    /* try { // try from 0099e444 to 00a9e453 has its CatchHandler @ 0099e55c */
  std::__ndk1::mutex::lock((mutex *)(this + 0xe8));
  std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xe8));
  puVar6 = local_68;
  for (puVar5 = local_70; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    lVar8 = (long)(int)*puVar5;
                    /* try { // try from 0099e46c to 00a9e473 has its CatchHandler @ 0099e540 */
    puVar9 = (undefined8 *)(*(long *)this + lVar8 * 8);
                    /* try { // try from 0099e474 to 00a9e48b has its CatchHandler @ 0099e584 */
    this_00 = (thread *)*puVar9;
    if (*(long *)this_00 != 0) {
      std::__ndk1::thread::join(this_00);
      lVar8 = (long)(int)*puVar5;
                    /* try { // try from 0099e48c to 00a9e493 has its CatchHandler @ 0099e558 */
      puVar9 = (undefined8 *)(*(long *)this + lVar8 * 8);
                    /* try { // try from 0099e494 to 00a9e4c3 has its CatchHandler @ 0099e560 */
      this_00 = (thread *)*puVar9;
    }
    *puVar9 = 0;
    if (this_00 != (thread *)0x0) {
      std::__ndk1::thread::~thread(this_00);
      operator_delete(this_00);
      lVar8 = (long)(int)*puVar5;
    }
                    /* try { // try from 0099e4c4 to 00a9e5db has its CatchHandler @ 0099e3b4 */
    **(undefined4 **)(*(long *)(this + 0x48) + lVar8 * 0x10) = 0;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
  }
  gettimeofday(&local_80,(__timezone_ptr_t)0x0);
  __android_log_print((double)((float)(local_80.tv_usec - local_58.tv_usec) / 1e+06 +
                              (float)(CONCAT44(local_80.tv_sec._4_4_,(uint)local_80.tv_sec) -
                                     local_58.tv_sec)),3,"ThreadPool",
                      "shrink %d threads, waste: %f seconds\n",
                      (ulong)((long)local_68 - (long)local_70) >> 2);
  iVar2 = *(int *)(this + 0x148);
                    /* catch() { ... } // from try @ 0099e46c with catch @ 0099e540 */
  iVar3 = *(int *)(this + 0x140);
  if (local_70 != (uint *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
                    /* catch() { ... } // from try @ 0099e48c with catch @ 0099e558 */
                    /* catch() { ... } // from try @ 0099e444 with catch @ 0099e55c */
                    /* catch() { ... } // from try @ 0099e494 with catch @ 0099e560 */
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 <= iVar3);
  }
                    /* catch() { ... } // from try @ 0099e430 with catch @ 0099e570 */
                    /* catch() { ... } // from try @ 0099e404 with catch @ 0099e574 */
  return;
}

