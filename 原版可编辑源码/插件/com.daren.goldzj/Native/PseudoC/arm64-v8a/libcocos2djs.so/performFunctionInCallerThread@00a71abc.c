
/* CallerThreadUtils::performFunctionInCallerThread(std::__ndk1::function<void ()> const&) */

void __thiscall
CallerThreadUtils::performFunctionInCallerThread(CallerThreadUtils *this,function *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  long lVar4;
  
  this_01 = DAT_01d35b10;
  this_00 = cocos2d::Application::_scheduler;
                    /* catch() { ... } // from try @ 00a71944 with catch @ 00a71ac4 */
                    /* catch() { ... } // from try @ 00a71938 with catch @ 00a71ac8 */
                    /* catch() { ... } // from try @ 00a71990 with catch @ 00a71acc
                       catch() { ... } // from try @ 00a71a6c with catch @ 00a71acc */
  if (DAT_01d35b10 == (__shared_weak_count *)0x0) {
    cocos2d::Scheduler::performFunctionInCocosThread(cocos2d::Application::_scheduler,param_1);
    return;
  }
  p_Var1 = DAT_01d35b10 + 8;
  do {
                    /* catch() { ... } // from try @ 00a71918 with catch @ 00a71ae4 */
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = *(long *)p_Var1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  cocos2d::Scheduler::performFunctionInCocosThread(this_00,param_1);
  do {
    lVar4 = *(long *)p_Var1;
                    /* catch() { ... } // from try @ 00a71950 with catch @ 00a71af4
                       catch() { ... } // from try @ 00a719c0 with catch @ 00a71af4 */
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar3) {
      *(long *)p_Var1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  (**(code **)(*(long *)this_01 + 0x10))(this_01);
  std::__ndk1::__shared_weak_count::__release_weak(this_01);
  return;
}

