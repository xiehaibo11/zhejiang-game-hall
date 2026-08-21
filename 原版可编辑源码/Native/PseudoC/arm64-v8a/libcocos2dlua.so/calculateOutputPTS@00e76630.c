
/* cocos2d::experimental::AudioMixer::calculateOutputPTS(cocos2d::experimental::AudioMixer::track_t
   const&, long, int) */

long cocos2d::experimental::AudioMixer::calculateOutputPTS
               (track_t *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0x7fffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    uVar1 = 0;
    if ((ulong)*(uint *)(param_1 + 0x60) != 0) {
      uVar1 = (ulong)(sLocalTimeFreq * param_3) / (ulong)*(uint *)(param_1 + 0x60);
    }
    lVar2 = uVar1 + param_2;
  }
  return lVar2;
}

