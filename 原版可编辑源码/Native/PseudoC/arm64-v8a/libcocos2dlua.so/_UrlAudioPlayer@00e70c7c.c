
/* cocos2d::experimental::UrlAudioPlayer::~UrlAudioPlayer() */

void __thiscall cocos2d::experimental::UrlAudioPlayer::~UrlAudioPlayer(UrlAudioPlayer *this)

{
  undefined8 *puVar1;
  __shared_weak_count *p_Var2;
  UrlAudioPlayer UVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  UrlAudioPlayer *pUVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *__dest;
  __shared_weak_count *p_Var9;
  
  *(undefined ***)this = &PTR__UrlAudioPlayer_016f3f80;
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f380);
  __dest = DAT_0178f3a8;
  if ((DAT_0178f3a8 != DAT_0178f3b0) && ((UrlAudioPlayer *)*DAT_0178f3a8 != this)) {
    do {
      if (DAT_0178f3b0 + -1 == __dest) goto LAB_00e70d1c;
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((UrlAudioPlayer *)*puVar1 != this);
  }
  if (__dest != DAT_0178f3b0) {
    __n = (long)DAT_0178f3b0 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    DAT_0178f3b0 = __dest + ((long)__n >> 3);
  }
LAB_00e70d1c:
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f380);
  p_Var9 = *(__shared_weak_count **)(this + 0xc0);
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var9 + 8;
    do {
      lVar8 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
    }
  }
  pUVar6 = *(UrlAudioPlayer **)(this + 0xa0);
  if (this + 0x80 == pUVar6) {
    pcVar7 = *(code **)(*(long *)pUVar6 + 0x20);
LAB_00e70d88:
    (*pcVar7)();
  }
  else if (pUVar6 != (UrlAudioPlayer *)0x0) {
    pcVar7 = *(code **)(*(long *)pUVar6 + 0x28);
    goto LAB_00e70d88;
  }
  p_Var9 = *(__shared_weak_count **)(this + 0x48);
  if (p_Var9 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var9 + 8;
    do {
      lVar8 = *(long *)p_Var2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar5) {
        *(long *)p_Var2 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
      UVar3 = this[0x28];
      goto joined_r0x00e70de0;
    }
  }
  UVar3 = this[0x28];
joined_r0x00e70de0:
  if (((byte)UVar3 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}

