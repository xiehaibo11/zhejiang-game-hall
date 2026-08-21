
/* cocos2d::network::WebSocket::onConnectionOpened() */

undefined8 __thiscall cocos2d::network::WebSocket::onConnectionOpened(WebSocket *this)

{
  mutex *this_00;
  __shared_weak_count *p_Var1;
  __shared_weak_count *this_01;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  WsThreadHelper *this_02;
  code *pcVar7;
  long lVar8;
  char *__s;
  undefined **local_70;
  WebSocket *local_68;
  undefined8 uStack_60;
  __shared_weak_count *local_58;
  long *local_50;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)lws_get_protocol(*(undefined8 *)(this + 0x68));
  __s = (char *)*puVar5;
  sVar6 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x90),__s,sVar6);
  lws_callback_on_writable(*(undefined8 *)(this + 0x68));
  this_00 = (mutex *)(this + 8);
  std::__ndk1::mutex::lock(this_00);
  if ((*(uint *)(this + 0x30) & 0xfffffffe) == 2) {
    std::__ndk1::mutex::unlock(this_00);
    goto LAB_00ea00d4;
  }
  *(undefined4 *)(this + 0x30) = 1;
  this_02 = (WsThreadHelper *)std::__ndk1::mutex::unlock(this_00);
  uStack_60 = *(undefined8 *)(this + 0xa8);
  this_01 = *(__shared_weak_count **)(this + 0xb0);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
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
  local_70 = &PTR_FUN_016f4958;
  local_68 = this;
  local_58 = this_01;
  local_50 = (long *)&local_70;
  WsThreadHelper::sendMessageToCocosThread(this_02,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
LAB_00ea009c:
    (*pcVar7)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar7 = *(code **)(*local_50 + 0x28);
    goto LAB_00ea009c;
  }
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
LAB_00ea00d4:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

