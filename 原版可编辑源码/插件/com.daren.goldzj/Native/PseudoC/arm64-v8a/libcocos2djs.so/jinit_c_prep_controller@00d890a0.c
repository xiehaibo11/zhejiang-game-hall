
void jinit_c_prep_controller(long *param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong __n;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint *puVar29;
  void *pvVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  if (param_2 != 0) {
    puVar17 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar17 + 5) = 3;
    (*(code *)*puVar17)(param_1);
  }
  puVar17 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x40] = (long)puVar17;
  *puVar17 = FUN_00d894dc;
  if (*(int *)(param_1[0x44] + 0x10) == 0) {
    puVar17[1] = FUN_00d897b0;
    if (0 < *(int *)((long)param_1 + 0x5c)) {
      lVar14 = 0;
      puVar29 = (uint *)(param_1[0xd] + 0x1c);
      do {
        lVar34 = 0;
        if ((long)(int)puVar29[-5] != 0) {
          lVar34 = (long)((long)(int)param_1[0x2d] * (ulong)*puVar29 * (long)(int)param_1[0x2c]) /
                   (long)(int)puVar29[-5];
        }
        uVar16 = (**(code **)(param_1[1] + 0x10))
                           (param_1,1,lVar34,*(undefined4 *)((long)param_1 + 0x164));
        puVar17[lVar14 + 2] = uVar16;
        lVar14 = lVar14 + 1;
        puVar29 = puVar29 + 0x18;
      } while (lVar14 < *(int *)((long)param_1 + 0x5c));
    }
  }
  else {
    puVar17[1] = FUN_00d89530;
    uVar11 = *(uint *)((long)param_1 + 0x164);
    iVar13 = uVar11 * 5;
    uVar12 = *(int *)((long)param_1 + 0x5c) * iVar13;
    lVar14 = (**(code **)param_1[1])
                       (param_1,1,-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3
                       );
    if (0 < *(int *)((long)param_1 + 0x5c)) {
      uVar28 = (ulong)uVar11;
      lVar34 = param_1[0xd];
      uVar32 = (ulong)(uVar11 * 3);
      __n = -(ulong)(uVar11 * 3 >> 0x1f) & 0xfffffff800000000 | uVar32 << 3;
      if ((int)uVar11 < 1) {
        lVar27 = 0;
        pvVar30 = (void *)(lVar14 + (long)(int)uVar11 * 8);
        puVar29 = (uint *)(lVar34 + 0x1c);
        do {
          lVar14 = 0;
          if ((long)(int)puVar29[-5] != 0) {
            lVar14 = (long)((long)(int)param_1[0x2d] * (ulong)*puVar29 * (long)(int)param_1[0x2c]) /
                     (long)(int)puVar29[-5];
          }
          pvVar15 = (void *)(**(code **)(param_1[1] + 0x10))(param_1,1,lVar14,uVar32);
          memcpy(pvVar30,pvVar15,__n);
          puVar17[lVar27 + 2] = pvVar30;
          lVar27 = lVar27 + 1;
          pvVar30 = (void *)((long)pvVar30 + (long)iVar13 * 8);
          puVar29 = puVar29 + 0x18;
        } while (lVar27 < *(int *)((long)param_1 + 0x5c));
      }
      else {
        lVar18 = (long)iVar13 * 8;
        uVar19 = -(ulong)((uVar11 & 0x3fffffff) >> 0x1d) & 0xfffffff800000000 |
                 (ulong)(uVar11 << 2) << 3;
        lVar21 = (long)(int)(uVar11 << 1);
        lVar26 = lVar14 + uVar19;
        lVar33 = 0;
        lVar23 = uVar28 - (uVar11 & 3);
        lVar27 = lVar26 + 0x10;
        lVar31 = lVar14;
        do {
          lVar20 = 0;
          if ((long)*(int *)(lVar34 + 8) != 0) {
            lVar20 = (long)((long)(int)param_1[0x2d] * (ulong)*(uint *)(lVar34 + 0x1c) *
                           (long)(int)param_1[0x2c]) / (long)*(int *)(lVar34 + 8);
          }
          pvVar15 = (void *)(**(code **)(param_1[1] + 0x10))(param_1,1,lVar20,uVar32);
          pvVar30 = (void *)(lVar31 + (long)(int)uVar11 * 8);
          memcpy(pvVar30,pvVar15,__n);
          lVar20 = 0;
          if ((uVar11 < 4) || (lVar23 == 0)) {
LAB_00d89348:
            lVar24 = lVar20 * 8;
            lVar22 = 0;
            do {
              lVar25 = lVar22 * 8;
              lVar22 = lVar22 + 1;
              *(undefined8 *)(lVar31 + lVar24 + lVar25) =
                   *(undefined8 *)((long)pvVar15 + lVar25 + lVar24 + lVar21 * 8);
              *(undefined8 *)(lVar26 + lVar24 + lVar25) =
                   *(undefined8 *)((long)pvVar15 + lVar25 + lVar24);
            } while (uVar28 - lVar20 != lVar22);
          }
          else {
            pvVar1 = (void *)((long)pvVar15 + lVar21 * 8);
            lVar20 = lVar18 * lVar33;
            pvVar2 = (void *)((long)pvVar15 + (lVar21 + uVar28) * 8);
            pvVar3 = (void *)(lVar14 + lVar20);
            pvVar4 = (void *)(lVar14 + uVar28 * 8 + lVar20);
            pvVar5 = (void *)(lVar14 + uVar19 + lVar20);
            pvVar6 = (void *)(lVar14 + uVar19 + uVar28 * 8 + lVar20);
            pvVar7 = (void *)((long)pvVar15 + uVar28 * 8);
            lVar20 = 0;
            if (((pvVar3 < pvVar6 && pvVar5 < pvVar4) ||
                (((pvVar3 < pvVar2 && pvVar1 < pvVar4 || (pvVar3 < pvVar7 && pvVar15 < pvVar4)) ||
                 (pvVar5 < pvVar2 && pvVar1 < pvVar6)))) || (pvVar5 < pvVar7 && pvVar15 < pvVar6))
            goto LAB_00d89348;
            lVar20 = 0;
            lVar22 = lVar23;
            do {
              puVar8 = (undefined8 *)((long)pvVar15 + lVar20 + lVar21 * 8);
              uVar16 = *puVar8;
              uVar36 = puVar8[3];
              uVar35 = puVar8[2];
              puVar9 = (undefined8 *)(lVar31 + lVar20);
              puVar10 = (undefined8 *)((long)pvVar15 + lVar20);
              lVar22 = lVar22 + -4;
              puVar9[1] = puVar8[1];
              *puVar9 = uVar16;
              puVar9[3] = uVar36;
              puVar9[2] = uVar35;
              uVar16 = *puVar10;
              uVar36 = puVar10[3];
              uVar35 = puVar10[2];
              puVar8 = (undefined8 *)(lVar27 + lVar20);
              lVar20 = lVar20 + 0x20;
              puVar8[-1] = puVar10[1];
              puVar8[-2] = uVar16;
              puVar8[1] = uVar36;
              *puVar8 = uVar35;
            } while (lVar22 != 0);
            lVar20 = lVar23;
            if ((uVar11 & 3) != 0) goto LAB_00d89348;
          }
          lVar34 = lVar34 + 0x60;
          puVar17[lVar33 + 2] = pvVar30;
          lVar33 = lVar33 + 1;
          lVar31 = lVar31 + lVar18;
          lVar27 = lVar27 + lVar18;
          lVar26 = lVar26 + lVar18;
        } while (lVar33 < *(int *)((long)param_1 + 0x5c));
      }
    }
  }
  return;
}

