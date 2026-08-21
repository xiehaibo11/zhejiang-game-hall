
/* cocos2d::network::SIOClientImpl::onClose(cocos2d::network::WebSocket*) */

void cocos2d::network::SIOClientImpl::onClose(WebSocket *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  Scheduler *this;
  __shared_weak_count *this_00;
  long lVar4;
  Ref *this_01;
  long *plVar5;
  
                    /* try { // try from 009e6594 to 00ae65e7 has its CatchHandler @ 009e6594
                       catch() { ... } // from try @ 009e6594 with catch @ 009e6594
                       catch() { ... } // from try @ 009e66a0 with catch @ 009e6594 */
  if (*(long *)(param_1 + 400) != 0) {
    for (plVar5 = *(long **)(param_1 + 0x188); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      this_01 = (Ref *)plVar5[5];
      this_01[0x40] = (Ref)0x0;
      (**(code **)(**(long **)(this_01 + 0x50) + 0x20))(*(long **)(this_01 + 0x50),this_01);
      Ref::release(this_01);
    }
    param_1[0x168] = (WebSocket)0x0;
    this_00 = DAT_01d35b10;
    this = Application::_scheduler;
    if (Application::_instance != 0) {
                    /* try { // try from 009e65e8 to 00ae65f3 has its CatchHandler @ 009e66dc */
      if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
                    /* try { // try from 009e65f4 to 00ae65fb has its CatchHandler @ 009e66d8 */
        p_Var1 = DAT_01d35b10 + 8;
        do {
                    /* try { // try from 009e65fc to 00ae669f has its CatchHandler @ 009e66e4 */
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      Scheduler::unscheduleAllForTarget(this,param_1);
      if (this_00 != (__shared_weak_count *)0x0) {
        p_Var1 = this_00 + 8;
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
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          std::__ndk1::__shared_weak_count::__release_weak(this_00);
        }
      }
    }
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
             *)(SocketIO::_inst + 1),(basic_string *)(param_1 + 0xc0));
                    /* try { // try from 009e66a0 to 00ae66ff has its CatchHandler @ 009e6594 */
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
    ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
             *)(param_1 + 0x178));
  }
  Ref::release((Ref *)param_1);
  return;
}

