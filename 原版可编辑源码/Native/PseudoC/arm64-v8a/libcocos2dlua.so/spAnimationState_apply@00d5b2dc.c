
undefined4 spAnimationState_apply(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar2 = *(uint *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (0 < (int)uVar2) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = 0;
      do {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + uVar9 * 8);
        if (lVar4 != 0) {
                    /* try { // try from 00d5b350 to 00e5b36b has its CatchHandler @ 00d5c32c */
          _spTrackEntry_setTimelineData(lVar4,0,uVar8,param_1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
  }
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar9 = 0;
                    /* try { // try from 00d5b374 to 00e5b3b7 has its CatchHandler @ 00d5c328 */
    uVar7 = 0;
    do {
                    /* try { // try from 00d5b3c4 to 00e5b3cf has its CatchHandler @ 00d5c2bc */
      plVar10 = *(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8);
                    /* try { // try from 00d5b3d8 to 00e5b3e3 has its CatchHandler @ 00d5c2b8 */
      if ((plVar10 != (long *)0x0) && (*(float *)((long)plVar10 + 0x44) <= 0.0)) {
        fVar19 = *(float *)((long)plVar10 + 0x5c);
        uVar7 = 1;
        if (uVar9 != 0) {
          uVar7 = 2;
        }
        if (plVar10[2] == 0) {
          fVar16 = fVar19;
          if ((*(float *)((long)plVar10 + 0x54) <= *(float *)(plVar10 + 9)) &&
             (fVar16 = 0.0, plVar10[1] != 0)) {
            fVar16 = fVar19;
          }
        }
        else {
                    /* try { // try from 00d5b3f8 to 00e5b403 has its CatchHandler @ 00d5c324 */
          fVar16 = (float)_spAnimationState_applyMixingFrom(param_1,plVar10,param_2,uVar7);
          fVar16 = fVar19 * fVar16;
                    /* try { // try from 00d5b40c to 00e5b417 has its CatchHandler @ 00d5c2e8 */
        }
        uVar18 = *(undefined4 *)((long)plVar10 + 0x3c);
                    /* try { // try from 00d5b434 to 00e5b437 has its CatchHandler @ 00d5c2e4 */
        if (*(int *)((long)plVar10 + 0x24) == 0) {
          fVar19 = *(float *)(plVar10 + 9) + *(float *)((long)plVar10 + 0x34);
          if (*(float *)(plVar10 + 7) <= fVar19) {
            fVar19 = *(float *)(plVar10 + 7);
          }
        }
        else {
          fVar19 = *(float *)((long)plVar10 + 0x34);
                    /* try { // try from 00d5b43c to 00e5b447 has its CatchHandler @ 00d5c2e0 */
          if (*(float *)(plVar10 + 7) - fVar19 != 0.0) {
            fVar17 = fmodf(*(float *)(plVar10 + 9),*(float *)(plVar10 + 7) - fVar19);
                    /* try { // try from 00d5b450 to 00e5b45f has its CatchHandler @ 00d5c2cc */
            fVar19 = fVar19 + fVar17;
          }
        }
        uVar3 = *(uint *)(*plVar10 + 0xc);
        uVar15 = (ulong)uVar3;
        puVar12 = *(undefined8 **)(*plVar10 + 0x10);
        if (fVar16 == 1.0) {
          if (0 < (int)uVar3) {
            do {
              spTimeline_apply(uVar18,fVar19,0x3f800000,*puVar12,param_2,
                               *(undefined8 *)(param_1 + 0x40),param_1 + 0x38,0,0);
              uVar15 = uVar15 - 1;
              puVar12 = puVar12 + 1;
            } while (uVar15 != 0);
          }
        }
        else {
                    /* try { // try from 00d5b4bc to 00e5b4bf has its CatchHandler @ 00d5c2c8 */
          lVar4 = plVar10[0x11];
          lVar14 = plVar10[0xe];
                    /* try { // try from 00d5b4c4 to 00e5b4cf has its CatchHandler @ 00d5c2c4 */
                    /* try { // try from 00d5b4d8 to 00e5b4e7 has its CatchHandler @ 00d5c2c0 */
          if (((int)lVar4 == 0) && (iVar13 = uVar3 << 1, iVar13 != 0)) {
            lVar5 = _spCalloc((long)iVar13,4,
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                              ,0x339);
            _spFree((void *)plVar10[0x10]);
            plVar10[0x10] = lVar5;
            *(int *)(plVar10 + 0x11) = iVar13;
          }
          if (0 < (int)uVar3) {
            lVar5 = plVar10[0x10];
            iVar13 = 0;
            uVar11 = 0;
            do {
              piVar6 = (int *)puVar12[uVar11];
              uVar1 = 0;
              if (*(int *)(*(long *)(lVar14 + 8) + uVar11 * 4) < 1) {
                uVar1 = uVar7;
              }
              if (*piVar6 == 0) {
                _spAnimationState_applyRotateTimeline
                          (fVar19,fVar16,piVar6,piVar6,param_2,uVar1,lVar5,iVar13,(int)lVar4 == 0);
              }
              else {
                spTimeline_apply(uVar18,fVar19,fVar16,piVar6,param_2,*(undefined8 *)(param_1 + 0x40)
                                 ,param_1 + 0x38,uVar1,0);
              }
              uVar11 = uVar11 + 1;
              iVar13 = iVar13 + 2;
            } while (uVar15 != uVar11);
          }
        }
        _spAnimationState_queueEvents(fVar19,param_1,plVar10);
        *(undefined4 *)(param_1 + 0x38) = 0;
        uVar7 = 0xffffffff;
        *(float *)(plVar10 + 8) = fVar19;
        *(int *)(plVar10 + 10) = (int)plVar10[9];
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar2);
  }
  _spEventQueue_drain(*(undefined8 *)(param_1 + 0x48));
  return uVar7;
}

