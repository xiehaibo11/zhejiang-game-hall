
/* cocos2d::AudioPlayerProvider::createUrlAudioPlayer(cocos2d::AudioPlayerProvider::AudioFileInfo
   const&) */

UrlAudioPlayer * __thiscall
cocos2d::AudioPlayerProvider::createUrlAudioPlayer(AudioPlayerProvider *this,AudioFileInfo *param_1)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  UrlAudioPlayer *this_00;
  long lVar9;
  int *piVar10;
  int *local_58;
  __shared_weak_count *local_50;
  long local_48;
  
  lVar7 = tpidr_el0;
                    /* try { // try from 00a73f6c to 00b73f7f has its CatchHandler @ 00a740a8 */
  local_48 = *(long *)(lVar7 + 0x28);
  uVar3 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if (uVar3 == 0) {
    __android_log_print(6,"AudioPlayerProvider","createUrlAudioPlayer failed, url is empty!");
  }
  else {
    piVar10 = *(int **)(param_1 + 0x18);
                    /* try { // try from 00a73f9c to 00b73fd7 has its CatchHandler @ 00a740d0 */
    uVar4 = 0x800007bc;
    if (*piVar10 < 1) {
      uVar4 = 1;
    }
    this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
    if (this_00 != (UrlAudioPlayer *)0x0) {
      UrlAudioPlayer::UrlAudioPlayer
                (this_00,*(SLEngineItf_ ***)(this + 8),*(SLObjectItf_ ***)(this + 0x10),
                 *(ICallerThreadUtils **)(this + 0x50));
      piVar10 = *(int **)(param_1 + 0x18);
    }
    local_50 = *(__shared_weak_count **)(param_1 + 0x20);
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var1 = local_50 + 8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar6) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_58 = piVar10;
    uVar8 = UrlAudioPlayer::prepare
                      (this_00,param_1,uVar4,&local_58,*(undefined4 *)(param_1 + 0x28),
                       *(undefined4 *)(param_1 + 0x30));
    p_Var1 = local_50;
    if (local_50 != (__shared_weak_count *)0x0) {
      p_Var2 = local_50 + 8;
      do {
        lVar9 = *(long *)p_Var2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar6) {
          *(long *)p_Var2 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_50 + 0x10))(local_50);
                    /* try { // try from 00a74048 to 00b7408b has its CatchHandler @ 00a740a8 */
        std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
      }
    }
    if ((this_00 == (UrlAudioPlayer *)0x0) || (((uVar8 ^ 1) & 1) == 0)) goto LAB_00a7408c;
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  this_00 = (UrlAudioPlayer *)0x0;
LAB_00a7408c:
                    /* try { // try from 00a7408c to 00b74127 has its CatchHandler @ 00a73ea0 */
  if (*(long *)(lVar7 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00a73f20 with catch @ 00a740a0 */
                    /* catch() { ... } // from try @ 00a73f14 with catch @ 00a740a4 */
                    /* catch() { ... } // from try @ 00a73f6c with catch @ 00a740a8
                       catch() { ... } // from try @ 00a74048 with catch @ 00a740a8 */
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

