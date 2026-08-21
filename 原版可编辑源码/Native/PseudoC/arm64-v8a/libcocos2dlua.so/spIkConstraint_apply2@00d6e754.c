
void spIkConstraint_apply2
               (float param_1,float param_2,float param_3,long param_4,long *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float __x;
  float fVar21;
  float fVar22;
  float local_a0;
  float local_38;
  float fStack_34;
  
  if (param_3 == 0.0) {
    spBone_updateWorldTransform(param_5);
    return;
  }
  lVar3 = *(long *)(param_4 + 0x10);
  if (*(int *)(param_4 + 0x60) == 0) {
    spBone_updateAppliedTransform(param_4);
    iVar2 = (int)param_5[0xc];
  }
  else {
    iVar2 = (int)param_5[0xc];
  }
  if (iVar2 == 0) {
    spBone_updateAppliedTransform(param_5);
  }
  fVar15 = *(float *)(param_4 + 0x50);
  fVar16 = *(float *)(param_4 + 0x54);
  fVar4 = *(float *)(param_5 + 10);
  fVar9 = 180.0;
  iVar2 = -1;
  fVar6 = -fVar15;
  fVar19 = fVar9;
  if (0.0 <= fVar15) {
    iVar2 = 1;
    fVar19 = 0.0;
    fVar6 = fVar15;
  }
  fVar7 = -fVar16;
  iVar1 = -iVar2;
  if (0.0 <= fVar16) {
    fVar7 = fVar16;
    iVar1 = iVar2;
  }
  fVar21 = *(float *)(param_4 + 0x44);
  fVar22 = *(float *)(param_4 + 0x48);
  __x = *(float *)((long)param_5 + 0x44);
  if (0.0 <= fVar4) {
    fVar9 = 0.0;
  }
  fVar8 = fVar6 - fVar7;
  fVar5 = -fVar4;
  if (0.0 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = -fVar8;
  if (0.0 <= fVar8) {
    fVar4 = fVar8;
  }
  if (0.0001 < fVar4) {
    local_a0 = 0.0;
    fVar12 = *(float *)(param_4 + 0x78);
    fVar8 = __x * *(float *)(param_4 + 100) + *(float *)(param_4 + 0x6c);
    fVar10 = __x * *(float *)(param_4 + 0x70);
  }
  else {
    local_a0 = *(float *)(param_5 + 9);
    fVar10 = *(float *)(param_4 + 0x78);
    fVar8 = *(float *)(param_4 + 0x6c) +
            __x * *(float *)(param_4 + 100) + local_a0 * *(float *)(param_4 + 0x68);
    fVar12 = __x * *(float *)(param_4 + 0x70) + local_a0 * *(float *)(param_4 + 0x74);
  }
  fVar13 = *(float *)(lVar3 + 100);
  fVar14 = *(float *)(lVar3 + 0x68);
  fVar17 = *(float *)(lVar3 + 0x70);
  fVar20 = *(float *)(lVar3 + 0x74);
  param_1 = param_1 - *(float *)(lVar3 + 0x6c);
  param_2 = param_2 - *(float *)(lVar3 + 0x78);
  fVar8 = fVar8 - *(float *)(lVar3 + 0x6c);
  fVar11 = (fVar10 + fVar12) - *(float *)(lVar3 + 0x78);
  fVar10 = 1.0 / (fVar13 * fVar20 - fVar14 * fVar17);
  fVar12 = fVar10 * (fVar20 * fVar8 - fVar14 * fVar11) - fVar21;
  fVar8 = fVar10 * (fVar13 * fVar11 - fVar17 * fVar8) - fVar22;
  fVar5 = fVar5 * *(float *)(*param_5 + 0x18);
  fVar14 = fVar10 * (fVar20 * param_1 - fVar14 * param_2) - fVar21;
  fVar11 = fVar10 * (fVar13 * param_2 - fVar17 * param_1) - fVar22;
  fVar8 = SQRT(fVar12 * fVar12 + fVar8 * fVar8);
  fVar10 = fVar6 * fVar5;
  if (0.0001 < fVar4) {
    fVar5 = fVar7 * fVar5;
    fVar20 = fVar14 * fVar14 + fVar11 * fVar11;
    fVar18 = fVar10 * fVar10;
    fVar17 = fVar5 * fVar5;
    fVar4 = atan2f(fVar11,fVar14);
    fVar11 = (fVar18 * fVar20 + fVar17 * fVar8 * fVar8) - fVar18 * fVar17;
    fVar13 = fVar17 * -2.0 * fVar8;
    fVar12 = fVar13 * fVar13 + (fVar17 - fVar18) * -4.0 * fVar11;
    if (0.0 <= fVar12) {
      fVar12 = SQRT(fVar12);
      fVar14 = -fVar12;
      if (0.0 <= fVar13) {
        fVar14 = fVar12;
      }
      fVar13 = (fVar13 + fVar14) * -0.5;
      fVar12 = fVar13 / (fVar17 - fVar18);
      fVar11 = fVar11 / fVar13;
      fVar13 = -fVar12;
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
      fVar14 = -fVar11;
      if (0.0 <= fVar11) {
        fVar14 = fVar11;
      }
      if (fVar14 <= fVar13) {
        fVar12 = fVar11;
      }
      if (fVar12 * fVar12 <= fVar20) {
        fVar10 = SQRT(fVar20 - fVar12 * fVar12) * (float)param_6;
        fVar5 = atan2f(fVar10,fVar12);
        fVar4 = fVar4 - fVar5;
        fVar6 = atan2f(fVar10 / fVar7,(fVar12 - fVar8) / fVar6);
        goto LAB_00d6ec30;
      }
    }
    fVar12 = fVar8 - fVar10;
    fVar14 = fVar10 + fVar8;
    fVar7 = 3.1415927;
    fVar6 = -(fVar10 * fVar8) / (fVar18 - fVar17);
    fVar11 = fVar12 * fVar12;
    fVar13 = 0.0;
    if ((fVar6 < -1.0) || (1.0 < fVar6)) {
LAB_00d6ebec:
      fVar6 = 0.0;
      fVar5 = 0.0;
      fVar8 = fVar14;
      fVar18 = fVar14 * fVar14;
    }
    else {
      fVar6 = acosf(fVar6);
      sincosf(fVar6,&fStack_34,&local_38);
      fVar5 = fVar5 * fStack_34;
      fVar8 = fVar8 + fVar10 * local_38;
      fVar18 = fVar5 * fVar5 + fVar8 * fVar8;
      fVar10 = fVar8;
      fVar17 = fVar18;
      fVar13 = fVar5;
      fVar7 = fVar6;
      if (fVar11 <= fVar18) {
        fVar10 = fVar12;
        fVar17 = fVar11;
        fVar13 = 0.0;
        fVar7 = 3.1415927;
      }
      fVar12 = fVar10;
      fVar11 = fVar17;
      if (fVar18 <= fVar14 * fVar14) goto LAB_00d6ebec;
    }
    fVar10 = (fVar11 + fVar18) * 0.5;
    if (fVar20 <= fVar10) {
      fVar8 = fVar12;
      fVar5 = fVar13;
    }
    if (fVar20 <= fVar10) {
      fVar6 = fVar7;
    }
    fVar7 = atan2f(fVar5 * (float)param_6,fVar8);
    fVar6 = fVar6 * (float)param_6;
    fVar4 = fVar4 - fVar7;
  }
  else {
    fVar6 = (((fVar14 * fVar14 + fVar11 * fVar11) - fVar8 * fVar8) - fVar10 * fVar10) /
            (fVar10 * (fVar8 + fVar8));
    fVar4 = -1.0;
    if ((-1.0 <= fVar6) && (fVar4 = fVar6, 1.0 < fVar6)) {
      fVar4 = 1.0;
    }
    fVar6 = acosf(fVar4);
    fVar6 = fVar6 * (float)param_6;
    fVar8 = fVar8 + fVar10 * fVar4;
    fVar4 = sinf(fVar6);
    fVar4 = atan2f(fVar11 * fVar8 - fVar14 * fVar10 * fVar4,fVar14 * fVar8 + fVar11 * fVar10 * fVar4
                  );
  }
LAB_00d6ec30:
  fVar7 = atan2f(local_a0,__x);
  fVar7 = fVar7 * (float)iVar1;
  fVar19 = (fVar19 + (fVar4 - fVar7) * 57.295776) - *(float *)(param_4 + 0x4c);
  if (fVar19 <= 180.0) {
    if (fVar19 < -180.0) {
      fVar4 = 360.0;
      goto LAB_00d6ec94;
    }
  }
  else {
    fVar4 = -360.0;
LAB_00d6ec94:
    fVar19 = fVar19 + fVar4;
  }
  spBone_updateWorldTransformWith
            (fVar21,fVar22,*(float *)(param_4 + 0x30) + fVar19 * param_3,fVar15,fVar16,0,0,param_4);
  fVar19 = (fVar9 + ((fVar6 + fVar7) * 57.295776 - *(float *)(param_5 + 0xb)) * (float)iVar1) -
           *(float *)((long)param_5 + 0x4c);
  if (fVar19 <= 180.0) {
    if (-180.0 <= fVar19) goto LAB_00d6ed24;
    fVar6 = 360.0;
  }
  else {
    fVar6 = -360.0;
  }
  fVar19 = fVar19 + fVar6;
LAB_00d6ed24:
  spBone_updateWorldTransformWith
            (__x,local_a0,*(float *)((long)param_5 + 0x4c) + fVar19 * param_3,(int)param_5[10],
             *(undefined4 *)((long)param_5 + 0x54),*(float *)(param_5 + 0xb),
             *(undefined4 *)((long)param_5 + 0x5c),param_5);
  return;
}

