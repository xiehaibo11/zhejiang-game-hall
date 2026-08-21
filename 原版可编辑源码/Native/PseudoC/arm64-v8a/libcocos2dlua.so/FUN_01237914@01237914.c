
void FUN_01237914(long *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  
  if (*param_1 == 0) {
    *param_1 = (long)param_3;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 0xc);
    if (puVar3 != (undefined8 *)0x0) {
      fVar13 = (float)*(undefined8 *)param_3 + (float)*(undefined8 *)(param_3 + 4);
      fVar14 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
      do {
        puVar4 = *(undefined8 **)(param_2 + 10);
        param_2 = *(float **)
                   (param_2 + 10 +
                   (ulong)(ABS(fVar13 - ((float)*puVar3 + (float)puVar3[2])) +
                           ABS(fVar14 - ((float)((ulong)*puVar3 >> 0x20) +
                                        (float)((ulong)puVar3[2] >> 0x20))) +
                           ABS((param_3[2] + param_3[6]) -
                               (*(float *)(puVar3 + 1) + *(float *)(puVar3 + 3))) <=
                          ABS(fVar13 - ((float)*puVar4 + (float)puVar4[2])) +
                          ABS(fVar14 - ((float)((ulong)*puVar4 >> 0x20) +
                                       (float)((ulong)puVar4[2] >> 0x20))) +
                          ABS((param_3[2] + param_3[6]) -
                              (*(float *)(puVar4 + 1) + *(float *)(puVar4 + 3)))) * 2);
        puVar3 = *(undefined8 **)(param_2 + 0xc);
      } while (puVar3 != (undefined8 *)0x0);
    }
    pfVar2 = (float *)param_1[1];
    pfVar12 = *(float **)(param_2 + 8);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)btAlignedAllocInternal(0x38,0x10);
      pfVar2[10] = 0.0;
      pfVar2[0xb] = 0.0;
      pfVar2[0xc] = 0.0;
      pfVar2[0xd] = 0.0;
      pfVar2[6] = 0.0;
      pfVar2[7] = 0.0;
      pfVar2[8] = 0.0;
      pfVar2[9] = 0.0;
      pfVar2[2] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2[4] = 0.0;
      pfVar2[5] = 0.0;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
    }
    else {
      param_1[1] = 0;
    }
    pfVar2[10] = 0.0;
    pfVar2[0xb] = 0.0;
    pfVar2[0xc] = 0.0;
    pfVar2[0xd] = 0.0;
    *(float **)(pfVar2 + 8) = pfVar12;
    pfVar1 = param_3;
    if (*param_2 <= *param_3) {
      pfVar1 = param_2;
    }
    fVar13 = *pfVar1;
    *pfVar2 = fVar13;
    pfVar8 = param_3 + 4;
    pfVar10 = param_2 + 4;
    pfVar1 = pfVar8;
    if (*pfVar8 <= *pfVar10) {
      pfVar1 = pfVar10;
    }
    fVar14 = *pfVar1;
    pfVar2[4] = fVar14;
    pfVar1 = param_3;
    if (param_2[1] <= param_3[1]) {
      pfVar1 = param_2;
    }
    fVar6 = pfVar1[1];
    pfVar2[1] = fVar6;
    pfVar1 = pfVar8;
    if (param_3[5] <= param_2[5]) {
      pfVar1 = pfVar10;
    }
    fVar5 = pfVar1[1];
    pfVar2[5] = fVar5;
    pfVar1 = param_3;
    if (param_2[2] <= param_3[2]) {
      pfVar1 = param_2;
    }
    fVar9 = pfVar1[2];
    pfVar2[2] = fVar9;
    if (param_3[6] <= param_2[6]) {
      pfVar8 = pfVar10;
    }
    fVar7 = pfVar8[2];
    pfVar2[6] = fVar7;
    if (pfVar12 == (float *)0x0) {
      *(float **)(pfVar2 + 10) = param_2;
      *(float **)(param_2 + 8) = pfVar2;
      *(float **)(pfVar2 + 0xc) = param_3;
      *(float **)(param_3 + 8) = pfVar2;
      *param_1 = (long)pfVar2;
    }
    else {
      *(float **)(pfVar12 + (ulong)(*(float **)(*(long *)(param_2 + 8) + 0x30) == param_2) * 2 + 10)
           = pfVar2;
      *(float **)(pfVar2 + 10) = param_2;
      *(float **)(param_2 + 8) = pfVar2;
      *(float **)(pfVar2 + 0xc) = param_3;
      *(float **)(param_3 + 8) = pfVar2;
      do {
        if ((((*pfVar12 <= fVar13) && (pfVar12[1] <= fVar6)) && (pfVar12[2] <= fVar9)) &&
           (((fVar14 <= pfVar12[4] && (fVar5 <= pfVar12[5])) && (fVar7 <= pfVar12[6])))) {
          return;
        }
        pfVar1 = *(float **)(pfVar12 + 10);
        pfVar8 = *(float **)(pfVar12 + 0xc);
        pfVar2 = pfVar1;
        if (*pfVar8 <= *pfVar1) {
          pfVar2 = pfVar8;
        }
        fVar13 = *pfVar2;
        *pfVar12 = fVar13;
        pfVar10 = pfVar1 + 4;
        pfVar11 = pfVar8 + 4;
        pfVar2 = pfVar10;
        if (*pfVar10 <= *pfVar11) {
          pfVar2 = pfVar11;
        }
        fVar14 = *pfVar2;
        pfVar12[4] = fVar14;
        pfVar2 = pfVar1;
        if (pfVar8[1] <= pfVar1[1]) {
          pfVar2 = pfVar8;
        }
        fVar6 = pfVar2[1];
        pfVar12[1] = fVar6;
        pfVar2 = pfVar10;
        if (pfVar1[5] <= pfVar8[5]) {
          pfVar2 = pfVar11;
        }
        fVar5 = pfVar2[1];
        pfVar12[5] = fVar5;
        pfVar2 = pfVar1;
        if (pfVar8[2] <= pfVar1[2]) {
          pfVar2 = pfVar8;
        }
        fVar9 = pfVar2[2];
        pfVar12[2] = fVar9;
        if (pfVar1[6] <= pfVar8[6]) {
          pfVar10 = pfVar11;
        }
        fVar7 = pfVar10[2];
        pfVar12[6] = fVar7;
        pfVar12 = *(float **)(pfVar12 + 8);
      } while (pfVar12 != (float *)0x0);
    }
  }
  return;
}

