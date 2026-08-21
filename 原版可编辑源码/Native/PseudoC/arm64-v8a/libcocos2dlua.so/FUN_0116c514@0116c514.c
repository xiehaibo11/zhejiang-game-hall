
undefined8 * FUN_0116c514(long param_1,long *param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *__base;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_78;
  float fStack_74;
  
  if (param_3 == 2) {
    puVar11 = *(undefined8 **)(param_1 + 0x38);
    lVar12 = *param_2;
    lVar7 = param_2[1];
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = calloc(1,0x8000);
      cpArrayPush(*(undefined8 *)(param_1 + 0x48),puVar11);
      lVar8 = 0x2a9;
      puVar6 = *(undefined8 **)(param_1 + 0x38);
      puVar5 = puVar11;
      do {
        puVar5[9] = puVar6;
        lVar8 = lVar8 + -1;
        puVar6 = puVar5 + 6;
        puVar5 = puVar5 + 6;
      } while (lVar8 != 0);
      puVar5 = puVar11 + 0xff6;
    }
    else {
      puVar5 = (undefined8 *)puVar11[3];
    }
    *(undefined8 **)(param_1 + 0x38) = puVar5;
    *puVar11 = 0;
    uVar13 = *(undefined4 *)(lVar12 + 8);
    uVar14 = *(undefined4 *)(lVar12 + 0xc);
    fVar22 = *(float *)(lVar12 + 0x10);
    fVar23 = *(float *)(lVar12 + 0x14);
    uVar15 = *(undefined4 *)(lVar7 + 8);
    uVar17 = *(undefined4 *)(lVar7 + 0xc);
    fVar20 = *(float *)(lVar7 + 0x10);
    fVar21 = *(float *)(lVar7 + 0x14);
    puVar11[3] = 0;
    puVar11[4] = lVar12;
    uVar13 = NEON_fminnm(uVar13,uVar15);
    uVar14 = NEON_fminnm(uVar14,uVar17);
    if (fVar22 <= fVar20) {
      fVar22 = fVar20;
    }
    if (fVar23 <= fVar21) {
      fVar23 = fVar21;
    }
    *(undefined4 *)(puVar11 + 1) = uVar13;
    *(undefined4 *)((long)puVar11 + 0xc) = uVar14;
    *(float *)(puVar11 + 2) = fVar22;
    *(float *)((long)puVar11 + 0x14) = fVar23;
    *(undefined8 **)(lVar12 + 0x18) = puVar11;
LAB_0116c8f4:
    puVar11[5] = lVar7;
    *(undefined8 **)(lVar7 + 0x18) = puVar11;
  }
  else {
    if (param_3 == 1) {
      return (undefined8 *)*param_2;
    }
    lVar12 = *param_2;
    fVar20 = *(float *)(lVar12 + 8);
    fVar21 = *(float *)(lVar12 + 0xc);
    fVar22 = *(float *)(lVar12 + 0x10);
    fVar23 = *(float *)(lVar12 + 0x14);
    if (1 < (int)param_3) {
      lVar7 = (ulong)param_3 - 1;
      plVar9 = param_2;
      do {
        plVar9 = plVar9 + 1;
        lVar8 = *plVar9;
        lVar7 = lVar7 + -1;
        fVar20 = (float)NEON_fminnm(fVar20,*(undefined4 *)(lVar8 + 8));
        fVar21 = (float)NEON_fminnm(fVar21,*(undefined4 *)(lVar8 + 0xc));
        if (fVar22 <= *(float *)(lVar8 + 0x10)) {
          fVar22 = *(float *)(lVar8 + 0x10);
        }
        if (fVar23 <= *(float *)(lVar8 + 0x14)) {
          fVar23 = *(float *)(lVar8 + 0x14);
        }
      } while (lVar7 != 0);
    }
    __base = calloc((long)(int)(param_3 << 1),4);
    if (fVar22 - fVar20 <= fVar23 - fVar21) {
      if (0 < (int)param_3) {
        *__base = *(undefined4 *)(lVar12 + 0xc);
        __base[1] = *(undefined4 *)(lVar12 + 0x14);
        if (param_3 != 1) {
          lVar12 = (ulong)param_3 - 1;
          puVar4 = __base + 3;
          plVar9 = param_2;
          do {
            plVar9 = plVar9 + 1;
            lVar7 = *plVar9;
            lVar12 = lVar12 + -1;
            puVar4[-1] = *(undefined4 *)(lVar7 + 0xc);
            *puVar4 = *(undefined4 *)(lVar7 + 0x14);
            puVar4 = puVar4 + 2;
          } while (lVar12 != 0);
        }
      }
    }
    else if (0 < (int)param_3) {
      *__base = *(undefined4 *)(lVar12 + 8);
      __base[1] = *(undefined4 *)(lVar12 + 0x10);
      if (param_3 != 1) {
        lVar12 = (ulong)param_3 - 1;
        puVar4 = __base + 3;
        plVar9 = param_2;
        do {
          plVar9 = plVar9 + 1;
          lVar7 = *plVar9;
          lVar12 = lVar12 + -1;
          puVar4[-1] = *(undefined4 *)(lVar7 + 8);
          *puVar4 = *(undefined4 *)(lVar7 + 0x10);
          puVar4 = puVar4 + 2;
        } while (lVar12 != 0);
      }
    }
    qsort(__base,(long)(int)(param_3 << 1),4,FUN_0116dde8);
    fVar24 = ((float)__base[(int)param_3] + (float)(__base + (int)param_3)[-1]) * 0.5;
    free(__base);
    pfVar1 = &fStack_74;
    fVar2 = fVar24;
    fVar3 = fVar21;
    if (fVar22 - fVar20 <= fVar23 - fVar21) {
      pfVar1 = &local_78;
      fVar2 = fVar20;
      fVar3 = fVar24;
    }
    local_78 = fVar23;
    fStack_74 = fVar22;
    *pfVar1 = fVar24;
    if (0 < (int)param_3) {
      lVar12 = 0;
      uVar10 = (ulong)(int)param_3;
      do {
        lVar7 = lVar12 << 0x20;
        lVar12 = (long)(int)lVar12;
        plVar9 = (long *)((long)param_2 + (lVar7 >> 0x1d));
        while( true ) {
          lVar8 = *plVar9;
          fVar24 = *(float *)(lVar8 + 0x10);
          fVar18 = *(float *)(lVar8 + 0x14);
          fVar25 = fVar24;
          if (fVar24 <= fVar22) {
            fVar25 = fVar22;
          }
          fVar26 = (float)NEON_fminnm(*(undefined4 *)(lVar8 + 8),fVar2);
          fVar28 = fVar18;
          if (fVar18 <= fVar23) {
            fVar28 = fVar23;
          }
          fVar27 = (float)NEON_fminnm(*(undefined4 *)(lVar8 + 0xc),fVar3);
          if (fVar24 <= fStack_74) {
            fVar24 = fStack_74;
          }
          fVar16 = (float)NEON_fminnm(*(undefined4 *)(lVar8 + 8),fVar20);
          if (fVar18 <= local_78) {
            fVar18 = local_78;
          }
          fVar19 = (float)NEON_fminnm(*(undefined4 *)(lVar8 + 0xc),fVar21);
          if ((fVar28 - fVar27) * (fVar25 - fVar26) < (fVar18 - fVar19) * (fVar24 - fVar16)) break;
          lVar12 = lVar12 + 1;
          lVar7 = lVar7 + 0x100000000;
          plVar9 = plVar9 + 1;
          if ((long)uVar10 <= lVar12) goto LAB_0116c774;
        }
        uVar10 = uVar10 - 1;
        *plVar9 = param_2[uVar10];
        param_2[uVar10] = lVar8;
      } while (lVar7 >> 0x20 < (long)uVar10);
LAB_0116c774:
      if ((uint)uVar10 != param_3) {
        lVar12 = FUN_0116c514(param_1,param_2,uVar10 & 0xffffffff);
        lVar7 = FUN_0116c514(param_1,(long)param_2 + ((long)(uVar10 << 0x20) >> 0x1d),
                             param_3 - (uint)uVar10);
        puVar11 = *(undefined8 **)(param_1 + 0x38);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = calloc(1,0x8000);
          cpArrayPush(*(undefined8 *)(param_1 + 0x48),puVar11);
          lVar8 = 0x2a9;
          puVar6 = *(undefined8 **)(param_1 + 0x38);
          puVar5 = puVar11;
          do {
            puVar5[9] = puVar6;
            lVar8 = lVar8 + -1;
            puVar6 = puVar5 + 6;
            puVar5 = puVar5 + 6;
          } while (lVar8 != 0);
          puVar5 = puVar11 + 0xff6;
        }
        else {
          puVar5 = (undefined8 *)puVar11[3];
        }
        *(undefined8 **)(param_1 + 0x38) = puVar5;
        *puVar11 = 0;
        uVar13 = *(undefined4 *)(lVar12 + 8);
        uVar14 = *(undefined4 *)(lVar12 + 0xc);
        fVar22 = *(float *)(lVar12 + 0x10);
        fVar23 = *(float *)(lVar12 + 0x14);
        uVar15 = *(undefined4 *)(lVar7 + 8);
        uVar17 = *(undefined4 *)(lVar7 + 0xc);
        fVar20 = *(float *)(lVar7 + 0x10);
        fVar21 = *(float *)(lVar7 + 0x14);
        puVar11[3] = 0;
        puVar11[4] = lVar12;
        uVar13 = NEON_fminnm(uVar13,uVar15);
        uVar14 = NEON_fminnm(uVar14,uVar17);
        if (fVar22 <= fVar20) {
          fVar22 = fVar20;
        }
        if (fVar23 <= fVar21) {
          fVar23 = fVar21;
        }
        *(undefined4 *)(puVar11 + 1) = uVar13;
        *(undefined4 *)((long)puVar11 + 0xc) = uVar14;
        *(float *)(puVar11 + 2) = fVar22;
        *(float *)((long)puVar11 + 0x14) = fVar23;
        *(undefined8 **)(lVar12 + 0x18) = puVar11;
        goto LAB_0116c8f4;
      }
      if (0 < (int)param_3) {
        puVar11 = (undefined8 *)0x0;
        uVar10 = (ulong)param_3;
        do {
          puVar11 = (undefined8 *)FUN_0116d150(puVar11,*param_2,param_1);
          uVar10 = uVar10 - 1;
          param_2 = param_2 + 1;
        } while (uVar10 != 0);
        return puVar11;
      }
    }
    puVar11 = (undefined8 *)0x0;
  }
  return puVar11;
}

