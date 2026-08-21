
/* cocos2d::network::HttpClient::getTimeoutForConnect() */

undefined4 __thiscall cocos2d::network::HttpClient::getTimeoutForConnect(HttpClient *this)

{
  undefined4 uVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x10));
  uVar1 = *(undefined4 *)(this + 0xc);
  std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
  return uVar1;
}

