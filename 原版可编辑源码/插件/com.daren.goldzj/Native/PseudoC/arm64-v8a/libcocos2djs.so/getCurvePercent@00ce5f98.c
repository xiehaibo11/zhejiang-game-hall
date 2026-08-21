
/* spine::CurveTimeline::getCurvePercent(unsigned long, float) */

undefined1  [16] __thiscall
spine::CurveTimeline::getCurvePercent(CurveTimeline *this,ulong param_1,float param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  auVar8 = MathUtil::clamp(param_2,0.0,1.0);
  lVar3 = *(long *)(this + 0x20);
  fVar10 = *(float *)(lVar3 + param_1 * 0x4c);
  auVar2 = auVar8;
  if ((fVar10 != 0.0) && (auVar2 = ZEXT816(0), fVar10 != 1.0)) {
    uVar5 = param_1 * 0x13 + 1;
    uVar1 = param_1 * 0x13 + 0x13;
    fVar9 = 0.0;
    fVar10 = auVar8._0_4_;
    uVar4 = uVar5;
    if (uVar5 < uVar1) {
      lVar6 = 0;
      pfVar7 = (float *)(lVar3 + param_1 * 0x4c);
      do {
        fVar9 = pfVar7[1];
        if (fVar10 <= fVar9) {
          if (lVar6 == 0) {
            fVar11 = 0.0;
            fVar12 = 0.0;
          }
          else {
            fVar11 = pfVar7[-1];
            fVar12 = *pfVar7;
            uVar5 = uVar5 + lVar6;
          }
          return ZEXT416((uint)(fVar12 + ((fVar10 - fVar11) *
                                         (*(float *)(lVar3 + uVar5 * 4 + 4) - fVar12)) /
                                         (fVar9 - fVar11)));
        }
        lVar6 = lVar6 + 2;
        uVar4 = uVar5 + lVar6;
        pfVar7 = pfVar7 + 2;
      } while (uVar4 < uVar1);
    }
    fVar11 = *(float *)(lVar3 + uVar4 * 4 + -4);
    auVar2 = ZEXT416((uint)(fVar11 + ((fVar10 - fVar9) * (1.0 - fVar11)) / (1.0 - fVar9)));
  }
  return auVar2;
}

