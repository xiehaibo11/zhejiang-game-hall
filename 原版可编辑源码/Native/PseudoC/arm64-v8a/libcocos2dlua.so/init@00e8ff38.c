
/* cocos2d::experimental::ThreadPool::init() */

void __thiscall cocos2d::experimental::ThreadPool::init(ThreadPool *this)

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
    while (puVar6 != puVar7) {
      while( true ) {
        puVar7 = puVar7 + -1;
        this_00 = (thread *)*puVar7;
        *puVar7 = 0;
        if (this_00 == (thread *)0x0) break;
        std::__ndk1::thread::~thread(this_00);
        operator_delete(this_00);
        if (puVar6 == puVar7) goto LAB_00e8ffd4;
      }
    }
LAB_00e8ffd4:
    *(undefined8 **)(this + 8) = puVar6;
  }
  this_01 = (vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
             *)(this + 0x18);
  lVar12 = *(long *)(this + 0x20);
  uVar8 = (ulong)*(int *)(this + 0x144);
  uVar11 = lVar12 - *(long *)this_01 >> 4;
  if (uVar11 < uVar8) {
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
    ::__append(this_01,uVar8 - uVar11);
  }
  else if (uVar11 != uVar8) {
    lVar10 = *(long *)this_01 + uVar8 * 0x10;
    while (lVar10 != lVar12) {
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
        if (lVar9 == 0) {
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
        }
      }
    }
    *(long *)(this + 0x20) = lVar10;
  }
  this_02 = (vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
             *)(this + 0x30);
  lVar12 = *(long *)(this + 0x38);
  uVar8 = (ulong)*(int *)(this + 0x144);
  uVar11 = lVar12 - *(long *)this_02 >> 4;
  if (uVar11 < uVar8) {
    std::__ndk1::
    vector<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>,std::__ndk1::allocator<std::__ndk1::shared_ptr<std::__ndk1::atomic<bool>>>>
    ::__append(this_02,uVar8 - uVar11);
  }
  else if (uVar11 != uVar8) {
    lVar10 = *(long *)this_02 + uVar8 * 0x10;
    while (lVar10 != lVar12) {
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
        if (lVar9 == 0) {
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
        }
      }
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
    while (lVar10 != lVar12) {
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
        if (lVar9 == 0) {
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
        }
      }
    }
    *(long *)(this + 0x50) = lVar10;
  }
  if (0 < *(int *)(this + 0x144)) {
    lVar12 = 0;
    do {
      puVar6 = operator_new(0x20);
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR____shared_weak_count_016f41c0;
      *(undefined1 *)(puVar6 + 3) = 0;
      puVar7 = (undefined8 *)(*(long *)this_02 + lVar12 * 0x10);
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
          (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
        }
      }
      iVar3 = *(int *)(this + 0x140);
      puVar7 = operator_new(0x20);
      *puVar7 = &PTR____shared_weak_count_016f41c0;
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
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR____shared_weak_count_016f41c0;
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
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
        *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
      }
      else {
        *(undefined1 *)(puVar7 + 3) = 1;
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
        puVar6 = operator_new(0x20);
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR____shared_weak_count_016f41c0;
        *(undefined1 *)(puVar6 + 3) = 0;
        puVar7 = (undefined8 *)(*(long *)this_03 + lVar12 * 0x10);
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
            (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(this + 0x144));
  }
  return;
}

