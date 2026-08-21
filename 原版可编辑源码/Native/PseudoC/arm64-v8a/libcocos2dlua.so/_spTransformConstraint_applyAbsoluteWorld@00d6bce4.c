
void _spTransformConstraint_applyAbsoluteWorld(long *param_1)

{
  float fVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float __y;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float __y_00;
  float fVar11;
  float __x;
  float fVar12;
  float __x_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float __y_01;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  lVar4 = param_1[3];
  __y_00 = *(float *)(lVar4 + 0x70);
  __y = *(float *)(lVar4 + 0x74);
  __x = *(float *)(lVar4 + 100);
  __x_00 = *(float *)(lVar4 + 0x68);
  fVar1 = 0.017453292;
  if (__x * __y - __x_00 * __y_00 <= 0.0) {
    fVar1 = -0.017453292;
  }
  if (0 < (int)param_1[1]) {
    fVar17 = *(float *)(param_1 + 4);
    fVar19 = *(float *)((long)param_1 + 0x24);
    fVar13 = *(float *)(*param_1 + 0x30);
    fVar15 = *(float *)(*param_1 + 0x44);
    fVar16 = *(float *)(param_1 + 5);
    fVar18 = *(float *)((long)param_1 + 0x2c);
    lVar5 = 0;
    do {
                    /* try { // try from 00d6be14 to 00e6bf4f has its CatchHandler @ 00d6be14
                       catch() { ... } // from try @ 00d6be14 with catch @ 00d6be14
                       catch() { ... } // from try @ 00d6bf58 with catch @ 00d6be14 */
      lVar6 = *(long *)(param_1[2] + lVar5 * 8);
      if (fVar17 == 0.0) {
        bVar3 = false;
      }
      else {
        uVar9 = *(undefined8 *)(lVar6 + 100);
        uVar10 = *(undefined8 *)(lVar6 + 0x70);
        fVar7 = atan2f(__y_00,__x);
        fVar11 = (float)uVar10;
        fVar12 = (float)uVar9;
        fVar8 = atan2f(fVar11,fVar12);
        fVar8 = fVar13 * fVar1 + (fVar7 - fVar8);
        fVar7 = -6.2831855;
        if ((3.1415927 < fVar8) || (fVar7 = 6.2831855, fVar8 < -3.1415927)) {
          fVar8 = fVar8 + fVar7;
        }
        sincosf(fVar17 * fVar8,&fStack_b4,&local_b8);
        bVar3 = true;
        fVar7 = (float)((ulong)uVar9 >> 0x20);
        fVar8 = (float)((ulong)uVar10 >> 0x20);
        *(ulong *)(lVar6 + 100) =
             CONCAT44(fVar7 * local_b8 - fVar8 * fStack_b4,fVar12 * local_b8 - fVar11 * fStack_b4);
        *(ulong *)(lVar6 + 0x70) =
             CONCAT44(fVar7 * fStack_b4 + fVar8 * local_b8,fVar12 * fStack_b4 + fVar11 * local_b8);
      }
      if (fVar19 != 0.0) {
        spBone_localToWorld(*(undefined4 *)(*param_1 + 0x34),*(undefined4 *)(*param_1 + 0x38),lVar4,
                            &local_ac,&local_b0);
        bVar3 = true;
        *(float *)(lVar6 + 0x6c) =
             *(float *)(lVar6 + 0x6c) + fVar19 * (local_ac - *(float *)(lVar6 + 0x6c));
        *(float *)(lVar6 + 0x78) =
             *(float *)(lVar6 + 0x78) + fVar19 * (local_b0 - *(float *)(lVar6 + 0x78));
      }
      if (0.0 < fVar16) {
        fVar8 = *(float *)(lVar6 + 100);
        fVar7 = *(float *)(lVar6 + 0x70);
        fVar11 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
        if (1e-05 < fVar11) {
                    /* try { // try from 00d6bf50 to 00e6bf57 has its CatchHandler @ 00d6c024 */
                    /* try { // try from 00d6bf58 to 00e6c037 has its CatchHandler @ 00d6be14 */
          fVar11 = (fVar11 + fVar16 * ((SQRT(__x * __x + __y_00 * __y_00) - fVar11) +
                                      *(float *)(*param_1 + 0x3c))) / fVar11;
        }
        fVar12 = *(float *)(lVar6 + 0x68);
        fVar14 = *(float *)(lVar6 + 0x74);
        *(float *)(lVar6 + 100) = fVar8 * fVar11;
        fVar8 = SQRT(fVar12 * fVar12 + fVar14 * fVar14);
        *(float *)(lVar6 + 0x70) = fVar7 * fVar11;
        if (1e-05 < fVar8) {
          fVar8 = (fVar8 + fVar16 * ((SQRT(__x_00 * __x_00 + __y * __y) - fVar8) +
                                    *(float *)(*param_1 + 0x40))) / fVar8;
        }
        bVar3 = true;
        *(float *)(lVar6 + 0x68) = fVar12 * fVar8;
        *(float *)(lVar6 + 0x74) = fVar14 * fVar8;
      }
      if (fVar18 <= 0.0) {
        if (bVar3) goto LAB_00d6bdf8;
      }
      else {
        fVar14 = *(float *)(lVar6 + 0x68);
        __y_01 = *(float *)(lVar6 + 0x74);
        fVar11 = atan2f(__y_01,fVar14);
        fVar7 = atan2f(__y,__x_00);
        fVar8 = atan2f(__y_00,__x);
        fVar12 = atan2f(*(float *)(lVar6 + 0x70),*(float *)(lVar6 + 100));
        fVar8 = (fVar7 - fVar8) - (fVar11 - fVar12);
                    /* catch() { ... } // from try @ 00d6bf50 with catch @ 00d6c024 */
        fVar12 = SQRT(fVar14 * fVar14 + __y_01 * __y_01);
        fVar7 = -6.2831855;
        if ((3.1415927 < fVar8) || (fVar7 = 6.2831855, fVar8 < -3.1415927)) {
          fVar8 = fVar8 + fVar7;
        }
        sincosf(fVar11 + fVar18 * (fVar15 * fVar1 + fVar8),&fStack_bc,&local_c0);
        *(float *)(lVar6 + 0x68) = fVar12 * local_c0;
        *(float *)(lVar6 + 0x74) = fVar12 * fStack_bc;
LAB_00d6bdf8:
        *(undefined4 *)(lVar6 + 0x60) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

