
/* cocos2d::network::SIOClientImpl::onOpen(cocos2d::network::WebSocket*) */

void cocos2d::network::SIOClientImpl::onOpen(WebSocket *param_1)

{
  __shared_weak_count *p_Var1;
  basic_string bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  Scheduler *this;
  __shared_weak_count *this_00;
  size_t __n;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  WebSocket *this_01;
  void *__dest;
  ulong uVar10;
  basic_string local_a8;
  undefined7 uStack_a7;
  undefined1 local_a0;
  undefined2 uStack_9f;
  undefined5 uStack_9d;
  void *local_98;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  WebSocket *local_78;
  undefined ***local_70;
  long local_58;
  
                    /* try { // try from 009e49f4 to 00ae4a97 has its CatchHandler @ 009e4adc */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  param_1[0x168] = (WebSocket)0x1;
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
  ::insert((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClientImpl*>
            *)(SocketIO::_inst + 1),(basic_string *)(param_1 + 0xc0),(SIOClientImpl *)param_1);
  if (*(int *)(param_1 + 0x16c) == 1) {
    local_88 = (code *)0x0;
                    /* try { // try from 009e4a98 to 00ae4af7 has its CatchHandler @ 009e498c */
    uStack_80 = 0;
    local_90 = (undefined **)0x3502;
    this_01 = *(WebSocket **)(param_1 + 0x170);
    local_a8 = (basic_string)0x0;
    uStack_a7 = 0;
    local_a0 = 0;
    uStack_9f = 0;
    uStack_9d = 0;
    local_98 = (void *)0x0;
    __n = strlen((char *)((ulong)&local_90 | 1));
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* catch() { ... } // from try @ 009e49ec with catch @ 009e4ad0 */
    if (__n < 0x17) {
                    /* catch() { ... } // from try @ 009e49e0 with catch @ 009e4ad4 */
                    /* catch() { ... } // from try @ 009e49f4 with catch @ 009e4adc */
      __dest = (void *)((ulong)&local_a8 | 1);
      local_a8 = SUB41((int)__n << 1,0);
      if (__n != 0) goto LAB_009e4b0c;
    }
    else {
      uVar10 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009e4af8 to 00ae4b4f has its CatchHandler @ 009e4af8
                       catch() { ... } // from try @ 009e4af8 with catch @ 009e4af8
                       catch() { ... } // from try @ 009e4d80 with catch @ 009e4af8 */
      __dest = operator_new(uVar10);
      local_a8 = (basic_string)((byte)uVar10 | 1);
      local_a0 = (undefined1)__n;
      uStack_9f = (undefined2)(__n >> 8);
      uStack_9d = (undefined5)(__n >> 0x18);
      uStack_a7 = (undefined7)(uVar10 >> 8);
      local_98 = __dest;
LAB_009e4b0c:
      memcpy(__dest,(char *)((ulong)&local_90 | 1),__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
    WebSocket::send(this_01,&local_a8);
    if (((byte)local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
  }
  this_00 = DAT_01d35b10;
  this = Application::_scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
                    /* try { // try from 009e4b50 to 00ae4b57 has its CatchHandler @ 009e4dc0 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 009e4b5c to 00ae4b63 has its CatchHandler @ 009e4db8 */
    } while (cVar3 != '\0');
  }
                    /* try { // try from 009e4b64 to 00ae4b73 has its CatchHandler @ 009e4db0 */
  local_90 = &PTR_FUN_01c6c018;
                    /* try { // try from 009e4b7c to 00ae4bb7 has its CatchHandler @ 009e4dc8 */
  local_70 = &local_90;
  local_98 = (void *)0x0;
  uStack_80 = 0;
  local_88 = heartbeat;
  uStack_9d = 0;
  local_a8 = (basic_string)0x12;
                    /* try { // try from 009e4bb8 to 00ae4bc7 has its CatchHandler @ 009e4dac */
  uStack_9f = 0x74;
  uStack_a7 = 0x65627472616568;
  local_a0 = 0x61;
                    /* try { // try from 009e4bc8 to 00ae4bdf has its CatchHandler @ 009e4dd8 */
  local_78 = param_1;
  Scheduler::schedule(this,(function *)&local_90,param_1,(float)*(int *)(param_1 + 0x18) * 0.9,false
                      ,&local_a8);
  if (((byte)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (&local_90 == local_70) {
    pcVar6 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_009e4c14;
                    /* try { // try from 009e4bfc to 00ae4c13 has its CatchHandler @ 009e4d94 */
    pcVar6 = (code *)(*local_70)[5];
  }
  (*pcVar6)();
LAB_009e4c14:
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
                    /* try { // try from 009e4c30 to 00ae4cc3 has its CatchHandler @ 009e4dd8 */
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  plVar9 = *(long **)(param_1 + 0x188);
  do {
    if (plVar9 == (long *)0x0) {
      if (*(long *)(lVar5 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar7 = plVar9[5];
    bVar2 = *(basic_string *)(lVar7 + 0x10);
    uVar10 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar10 = *(ulong *)(lVar7 + 0x18);
    }
    if (uVar10 == 1) {
      pcVar8 = *(char **)(lVar7 + 0x20);
      if (((byte)bVar2 & 1) == 0) {
        pcVar8 = (char *)(lVar7 + 0x11);
      }
      if (*pcVar8 != '/') goto LAB_009e4c8c;
    }
    else {
LAB_009e4c8c:
      connectToEndpoint(*(SIOClientImpl **)(lVar7 + 0x48),(basic_string *)(lVar7 + 0x10));
    }
    plVar9 = (long *)*plVar9;
  } while( true );
}

