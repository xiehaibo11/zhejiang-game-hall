
/* cocos2d::AudioMixer::track_t::adjustVolumeRamp(bool, bool) */

void __thiscall
cocos2d::AudioMixer::track_t::adjustVolumeRamp(track_t *this,bool param_1,bool param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2) {
    fVar6 = *(float *)(this + 0xa4);
                    /* try { // try from 00a7d6c0 to 00b7d6c7 has its CatchHandler @ 00a7d788 */
                    /* try { // try from 00a7d6d8 to 00b7d6db has its CatchHandler @ 00a7d780 */
                    /* try { // try from 00a7d6ec to 00b7d6ef has its CatchHandler @ 00a7d784 */
                    /* try { // try from 00a7d6f0 to 00b7d70b has its CatchHandler @ 00a7d78c */
    if (((0.0 < fVar6) &&
        (fVar7 = *(float *)(this + 0x94), fVar7 <= fVar6 + *(float *)(this + 0x9c))) ||
       ((fVar5 = *(float *)(this + 0x9c), fVar6 < 0.0 &&
        (fVar7 = *(float *)(this + 0x94), fVar6 + fVar5 <= fVar7)))) {
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0xa4) = 0;
      *(float *)(this + 0x9c) = fVar7;
      iVar3 = (uint)*(ushort *)(this + 4) << 0x10;
    }
    else if (fVar5 <= 0.0) {
      iVar3 = 0;
    }
    else if (16.0 <= fVar5) {
      iVar3 = -1;
    }
    else {
                    /* try { // try from 00a7d70c to 00b7d7f3 has its CatchHandler @ 00a7d660 */
      iVar3 = (int)(fVar5 * 2.6843546e+08 + 0.5);
    }
    *(int *)(this + 8) = iVar3;
    fVar6 = *(float *)(this + 0xa8);
    if (((0.0 < fVar6) &&
        (fVar7 = *(float *)(this + 0x98), fVar7 <= fVar6 + *(float *)(this + 0xa0))) ||
       ((fVar5 = *(float *)(this + 0xa0), fVar6 < 0.0 &&
        (fVar7 = *(float *)(this + 0x98), fVar6 + fVar5 <= fVar7)))) {
      *(undefined4 *)(this + 0x14) = 0;
                    /* try { // try from 00a7d8bc to 00b7d8e3 has its CatchHandler @ 00a7d81c */
      *(undefined4 *)(this + 0xa8) = 0;
      *(float *)(this + 0xa0) = fVar7;
      *(uint *)(this + 0xc) = (uint)*(ushort *)(this + 6) << 0x10;
    }
    else if (0.0 < fVar5) {
                    /* try { // try from 00a7d884 to 00b7d88b has its CatchHandler @ 00a7d980 */
      if (16.0 <= fVar5) {
                    /* try { // try from 00a7d8e4 to 00b7d8eb has its CatchHandler @ 00a7d97c */
        *(undefined4 *)(this + 0xc) = 0xffffffff;
                    /* try { // try from 00a7d8ec to 00b7d90b has its CatchHandler @ 00a7d81c */
      }
      else {
                    /* try { // try from 00a7d88c to 00b7d8af has its CatchHandler @ 00a7d81c */
        *(int *)(this + 0xc) = (int)(fVar5 * 2.6843546e+08 + 0.5);
      }
    }
    else {
      *(undefined4 *)(this + 0xc) = 0;
    }
    goto joined_r0x00a7d8cc;
  }
  iVar3 = *(int *)(this + 0x10);
  if (iVar3 < 1) {
    uVar4 = *(uint *)(this + 8);
    if ((-1 < iVar3) ||
       (uVar1 = *(ushort *)(this + 4), (int)(short)uVar1 < (int)(uVar4 + iVar3) >> 0x10))
    goto LAB_00a7d77c;
LAB_00a7d794:
    *(undefined4 *)(this + 0x10) = 0;
                    /* catch() { ... } // from try @ 00a7d6a8 with catch @ 00a7d7a4 */
    *(uint *)(this + 8) = (uint)uVar1 << 0x10;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x94);
  }
  else {
    uVar4 = *(uint *)(this + 8);
    uVar1 = *(ushort *)(this + 4);
    if ((int)(short)uVar1 <= (int)(uVar4 + iVar3) >> 0x10) goto LAB_00a7d794;
LAB_00a7d77c:
                    /* catch() { ... } // from try @ 00a7d6d8 with catch @ 00a7d780 */
                    /* catch() { ... } // from try @ 00a7d6ec with catch @ 00a7d784 */
                    /* catch() { ... } // from try @ 00a7d6c0 with catch @ 00a7d788 */
                    /* catch() { ... } // from try @ 00a7d6f0 with catch @ 00a7d78c */
    *(float *)(this + 0x9c) = (float)uVar4 * 3.7252903e-09;
  }
  iVar3 = *(int *)(this + 0x14);
  if (iVar3 < 1) {
    uVar4 = *(uint *)(this + 0xc);
    if ((-1 < iVar3) ||
       (uVar1 = *(ushort *)(this + 6), (int)(short)uVar1 < (int)(uVar4 + iVar3) >> 0x10))
    goto LAB_00a7d7ec;
  }
  else {
    uVar4 = *(uint *)(this + 0xc);
    uVar1 = *(ushort *)(this + 6);
    if ((int)(uVar4 + iVar3) >> 0x10 < (int)(short)uVar1) {
LAB_00a7d7ec:
      *(float *)(this + 0xa0) = (float)uVar4 * 3.7252903e-09;
      goto joined_r0x00a7d8cc;
    }
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0xc) = (uint)uVar1 << 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7d88c with catch @ 00a7d81c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d8bc with catch @ 00a7d81c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d8ec with catch @ 00a7d81c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d914 with catch @ 00a7d81c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7d940 with catch @ 00a7d81c
                        */
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(this + 0x98);
joined_r0x00a7d8cc:
  if (param_1) {
    iVar3 = *(int *)(this + 0x18);
    if (iVar3 < 1) {
                    /* try { // try from 00a7d914 to 00b7d933 has its CatchHandler @ 00a7d81c */
      if (-1 < iVar3) {
        return;
      }
      sVar2 = *(short *)(this + 0x20);
      if ((int)sVar2 < *(int *)(this + 0x1c) + iVar3 >> 0x10) {
        return;
      }
    }
    else {
      sVar2 = *(short *)(this + 0x20);
                    /* try { // try from 00a7d90c to 00b7d913 has its CatchHandler @ 00a7d97c */
      if (*(int *)(this + 0x1c) + iVar3 >> 0x10 < (int)sVar2) {
        return;
      }
    }
                    /* try { // try from 00a7d934 to 00b7d93f has its CatchHandler @ 00a7d97c */
    *(undefined4 *)(this + 0x18) = 0;
    *(int *)(this + 0x1c) = (int)sVar2 << 0x10;
    *(undefined4 *)(this + 0xb0) = *(undefined4 *)(this + 0xac);
    *(undefined4 *)(this + 0xb4) = 0;
  }
                    /* try { // try from 00a7d940 to 00b7d983 has its CatchHandler @ 00a7d81c */
  return;
}

