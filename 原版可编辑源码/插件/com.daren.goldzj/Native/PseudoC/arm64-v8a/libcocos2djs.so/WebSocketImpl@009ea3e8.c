
/* WebSocketImpl::WebSocketImpl(cocos2d::network::WebSocket*) */

void __thiscall WebSocketImpl::WebSocketImpl(WebSocketImpl *this,WebSocket *param_1)

{
  long lVar1;
  vector<WebSocketImpl*,std::__ndk1::allocator<WebSocketImpl*>> *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  WebSocketImpl *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(WebSocket **)this = param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  puVar3 = operator_new(0x20);
  puVar3[2] = 0;
  *puVar3 = &PTR____shared_weak_count_01c6a670;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 **)(this + 0xa8) = puVar3 + 3;
  *(undefined8 **)(this + 0xb0) = puVar3;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x138) = 0;
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
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  pvVar4 = operator_new(0x1000);
  *(void **)(this + 0x50) = pvVar4;
  *(void **)(this + 0x58) = pvVar4;
  *(long *)(this + 0x60) = (long)pvVar4 + 0x1000;
  if ((DAT_01d38880 == (vector<WebSocketImpl*,std::__ndk1::allocator<WebSocketImpl*>> *)0x0) &&
     (DAT_01d38880 = operator_new(0x18,(nothrow_t *)&std::nothrow),
     DAT_01d38880 != (vector<WebSocketImpl*,std::__ndk1::allocator<WebSocketImpl*>> *)0x0)) {
    *(undefined8 *)DAT_01d38880 = 0;
    *(undefined8 *)(DAT_01d38880 + 8) = 0;
    *(undefined8 *)(DAT_01d38880 + 0x10) = 0;
  }
  pvVar2 = DAT_01d38880;
  local_60 = this;
  if (*(undefined8 **)(DAT_01d38880 + 8) < *(undefined8 **)(DAT_01d38880 + 0x10)) {
    **(undefined8 **)(DAT_01d38880 + 8) = this;
    *(long *)(pvVar2 + 8) = *(long *)(pvVar2 + 8) + 8;
  }
  else {
    std::__ndk1::vector<WebSocketImpl*,std::__ndk1::allocator<WebSocketImpl*>>::
    __push_back_slow_path<WebSocketImpl*>(DAT_01d38880,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

