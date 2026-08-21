
void cpShapesCollide(undefined8 *param_1,long param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  long local_b8 [2];
  float local_a4;
  float fStack_a0;
  int local_9c;
  undefined1 local_90 [8];
  float afStack_88 [26];
  
  cpCollide(local_b8,param_2,param_3,0,local_90);
  fVar1 = local_a4;
  fVar2 = fStack_a0;
  if (local_b8[0] != param_2) {
    fVar1 = -local_a4;
    fVar2 = -fStack_a0;
  }
  if (0 < local_9c) {
    if (local_b8[0] == param_2) {
      lVar3 = 0;
      pfVar4 = (float *)((long)&uStack_d8 + 4);
      pfVar5 = afStack_88;
      do {
        fVar6 = pfVar5[-2];
        fVar7 = pfVar5[-1];
        fVar8 = *pfVar5;
        fVar9 = pfVar5[1];
        lVar3 = lVar3 + 1;
        pfVar4[-4] = fVar6;
        pfVar4[-3] = fVar7;
        pfVar4[-2] = fVar8;
        pfVar4[-1] = fVar9;
        *pfVar4 = fVar1 * (fVar8 - fVar6) + (fVar9 - fVar7) * fVar2;
        pfVar4 = pfVar4 + 5;
        pfVar5 = pfVar5 + 0xe;
      } while (lVar3 < local_9c);
    }
    else {
      lVar3 = 0;
      pfVar4 = (float *)&local_e0;
      pfVar5 = afStack_88;
      do {
        fVar6 = pfVar5[-2];
        fVar7 = pfVar5[-1];
        fVar8 = *pfVar5;
        fVar9 = pfVar5[1];
        lVar3 = lVar3 + 1;
        pfVar4[1] = fVar6;
        pfVar4[2] = fVar7;
        pfVar4[-1] = fVar8;
        *pfVar4 = fVar9;
        pfVar4[3] = fVar1 * (fVar8 - fVar6) + (fVar9 - fVar7) * fVar2;
        pfVar4 = pfVar4 + 5;
        pfVar5 = pfVar5 + 0xe;
      } while (lVar3 < local_9c);
    }
  }
  *(undefined4 *)(param_1 + 6) = local_c0;
  param_1[3] = uStack_d8;
  param_1[2] = local_e0;
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[1] = CONCAT44(uStack_e4,fVar2);
  *param_1 = CONCAT44(fVar1,local_9c);
  return;
}

