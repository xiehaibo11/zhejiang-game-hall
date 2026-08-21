
void cpArbiterGetContactPointSet(undefined8 *param_1,long param_2)

{
  float fVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
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
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined4 local_8;
  
  if (*(uint *)(param_2 + 0x90) < 3) {
    iVar2 = *(int *)(param_2 + 0x58);
  }
  else {
    iVar2 = 0;
  }
  fVar6 = *(float *)(param_2 + 0x68);
  fVar7 = *(float *)(param_2 + 0x6c);
  fVar9 = -fVar7;
  fVar1 = -fVar6;
  if (*(char *)(param_2 + 0x88) == '\0') {
    fVar9 = fVar7;
    fVar1 = fVar6;
  }
  if (0 < iVar2) {
    fVar8 = *(float *)(*(long *)(param_2 + 0x28) + 0x28);
    fVar10 = *(float *)(*(long *)(param_2 + 0x28) + 0x2c);
    fVar11 = *(float *)(*(long *)(param_2 + 0x30) + 0x28);
    fVar12 = *(float *)(*(long *)(param_2 + 0x30) + 0x2c);
    if (*(char *)(param_2 + 0x88) == '\0') {
      lVar3 = 0;
      pfVar4 = (float *)((long)&uStack_20 + 4);
      pfVar5 = (float *)(*(long *)(param_2 + 0x60) + 8);
      do {
        lVar3 = lVar3 + 1;
        fVar13 = pfVar5[-2] + fVar8;
        fVar14 = pfVar5[-1] + fVar10;
        fVar15 = *pfVar5 + fVar11;
        fVar16 = pfVar5[1] + fVar12;
        pfVar4[-4] = fVar13;
        pfVar4[-3] = fVar14;
        pfVar4[-2] = fVar15;
        pfVar4[-1] = fVar16;
        *pfVar4 = (fVar15 - fVar13) * fVar6 + fVar7 * (fVar16 - fVar14);
        pfVar4 = pfVar4 + 5;
        pfVar5 = pfVar5 + 0xe;
      } while (lVar3 < iVar2);
    }
    else {
      lVar3 = 0;
      pfVar4 = (float *)&local_28;
      pfVar5 = (float *)(*(long *)(param_2 + 0x60) + 8);
      do {
        lVar3 = lVar3 + 1;
        fVar13 = pfVar5[-2] + fVar8;
        fVar14 = pfVar5[-1] + fVar10;
        fVar15 = *pfVar5 + fVar11;
        fVar16 = pfVar5[1] + fVar12;
        pfVar4[1] = fVar13;
        pfVar4[2] = fVar14;
        pfVar4[-1] = fVar15;
        *pfVar4 = fVar16;
        pfVar4[3] = (fVar15 - fVar13) * fVar6 + fVar7 * (fVar16 - fVar14);
        pfVar4 = pfVar4 + 5;
        pfVar5 = pfVar5 + 0xe;
      } while (lVar3 < iVar2);
    }
  }
  *(undefined4 *)(param_1 + 6) = local_8;
  param_1[1] = CONCAT44(uStack_2c,fVar9);
  *param_1 = CONCAT44(fVar1,iVar2);
  param_1[3] = uStack_20;
  param_1[2] = local_28;
  param_1[5] = uStack_10;
  param_1[4] = local_18;
  return;
}

