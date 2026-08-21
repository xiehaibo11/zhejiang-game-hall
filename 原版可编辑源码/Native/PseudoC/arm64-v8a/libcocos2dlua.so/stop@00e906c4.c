
/* cocos2d::experimental::ThreadPool::stop() */

void __thiscall cocos2d::experimental::ThreadPool::stop(ThreadPool *this)

{
  __shared_weak_count *p_Var1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  thread *ptVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  __shared_weak_count *this_00;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if ((((byte)this[0xb8] & 1) == 0) && (((byte)this[0xb9] & 1) == 0)) {
    *(undefined4 *)(this + 0xb8) = 1;
    std::__ndk1::mutex::lock((mutex *)(this + 0xe8));
    std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x110));
    std::__ndk1::mutex::unlock((mutex *)(this + 0xe8));
    lVar6 = *(long *)this;
    lVar10 = *(long *)(this + 8);
    uVar7 = lVar10 - lVar6;
    if (0 < (int)(uVar7 >> 3)) {
      lVar11 = 0;
      uVar8 = 0;
      while( true ) {
        if (uVar8 < (ulong)(lVar10 - lVar6 >> 3)) {
          if (((**(byte **)(*(long *)(this + 0x48) + lVar11) & 1) != 0) &&
             (ptVar5 = *(thread **)(*(long *)this + uVar8 * 8), *(long *)ptVar5 != 0)) {
            std::__ndk1::thread::join(ptVar5);
            **(undefined4 **)(*(long *)(this + 0x48) + lVar11) = 0;
            *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
          }
        }
        else {
          __android_log_print(3,"ThreadPool","Invalid thread id %d\n",uVar8 & 0xffffffff);
        }
        if ((uVar7 >> 3 & 0xffffffff) - 1 == uVar8) break;
        lVar6 = *(long *)this;
        lVar10 = *(long *)(this + 8);
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x10;
      }
    }
    stopAllTasks(this);
    puVar2 = *(undefined8 **)this;
    puVar9 = *(undefined8 **)(this + 8);
    while (puVar9 != puVar2) {
      puVar9 = puVar9 + -1;
      ptVar5 = (thread *)*puVar9;
      *puVar9 = 0;
      if (ptVar5 != (thread *)0x0) {
        std::__ndk1::thread::~thread(ptVar5);
        operator_delete(ptVar5);
      }
    }
    lVar6 = *(long *)(this + 0x18);
    lVar10 = *(long *)(this + 0x20);
    *(undefined8 **)(this + 8) = puVar2;
    while (lVar10 != lVar6) {
      this_00 = *(__shared_weak_count **)(lVar10 + -8);
      lVar10 = lVar10 + -0x10;
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var1 = this_00 + 8;
        do {
          lVar11 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
    }
    *(long *)(this + 0x20) = lVar6;
  }
  return;
}

