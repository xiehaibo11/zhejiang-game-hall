
void cpPolyShapeSetVertsRaw
               (undefined1 param_1 [16],float param_2,undefined8 *param_3,uint param_4,long param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  if ((undefined *)*param_3 != &DAT_0172d2b0) {
    cpMessage("shape->klass == &polyClass",
              "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpPolyShape.c"
              ,300,1,1,"Shape is not a poly shape.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (6 < *(int *)((long)param_3 + 0x8c)) {
    free((void *)param_3[0x12]);
  }
  *(uint *)((long)param_3 + 0x8c) = param_4;
  if ((int)param_4 < 7) {
    puVar4 = param_3 + 0x13;
    param_3[0x12] = puVar4;
    if ((int)param_4 < 1) goto LAB_011709b0;
  }
  else {
    puVar4 = calloc((long)(int)(param_4 << 1),0x10);
    param_3[0x12] = puVar4;
  }
  uVar5 = (long)(int)param_4 << 4 | 0xc;
  pfVar6 = (float *)(param_5 + 4);
  uVar7 = 1;
  param_2 = 1.0;
  while( true ) {
    iVar3 = param_4 + (int)uVar7 + -2;
    iVar2 = 0;
    if (param_4 != 0) {
      iVar2 = iVar3 / (int)param_4;
    }
    pfVar1 = (float *)(param_5 + (long)(int)(iVar3 - iVar2 * param_4) * 8);
    fVar9 = pfVar6[-1];
    fVar10 = *pfVar6;
    fVar11 = *pfVar1;
    fVar12 = pfVar1[1];
    *(float *)((long)puVar4 + (uVar5 - 0xc)) = fVar9;
    *(float *)((long)puVar4 + (uVar5 - 8)) = fVar10;
    fVar9 = fVar9 - fVar11;
    fVar10 = fVar10 - fVar12;
    fVar11 = 1.0 / (SQRT(fVar9 * fVar9 + fVar10 * fVar10) + 1.1754944e-38);
    pfVar1 = (float *)(param_3[0x12] + uVar5);
    pfVar1[-1] = fVar11 * fVar10;
    *pfVar1 = -(fVar9 * fVar11);
    if (param_4 == uVar7) break;
    puVar4 = (undefined8 *)param_3[0x12];
    uVar5 = uVar5 + 0x10;
    uVar7 = uVar7 + 1;
    pfVar6 = pfVar6 + 2;
  }
LAB_011709b0:
  fVar10 = *(float *)(param_3 + 3);
  uVar13 = *(undefined4 *)(param_3 + 0x11);
  fVar9 = (float)cpCentroidForPoly(param_4,param_5);
  uVar8 = cpMomentForPoly(0x3f800000,-fVar9,-param_2,uVar13,param_4,param_5);
  uVar13 = cpAreaForPoly(uVar13,param_4,param_5);
  *(float *)(param_3 + 3) = fVar10;
  *(undefined4 *)((long)param_3 + 0x1c) = uVar8;
  *(float *)(param_3 + 4) = fVar9;
  *(float *)((long)param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 5) = uVar13;
  if (0.0 < fVar10) {
    cpBodyAccumulateMassFromShapes(param_3[2]);
    return;
  }
  return;
}

