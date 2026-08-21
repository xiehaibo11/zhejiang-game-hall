
/* cocos2d::network::WebSocket::onConnectionClosed() */

undefined8 __thiscall cocos2d::network::WebSocket::onConnectionClosed(WebSocket *this)

{
  mutex *this_00;
  mutex *this_01;
  __shared_weak_count *p_Var1;
  __shared_weak_count *this_02;
  char cVar2;
  bool bVar3;
  long lVar4;
  WsThreadHelper *this_03;
  code *pcVar5;
  long lVar6;
  undefined **local_80;
  WebSocket *local_78;
  undefined8 uStack_70;
  __shared_weak_count *local_68;
  long *local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this_00 = (mutex *)(this + 8);
  std::__ndk1::mutex::lock(this_00);
  if (*(int *)(this + 0x30) != 3) {
    if ((*(int *)(this + 0x30) != 2) || (*(int *)(this + 0x130) != 1)) {
      *(undefined4 *)(this + 0x30) = 3;
      this_03 = (WsThreadHelper *)std::__ndk1::mutex::unlock(this_00);
      uStack_70 = *(undefined8 *)(this + 0xa8);
      this_02 = *(__shared_weak_count **)(this + 0xb0);
      if (this_02 != (__shared_weak_count *)0x0) {
        p_Var1 = this_02 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_80 = &PTR_FUN_016f4a58;
      local_78 = this;
      local_68 = this_02;
      local_60 = (long *)&local_80;
      WsThreadHelper::sendMessageToCocosThread(this_03,(function *)&local_80);
      if (&local_80 == (undefined ***)local_60) {
        pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00ea0288:
        (*pcVar5)();
      }
      else if (local_60 != (long *)0x0) {
        pcVar5 = *(code **)(*local_60 + 0x28);
        goto LAB_00ea0288;
      }
      if (this_02 != (__shared_weak_count *)0x0) {
        p_Var1 = this_02 + 8;
        do {
          lVar6 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*(long *)this_02 + 0x10))(this_02);
          std::__ndk1::__shared_weak_count::__release_weak(this_02);
        }
      }
      goto LAB_00ea02d4;
    }
    this_01 = (mutex *)(this + 0xc0);
    while( true ) {
      std::__ndk1::mutex::lock(this_01);
      std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0xe8));
      if (*(int *)(this + 0x130) == 2) break;
      local_80 = (undefined **)0xf4240;
      std::__ndk1::this_thread::sleep_for((duration *)&local_80);
      std::__ndk1::mutex::unlock(this_01);
    }
    std::__ndk1::mutex::unlock(this_01);
  }
  std::__ndk1::mutex::unlock(this_00);
LAB_00ea02d4:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

