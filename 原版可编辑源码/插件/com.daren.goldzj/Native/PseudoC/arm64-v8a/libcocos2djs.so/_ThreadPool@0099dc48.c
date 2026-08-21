
/* cocos2d::ThreadPool::~ThreadPool() */

void __thiscall cocos2d::ThreadPool::~ThreadPool(ThreadPool *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  __shared_weak_count *p_Var7;
  thread *this_00;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  
  stop(this);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x110));
                    /* try { // try from 0099dc6c to 00a9dc83 has its CatchHandler @ 0099df14 */
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xe8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xc0));
  ThreadSafeQueue<cocos2d::ThreadPool::Task>::~ThreadSafeQueue
            ((ThreadSafeQueue<cocos2d::ThreadPool::Task> *)(this + 0x60));
  pvVar8 = *(void **)(this + 0x48);
  if (pvVar8 != (void *)0x0) {
    pvVar10 = *(void **)(this + 0x50);
                    /* try { // try from 0099dc8c to 00a9dc97 has its CatchHandler @ 0099df10 */
    pvVar4 = pvVar8;
    if (pvVar10 != pvVar8) {
      do {
        while( true ) {
          p_Var7 = *(__shared_weak_count **)((long)pvVar10 + -8);
                    /* try { // try from 0099dc98 to 00a9dca3 has its CatchHandler @ 0099df0c */
          pvVar10 = (void *)((long)pvVar10 + -0x10);
          if (p_Var7 != (__shared_weak_count *)0x0) break;
LAB_0099dcb8:
          if (pvVar10 == pvVar8) goto LAB_0099dce4;
        }
        p_Var1 = p_Var7 + 8;
        do {
                    /* try { // try from 0099dca4 to 00a9dcbb has its CatchHandler @ 0099df24 */
          lVar6 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) goto LAB_0099dcb8;
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
                    /* try { // try from 0099dcd8 to 00a9dcdf has its CatchHandler @ 0099def4 */
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      } while (pvVar10 != pvVar8);
LAB_0099dce4:
      pvVar4 = *(void **)(this + 0x48);
    }
    *(void **)(this + 0x50) = pvVar8;
    operator_delete(pvVar4);
  }
  pvVar8 = *(void **)(this + 0x30);
                    /* try { // try from 0099dcfc to 00a9dd1b has its CatchHandler @ 0099def0 */
  if (pvVar8 != (void *)0x0) {
    pvVar10 = *(void **)(this + 0x38);
    pvVar4 = pvVar8;
    if (pvVar10 != pvVar8) {
      do {
        while( true ) {
          p_Var7 = *(__shared_weak_count **)((long)pvVar10 + -8);
          pvVar10 = (void *)((long)pvVar10 + -0x10);
          if (p_Var7 != (__shared_weak_count *)0x0) break;
LAB_0099dd30:
                    /* try { // try from 0099dd30 to 00a9dd97 has its CatchHandler @ 0099df24 */
          if (pvVar10 == pvVar8) goto LAB_0099dd5c;
        }
        p_Var1 = p_Var7 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) goto LAB_0099dd30;
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      } while (pvVar10 != pvVar8);
LAB_0099dd5c:
      pvVar4 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar8;
    operator_delete(pvVar4);
  }
  pvVar8 = *(void **)(this + 0x18);
  if (pvVar8 != (void *)0x0) {
    pvVar10 = *(void **)(this + 0x20);
    pvVar4 = pvVar8;
    if (pvVar10 != pvVar8) {
      do {
        while( true ) {
          p_Var7 = *(__shared_weak_count **)((long)pvVar10 + -8);
          pvVar10 = (void *)((long)pvVar10 + -0x10);
          if (p_Var7 != (__shared_weak_count *)0x0) break;
LAB_0099dda8:
          if (pvVar10 == pvVar8) goto LAB_0099ddd4;
        }
        p_Var1 = p_Var7 + 8;
        do {
          lVar6 = *(long *)p_Var1;
                    /* try { // try from 0099dd9c to 00a9dddf has its CatchHandler @ 0099def4 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 != 0) goto LAB_0099dda8;
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      } while (pvVar10 != pvVar8);
LAB_0099ddd4:
      pvVar4 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar8;
                    /* try { // try from 0099dde4 to 00a9de27 has its CatchHandler @ 0099def0 */
    operator_delete(pvVar4);
  }
  puVar9 = *(undefined8 **)this;
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  puVar11 = *(undefined8 **)(this + 8);
  puVar5 = puVar9;
  if (puVar11 != puVar9) {
    do {
      puVar11 = puVar11 + -1;
      this_00 = (thread *)*puVar11;
      *puVar11 = 0;
      if (this_00 != (thread *)0x0) {
        std::__ndk1::thread::~thread(this_00);
        operator_delete(this_00);
      }
    } while (puVar9 != puVar11);
    puVar5 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar9;
                    /* try { // try from 0099de40 to 00a9de7b has its CatchHandler @ 0099df24 */
  operator_delete(puVar5);
  return;
}

