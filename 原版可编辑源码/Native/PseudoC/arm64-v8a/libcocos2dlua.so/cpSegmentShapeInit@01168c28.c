
undefined8 *
cpSegmentShapeInit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = (float)param_4;
  fVar9 = (float)param_2;
  fVar4 = fVar7 - fVar9;
  fVar8 = (float)param_3;
  fVar10 = (float)param_1;
  fVar3 = fVar8 - fVar10;
  fVar5 = 1.0 / (SQRT(fVar4 * fVar4 + fVar3 * fVar3) + 1.1754944e-38);
  fVar6 = (float)param_5;
  *(float *)(param_6 + 0x11) = fVar10;
  *(float *)((long)param_6 + 0x8c) = fVar9;
  *(float *)(param_6 + 0x12) = fVar8;
  *(float *)((long)param_6 + 0x94) = fVar7;
  *(float *)(param_6 + 0x17) = fVar6;
  *(undefined8 *)((long)param_6 + 0xc4) = 0;
  *(float *)(param_6 + 0x13) = fVar5 * fVar4;
  *(float *)((long)param_6 + 0x9c) = -(fVar3 * fVar5);
  *(undefined8 *)((long)param_6 + 0xbc) = 0;
  uVar1 = cpMomentForBox(0x3f800000,
                         SQRT((fVar9 - fVar7) * (fVar9 - fVar7) +
                              (fVar10 - fVar8) * (fVar10 - fVar8)) + fVar6 + fVar6);
  uVar2 = cpAreaForSegment(param_1,param_2,param_3,param_4,param_5);
  param_6[1] = 0;
  param_6[2] = param_7;
  *(undefined4 *)(param_6 + 3) = 0;
  *(undefined4 *)((long)param_6 + 0x1c) = uVar1;
  *(float *)(param_6 + 4) = (fVar8 + fVar10) * 0.5;
  *(float *)((long)param_6 + 0x24) = (fVar7 + fVar9) * 0.5;
  *(undefined4 *)(param_6 + 5) = uVar2;
  *(undefined1 *)((long)param_6 + 0x3c) = 0;
  param_6[8] = 0;
  param_6[9] = 0;
  param_6[10] = 0;
  param_6[0xb] = 0;
  param_6[0xc] = 0;
  param_6[0xd] = 0xffffffffffffffff;
  *param_6 = &DAT_0172d1e0;
  param_6[0xe] = 0;
  param_6[0xf] = 0;
  return param_6;
}

