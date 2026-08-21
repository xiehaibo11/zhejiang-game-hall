
/* cocos2d::network::WebSocket::getReadyState() */

undefined4 __thiscall cocos2d::network::WebSocket::getReadyState(WebSocket *this)

{
  undefined4 uVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 8));
  uVar1 = *(undefined4 *)(this + 0x30);
  std::__ndk1::mutex::unlock((mutex *)(this + 8));
  return uVar1;
}

