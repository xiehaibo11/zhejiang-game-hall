
/* spine::SwirlVertexEffect::transform(float&, float&, float&, float&, spine::Color&, spine::Color&)
    */

void spine::SwirlVertexEffect::transform
               (float *param_1,float *param_2,float *param_3,float *param_4,Color *param_5,
               Color *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2 - param_1[6];
  fVar4 = *param_3 - param_1[7];
  fVar1 = (float)MathUtil::sqrt(fVar3 * fVar3 + fVar4 * fVar4);
  fVar2 = param_1[4];
  if (fVar1 < fVar2) {
    fVar1 = (float)(**(code **)(**(long **)(param_1 + 8) + 8))(0,param_1[5],(fVar2 - fVar1) / fVar2)
    ;
    fVar2 = (float)MathUtil::cos(fVar1);
    fVar1 = (float)MathUtil::sin(fVar1);
    *param_2 = param_1[6] + (fVar3 * fVar2 - fVar4 * fVar1);
    *param_3 = fVar4 * fVar2 + fVar3 * fVar1 + param_1[7];
  }
  return;
}

