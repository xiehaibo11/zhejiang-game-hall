
/* cocos2d::UrlAudioPlayer::~UrlAudioPlayer() */

void __thiscall cocos2d::UrlAudioPlayer::~UrlAudioPlayer(UrlAudioPlayer *this)

{
  __shared_weak_count *p_Var1;
  UrlAudioPlayer UVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  code *pcVar5;
  UrlAudioPlayer *pUVar6;
  long lVar7;
  long *__dest;
  __shared_weak_count *p_Var8;
  
                    /* try { // try from 00a78894 to 00b788cf has its CatchHandler @ 00a789c8 */
  *(undefined ***)this = &PTR__UrlAudioPlayer_01c6f308;
  std::__ndk1::mutex::lock((mutex *)&DAT_01d38da0);
  __dest = DAT_01d38dc8;
  if (DAT_01d38dc8 != DAT_01d38dd0) {
    pUVar6 = (UrlAudioPlayer *)*DAT_01d38dc8;
    while (pUVar6 != this) {
      __dest = __dest + 1;
      if (DAT_01d38dd0 == __dest) goto LAB_00a78914;
      pUVar6 = (UrlAudioPlayer *)*__dest;
    }
  }
  if (__dest != DAT_01d38dd0) {
    __n = (long)DAT_01d38dd0 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    DAT_01d38dd0 = __dest + ((long)__n >> 3);
  }
LAB_00a78914:
  std::__ndk1::mutex::unlock((mutex *)&DAT_01d38da0);
  p_Var8 = *(__shared_weak_count **)(this + 0xc0);
  if (p_Var8 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
                    /* try { // try from 00a78940 to 00b78983 has its CatchHandler @ 00a78998 */
      (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
    }
  }
  pUVar6 = *(UrlAudioPlayer **)(this + 0xa0);
  if (this + 0x80 == pUVar6) {
    pcVar5 = *(code **)(*(long *)pUVar6 + 0x20);
LAB_00a78980:
    (*pcVar5)();
  }
  else if (pUVar6 != (UrlAudioPlayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pUVar6 + 0x28);
    goto LAB_00a78980;
  }
                    /* try { // try from 00a78984 to 00b78a1f has its CatchHandler @ 00a78734 */
  p_Var8 = *(__shared_weak_count **)(this + 0x48);
  if (p_Var8 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var8 + 8;
    do {
      lVar7 = *(long *)p_Var1;
                    /* catch() { ... } // from try @ 00a78864 with catch @ 00a78998
                       catch() { ... } // from try @ 00a78940 with catch @ 00a78998 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 00a787c0 with catch @ 00a789c8
                       catch() { ... } // from try @ 00a78894 with catch @ 00a789c8 */
      (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
      UVar2 = this[0x28];
      goto joined_r0x00a789d8;
    }
  }
  UVar2 = this[0x28];
joined_r0x00a789d8:
  if (((byte)UVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a787b4 with catch @ 00a789b0 */
                    /* catch() { ... } // from try @ 00a787a8 with catch @ 00a789b4 */
                    /* catch() { ... } // from try @ 00a78788 with catch @ 00a789b8 */
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}

