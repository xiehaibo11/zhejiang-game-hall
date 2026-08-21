
void _spTransformConstraint_applyRelativeWorld(long *param_1)

{
  float fVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float __y;
  float fVar8;
  float fVar9;
  float __x;
  float fVar10;
  float __x_00;
  float fVar11;
  float __y_00;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[3];
  __y_00 = *(float *)(lVar5 + 0x70);
  __y = *(float *)(lVar5 + 0x74);
  __x = *(float *)(lVar5 + 100);
  __x_00 = *(float *)(lVar5 + 0x68);
  fVar1 = 0.017453292;
  if (__x * __y - __x_00 * __y_00 <= 0.0) {
    fVar1 = -0.017453292;
  }
  if (0 < (int)param_1[1]) {
    fVar18 = *(float *)(param_1 + 4);
    fVar19 = *(float *)((long)param_1 + 0x24);
    fVar12 = *(float *)(param_1 + 5);
    fVar13 = *(float *)((long)param_1 + 0x2c);
    fVar10 = *(float *)(*param_1 + 0x30);
    fVar11 = *(float *)(*param_1 + 0x44);
    lVar6 = 0;
    do {
      lVar7 = *(long *)(param_1[2] + lVar6 * 8);
      if (fVar18 == 0.0) {
        bVar3 = false;
      }
      else {
        uVar15 = *(undefined8 *)(lVar7 + 100);
        uVar17 = *(undefined8 *)(lVar7 + 0x70);
        fVar8 = atan2f(__y_00,__x);
        fVar8 = fVar10 * fVar1 + fVar8;
        fVar9 = -6.2831855;
        if ((3.1415927 < fVar8) || (fVar9 = 6.2831855, fVar8 < -3.1415927)) {
          fVar8 = fVar8 + fVar9;
        }
        sincosf(fVar18 * fVar8,&fStack_b4,&local_b8);
        bVar3 = true;
        fVar9 = (float)uVar15;
        fVar8 = (float)((ulong)uVar15 >> 0x20);
        fVar14 = (float)uVar17;
        fVar16 = (float)((ulong)uVar17 >> 0x20);
        *(ulong *)(lVar7 + 100) =
             CONCAT44(fVar8 * local_b8 - fVar16 * fStack_b4,fVar9 * local_b8 - fVar14 * fStack_b4);
        *(ulong *)(lVar7 + 0x70) =
             CONCAT44(fVar8 * fStack_b4 + fVar16 * local_b8,fVar9 * fStack_b4 + fVar14 * local_b8);
      }
      if (fVar19 != 0.0) {
        spBone_localToWorld(*(undefined4 *)(*param_1 + 0x34),*(undefined4 *)(*param_1 + 0x38),lVar5,
                            &local_ac,&local_b0);
        bVar3 = true;
        *(float *)(lVar7 + 0x6c) = *(float *)(lVar7 + 0x6c) + fVar19 * local_ac;
        *(float *)(lVar7 + 0x78) = *(float *)(lVar7 + 0x78) + fVar19 * local_b0;
      }
      if (0.0 < fVar12) {
        lVar4 = *param_1;
        fVar9 = fVar12 * (SQRT(__x * __x + __y_00 * __y_00) + -1.0 + *(float *)(lVar4 + 0x3c)) + 1.0
        ;
        *(float *)(lVar7 + 100) = *(float *)(lVar7 + 100) * fVar9;
        *(float *)(lVar7 + 0x70) = *(float *)(lVar7 + 0x70) * fVar9;
        bVar3 = true;
        fVar9 = fVar12 * (SQRT(__x_00 * __x_00 + __y * __y) + -1.0 + *(float *)(lVar4 + 0x40)) + 1.0
        ;
        *(float *)(lVar7 + 0x68) = *(float *)(lVar7 + 0x68) * fVar9;
        *(float *)(lVar7 + 0x74) = *(float *)(lVar7 + 0x74) * fVar9;
      }
      if (fVar13 <= 0.0) {
        if (bVar3) goto LAB_00d6c1e4;
      }
      else {
        fVar8 = atan2f(__y,__x_00);
        fVar9 = atan2f(__y_00,__x);
        fVar8 = fVar8 - fVar9;
        fVar9 = -6.2831855;
        if ((3.1415927 < fVar8) || (fVar9 = 6.2831855, fVar8 < -3.1415927)) {
          fVar8 = fVar8 + fVar9;
        }
        fVar14 = *(float *)(lVar7 + 0x68);
        fVar16 = *(float *)(lVar7 + 0x74);
        fVar9 = atan2f(fVar16,fVar14);
        fVar14 = SQRT(fVar14 * fVar14 + fVar16 * fVar16);
        sincosf(fVar9 + fVar13 * (fVar11 * fVar1 + fVar8 + -1.5707964),&fStack_bc,&local_c0);
        *(float *)(lVar7 + 0x68) = local_c0 * fVar14;
        *(float *)(lVar7 + 0x74) = fStack_bc * fVar14;
LAB_00d6c1e4:
        *(undefined4 *)(lVar7 + 0x60) = 0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

