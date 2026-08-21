
void spCurveTimeline_setCurve
               (float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  uVar11 = NEON_fmov(0x40400000,4);
  uVar8 = NEON_fmov(0x3f800000,4);
  lVar2 = *(long *)(param_5 + 0x10);
  fVar9 = (param_3 - (param_1 + param_1)) * 0.03;
  fVar10 = (param_4 - (param_2 + param_2)) * 0.03;
  param_6 = param_6 * 0x13;
  fVar4 = ((param_1 - param_3) * (float)uVar11 + (float)uVar8) * 0.006;
  fVar5 = ((param_2 - param_4) * (float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar8 >> 0x20)) *
          0.006;
  fVar6 = fVar9 + fVar9;
  fVar7 = fVar10 + fVar10;
  *(undefined4 *)(lVar2 + (long)param_6 * 4) = 0x40000000;
  uVar11 = CONCAT44(param_2 * 0.3 + fVar10 + fVar5 * 0.16666667,
                    param_1 * 0.3 + fVar9 + fVar4 * 0.16666667);
  lVar1 = (long)(param_6 + 1) + -2;
  puVar3 = (undefined8 *)(lVar2 + (long)(param_6 + 1) * 4);
  uVar8 = uVar11;
  do {
    fVar6 = fVar4 + fVar6;
    fVar7 = fVar5 + fVar7;
    lVar1 = lVar1 + 2;
    fVar9 = (float)uVar8 + fVar6;
    fVar10 = (float)((ulong)uVar8 >> 0x20) + fVar7;
    uVar8 = CONCAT44(fVar10,fVar9);
    *puVar3 = uVar11;
    uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) + fVar10,(float)uVar11 + fVar9);
    puVar3 = puVar3 + 1;
  } while (lVar1 < param_6 + 0x10);
  return;
}

