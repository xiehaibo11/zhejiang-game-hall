
/* cocos2d::network::WsThreadHelper::WsThreadHelper() */

void __thiscall cocos2d::network::WsThreadHelper::WsThreadHelper(WsThreadHelper *this)

{
  void *pvVar1;
  
  this[0x38] = (WsThreadHelper)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
    *(void **)((long)pvVar1 + 8) = pvVar1;
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
  }
  *(void **)this = pvVar1;
  return;
}

