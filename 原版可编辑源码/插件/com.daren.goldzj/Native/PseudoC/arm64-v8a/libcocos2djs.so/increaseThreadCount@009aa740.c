
/* cocos2d::network::HttpClient::increaseThreadCount() */

void __thiscall cocos2d::network::HttpClient::increaseThreadCount(HttpClient *this)

{
                    /* try { // try from 009aa748 to 00aaa75f has its CatchHandler @ 009aa928 */
  std::__ndk1::mutex::lock((mutex *)(this + 0x68));
                    /* try { // try from 009aa768 to 00aaa773 has its CatchHandler @ 009aa924 */
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
                    /* try { // try from 009aa774 to 00aaa77f has its CatchHandler @ 009aa920 */
  std::__ndk1::mutex::unlock((mutex *)(this + 0x68));
  return;
}

