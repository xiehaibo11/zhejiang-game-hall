
/* void cocos2d::AudioMixer::process_NoResampleOneTrack<2, short, float,
   int>(cocos2d::AudioMixer::state_t*, long) */

void cocos2d::AudioMixer::process_NoResampleOneTrack<2,short,float,int>
               (state_t *param_1,long param_2)

{
  track_t *this;
  state_t *psVar1;
  state_t *psVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  short *__s;
  int *piVar12;
  float *pfVar13;
  ulong uVar14;
  long lVar15;
  
                    /* try { // try from 00a7efe0 to 00b7eff7 has its CatchHandler @ 00a7f170 */
                    /* try { // try from 00a7f000 to 00b7f00b has its CatchHandler @ 00a7f16c */
                    /* try { // try from 00a7f00c to 00b7f017 has its CatchHandler @ 00a7f168 */
  lVar15 = *(long *)(param_1 + 8);
  lVar10 = 0x1f - LZCOUNT(*(undefined4 *)param_1);
                    /* try { // try from 00a7f018 to 00b7f0f3 has its CatchHandler @ 00a7f180 */
  iVar4 = *(int *)(param_1 + lVar10 * 0xd0 + 0x50);
  iVar5 = *(int *)(param_1 + lVar10 * 0xd0 + 0x54);
  iVar6 = *(int *)(param_1 + lVar10 * 0xd0 + 0x58);
  piVar12 = *(int **)(param_1 + lVar10 * 0xd0 + 0xb0);
  this = (track_t *)(param_1 + lVar10 * 0xd0 + 0x40);
  if (lVar15 != 0) {
    uVar11 = (ulong)*(uint *)(param_1 + lVar10 * 0xd0 + 0xfc);
    __s = *(short **)(param_1 + lVar10 * 0xd0 + 0xa8);
    psVar1 = param_1 + lVar10 * 0xd0 + 0x78;
    psVar2 = param_1 + lVar10 * 0xd0 + 0x80;
    do {
      lVar9 = 0x7fffffffffffffff;
      *(long *)psVar2 = lVar15;
      if (param_2 != 0x7fffffffffffffff) {
        uVar14 = 0;
        if ((ulong)*(uint *)(param_1 + lVar10 * 0xd0 + 0xa0) != 0) {
          uVar14 = (ulong)((*(int *)(param_1 + 8) - (int)lVar15) * sLocalTimeFreq) /
                   (ulong)*(uint *)(param_1 + lVar10 * 0xd0 + 0xa0);
        }
        lVar9 = uVar14 + param_2;
      }
      plVar8 = *(long **)(param_1 + lVar10 * 0xd0 + 0x70);
      (**(code **)(*plVar8 + 0x10))(plVar8,psVar1,lVar9);
      pfVar13 = *(float **)psVar1;
      if ((pfVar13 == (float *)0x0) || (((ulong)pfVar13 & 3) != 0)) {
                    /* catch() { ... } // from try @ 00a7f00c with catch @ 00a7f168 */
                    /* catch() { ... } // from try @ 00a7f000 with catch @ 00a7f16c */
                    /* catch() { ... } // from try @ 00a7efe0 with catch @ 00a7f170 */
                    /* catch() { ... } // from try @ 00a7f018 with catch @ 00a7f180 */
        if (*(int *)(param_1 + lVar10 * 0xd0 + 0xc4) - 1U < 6) {
          lVar9 = *(long *)(&DAT_0189d370 +
                           (long)(int)(*(int *)(param_1 + lVar10 * 0xd0 + 0xc4) - 1U) * 8);
        }
        else {
          lVar9 = 0;
        }
        memset(__s,0,lVar15 * uVar11 * lVar9);
        if (((ulong)pfVar13 & 3) == 0) {
          return;
        }
                    /* try { // try from 00a7f1d8 to 00b7f22b has its CatchHandler @ 00a7f1d8
                       catch() { ... } // from try @ 00a7f1d8 with catch @ 00a7f1d8
                       catch() { ... } // from try @ 00a7f3a4 with catch @ 00a7f1d8 */
        __android_log_print(6,"AudioMixer",
                            "process_NoResampleOneTrack: bus error: buffer %p track %p, channels %d, needs %#x"
                            ,pfVar13,this,param_1[lVar10 * 0xd0 + 100],*(undefined4 *)this);
        return;
      }
      uVar14 = *(ulong *)psVar2;
      volumeMix<2,true,false,short,float,int>
                (__s,uVar14,pfVar13,piVar12,(iVar5 != 0 || iVar4 != 0) || iVar6 != 0,this);
                    /* try { // try from 00a7f0f4 to 00b7f1d7 has its CatchHandler @ 00a7ef8c */
      plVar8 = *(long **)(param_1 + lVar10 * 0xd0 + 0x70);
      __s = __s + uVar14 * uVar11;
      piVar3 = piVar12 + uVar11;
      bVar7 = piVar12 != (int *)0x0;
      piVar12 = (int *)0x0;
      if (bVar7) {
        piVar12 = piVar3;
      }
      lVar15 = lVar15 - *(long *)psVar2;
      (**(code **)(*plVar8 + 0x18))(plVar8,psVar1);
    } while (lVar15 != 0);
  }
  if ((iVar5 == 0 && iVar4 == 0) && iVar6 == 0) {
    return;
  }
  track_t::adjustVolumeRamp(this,piVar12 != (int *)0x0,true);
  return;
}

