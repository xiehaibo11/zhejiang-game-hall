
/* cocos2d::UrlAudioPlayer::UrlAudioPlayer(SLEngineItf_ const* const*, SLObjectItf_ const* const*,
   cocos2d::ICallerThreadUtils*) */

void __thiscall
cocos2d::UrlAudioPlayer::UrlAudioPlayer
          (UrlAudioPlayer *this,SLEngineItf_ **param_1,SLObjectItf_ **param_2,
          ICallerThreadUtils *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  UrlAudioPlayer aUStack_50 [8];
  UrlAudioPlayer **local_48;
  UrlAudioPlayer *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00a78734 to 00b78787 has its CatchHandler @ 00a78734
                       catch() { ... } // from try @ 00a78734 with catch @ 00a78734
                       catch() { ... } // from try @ 00a78984 with catch @ 00a78734 */
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__UrlAudioPlayer_01c6f308;
  *(SLEngineItf_ ***)(this + 8) = param_1;
  *(SLObjectItf_ ***)(this + 0x10) = param_2;
  *(ICallerThreadUtils **)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x78) = 0x100;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* try { // try from 00a78788 to 00b7879f has its CatchHandler @ 00a789b8 */
  puVar2 = operator_new(0x20);
  puVar2[2] = 0;
  *puVar2 = &PTR____shared_weak_count_01c6ee80;
  puVar2[1] = 0;
                    /* try { // try from 00a787a8 to 00b787b3 has its CatchHandler @ 00a789b4 */
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined8 **)(this + 0xb8) = puVar2 + 3;
  *(undefined8 **)(this + 0xc0) = puVar2;
                    /* try { // try from 00a787b4 to 00b787bf has its CatchHandler @ 00a789b0 */
                    /* try { // try from 00a787c0 to 00b78863 has its CatchHandler @ 00a789c8 */
  if (DAT_01d38de0 != -1) {
    local_48 = &local_40;
    local_40 = aUStack_50;
    std::__ndk1::__call_once((ulong *)&DAT_01d38de0,&local_48,FUN_00a79954);
  }
  std::__ndk1::mutex::lock((mutex *)&DAT_01d38da0);
  local_40 = this;
  if (DAT_01d38dd0 < DAT_01d38dd8) {
    *DAT_01d38dd0 = this;
    DAT_01d38dd0 = DAT_01d38dd0 + 1;
  }
  else {
    std::__ndk1::vector<cocos2d::UrlAudioPlayer*,std::__ndk1::allocator<cocos2d::UrlAudioPlayer*>>::
    __push_back_slow_path<cocos2d::UrlAudioPlayer*>
              ((vector<cocos2d::UrlAudioPlayer*,std::__ndk1::allocator<cocos2d::UrlAudioPlayer*>> *)
               &DAT_01d38dc8,&local_40);
  }
  std::__ndk1::mutex::unlock((mutex *)&DAT_01d38da0);
  uVar3 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  *(undefined8 *)(this + 0xb0) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a78864 to 00b78877 has its CatchHandler @ 00a78998 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

