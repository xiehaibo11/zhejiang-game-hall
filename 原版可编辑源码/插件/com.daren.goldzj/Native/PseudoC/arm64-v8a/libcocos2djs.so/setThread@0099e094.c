
/* cocos2d::ThreadPool::setThread(int) */

void __thiscall cocos2d::ThreadPool::setThread(ThreadPool *this,int param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  __shared_weak_count *this_00;
  char cVar3;
  bool bVar4;
  int iVar5;
  pthread_t *__newthread;
  __thread_struct *this_01;
  undefined8 *puVar6;
  thread *this_02;
  long lVar7;
  
                    /* try { // try from 0099e0a0 to 00a9e0f7 has its CatchHandler @ 0099e0a0
                       catch() { ... } // from try @ 0099e0a0 with catch @ 0099e0a0
                       catch() { ... } // from try @ 0099e318 with catch @ 0099e0a0 */
  puVar6 = (undefined8 *)(*(long *)(this + 0x18) + (long)param_1 * 0x10);
  uVar2 = *puVar6;
  this_00 = (__shared_weak_count *)puVar6[1];
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar7 = *(long *)this;
                    /* try { // try from 0099e0f8 to 00a9e10f has its CatchHandler @ 0099e34c */
  __newthread = operator_new(8,(nothrow_t *)&std::nothrow);
  if (__newthread != (pthread_t *)0x0) {
    this_01 = operator_new(8);
    std::__ndk1::__thread_struct::__thread_struct(this_01);
                    /* try { // try from 0099e118 to 00a9e123 has its CatchHandler @ 0099e330 */
    puVar6 = operator_new(0x28);
    if (this_00 != (__shared_weak_count *)0x0) {
                    /* try { // try from 0099e124 to 00a9e12f has its CatchHandler @ 0099e32c */
      p_Var1 = this_00 + 8;
      do {
                    /* try { // try from 0099e130 to 00a9e147 has its CatchHandler @ 0099e35c */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *puVar6 = this_01;
    puVar6[1] = this;
    *(int *)(puVar6 + 2) = param_1;
    puVar6[3] = uVar2;
    puVar6[4] = this_00;
    iVar5 = pthread_create(__newthread,(pthread_attr_t *)0x0,FUN_009a0050,puVar6);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__throw_system_error(iVar5,"thread constructor failed");
    }
  }
  this_02 = *(thread **)(lVar7 + (long)param_1 * 8);
                    /* try { // try from 0099e16c to 00a9e19f has its CatchHandler @ 0099e334 */
  *(pthread_t **)(lVar7 + (long)param_1 * 8) = __newthread;
  if (this_02 != (thread *)0x0) {
    std::__ndk1::thread::~thread(this_02);
    operator_delete(this_02);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    do {
      lVar7 = *(long *)p_Var1;
                    /* try { // try from 0099e1bc to 00a9e25f has its CatchHandler @ 0099e35c */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
      return;
    }
  }
  return;
}

