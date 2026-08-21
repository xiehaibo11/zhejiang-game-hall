
/* cocos2d::experimental::ThreadPool::~ThreadPool() */

void __thiscall cocos2d::experimental::ThreadPool::~ThreadPool(ThreadPool *this)

{
  long lVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  __shared_weak_count *p_Var12;
  thread *this_00;
  void *pvVar13;
  undefined8 *puVar14;
  void *pvVar15;
  undefined8 *puVar16;
  
  stop(this);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xe8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xc0));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x90));
  puVar14 = *(undefined8 **)(this + 0x68);
  puVar6 = *(undefined8 **)(this + 0x70);
  lVar7 = (long)puVar6 - (long)puVar14;
  if (lVar7 != 0) {
    uVar10 = *(ulong *)(this + 0x80);
    plVar9 = (long *)((long)puVar14 + (uVar10 >> 5 & 0x7fffffffffffff8));
    lVar11 = *plVar9 + (uVar10 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar14 + (*(long *)(this + 0x88) + uVar10 >> 5 & 0x7fffffffffffff8)) +
            (*(long *)(this + 0x88) + uVar10 & 0xff) * 0x10;
    while (lVar1 != lVar11) {
      while (lVar11 = lVar11 + 0x10, lVar11 - *plVar9 == 0x1000) {
        plVar9 = plVar9 + 1;
        lVar11 = *plVar9;
        if (lVar1 == lVar11) goto LAB_00e90470;
      }
    }
  }
LAB_00e90470:
  *(undefined8 *)(this + 0x88) = 0;
  while (uVar10 = lVar7 >> 3, 2 < uVar10) {
    operator_delete((void *)*puVar14);
    puVar6 = *(undefined8 **)(this + 0x70);
    puVar14 = (undefined8 *)(*(long *)(this + 0x68) + 8);
    *(undefined8 **)(this + 0x68) = puVar14;
    lVar7 = (long)puVar6 - (long)puVar14;
  }
  if (uVar10 == 1) {
    uVar8 = 0x80;
  }
  else {
    if (uVar10 != 2) goto LAB_00e904c4;
    uVar8 = 0x100;
  }
  *(undefined8 *)(this + 0x80) = uVar8;
LAB_00e904c4:
  if (puVar14 != puVar6) {
    do {
      puVar16 = puVar14 + 1;
      operator_delete((void *)*puVar14);
      puVar14 = puVar16;
    } while (puVar6 != puVar16);
    lVar7 = *(long *)(this + 0x70) - *(long *)(this + 0x68);
    if (lVar7 != 0) {
      *(ulong *)(this + 0x70) = *(long *)(this + 0x70) + (lVar7 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x60));
  }
  pvVar13 = *(void **)(this + 0x48);
  if (pvVar13 != (void *)0x0) {
    pvVar15 = *(void **)(this + 0x50);
    pvVar5 = pvVar13;
    if (pvVar15 != pvVar13) {
      do {
        p_Var12 = *(__shared_weak_count **)((long)pvVar15 + -8);
        pvVar15 = (void *)((long)pvVar15 + -0x10);
        if (p_Var12 != (__shared_weak_count *)0x0) {
          p_Var2 = p_Var12 + 8;
          do {
            lVar7 = *(long *)p_Var2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar4) {
              *(long *)p_Var2 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
          }
        }
      } while (pvVar15 != pvVar13);
      pvVar5 = *(void **)(this + 0x48);
    }
    *(void **)(this + 0x50) = pvVar13;
    operator_delete(pvVar5);
  }
  pvVar13 = *(void **)(this + 0x30);
  if (pvVar13 != (void *)0x0) {
    pvVar15 = *(void **)(this + 0x38);
    pvVar5 = pvVar13;
    if (pvVar15 != pvVar13) {
      do {
        p_Var12 = *(__shared_weak_count **)((long)pvVar15 + -8);
        pvVar15 = (void *)((long)pvVar15 + -0x10);
        if (p_Var12 != (__shared_weak_count *)0x0) {
          p_Var2 = p_Var12 + 8;
          do {
            lVar7 = *(long *)p_Var2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar4) {
              *(long *)p_Var2 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
          }
        }
      } while (pvVar15 != pvVar13);
      pvVar5 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar13;
    operator_delete(pvVar5);
  }
  pvVar13 = *(void **)(this + 0x18);
  if (pvVar13 != (void *)0x0) {
    pvVar15 = *(void **)(this + 0x20);
    pvVar5 = pvVar13;
    if (pvVar15 != pvVar13) {
      do {
        p_Var12 = *(__shared_weak_count **)((long)pvVar15 + -8);
        pvVar15 = (void *)((long)pvVar15 + -0x10);
        if (p_Var12 != (__shared_weak_count *)0x0) {
          p_Var2 = p_Var12 + 8;
          do {
            lVar7 = *(long *)p_Var2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar4) {
              *(long *)p_Var2 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*(long *)p_Var12 + 0x10))(p_Var12);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var12);
          }
        }
      } while (pvVar15 != pvVar13);
      pvVar5 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar13;
    operator_delete(pvVar5);
  }
  puVar14 = *(undefined8 **)this;
  if (puVar14 != (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(this + 8);
    puVar6 = puVar14;
    if (puVar16 != puVar14) {
      do {
        puVar16 = puVar16 + -1;
        this_00 = (thread *)*puVar16;
        *puVar16 = 0;
        if (this_00 != (thread *)0x0) {
          std::__ndk1::thread::~thread(this_00);
          operator_delete(this_00);
        }
      } while (puVar14 != puVar16);
      puVar6 = *(undefined8 **)this;
    }
    *(undefined8 **)(this + 8) = puVar14;
    operator_delete(puVar6);
    return;
  }
  return;
}

