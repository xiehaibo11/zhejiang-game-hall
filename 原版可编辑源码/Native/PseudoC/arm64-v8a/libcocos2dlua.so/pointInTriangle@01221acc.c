
/* SphereTriangleDetector::pointInTriangle(btVector3 const*, btVector3 const&, btVector3*) */

bool __thiscall
SphereTriangleDetector::pointInTriangle
          (SphereTriangleDetector *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  bool bVar1;
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
  float fVar16;
  float fVar17;
  
  fVar2 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 8);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  fVar12 = *(float *)param_3;
  fVar13 = *(float *)(param_3 + 4);
  fVar14 = *(float *)(param_3 + 8);
  fVar17 = *(float *)(param_2 + 4);
  fVar15 = *(float *)(param_2 + 8);
  fVar16 = *(float *)param_2;
  fVar3 = (fVar14 - fVar11) * ((fVar5 - fVar9) * fVar17 - (fVar6 - fVar10) * fVar16) +
          (fVar12 - fVar9) * ((fVar6 - fVar10) * fVar15 - (fVar8 - fVar11) * fVar17) +
          (fVar13 - fVar10) * ((fVar8 - fVar11) * fVar16 - (fVar5 - fVar9) * fVar15);
  fVar5 = (fVar14 - fVar8) * ((fVar2 - fVar5) * fVar17 - (fVar4 - fVar6) * fVar16) +
          (fVar12 - fVar5) * ((fVar4 - fVar6) * fVar15 - (fVar7 - fVar8) * fVar17) +
          (fVar13 - fVar6) * ((fVar7 - fVar8) * fVar16 - (fVar2 - fVar5) * fVar15);
  fVar2 = (fVar14 - fVar7) * ((fVar9 - fVar2) * fVar17 - (fVar10 - fVar4) * fVar16) +
          (fVar12 - fVar2) * ((fVar10 - fVar4) * fVar15 - (fVar11 - fVar7) * fVar17) +
          (fVar13 - fVar4) * ((fVar11 - fVar7) * fVar16 - (fVar9 - fVar2) * fVar15);
  if (((fVar3 <= 0.0) || (fVar5 <= 0.0)) || (fVar2 <= 0.0)) {
    bVar1 = fVar3 <= 0.0 && (fVar5 <= 0.0 && fVar2 <= 0.0);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

