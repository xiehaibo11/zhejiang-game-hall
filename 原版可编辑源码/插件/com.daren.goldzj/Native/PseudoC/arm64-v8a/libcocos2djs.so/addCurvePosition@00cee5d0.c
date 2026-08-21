
/* spine::PathConstraint::addCurvePosition(float, float, float, float, float, float, float, float,
   float, spine::Vector<float>&, int, bool) */

void spine::PathConstraint::addCurvePosition
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,Vector *param_10,int param_11,bool param_12
               )

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((param_1 < 1e-05) || (uVar2 = MathUtil::isNan(param_1), (uVar2 & 1) != 0)) {
    pfVar1 = (float *)(*(long *)(param_10 + 0x18) + (long)param_11 * 4);
    *pfVar1 = param_2;
    pfVar1[1] = param_3;
  }
  else {
    fVar8 = 1.0 - param_1;
    fVar7 = fVar8 * param_1;
    fVar10 = fVar8 * fVar8;
    fVar9 = fVar8 * fVar7 * 3.0;
    fVar4 = param_1 * param_1;
    fVar6 = fVar7 * 3.0 * param_1;
    fVar5 = param_2 * fVar8 * fVar10 + param_4 * fVar9 + param_6 * fVar6 + param_8 * fVar4 * param_1
    ;
    fVar6 = param_3 * fVar8 * fVar10 + param_5 * fVar9 + param_7 * fVar6 + param_9 * fVar4 * param_1
    ;
    *(ulong *)(*(long *)(param_10 + 0x18) +
              (-(ulong)((uint)param_11 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_11 << 2))
         = CONCAT44(fVar6,fVar5);
    if (!param_12) {
      return;
    }
    if (0.001 <= param_1) {
      fVar5 = fVar5 - (param_2 * fVar10 + param_4 * fVar7 + param_4 * fVar7 + param_6 * fVar4);
      fVar6 = fVar6 - (param_3 * fVar10 + param_5 * fVar7 + param_5 * fVar7 + param_7 * fVar4);
      goto LAB_00cee648;
    }
  }
  fVar5 = param_4 - param_2;
  fVar6 = param_5 - param_3;
LAB_00cee648:
  uVar3 = MathUtil::atan2(fVar6,fVar5);
  *(undefined4 *)(*(long *)(param_10 + 0x18) + (long)param_11 * 4 + 8) = uVar3;
  return;
}

