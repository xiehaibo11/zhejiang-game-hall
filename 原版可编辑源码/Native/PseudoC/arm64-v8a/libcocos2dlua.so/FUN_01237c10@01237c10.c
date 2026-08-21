
float * FUN_01237c10(long *param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (*param_1 == param_2) {
    pfVar13 = (float *)0x0;
    *param_1 = 0;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x20);
    pfVar13 = *(float **)(lVar14 + 0x20);
    lVar10 = *(long *)(lVar14 + (ulong)(*(long *)(lVar14 + 0x30) != param_2) * 8 + 0x28);
    if (pfVar13 == (float *)0x0) {
      *param_1 = lVar10;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      btAlignedFreeInternal((void *)param_1[1]);
      param_1[1] = lVar14;
    }
    else {
      *(long *)(pfVar13 + (ulong)(*(long *)(pfVar13 + 0xc) == lVar14) * 2 + 10) = lVar10;
      *(float **)(lVar10 + 0x20) = pfVar13;
      btAlignedFreeInternal((void *)param_1[1]);
      param_1[1] = lVar14;
      do {
        pfVar2 = *(float **)(pfVar13 + 10);
        pfVar3 = *(float **)(pfVar13 + 0xc);
        fVar20 = *pfVar13;
        fVar19 = pfVar13[1];
        fVar18 = pfVar13[2];
        pfVar1 = pfVar2;
        if (*pfVar3 <= *pfVar2) {
          pfVar1 = pfVar3;
        }
        fVar4 = *pfVar1;
        fVar17 = pfVar13[4];
        fVar16 = pfVar13[5];
        fVar15 = pfVar13[6];
        *pfVar13 = fVar4;
        pfVar11 = pfVar2 + 4;
        pfVar12 = pfVar3 + 4;
        pfVar1 = pfVar11;
        if (*pfVar11 <= *pfVar12) {
          pfVar1 = pfVar12;
        }
        fVar5 = *pfVar1;
        pfVar13[4] = fVar5;
        pfVar1 = pfVar2;
        if (pfVar3[1] <= pfVar2[1]) {
          pfVar1 = pfVar3;
        }
        fVar6 = pfVar1[1];
        pfVar13[1] = fVar6;
        pfVar1 = pfVar11;
        if (pfVar2[5] <= pfVar3[5]) {
          pfVar1 = pfVar12;
        }
        fVar7 = pfVar1[1];
        pfVar13[5] = fVar7;
        pfVar1 = pfVar2;
        if (pfVar3[2] <= pfVar2[2]) {
          pfVar1 = pfVar3;
        }
        fVar8 = pfVar1[2];
        pfVar13[2] = fVar8;
        if (pfVar2[6] <= pfVar3[6]) {
          pfVar11 = pfVar12;
        }
        fVar9 = pfVar11[2];
        pfVar13[6] = fVar9;
        if ((((fVar20 == fVar4) && (fVar19 == fVar6)) && (fVar18 == fVar8)) &&
           (((fVar17 == fVar5 && (fVar16 == fVar7)) && (fVar15 == fVar9)))) {
          return pfVar13;
        }
        pfVar13 = *(float **)(pfVar13 + 8);
      } while (pfVar13 != (float *)0x0);
    }
    pfVar13 = (float *)*param_1;
  }
  return pfVar13;
}

