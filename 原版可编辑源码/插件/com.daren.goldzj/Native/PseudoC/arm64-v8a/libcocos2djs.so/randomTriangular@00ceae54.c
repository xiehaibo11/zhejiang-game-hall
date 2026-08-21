
/* spine::MathUtil::randomTriangular(float, float) */

float spine::MathUtil::randomTriangular(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (param_1 + param_2) * 0.5;
  iVar1 = rand();
  fVar2 = param_2 - param_1;
  fVar4 = fVar5 - param_1;
  fVar3 = (float)iVar1 * 4.656613e-10;
  if (fVar3 <= fVar4 / fVar2) {
    fVar2 = SQRT(fVar4 * fVar2 * fVar3) + param_1;
  }
  else {
    fVar2 = param_2 - SQRT((param_2 - fVar5) * fVar2 * (1.0 - fVar3));
  }
  return fVar2;
}

