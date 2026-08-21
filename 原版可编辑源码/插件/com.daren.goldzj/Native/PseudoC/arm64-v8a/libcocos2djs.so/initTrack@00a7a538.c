
/* cocos2d::AudioMixerController::initTrack(cocos2d::Track*, std::__ndk1::vector<cocos2d::Track*,
   std::__ndk1::allocator<cocos2d::Track*> >&) */

void __thiscall
cocos2d::AudioMixerController::initTrack(AudioMixerController *this,Track *param_1,vector *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_58;
  undefined4 local_54;
  Track *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_1;
  if (param_1[0x105] == (Track)0x0) {
                    /* try { // try from 00a7a588 to 00b7a58f has its CatchHandler @ 00a7a684 */
    iVar2 = AudioMixer::getTrackName(*(AudioMixer **)(this + 0x10),3,1,0);
    if (iVar2 < 0) {
      if (*(undefined8 **)(param_2 + 8) == *(undefined8 **)(param_2 + 0x10)) {
        std::__ndk1::vector<cocos2d::Track*,std::__ndk1::allocator<cocos2d::Track*>>::
        __push_back_slow_path<cocos2d::Track*const&>
                  ((vector<cocos2d::Track*,std::__ndk1::allocator<cocos2d::Track*>> *)param_2,
                   &local_50);
      }
      else {
        **(undefined8 **)(param_2 + 8) = param_1;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
      }
    }
    else {
                    /* try { // try from 00a7a590 to 00b7a5b3 has its CatchHandler @ 00a7a520 */
      AudioMixer::setBufferProvider
                (*(AudioMixer **)(this + 0x10),iVar2,(AudioBufferProvider *)param_1);
                    /* try { // try from 00a7a5b4 to 00b7a5bf has its CatchHandler @ 00a7a684 */
      AudioMixer::setParameter
                (*(AudioMixer **)(this + 0x10),iVar2,0x3000,0x4002,*(void **)(this + 0x58));
                    /* try { // try from 00a7a5c0 to 00b7a5e7 has its CatchHandler @ 00a7a520 */
      AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3000,0x4005,(void *)0x1);
                    /* try { // try from 00a7a5e8 to 00b7a5ef has its CatchHandler @ 00a7a680 */
      AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3000,0x4001,(void *)0x1);
                    /* try { // try from 00a7a5f0 to 00b7a60f has its CatchHandler @ 00a7a520 */
      AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3000,0x4006,(void *)0x3);
                    /* try { // try from 00a7a610 to 00b7a617 has its CatchHandler @ 00a7a680 */
                    /* try { // try from 00a7a618 to 00b7a637 has its CatchHandler @ 00a7a520 */
      AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3000,0x4000,(void *)0x3);
      *(int *)(param_1 + 0xd0) = iVar2;
      AudioMixer::enable(*(AudioMixer **)(this + 0x10),iVar2);
      std::__ndk1::mutex::lock((mutex *)(param_1 + 0xdc));
                    /* try { // try from 00a7a638 to 00b7a643 has its CatchHandler @ 00a7a680 */
                    /* try { // try from 00a7a644 to 00b7a687 has its CatchHandler @ 00a7a520 */
      uVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
      local_54 = float_from_gain();
      local_58 = float_from_gain((uVar3 & 0xffffffff) >> 0x10);
      AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3003,0x4200,&local_54);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7a5e8 with catch @ 00a7a680
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a610 with catch @ 00a7a680
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a638 with catch @ 00a7a680
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7a588 with catch @ 00a7a684
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a5b4 with catch @ 00a7a684
                        */
      AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3003,0x4201,&local_58);
      local_50[0xd8] = (Track)0x0;
      local_50[0x105] = (Track)0x1;
      std::__ndk1::mutex::unlock((mutex *)(param_1 + 0xdc));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

