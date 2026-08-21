
/* WsThreadHelper::sendMessageToCocosThread(std::__ndk1::function<void ()> const&) */

void __thiscall WsThreadHelper::sendMessageToCocosThread(WsThreadHelper *this,function *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  long lVar4;
  
  this_01 = DAT_01d35b10;
  this_00 = cocos2d::Application::_scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  cocos2d::Scheduler::performFunctionInCocosThread(this_00,param_1);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
      return;
    }
  }
  return;
}

