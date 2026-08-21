
/* cocos2d::UrlAudioPlayer::stopAll() */

void cocos2d::UrlAudioPlayer::stopAll(void)

{
  ulong __n;
  void *__src;
  undefined8 *__dest;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00a797d8 to 00b79803 has its CatchHandler @ 00a79850 */
  std::__ndk1::mutex::lock((mutex *)&DAT_01d38da0);
  __src = DAT_01d38dc8;
  __n = DAT_01d38dd0 - (long)DAT_01d38dc8;
  if (__n == 0) {
    puVar1 = (undefined8 *)0x0;
    __dest = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)__n >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(__n);
                    /* try { // try from 00a79804 to 00b79813 has its CatchHandler @ 00a79794 */
    puVar1 = __dest;
    if (0 < (long)__n) {
                    /* try { // try from 00a79814 to 00b7981f has its CatchHandler @ 00a79850 */
                    /* try { // try from 00a79820 to 00b79863 has its CatchHandler @ 00a79794 */
      memcpy(__dest,__src,__n);
      puVar1 = (undefined8 *)((long)__dest + __n);
    }
  }
  std::__ndk1::mutex::unlock((mutex *)&DAT_01d38da0);
  for (puVar2 = __dest; puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* catch() { ... } // from try @ 00a797d8 with catch @ 00a79850
                       catch() { ... } // from try @ 00a79814 with catch @ 00a79850 */
    (**(code **)(*(long *)*puVar2 + 0x48))();
  }
                    /* catch() { ... } // from try @ 00a798c0 with catch @ 00a79864 */
  if (__dest != (undefined8 *)0x0) {
    operator_delete(__dest);
    return;
  }
  return;
}

