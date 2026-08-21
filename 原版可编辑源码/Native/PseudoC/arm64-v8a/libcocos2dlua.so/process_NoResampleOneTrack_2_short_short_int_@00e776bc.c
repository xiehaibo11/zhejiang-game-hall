
/* void cocos2d::experimental::AudioMixer::process_NoResampleOneTrack<2, short, short,
   int>(cocos2d::experimental::AudioMixer::state_t*, long) */

void cocos2d::experimental::AudioMixer::process_NoResampleOneTrack<2,short,short,int>
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
  short *psVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = *(long *)(param_1 + 8);
  lVar10 = 0x1f - LZCOUNT(*(undefined4 *)param_1);
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
      psVar13 = *(short **)psVar1;
      if ((psVar13 == (short *)0x0) || (((ulong)psVar13 & 3) != 0)) {
        if (*(int *)(param_1 + lVar10 * 0xd0 + 0xc4) - 1U < 6) {
          lVar9 = *(long *)(&DAT_01428658 +
                           (long)(int)(*(int *)(param_1 + lVar10 * 0xd0 + 0xc4) - 1U) * 8);
        }
        else {
          lVar9 = 0;
        }
        memset(__s,0,lVar15 * uVar11 * lVar9);
        if (((ulong)psVar13 & 3) == 0) {
          return;
        }
        __android_log_print(6,"AudioMixer",
                            "process_NoResampleOneTrack: bus error: buffer %p track %p, channels %d, needs %#x"
                            ,psVar13,this,param_1[lVar10 * 0xd0 + 100],*(undefined4 *)this);
        return;
      }
      uVar14 = *(ulong *)psVar2;
      volumeMix<2,false,false,short,short,int>
                (__s,uVar14,psVar13,piVar12,(iVar5 != 0 || iVar4 != 0) || iVar6 != 0,this);
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
  track_t::adjustVolumeRamp(this,piVar12 != (int *)0x0,false);
  return;
}

