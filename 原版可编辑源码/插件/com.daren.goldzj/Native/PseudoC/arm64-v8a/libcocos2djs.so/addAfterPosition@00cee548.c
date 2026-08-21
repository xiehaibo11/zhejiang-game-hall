
/* spine::PathConstraint::addAfterPosition(float, spine::Vector<float>&, int, spine::Vector<float>&,
   int) */

void spine::PathConstraint::addAfterPosition
               (float param_1,Vector *param_2,int param_3,Vector *param_4,int param_5)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)(*(long *)(param_2 + 0x18) + (long)param_3 * 4);
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  fVar4 = (float)MathUtil::atan2(fVar7 - pfVar1[1],fVar6 - *pfVar1);
  fVar5 = (float)MathUtil::cos(fVar4);
  uVar3 = -(ulong)((uint)param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_5 << 2;
  *(float *)(*(long *)(param_4 + 0x18) + uVar3) = fVar6 + fVar5 * param_1;
  fVar5 = (float)MathUtil::sin(fVar4);
  lVar2 = *(long *)(param_4 + 0x18) + uVar3;
  *(float *)(lVar2 + 4) = fVar7 + fVar5 * param_1;
  *(float *)(lVar2 + 8) = fVar4;
  return;
}

