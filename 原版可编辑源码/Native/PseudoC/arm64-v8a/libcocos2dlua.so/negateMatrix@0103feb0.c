
/* cocos2d::MathUtilNeon64::negateMatrix(float const*, float*) */

void cocos2d::MathUtilNeon64::negateMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = param_1[1];
  fVar8 = param_1[2];
  fVar12 = param_1[3];
  fVar1 = param_1[4];
  fVar5 = param_1[5];
  fVar9 = param_1[6];
  fVar13 = param_1[7];
  fVar2 = param_1[8];
  fVar6 = param_1[9];
  fVar10 = param_1[10];
  fVar14 = param_1[0xb];
  fVar3 = param_1[0xc];
  fVar7 = param_1[0xd];
  fVar11 = param_1[0xe];
  fVar15 = param_1[0xf];
  *param_2 = -*param_1;
  param_2[1] = -fVar4;
  param_2[2] = -fVar8;
  param_2[3] = -fVar12;
  param_2[4] = -fVar1;
  param_2[5] = -fVar5;
  param_2[6] = -fVar9;
  param_2[7] = -fVar13;
  param_2[8] = -fVar2;
  param_2[9] = -fVar6;
  param_2[10] = -fVar10;
  param_2[0xb] = -fVar14;
  param_2[0xc] = -fVar3;
  param_2[0xd] = -fVar7;
  param_2[0xe] = -fVar11;
  param_2[0xf] = -fVar15;
  return;
}

