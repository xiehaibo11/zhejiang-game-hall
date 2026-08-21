
/* cocos2d::network::WebSocket::send(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::network::WebSocket::send(WebSocket *this,basic_string *param_1)

{
  mutex *this_00;
  ulong uVar1;
  basic_string bVar2;
  undefined8 *puVar3;
  char *__dest;
  int *piVar4;
  long *plVar5;
  basic_string *__src;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  if (*(int *)(this + 0x30) == 1) {
    puVar3 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    bVar2 = *param_1;
    uVar8 = *(ulong *)(param_1 + 8);
    uVar1 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = uVar8;
    }
    __dest = malloc(uVar1 + 1);
    *puVar3 = __dest;
    if (((byte)bVar2 & 1) == 0) {
      __src = param_1 + 1;
      __dest[(byte)bVar2 >> 1] = '\0';
    }
    else {
      __dest[uVar8] = '\0';
      __src = *(basic_string **)(param_1 + 0x10);
    }
    strcpy(__dest,(char *)__src);
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    puVar3[1] = uVar1;
    piVar4 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    *(undefined8 **)(piVar4 + 2) = puVar3;
    *(WebSocket **)(piVar4 + 4) = this;
    puVar3 = DAT_0178f4f8;
    this_00 = (mutex *)(DAT_0178f4f8 + 1);
    WsMessage::__id = WsMessage::__id + 1;
    *piVar4 = WsMessage::__id;
    piVar4[1] = 0;
    std::__ndk1::mutex::lock(this_00);
    plVar7 = (long *)*puVar3;
    plVar5 = operator_new(0x18);
    plVar5[1] = (long)plVar7;
    plVar5[2] = (long)piVar4;
    lVar6 = *plVar7;
    *plVar5 = lVar6;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar7 = (long)plVar5;
    plVar7[2] = plVar7[2] + 1;
    std::__ndk1::mutex::unlock(this_00);
    return;
  }
  return;
}

