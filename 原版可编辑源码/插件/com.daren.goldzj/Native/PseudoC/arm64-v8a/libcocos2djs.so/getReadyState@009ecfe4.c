
/* cocos2d::network::WebSocket::getReadyState() const */

undefined4 __thiscall cocos2d::network::WebSocket::getReadyState(WebSocket *this)

{
  mutex *this_00;
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  this_00 = (mutex *)(lVar2 + 0xc);
  std::__ndk1::mutex::lock(this_00);
  uVar1 = *(undefined4 *)(lVar2 + 8);
  std::__ndk1::mutex::unlock(this_00);
  return uVar1;
}

