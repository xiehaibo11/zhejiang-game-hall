
/* void 
   btAlignedObjectArray<GrahamVector3>::quickSortInternal<btAngleCompareFunc>(btAngleCompareFunc
   const&, int, int) */

void __thiscall
btAlignedObjectArray<GrahamVector3>::quickSortInternal<btAngleCompareFunc>
          (btAlignedObjectArray<GrahamVector3> *this,btAngleCompareFunc *param_1,int param_2,
          int param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar7 = *(long *)(this + 0x10);
  iVar10 = param_3 + param_2;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 1;
  }
  pfVar6 = (float *)(lVar7 + (long)(iVar10 >> 1) * 0x18);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  fVar13 = pfVar6[2];
  fVar14 = pfVar6[4];
  fVar3 = pfVar6[5];
  iVar5 = param_3;
  iVar10 = param_2;
LAB_0122e344:
  fVar15 = *(float *)param_1;
  fVar19 = *(float *)(param_1 + 4);
  fVar20 = *(float *)(param_1 + 8);
  pfVar6 = (float *)(lVar7 + (long)iVar10 * 0x18);
  fVar21 = (fVar11 - fVar15) * (fVar11 - fVar15) + (fVar12 - fVar19) * (fVar12 - fVar19) +
           (fVar13 - fVar20) * (fVar13 - fVar20);
  do {
    bVar4 = pfVar6[4] < fVar14;
    if ((pfVar6[4] == fVar14) &&
       (fVar22 = (*pfVar6 - fVar15) * (*pfVar6 - fVar15) +
                 (pfVar6[1] - fVar19) * (pfVar6[1] - fVar19) +
                 (pfVar6[2] - fVar20) * (pfVar6[2] - fVar20), bVar4 = fVar22 < fVar21,
       fVar22 == fVar21)) {
      if ((int)fVar3 <= (int)pfVar6[5]) break;
    }
    else if (!bVar4) break;
    iVar10 = iVar10 + 1;
    pfVar6 = pfVar6 + 6;
  } while( true );
  lVar8 = (long)iVar5 * 0x18;
  do {
    pfVar1 = (float *)(lVar7 + lVar8);
    bVar4 = fVar14 < pfVar1[4];
    if ((fVar14 == pfVar1[4]) &&
       (fVar22 = (*pfVar1 - fVar15) * (*pfVar1 - fVar15) +
                 (pfVar1[1] - fVar19) * (pfVar1[1] - fVar19) +
                 (pfVar1[2] - fVar20) * (pfVar1[2] - fVar20), bVar4 = fVar21 < fVar22,
       fVar21 == fVar22)) {
      if (*(int *)(lVar7 + lVar8 + 0x14) <= (int)fVar3) break;
    }
    else if (!bVar4) break;
    iVar5 = iVar5 + -1;
    lVar8 = lVar8 + -0x18;
  } while( true );
  if (iVar10 <= iVar5) {
    uVar9 = *(undefined8 *)(pfVar6 + 4);
    puVar2 = (undefined8 *)(lVar7 + lVar8);
    iVar10 = iVar10 + 1;
    iVar5 = iVar5 + -1;
    uVar18 = *(undefined8 *)(pfVar6 + 2);
    uVar16 = *(undefined8 *)pfVar6;
    *(undefined8 *)(pfVar6 + 4) = puVar2[2];
    uVar17 = *puVar2;
    *(undefined8 *)(pfVar6 + 2) = puVar2[1];
    *(undefined8 *)pfVar6 = uVar17;
    puVar2 = (undefined8 *)(*(long *)(this + 0x10) + lVar8);
    puVar2[2] = uVar9;
    puVar2[1] = uVar18;
    *puVar2 = uVar16;
  }
  if (iVar5 < iVar10) {
    if (param_2 < iVar5) {
      quickSortInternal<btAngleCompareFunc>(this,param_1,param_2,iVar5);
    }
    if (iVar10 < param_3) {
      quickSortInternal<btAngleCompareFunc>(this,param_1,iVar10,param_3);
      return;
    }
    return;
  }
  lVar7 = *(long *)(this + 0x10);
  goto LAB_0122e344;
}

