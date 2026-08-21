
/* void cocos2d::AudioMixer::track__Resample<0, float, float, int>(cocos2d::AudioMixer::track_t*,
   float*, unsigned long, float*, int*) */

void cocos2d::AudioMixer::track__Resample<0,float,float,int>
               (track_t *param_1,float *param_2,ulong param_3,float *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* catch() { ... } // from try @ 00a7e9a4 with catch @ 00a7ea10 */
                    /* catch() { ... } // from try @ 00a7e980 with catch @ 00a7ea14 */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
            (*(long **)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
                    /* try { // try from 00a7ea30 to 00b7ea8b has its CatchHandler @ 00a7ea30
                       catch() { ... } // from try @ 00a7ea30 with catch @ 00a7ea30
                       catch() { ... } // from try @ 00a7ec54 with catch @ 00a7ea30 */
  if ((param_5 == (int *)0x0) && ((iVar2 == 0 && iVar1 == 0) && iVar3 == 0)) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))
              (*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00a7ea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
              (*(long **)(param_1 + 0x58),param_2,param_3,*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* try { // try from 00a7ea8c to 00b7eaa3 has its CatchHandler @ 00a7ecd8 */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x20))(0x3f800000,0x3f800000);
  memset(param_4,0,param_3 * *(uint *)(param_1 + 0xbc) * 4);
                    /* try { // try from 00a7eaac to 00b7eab7 has its CatchHandler @ 00a7ecd4 */
                    /* try { // try from 00a7eab8 to 00b7eac3 has its CatchHandler @ 00a7ecd0 */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x38))
            (*(long **)(param_1 + 0x58),param_4,param_3,*(undefined8 *)(param_1 + 0x30));
                    /* try { // try from 00a7eac4 to 00b7ec53 has its CatchHandler @ 00a7ece8 */
  volumeMix<0,true,true,float,float,int>
            (param_2,param_3,param_4,param_5,(iVar2 != 0 || iVar1 != 0) || iVar3 != 0,param_1);
  return;
}

