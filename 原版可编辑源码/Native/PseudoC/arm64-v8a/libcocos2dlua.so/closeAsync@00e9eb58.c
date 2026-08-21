
/* cocos2d::network::WebSocket::closeAsync() */

void __thiscall cocos2d::network::WebSocket::closeAsync(WebSocket *this)

{
  if (*(int *)(this + 0x130) != 0) {
    return;
  }
  *(undefined4 *)(this + 0x130) = 3;
  std::__ndk1::mutex::lock((mutex *)(this + 8));
  if ((*(uint *)(this + 0x30) & 0xfffffffe) != 2) {
    *(undefined4 *)(this + 0x30) = 2;
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 8));
  return;
}

