
/* void cocos2d::experimental::AudioMixer::track__NoResample<0, int, short,
   int>(cocos2d::experimental::AudioMixer::track_t*, int*, unsigned long, int*, int*) */

void cocos2d::experimental::AudioMixer::track__NoResample<0,int,short,int>
               (track_t *param_1,int *param_2,ulong param_3,int *param_4,int *param_5)

{
  short *psVar1;
  
  psVar1 = *(short **)(param_1 + 0x50);
  volumeMix<0,false,true,int,short,int>
            (param_2,param_3,psVar1,param_5,
             (*(int *)(param_1 + 0x14) != 0 || *(int *)(param_1 + 0x10) != 0) ||
             *(int *)(param_1 + 0x18) != 0,param_1);
  *(short **)(param_1 + 0x50) = psVar1 + *(uint *)(param_1 + 0xbc) * param_3;
  return;
}

