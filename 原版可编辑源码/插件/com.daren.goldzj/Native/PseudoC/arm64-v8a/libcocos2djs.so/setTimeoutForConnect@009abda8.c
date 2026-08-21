
/* cocos2d::network::HttpClient::setTimeoutForConnect(int) */

void __thiscall cocos2d::network::HttpClient::setTimeoutForConnect(HttpClient *this,int param_1)

{
  std::__ndk1::mutex::lock((mutex *)(this + 0x10));
  *(int *)(this + 0xc) = param_1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
  return;
}

