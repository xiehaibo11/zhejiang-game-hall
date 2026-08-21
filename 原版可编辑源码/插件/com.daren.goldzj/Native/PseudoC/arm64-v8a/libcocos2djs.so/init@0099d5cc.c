
/* cocos2d::ThreadPool::init() */

void __thiscall cocos2d::ThreadPool::init(ThreadPool *this)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  thread *this_00;
  vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
  *this_01;
  vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
  *this_02;
  long lVar12;
  vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
  *this_03;
  __shared_weak_count *p_Var13;
  
                    /* try { // try from 0099d5e4 to 00a9d64b has its CatchHandler @ 0099d70c */
  gettimeofday((timeval *)(this + 0x150),(__timezone_ptr_t)0x0);
  puVar7 = *(undefined8 **)(this + 8);
  iVar3 = *(int *)(this + 0x144);
  if (*(int *)(this + 0x144) <= *(int *)(this + 0x140)) {
    iVar3 = *(int *)(this + 0x140);
  }
  uVar8 = (ulong)iVar3;
  uVar11 = (long)puVar7 - *(long *)this >> 3;
  *(int *)(this + 0x144) = iVar3;
  if (uVar11 < uVar8) {
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
    ::__append((vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
                *)this,uVar8 - uVar11);
  }
  else if (uVar11 != uVar8) {
    puVar6 = (undefined8 *)(*(long *)this + uVar8 * 8);
                    /* try { // try from 0099d654 to 00a9d68f has its CatchHandler @ 0099d72c */
    while (puVar6 != puVar7) {
      puVar7 = puVar7 + -1;
      this_00 = (thread *)*puVar7;
      *puVar7 = 0;
      if (this_00 != (thread *)0x0) {
        std::__ndk1::thread::~thread(this_00);
        operator_delete(this_00);
      }
    }
    *(undefined8 **)(this + 8) = puVar6;
  }
  this_01 = (vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
             *)(this + 0x18);
  lVar12 = *(long *)(this + 0x20);
  uVar8 = (ulong)*(int *)(this + 0x144);
  uVar11 = lVar12 - *(long *)this_01 >> 4;
  if (uVar11 < uVar8) {
                    /* try { // try from 0099d690 to 00a9d783 has its CatchHandler @ 0099d518 */
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
    ::__append(this_01,uVar8 - uVar11);
  }
  else if (uVar11 != uVar8) {
    lVar10 = *(long *)this_01 + uVar8 * 0x10;
joined_r0x0099d6a8:
    if (lVar10 != lVar12) {
      do {
        p_Var13 = *(__shared_weak_count **)(lVar12 + -8);
        lVar12 = lVar12 + -0x10;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var13 + 8;
          do {
            lVar9 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) goto LAB_0099d6dc;
        }
        if (lVar12 == lVar10) break;
      } while( true );
    }
    *(long *)(this + 0x20) = lVar10;
  }
                    /* catch() { ... } // from try @ 0099d598 with catch @ 0099d704 */
  this_02 = (vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
             *)(this + 0x30);
                    /* catch() { ... } // from try @ 0099d58c with catch @ 0099d708 */
  lVar12 = *(long *)(this + 0x38);
                    /* catch() { ... } // from try @ 0099d5e4 with catch @ 0099d70c */
  uVar8 = (ulong)*(int *)(this + 0x144);
  uVar11 = lVar12 - *(long *)this_02 >> 4;
                    /* catch() { ... } // from try @ 0099d56c with catch @ 0099d71c */
  if (uVar11 < uVar8) {
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
    ::__append(this_02,uVar8 - uVar11);
                    /* catch() { ... } // from try @ 0099d5a4 with catch @ 0099d72c
                       catch() { ... } // from try @ 0099d654 with catch @ 0099d72c */
  }
  else if (uVar11 != uVar8) {
    lVar10 = *(long *)this_02 + uVar8 * 0x10;
joined_r0x0099d73c:
    if (lVar10 != lVar12) {
      do {
        p_Var13 = *(__shared_weak_count **)(lVar12 + -8);
        lVar12 = lVar12 + -0x10;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var13 + 8;
          do {
            lVar9 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) goto LAB_0099d770;
        }
        if (lVar12 == lVar10) break;
      } while( true );
    }
    *(long *)(this + 0x38) = lVar10;
  }
  this_03 = (vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
             *)(this + 0x48);
  lVar12 = *(long *)(this + 0x50);
  uVar8 = (ulong)*(int *)(this + 0x144);
  uVar11 = lVar12 - *(long *)this_03 >> 4;
  if (uVar11 < uVar8) {
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
    ::__append(this_03,uVar8 - uVar11);
  }
  else if (uVar11 != uVar8) {
    lVar10 = *(long *)this_03 + uVar8 * 0x10;
joined_r0x0099d7d0:
    if (lVar10 != lVar12) {
      do {
        p_Var13 = *(__shared_weak_count **)(lVar12 + -8);
                    /* try { // try from 0099d7d8 to 00a9d7ef has its CatchHandler @ 0099d9a4 */
        lVar12 = lVar12 + -0x10;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var13 + 8;
          do {
            lVar9 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) goto LAB_0099d804;
        }
                    /* try { // try from 0099d7f8 to 00a9d803 has its CatchHandler @ 0099d988 */
        if (lVar12 == lVar10) break;
      } while( true );
    }
    *(long *)(this + 0x50) = lVar10;
  }
  if (0 < *(int *)(this + 0x144)) {
    lVar12 = 0;
    do {
      puVar6 = operator_new(0x20);
                    /* try { // try from 0099d850 to 00a9d863 has its CatchHandler @ 0099d98c */
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR____shared_weak_count_01c6a670;
      *(undefined1 *)(puVar6 + 3) = 0;
      puVar7 = (undefined8 *)(*(long *)this_02 + lVar12 * 0x10);
      p_Var13 = (__shared_weak_count *)puVar7[1];
      *puVar7 = puVar6 + 3;
      puVar7[1] = puVar6;
      if (p_Var13 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var13 + 8;
        do {
          lVar10 = *(long *)p_Var1;
                    /* try { // try from 0099d880 to 00a9d8bb has its CatchHandler @ 0099d9b4 */
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
        }
      }
      iVar3 = *(int *)(this + 0x140);
      puVar7 = operator_new(0x20);
      *puVar7 = &PTR____shared_weak_count_01c6a670;
      puVar7[1] = 0;
      puVar7[2] = 0;
      if (lVar12 < iVar3) {
        *(undefined1 *)(puVar7 + 3) = 0;
        plVar2 = (long *)(*(long *)this_01 + lVar12 * 0x10);
        p_Var13 = (__shared_weak_count *)plVar2[1];
        *plVar2 = (long)(puVar7 + 3);
        plVar2[1] = (long)puVar7;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var13 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
        setThread(this,(int)lVar12);
        puVar6 = operator_new(0x20);
                    /* try { // try from 0099d92c to 00a9d96f has its CatchHandler @ 0099d98c */
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR____shared_weak_count_01c6a670;
        *(undefined1 *)(puVar6 + 3) = 1;
        puVar7 = (undefined8 *)(*(long *)(this + 0x48) + lVar12 * 0x10);
        p_Var13 = (__shared_weak_count *)puVar7[1];
        *puVar7 = puVar6 + 3;
        puVar7[1] = puVar6;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var13 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
                    /* try { // try from 0099d970 to 00a9da0b has its CatchHandler @ 0099d784 */
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
                    /* catch() { ... } // from try @ 0099d804 with catch @ 0099d984 */
        *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
                    /* catch() { ... } // from try @ 0099d7f8 with catch @ 0099d988 */
      }
      else {
                    /* catch() { ... } // from try @ 0099d850 with catch @ 0099d98c
                       catch() { ... } // from try @ 0099d92c with catch @ 0099d98c */
        *(undefined1 *)(puVar7 + 3) = 1;
        plVar2 = (long *)(*(long *)this_01 + lVar12 * 0x10);
        p_Var13 = (__shared_weak_count *)plVar2[1];
        *plVar2 = (long)(puVar7 + 3);
        plVar2[1] = (long)puVar7;
        if (p_Var13 != (__shared_weak_count *)0x0) {
                    /* catch() { ... } // from try @ 0099d7d8 with catch @ 0099d9a4 */
          p_Var1 = p_Var13 + 8;
          do {
            lVar10 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
                    /* catch() { ... } // from try @ 0099d810 with catch @ 0099d9b4
                       catch() { ... } // from try @ 0099d880 with catch @ 0099d9b4 */
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
        puVar6 = operator_new(0x20);
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR____shared_weak_count_01c6a670;
        *(undefined1 *)(puVar6 + 3) = 0;
        puVar7 = (undefined8 *)(*(long *)this_03 + lVar12 * 0x10);
        p_Var13 = (__shared_weak_count *)puVar7[1];
        *puVar7 = puVar6 + 3;
        puVar7[1] = puVar6;
        if (p_Var13 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var13 + 8;
          do {
            lVar10 = *(long *)p_Var1;
                    /* catch() { ... } // from try @ 0099da60 with catch @ 0099da0c */
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(this + 0x144));
  }
                    /* try { // try from 0099da50 to 00a9da5f has its CatchHandler @ 0099dbfc */
  return;
LAB_0099d6dc:
  (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
  std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
  goto joined_r0x0099d6a8;
LAB_0099d770:
  (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
                    /* try { // try from 0099d784 to 00a9d7d7 has its CatchHandler @ 0099d784
                       catch() { ... } // from try @ 0099d784 with catch @ 0099d784
                       catch() { ... } // from try @ 0099d970 with catch @ 0099d784 */
  std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
  goto joined_r0x0099d73c;
LAB_0099d804:
                    /* try { // try from 0099d804 to 00a9d80f has its CatchHandler @ 0099d984 */
                    /* try { // try from 0099d810 to 00a9d84f has its CatchHandler @ 0099d9b4 */
  (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
  std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
  goto joined_r0x0099d7d0;
}

