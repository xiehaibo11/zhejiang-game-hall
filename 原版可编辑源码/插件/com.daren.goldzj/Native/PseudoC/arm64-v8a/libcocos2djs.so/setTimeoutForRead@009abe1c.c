
/* cocos2d::network::HttpClient::setTimeoutForRead(int) */

void __thiscall cocos2d::network::HttpClient::setTimeoutForRead(HttpClient *this,int param_1)

{
  std::__ndk1::mutex::lock((mutex *)(this + 0x3c));
                    /* try { // try from 009abe40 to 00aabfbf has its CatchHandler @ 009abbd0 */
  *(int *)(this + 0x38) = param_1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x3c));
  return;
}

