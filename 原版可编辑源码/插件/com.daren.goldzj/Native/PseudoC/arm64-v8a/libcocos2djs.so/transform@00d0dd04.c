
/* spine::JitterVertexEffect::transform(float&, float&, float&, float&, spine::Color&,
   spine::Color&) */

void spine::JitterVertexEffect::transform
               (float *param_1,float *param_2,float *param_3,float *param_4,Color *param_5,
               Color *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1[3];
  fVar3 = -param_1[2];
  fVar1 = (float)MathUtil::randomTriangular(fVar3,param_1[2]);
  *param_2 = fVar1 + *param_2;
  fVar1 = (float)MathUtil::randomTriangular(fVar3,fVar2);
  *param_3 = fVar1 + *param_3;
  return;
}

