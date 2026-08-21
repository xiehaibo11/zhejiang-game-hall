
/* cocos2d::experimental::UrlAudioPlayer::stopAll() */

void cocos2d::experimental::UrlAudioPlayer::stopAll(void)

{
  ulong __n;
  void *__src;
  undefined8 *__dest;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f380);
  __src = DAT_0178f3a8;
  __n = DAT_0178f3b0 - (long)DAT_0178f3a8;
  if (__n == 0) {
    __dest = (undefined8 *)0x0;
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)__n >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(__n);
    puVar1 = __dest;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      puVar1 = (undefined8 *)((long)__dest + __n);
    }
  }
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f380);
  for (puVar2 = __dest; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x48))();
  }
  if (__dest != (undefined8 *)0x0) {
    operator_delete(__dest);
    return;
  }
  return;
}

