
float _spAnimationState_applyMixingFrom
                (long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
                    /* try { // try from 00d5b648 to 00e5b64f has its CatchHandler @ 00d5c1e8 */
                    /* try { // try from 00d5b650 to 00e5b773 has its CatchHandler @ 00d5b228 */
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10[2] != 0) {
    _spAnimationState_applyMixingFrom(param_1,plVar10,param_3,param_4);
  }
  if (*(float *)(param_2 + 100) == 0.0) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = *(float *)(param_2 + 0x60) / *(float *)(param_2 + 100);
    if (1.0 < fVar18) {
      fVar18 = 1.0;
    }
  }
  if (*(float *)(plVar10 + 5) <= fVar18) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + 0x40);
  }
  fVar21 = *(float *)((long)plVar10 + 0x2c);
  fVar15 = *(float *)(plVar10 + 6);
  uVar20 = *(undefined4 *)((long)plVar10 + 0x3c);
  if (*(int *)((long)plVar10 + 0x24) == 0) {
    fVar19 = *(float *)(plVar10 + 9) + *(float *)((long)plVar10 + 0x34);
    if (*(float *)(plVar10 + 7) <= fVar19) {
      fVar19 = *(float *)(plVar10 + 7);
    }
  }
  else {
    fVar19 = *(float *)((long)plVar10 + 0x34);
    if (*(float *)(plVar10 + 7) - fVar19 != 0.0) {
      fVar16 = fmodf(*(float *)(plVar10 + 9),*(float *)(plVar10 + 7) - fVar19);
      fVar19 = fVar19 + fVar16;
    }
  }
  lVar5 = plVar10[0x11];
  uVar3 = *(uint *)(*plVar10 + 0xc);
  lVar11 = *(long *)(*plVar10 + 0x10);
  lVar1 = plVar10[0xe];
  lVar2 = plVar10[0xf];
  if (((int)lVar5 == 0) && (iVar14 = uVar3 << 1, iVar14 != 0)) {
                    /* try { // try from 00d5b774 to 00e5b7ab has its CatchHandler @ 00d5c22c */
    lVar6 = _spCalloc((long)iVar14,4,
                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                      ,0x339);
    _spFree((void *)plVar10[0x10]);
    plVar10[0x10] = lVar6;
    *(int *)(plVar10 + 0x11) = iVar14;
  }
  lVar6 = plVar10[0x10];
  fVar16 = *(float *)(param_2 + 0x68);
  *(undefined4 *)((long)plVar10 + 0x6c) = 0;
  if (0 < (int)uVar3) {
    fVar16 = *(float *)((long)plVar10 + 0x5c) * fVar16;
    iVar14 = 0;
    uVar13 = 0;
    fVar22 = (1.0 - fVar18) * fVar16;
    do {
      piVar7 = *(int **)(lVar11 + uVar13 * 8);
      iVar4 = *(int *)(*(long *)(lVar1 + 8) + uVar13 * 4);
      if (iVar4 == 2) {
        fVar17 = fVar16;
        uVar8 = 0;
LAB_00d5b8a8:
        *(float *)((long)plVar10 + 0x6c) = fVar17 + *(float *)((long)plVar10 + 0x6c);
        if (*piVar7 == 0) {
          _spAnimationState_applyRotateTimeline
                    (fVar19,fVar17,piVar7,piVar7,param_3,uVar8,lVar6,iVar14,(int)lVar5 == 0);
        }
        else {
          spTimeline_apply(uVar20,fVar19,piVar7,param_3,uVar12,param_1 + 0x38,uVar8,1);
        }
      }
      else {
        fVar17 = fVar22;
        if (iVar4 == 1) {
          uVar8 = 0;
          goto LAB_00d5b8a8;
        }
        if (iVar4 != 0) {
          lVar9 = *(long *)(*(long *)(lVar2 + 8) + uVar13 * 8);
          fVar17 = 1.0 - *(float *)(lVar9 + 0x60) / *(float *)(lVar9 + 100);
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          fVar17 = fVar16 * fVar17;
          uVar8 = 0;
          goto LAB_00d5b8a8;
        }
                    /* try { // try from 00d5b830 to 00e5b9bb has its CatchHandler @ 00d5c32c */
        if (((fVar18 < fVar21) || (*piVar7 != 4)) &&
           ((uVar8 = param_4, fVar18 < fVar15 || (*piVar7 != 8)))) goto LAB_00d5b8a8;
      }
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + 2;
    } while (uVar3 != uVar13);
  }
  if (0.0 < *(float *)(param_2 + 100)) {
    _spAnimationState_queueEvents(fVar19,param_1,plVar10);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(float *)(plVar10 + 8) = fVar19;
  *(int *)(plVar10 + 10) = (int)plVar10[9];
  return fVar18;
}

