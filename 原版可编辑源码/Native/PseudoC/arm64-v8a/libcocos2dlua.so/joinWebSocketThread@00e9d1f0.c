
/* cocos2d::network::WsThreadHelper::joinWebSocketThread() */

void __thiscall cocos2d::network::WsThreadHelper::joinWebSocketThread(WsThreadHelper *this)

{
  if (*(long *)*(thread **)(this + 0x30) != 0) {
    std::__ndk1::thread::join(*(thread **)(this + 0x30));
    return;
  }
  return;
}

