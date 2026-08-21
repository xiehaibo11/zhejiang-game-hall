
/* cocos2d::network::SIOClientImpl::disconnect() */

void __thiscall cocos2d::network::SIOClientImpl::disconnect(SIOClientImpl *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  int iVar5;
  basic_string *pbVar6;
  long lVar7;
  ulong local_80;
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50 [2];
  undefined1 *local_40;
  long local_38;
  
                    /* try { // try from 009e3aa0 to 00ae3ab7 has its CatchHandler @ 009e3bdc */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  iVar5 = WebSocket::getReadyState(*(WebSocket **)(this + 0x170));
  if (iVar5 == 1) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (undefined1 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
                    /* try { // try from 009e3acc to 00ae3b67 has its CatchHandler @ 009e3c0c */
    local_58 = (void *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           local_50,"",0);
    pbVar6 = (basic_string *)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_68,"",0);
    if (*(int *)(this + 0x16c) == 0) {
      std::__ndk1::operator+((__ndk1 *)&DAT_0188cf03,(char *)&local_68,pbVar6);
    }
    else {
      std::__ndk1::operator+((__ndk1 *)&DAT_0188cf07,(char *)&local_68,pbVar6);
    }
    if ((local_50[0] & 1) != 0) {
      *local_40 = 0;
      local_50[1] = 0;
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
                    /* try { // try from 009e3b68 to 00ae3c63 has its CatchHandler @ 009e39d8 */
    local_40 = local_70;
    local_50[0] = local_80;
    WebSocket::send(*(WebSocket **)(this + 0x170),(basic_string *)local_50);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  this_01 = DAT_01d35b10;
  this_00 = Application::_scheduler;
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
  Scheduler::unscheduleAllForTarget(this_00,this);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
                    /* catch() { ... } // from try @ 009e3aa0 with catch @ 009e3bdc */
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
                    /* catch() { ... } // from try @ 009e3a58 with catch @ 009e3bf4 */
                    /* catch() { ... } // from try @ 009e3a4c with catch @ 009e3bf8 */
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
                    /* catch() { ... } // from try @ 009e3a2c with catch @ 009e3bfc */
  this[0x168] = (SIOClientImpl)0x0;
                    /* catch() { ... } // from try @ 009e3a64 with catch @ 009e3c0c
                       catch() { ... } // from try @ 009e3acc with catch @ 009e3c0c */
  if ((SocketIO::_inst == (undefined8 *)0x0) &&
     (SocketIO::_inst = operator_new(0x30,(nothrow_t *)&std::nothrow),
     SocketIO::_inst != (undefined8 *)0x0)) {
    SocketIO::_inst[4] = 0;
    SocketIO::_inst[3] = 0;
    SocketIO::_inst[2] = 0;
    SocketIO::_inst[1] = 0;
    *SocketIO::_inst = &PTR__SocketIO_01c6bed8;
    *(undefined4 *)(SocketIO::_inst + 5) = 0x3f800000;
  }
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
  ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
           *)(SocketIO::_inst + 1),(basic_string *)(this + 0xc0));
  WebSocket::closeAsync(*(WebSocket **)(this + 0x170));
                    /* try { // try from 009e3c64 to 00ae3cb7 has its CatchHandler @ 009e3c64
                       catch() { ... } // from try @ 009e3c64 with catch @ 009e3c64
                       catch() { ... } // from try @ 009e3d54 with catch @ 009e3c64 */
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

