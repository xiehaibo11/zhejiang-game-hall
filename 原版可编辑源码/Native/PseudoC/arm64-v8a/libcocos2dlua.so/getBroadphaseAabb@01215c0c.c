
/* btDbvtBroadphase::getBroadphaseAabb(btVector3&, btVector3&) const */

void __thiscall
btDbvtBroadphase::getBroadphaseAabb(btDbvtBroadphase *this,btVector3 *param_1,btVector3 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  
  pfVar9 = *(float **)(this + 8);
  pfVar8 = *(float **)(this + 0x68);
  if (pfVar9 == (float *)0x0) {
    if (pfVar8 == (float *)0x0) {
      fVar3 = 0.0;
      fVar4 = 0.0;
      fVar5 = 0.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
      fVar10 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar3 = *pfVar8;
      fVar4 = pfVar8[1];
      fVar5 = pfVar8[2];
      fVar13 = pfVar8[3];
      fVar6 = pfVar8[4];
      fVar7 = pfVar8[5];
      fVar10 = pfVar8[6];
      fVar14 = pfVar8[7];
    }
  }
  else if (pfVar8 == (float *)0x0) {
    fVar3 = *pfVar9;
    fVar4 = pfVar9[1];
    fVar5 = pfVar9[2];
    fVar13 = pfVar9[3];
    fVar6 = pfVar9[4];
    fVar7 = pfVar9[5];
    fVar10 = pfVar9[6];
    fVar14 = pfVar9[7];
  }
  else {
    pfVar1 = pfVar9;
    if (*pfVar8 <= *pfVar9) {
      pfVar1 = pfVar8;
    }
    fVar3 = *pfVar1;
    pfVar11 = pfVar9 + 4;
    pfVar12 = pfVar8 + 4;
    pfVar1 = pfVar11;
    if (*pfVar11 <= *pfVar12) {
      pfVar1 = pfVar12;
    }
    fVar14 = pfVar9[5];
    fVar13 = pfVar8[2];
    pfVar2 = pfVar9;
    if (pfVar8[1] <= pfVar9[1]) {
      pfVar2 = pfVar8;
    }
    fVar6 = *pfVar1;
    pfVar1 = pfVar11;
    if (fVar14 <= pfVar8[5]) {
      pfVar1 = pfVar12;
    }
    fVar4 = pfVar2[1];
    pfVar2 = pfVar9;
    if (fVar13 <= pfVar9[2]) {
      pfVar2 = pfVar8;
    }
    if (pfVar9[6] <= pfVar8[6]) {
      pfVar11 = pfVar12;
    }
    fVar7 = pfVar1[1];
    fVar5 = pfVar2[2];
    fVar10 = pfVar11[2];
  }
  *(float *)param_1 = fVar3;
  *(float *)(param_1 + 4) = fVar4;
  *(float *)(param_1 + 8) = fVar5;
  *(float *)(param_1 + 0xc) = fVar13;
  *(float *)param_2 = fVar6;
  *(float *)(param_2 + 4) = fVar7;
  *(float *)(param_2 + 8) = fVar10;
  *(float *)(param_2 + 0xc) = fVar14;
  return;
}

