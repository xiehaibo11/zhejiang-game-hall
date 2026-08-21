
/* cocos2d::network::HttpClient::increaseThreadCount() */

void __thiscall cocos2d::network::HttpClient::increaseThreadCount(HttpClient *this)

{
  std::__ndk1::mutex::lock((mutex *)(this + 0x68));
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x68));
  return;
}

