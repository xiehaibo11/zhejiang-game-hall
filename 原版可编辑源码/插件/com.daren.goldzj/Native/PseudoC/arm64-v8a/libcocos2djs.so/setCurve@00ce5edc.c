
/* spine::CurveTimeline::setCurve(unsigned long, float, float, float, float) */

void __thiscall
spine::CurveTimeline::setCurve
          (CurveTimeline *this,ulong param_1,float param_2,float param_3,float param_4,float param_5
          )

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = *(long *)(this + 0x20);
  uVar2 = param_1 * 0x13 + 1;
  uVar1 = param_1 * 0x13 + 0x13;
  *(undefined4 *)(lVar3 + param_1 * 0x4c) = 0x40000000;
  if (uVar2 < uVar1) {
    uVar8 = NEON_fmov(0x40400000,4);
    fVar9 = (param_4 - (param_2 + param_2)) * 0.03;
    fVar11 = (param_5 - (param_3 + param_3)) * 0.03;
    uVar6 = NEON_fmov(0x3f800000,4);
    fVar5 = ((param_2 - param_4) * (float)uVar8 + (float)uVar6) * 0.006;
    fVar7 = ((param_3 - param_5) * (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar6 >> 0x20)) *
            0.006;
    uVar8 = CONCAT44(param_3 * 0.3 + fVar11 + fVar7 * 0.16666667,
                     param_2 * 0.3 + fVar9 + fVar5 * 0.16666667);
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    puVar4 = (undefined8 *)(lVar3 + uVar2 * 4);
    uVar6 = uVar8;
    do {
      fVar9 = fVar5 + fVar9;
      fVar11 = fVar7 + fVar11;
      uVar2 = uVar2 + 2;
      fVar10 = (float)uVar6 + fVar9;
      fVar12 = (float)((ulong)uVar6 >> 0x20) + fVar11;
      uVar6 = CONCAT44(fVar12,fVar10);
      *puVar4 = uVar8;
      uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar12,(float)uVar8 + fVar10);
      puVar4 = puVar4 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

