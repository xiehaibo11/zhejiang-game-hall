
/* cocos2d::network::WebSocket::closeAsync() */

void __thiscall cocos2d::network::WebSocket::closeAsync(WebSocket *this)

{
  long lVar1;
  
                    /* try { // try from 009ecf04 to 00aecf1b has its CatchHandler @ 009ecfe0 */
  lVar1 = *(long *)(this + 0x10);
  if (*(int *)(lVar1 + 0x130) != 0) {
                    /* try { // try from 009ecf24 to 00aecf2f has its CatchHandler @ 009ecfc4 */
    return;
  }
                    /* try { // try from 009ecf30 to 00aecf3b has its CatchHandler @ 009ecfc0 */
  *(undefined4 *)(lVar1 + 0x130) = 3;
  std::__ndk1::mutex::lock((mutex *)(lVar1 + 0xc));
                    /* try { // try from 009ecf3c to 00aecf4b has its CatchHandler @ 009ecfc8 */
  if ((*(uint *)(lVar1 + 8) & 0xfffffffe) != 2) {
                    /* try { // try from 009ecf4c to 00aed02f has its CatchHandler @ 009eceb0 */
    *(undefined4 *)(lVar1 + 8) = 2;
  }
  std::__ndk1::mutex::unlock((mutex *)(lVar1 + 0xc));
  return;
}

