
/* WsThreadHelper::countBufferdBytes(WebSocketImpl const*) */

long __thiscall WsThreadHelper::countBufferdBytes(WsThreadHelper *this,WebSocketImpl *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  std::__ndk1::mutex::lock((mutex *)(this + 8));
  lVar1 = *(long *)this;
  lVar2 = *(long *)(lVar1 + 8);
  if (lVar1 == lVar2) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar4 = *(long *)(lVar2 + 0x10);
      if (((*(WebSocketImpl **)(lVar4 + 0x10) == param_1) &&
          (lVar5 = *(long *)(lVar4 + 8), lVar5 != 0)) && (*(uint *)(lVar4 + 4) < 2)) {
        uVar3 = *(long *)(lVar5 + 8) - *(long *)(lVar5 + 0x10);
        lVar6 = (uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU)) + lVar6;
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar1 != lVar2);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 8));
  return lVar6;
}

