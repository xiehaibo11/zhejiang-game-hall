
/* spine::RegionAttachment::computeWorldVertices(spine::Bone&, float*, unsigned long, unsigned long)
    */

void __thiscall
spine::RegionAttachment::computeWorldVertices
          (RegionAttachment *this,Bone *param_1,float *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = (float)Bone::getWorldX(param_1);
  fVar4 = (float)Bone::getWorldY(param_1);
  fVar5 = (float)Bone::getA(param_1);
  fVar6 = (float)Bone::getB(param_1);
  fVar7 = (float)Bone::getC(param_1);
  fVar8 = (float)Bone::getD(param_1);
  pfVar2 = *(float **)(this + 0x90);
  fVar9 = pfVar2[6];
  fVar10 = pfVar2[7];
  param_2[param_3] = fVar3 + fVar5 * fVar9 + fVar6 * fVar10;
  (param_2 + param_3)[1] = fVar4 + fVar7 * fVar9 + fVar8 * fVar10;
  fVar9 = *pfVar2;
  fVar10 = pfVar2[1];
  lVar1 = param_4 + param_3 + param_4;
  param_2[param_4 + param_3] = fVar3 + fVar5 * fVar9 + fVar6 * fVar10;
  (param_2 + param_4 + param_3)[1] = fVar4 + fVar7 * fVar9 + fVar8 * fVar10;
  fVar9 = pfVar2[2];
  fVar10 = pfVar2[3];
  param_2[lVar1] = fVar3 + fVar5 * fVar9 + fVar6 * fVar10;
  (param_2 + lVar1)[1] = fVar4 + fVar7 * fVar9 + fVar8 * fVar10;
  fVar9 = pfVar2[4];
  fVar10 = pfVar2[5];
  param_2[lVar1 + param_4] = fVar3 + fVar5 * fVar9 + fVar6 * fVar10;
  (param_2 + lVar1 + param_4)[1] = fVar4 + fVar7 * fVar9 + fVar8 * fVar10;
  return;
}

