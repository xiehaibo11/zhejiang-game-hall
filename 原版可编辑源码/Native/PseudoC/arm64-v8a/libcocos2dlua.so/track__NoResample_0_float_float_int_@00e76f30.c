
/* void cocos2d::experimental::AudioMixer::track__NoResample<0, float, float,
   int>(cocos2d::experimental::AudioMixer::track_t*, float*, unsigned long, float*, int*) */

void cocos2d::experimental::AudioMixer::track__NoResample<0,float,float,int>
               (track_t *param_1,float *param_2,ulong param_3,float *param_4,int *param_5)

{
  float *pfVar1;
  
  pfVar1 = *(float **)(param_1 + 0x50);
  volumeMix<0,true,true,float,float,int>
            (param_2,param_3,pfVar1,param_5,
             (*(int *)(param_1 + 0x14) != 0 || *(int *)(param_1 + 0x10) != 0) ||
             *(int *)(param_1 + 0x18) != 0,param_1);
  *(float **)(param_1 + 0x50) = pfVar1 + *(uint *)(param_1 + 0xbc) * param_3;
  return;
}

