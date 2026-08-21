
/* void cocos2d::experimental::AudioMixer::track__NoResample<1, float, float,
   int>(cocos2d::experimental::AudioMixer::track_t*, float*, unsigned long, float*, int*) */

void cocos2d::experimental::AudioMixer::track__NoResample<1,float,float,int>
               (track_t *param_1,float *param_2,ulong param_3,float *param_4,int *param_5)

{
  track_t *in_x6;
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  volumeMix<1,true,true,float,float,int>
            ((AudioMixer *)param_2,(float *)param_3,uVar1,(float *)param_5,
             (int *)(ulong)((*(int *)(param_1 + 0x14) != 0 || *(int *)(param_1 + 0x10) != 0) ||
                           *(int *)(param_1 + 0x18) != 0),SUB81(param_1,0),in_x6);
  *(ulong *)(param_1 + 0x50) = uVar1 + param_3 * 4;
  return;
}

