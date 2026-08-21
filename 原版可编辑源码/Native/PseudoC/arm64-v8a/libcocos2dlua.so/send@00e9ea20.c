
/* cocos2d::network::WebSocket::send(unsigned char const*, unsigned int) */

void __thiscall cocos2d::network::WebSocket::send(WebSocket *this,uchar *param_1,uint param_2)

{
  mutex *this_00;
  undefined8 *puVar1;
  void *__dest;
  undefined1 *puVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong __size;
  
  if (*(int *)(this + 0x30) == 1) {
    puVar1 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[4] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
    }
    if (param_2 == 0) {
      puVar2 = malloc(1);
      __size = 0;
      *puVar1 = puVar2;
      *puVar2 = 0;
    }
    else {
      __size = (ulong)param_2;
      __dest = malloc(__size);
      *puVar1 = __dest;
      memcpy(__dest,param_1,__size);
    }
    puVar1[1] = __size;
    piVar3 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    *(undefined8 **)(piVar3 + 2) = puVar1;
    *(WebSocket **)(piVar3 + 4) = this;
    puVar1 = DAT_0178f4f8;
    this_00 = (mutex *)(DAT_0178f4f8 + 1);
    WsMessage::__id = WsMessage::__id + 1;
    *piVar3 = WsMessage::__id;
    piVar3[1] = 1;
    std::__ndk1::mutex::lock(this_00);
    plVar6 = (long *)*puVar1;
    plVar4 = operator_new(0x18);
    plVar4[1] = (long)plVar6;
    plVar4[2] = (long)piVar3;
    lVar5 = *plVar6;
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    *plVar6 = (long)plVar4;
    plVar6[2] = plVar6[2] + 1;
    std::__ndk1::mutex::unlock(this_00);
    return;
  }
  return;
}

