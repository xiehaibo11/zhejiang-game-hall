
undefined8 *
cpSegmentShapeNew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = calloc(1,0xd0);
  fVar8 = (float)param_4;
  fVar10 = (float)param_2;
  fVar5 = fVar8 - fVar10;
  fVar9 = (float)param_3;
  fVar11 = (float)param_1;
  fVar4 = fVar9 - fVar11;
  fVar6 = 1.0 / (SQRT(fVar5 * fVar5 + fVar4 * fVar4) + 1.1754944e-38);
  fVar7 = (float)param_5;
  *(float *)(puVar1 + 0x11) = fVar11;
  *(float *)((long)puVar1 + 0x8c) = fVar10;
  *(float *)(puVar1 + 0x12) = fVar9;
  *(float *)((long)puVar1 + 0x94) = fVar8;
  *(float *)(puVar1 + 0x17) = fVar7;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(float *)(puVar1 + 0x13) = fVar6 * fVar5;
  *(float *)((long)puVar1 + 0x9c) = -(fVar4 * fVar6);
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  uVar2 = cpMomentForBox(0x3f800000,
                         SQRT((fVar10 - fVar8) * (fVar10 - fVar8) +
                              (fVar11 - fVar9) * (fVar11 - fVar9)) + fVar7 + fVar7);
  uVar3 = cpAreaForSegment(param_1,param_2,param_3,param_4,param_5);
  puVar1[1] = 0;
  puVar1[2] = param_6;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar2;
  *(float *)(puVar1 + 4) = (fVar9 + fVar11) * 0.5;
  *(float *)((long)puVar1 + 0x24) = (fVar8 + fVar10) * 0.5;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined1 *)((long)puVar1 + 0x3c) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0xffffffffffffffff;
  *puVar1 = &DAT_0172d1e0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return puVar1;
}

