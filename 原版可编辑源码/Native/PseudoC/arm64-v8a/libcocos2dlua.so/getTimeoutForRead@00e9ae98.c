
/* cocos2d::network::HttpClient::getTimeoutForRead() */

undefined4 __thiscall cocos2d::network::HttpClient::getTimeoutForRead(HttpClient *this)

{
  undefined4 uVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x3c));
  uVar1 = *(undefined4 *)(this + 0x38);
  std::__ndk1::mutex::unlock((mutex *)(this + 0x3c));
  return uVar1;
}

