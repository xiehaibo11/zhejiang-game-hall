
/* cocos2d::network::WebSocket::WebSocket() */

void __thiscall cocos2d::network::WebSocket::WebSocket(WebSocket *this)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *this_00;
  char cVar2;
  bool bVar3;
  long lVar4;
  vector<cocos2d::network::WebSocket*,std::__ndk1::allocator<cocos2d::network::WebSocket*>> *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  EventDispatcher *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  WebSocket *local_90;
  WebSocket *local_88;
  undefined8 uStack_80;
  __shared_weak_count *local_78;
  WebSocket **local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(undefined ***)this = &PTR__WebSocket_016f47e0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  puVar6 = operator_new(0x20);
  puVar6[2] = 0;
  *puVar6 = &PTR____shared_weak_count_016f41c0;
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 **)(this + 0xa8) = puVar6 + 3;
  *(undefined8 **)(this + 0xb0) = puVar6;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  pvVar7 = operator_new(0x1000);
  *(void **)(this + 0x50) = pvVar7;
  *(void **)(this + 0x58) = pvVar7;
  *(long *)(this + 0x60) = (long)pvVar7 + 0x1000;
  if ((DAT_0178f570 ==
       (vector<cocos2d::network::WebSocket*,std::__ndk1::allocator<cocos2d::network::WebSocket*>> *)
       0x0) && (DAT_0178f570 = operator_new(0x18,(nothrow_t *)&std::nothrow),
               DAT_0178f570 !=
               (vector<cocos2d::network::WebSocket*,std::__ndk1::allocator<cocos2d::network::WebSocket*>>
                *)0x0)) {
    *(undefined8 *)DAT_0178f570 = 0;
    *(undefined8 *)(DAT_0178f570 + 8) = 0;
    *(undefined8 *)(DAT_0178f570 + 0x10) = 0;
  }
  pvVar5 = DAT_0178f570;
  puVar6 = *(undefined8 **)(DAT_0178f570 + 8);
  local_90 = this;
  if (puVar6 < *(undefined8 **)(DAT_0178f570 + 0x10)) {
    *puVar6 = this;
    *(undefined8 **)(pvVar5 + 8) = puVar6 + 1;
    uStack_80 = *(undefined8 *)(this + 0xa8);
    this_00 = *(__shared_weak_count **)(this + 0xb0);
  }
  else {
    std::__ndk1::
    vector<cocos2d::network::WebSocket*,std::__ndk1::allocator<cocos2d::network::WebSocket*>>::
    __push_back_slow_path<cocos2d::network::WebSocket*>(DAT_0178f570,&local_90);
    uStack_80 = *(undefined8 *)(this + 0xa8);
    this_00 = *(__shared_weak_count **)(this + 0xb0);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = Director::getInstance();
  this_01 = *(EventDispatcher **)(lVar8 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,Director::EVENT_RESET);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = (WebSocket *)&PTR_FUN_016f4858;
  local_88 = this;
  local_78 = this_00;
  local_70 = &local_90;
  uVar9 = EventDispatcher::addCustomEventListener
                    (this_01,(basic_string *)local_a8,(function *)&local_90);
  *(undefined8 *)(this + 0x150) = uVar9;
  if (&local_90 == local_70) {
    pcVar10 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (WebSocket **)0x0) goto LAB_00e9df94;
    pcVar10 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar10)();
LAB_00e9df94:
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
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
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

