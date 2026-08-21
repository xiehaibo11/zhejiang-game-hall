
void _spAnimationState_applyRotateTimeline
               (undefined8 param_1,float param_2,undefined8 param_3,long param_4,long param_5,
               int param_6,long param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  long lVar4;
  uint uVar5;
  float *pfVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float __x;
  float fVar11;
  
  if (param_9 != 0) {
    *(undefined4 *)(param_7 + (long)param_8 * 4) = 0;
  }
  if (param_2 == 1.0) {
                    /* try { // try from 00d5ba7c to 00e5ba93 has its CatchHandler @ 00d5c250 */
    spTimeline_apply(0,param_1,0x3f800000,param_4,param_5,0,0,param_6,0);
    return;
  }
  pfVar6 = *(float **)(param_4 + 0x20);
  plVar7 = *(long **)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_4 + 0x28) * 8);
  fVar8 = (float)param_1;
  if (fVar8 < *pfVar6) {
    if (param_6 != 0) {
      return;
    }
    *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(*plVar7 + 0x24);
    return;
  }
  iVar1 = *(int *)(param_4 + 0x18);
  if (pfVar6[iVar1 + -2] <= fVar8) {
    lVar4 = *plVar7;
                    /* try { // try from 00d5bbac to 00e5bbb7 has its CatchHandler @ 00d5c1a8 */
                    /* try { // try from 00d5bbb8 to 00e5bbbf has its CatchHandler @ 00d5c190 */
    fVar8 = *(float *)(lVar4 + 0x24) + pfVar6[iVar1 + -1];
  }
  else {
    iVar1 = _spCurveTimeline_binarySearch(param_1,pfVar6,iVar1,2);
    pfVar6 = pfVar6 + iVar1;
    fVar11 = pfVar6[-1];
    fVar8 = (float)spCurveTimeline_getCurvePercent
                             (1.0 - (fVar8 - *pfVar6) / (pfVar6[-2] - *pfVar6),param_4,
                              (iVar1 >> 1) + -1);
                    /* try { // try from 00d5bb38 to 00e5bb3f has its CatchHandler @ 00d5c1dc */
    fVar9 = pfVar6[1] - fVar11;
    lVar4 = *plVar7;
                    /* try { // try from 00d5bb54 to 00e5bb5f has its CatchHandler @ 00d5c228 */
                    /* try { // try from 00d5bb68 to 00e5bb7f has its CatchHandler @ 00d5c1d8 */
    fVar8 = *(float *)(lVar4 + 0x24) +
            fVar11 + fVar8 * (fVar9 - (float)((0x4000 - (int)(16384.5 - fVar9 / 360.0)) * 0x168));
                    /* try { // try from 00d5bb84 to 00e5bbab has its CatchHandler @ 00d5c234 */
    fVar8 = fVar8 - (float)((0x4000 - (int)(16384.5 - fVar8 / 360.0)) * 0x168);
  }
  pfVar6 = (float *)(lVar4 + 0x24);
  if (param_6 != 0) {
    pfVar6 = (float *)(plVar7 + 6);
  }
  fVar9 = *pfVar6;
  pfVar6 = (float *)(param_7 + (long)param_8 * 4);
  fVar8 = fVar8 - fVar9;
                    /* try { // try from 00d5bbd8 to 00e5bbdf has its CatchHandler @ 00d5c18c */
  if (fVar8 == 0.0) {
    fVar11 = *(float *)(param_7 + (long)param_8 * 4);
    goto LAB_00d5bd24;
  }
                    /* try { // try from 00d5bbe8 to 00e5bbef has its CatchHandler @ 00d5c1e4 */
  fVar8 = fVar8 - (float)((0x4000 - (int)(fVar8 / -360.0 + 16384.5)) * 0x168);
  __x = 0.0;
  fVar11 = fVar8;
  if (param_9 == 0) {
    __x = *pfVar6;
    fVar11 = pfVar6[1];
  }
  uVar2 = (uint)(0.0 < fVar11);
  if (fVar11 < 0.0) {
    uVar2 = 0xffffffff;
  }
  uVar5 = (uint)(0.0 < fVar8);
  if (fVar8 < 0.0) {
    uVar5 = 0xffffffff;
  }
  if (uVar2 == uVar5) {
LAB_00d5bc70:
    fVar11 = fmodf(__x,360.0);
    fVar11 = (fVar8 + __x) - fVar11;
    if (0.0 < fVar8 == __x < 0.0) {
      fVar3 = 360.0;
      if (__x == 0.0 || 0.0 > __x) {
        fVar3 = 0.0;
      }
      fVar10 = -360.0;
      if (0.0 <= __x) {
        fVar10 = fVar3;
      }
                    /* try { // try from 00d5bcc0 to 00e5bcd7 has its CatchHandler @ 00d5c1d4 */
      fVar11 = fVar11 + fVar10;
    }
  }
  else {
    fVar3 = -fVar11;
                    /* try { // try from 00d5bc5c to 00e5bc83 has its CatchHandler @ 00d5c230 */
    if (0.0 <= fVar11) {
      fVar3 = fVar11;
    }
    if (90.0 < fVar3) goto LAB_00d5bc70;
    fVar11 = -__x;
    if (0.0 <= __x) {
      fVar11 = __x;
    }
                    /* try { // try from 00d5bcd8 to 00e5bcef has its CatchHandler @ 00d5c1c4 */
    if (180.0 < fVar11) {
                    /* try { // try from 00d5bcf0 to 00e5bd03 has its CatchHandler @ 00d5c1bc */
      fVar11 = 360.0;
      if (__x == 0.0 || 0.0 > __x) {
        fVar11 = 0.0;
      }
      fVar3 = -360.0;
      if (0.0 <= __x) {
        fVar3 = fVar11;
      }
      __x = __x + fVar3;
    }
    fVar11 = fmodf(__x,360.0);
    fVar11 = (fVar8 + __x) - fVar11;
  }
  *(float *)(param_7 + (long)param_8 * 4) = fVar11;
LAB_00d5bd24:
                    /* try { // try from 00d5bd2c to 00e5bd37 has its CatchHandler @ 00d5c228 */
  fVar9 = fVar9 + fVar11 * param_2;
                    /* try { // try from 00d5bd44 to 00e5bd6b has its CatchHandler @ 00d5c1b8 */
  pfVar6[1] = fVar8;
  *(float *)(plVar7 + 6) = fVar9 - (float)((0x4000 - (int)(fVar9 / -360.0 + 16384.5)) * 0x168);
                    /* try { // try from 00d5bd90 to 00e5bd97 has its CatchHandler @ 00d5c180 */
  return;
}

