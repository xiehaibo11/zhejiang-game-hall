
undefined4
FUN_00dd4cb4(long param_1,int *param_2,long param_3,undefined4 param_4,uint param_5,double *param_6)

{
  double *pdVar1;
  short sVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 (*pauVar10) [12];
  undefined1 (*pauVar11) [12];
  undefined4 uVar12;
  double *__ptr;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  undefined1 (*pauVar18) [12];
  float *pfVar19;
  undefined2 *puVar20;
  int *piVar21;
  double *pdVar22;
  ulong uVar23;
  
  uVar23 = (ulong)param_5;
  __ptr = _TIFFmalloc(uVar23 << 3);
  if (__ptr == (double *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteDirectoryTagSampleformatArray",
                 "Out of memory");
    return 0;
  }
  sVar2 = *(short *)(param_1 + 0x76);
  uVar14 = param_5;
  if (sVar2 != 1) {
    if (sVar2 == 2) {
      if (*(ushort *)(param_1 + 0x74) < 9) {
        pdVar16 = __ptr;
        if (param_5 != 0) {
          do {
            uVar23 = uVar23 - 1;
            *(char *)pdVar16 = (char)(int)*param_6;
            pdVar16 = (double *)((long)pdVar16 + 1);
            param_6 = param_6 + 1;
          } while (uVar23 != 0);
        }
        if (param_3 == 0) goto LAB_00dd5170;
        uVar13 = 6;
        param_6 = __ptr;
      }
      else if (*(ushort *)(param_1 + 0x74) < 0x11) {
        if (param_5 != 0) {
          if (param_5 < 4) {
            lVar15 = 0;
          }
          else {
            lVar15 = uVar23 - (param_5 & 3);
            if (lVar15 != 0) {
              pdVar16 = param_6 + 2;
              puVar20 = (undefined2 *)((long)__ptr + 4);
              lVar17 = lVar15;
              do {
                pdVar22 = pdVar16 + -2;
                dVar5 = pdVar16[-1];
                dVar8 = pdVar16[1];
                dVar7 = *pdVar16;
                pdVar16 = pdVar16 + 4;
                lVar17 = lVar17 + -4;
                puVar20[-2] = (short)(long)*pdVar22;
                *puVar20 = (short)(long)dVar7;
                puVar20[-1] = (short)(long)dVar5;
                puVar20[1] = (short)(long)dVar8;
                puVar20 = puVar20 + 4;
              } while (lVar17 != 0);
              if ((param_5 & 3) == 0) goto LAB_00dd501c;
            }
          }
          lVar17 = uVar23 - lVar15;
          pdVar16 = param_6 + lVar15;
          puVar20 = (undefined2 *)((long)__ptr + lVar15 * 2);
          do {
            lVar17 = lVar17 + -1;
            *puVar20 = (short)(int)*pdVar16;
            pdVar16 = pdVar16 + 1;
            puVar20 = puVar20 + 1;
          } while (lVar17 != 0);
        }
LAB_00dd501c:
        if (param_3 == 0) goto LAB_00dd5170;
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfShort(__ptr,uVar23);
        }
        uVar14 = param_5 << 1;
        uVar13 = 8;
        param_6 = __ptr;
      }
      else {
        if (param_5 != 0) {
          if (param_5 < 4) {
            lVar15 = 0;
          }
          else {
            lVar15 = uVar23 - (param_5 & 3);
            if (lVar15 != 0) {
              pdVar16 = param_6 + 2;
              pdVar22 = __ptr + 1;
              lVar17 = lVar15;
              do {
                pdVar1 = pdVar16 + -2;
                pdVar3 = pdVar16 + -1;
                dVar7 = pdVar16[1];
                dVar5 = *pdVar16;
                pdVar16 = pdVar16 + 4;
                lVar17 = lVar17 + -4;
                pdVar22[-1] = (double)CONCAT44((int)(long)*pdVar3,(int)(long)*pdVar1);
                *pdVar22 = (double)CONCAT44((int)(long)dVar7,(int)(long)dVar5);
                pdVar22 = pdVar22 + 2;
              } while (lVar17 != 0);
              if ((param_5 & 3) == 0) goto LAB_00dd512c;
            }
          }
          lVar17 = uVar23 - lVar15;
          pdVar16 = param_6 + lVar15;
          piVar21 = (int *)((long)__ptr + lVar15 * 4);
          do {
            lVar17 = lVar17 + -1;
            *piVar21 = (int)*pdVar16;
            pdVar16 = pdVar16 + 1;
            piVar21 = piVar21 + 1;
          } while (lVar17 != 0);
        }
LAB_00dd512c:
        if (param_3 == 0) goto LAB_00dd5170;
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfLong(__ptr,uVar23);
        }
        uVar14 = param_5 << 2;
        uVar13 = 9;
        param_6 = __ptr;
      }
    }
    else {
      if (sVar2 != 3) {
        uVar12 = 0;
        goto LAB_00dd5180;
      }
      if (*(ushort *)(param_1 + 0x74) < 0x21) {
        if (param_5 != 0) {
          if (param_5 < 4) {
            lVar15 = 0;
          }
          else {
            lVar15 = uVar23 - (param_5 & 3);
            if (lVar15 != 0) {
              pauVar18 = (undefined1 (*) [12])(param_6 + 2);
              pdVar16 = __ptr + 1;
              lVar17 = lVar15;
              do {
                pauVar10 = pauVar18 + -2;
                pauVar11 = pauVar18 + -1;
                pdVar22 = (double *)*pauVar18;
                auVar9 = *pauVar18;
                pauVar18 = (undefined1 (*) [12])((long)pauVar18[2] + 8);
                lVar17 = lVar17 + -4;
                auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar11 + 4) >> 0x20);
                auVar4._0_12_ = *(undefined1 (*) [12])((long)*pauVar10 + 8);
                auVar6._12_4_ = (int)((ulong)pdVar22[1] >> 0x20);
                auVar6._0_12_ = auVar9;
                pdVar16[-1] = (double)CONCAT44((float)auVar4._8_8_,
                                               (float)SUB128(*(undefined1 (*) [12])
                                                              ((long)*pauVar10 + 8),0));
                *pdVar16 = (double)CONCAT44((float)auVar6._8_8_,(float)auVar9._0_8_);
                pdVar16 = pdVar16 + 2;
              } while (lVar17 != 0);
              if ((param_5 & 3) == 0) goto LAB_00dd4ed4;
            }
          }
          lVar17 = uVar23 - lVar15;
          pdVar16 = param_6 + lVar15;
          pfVar19 = (float *)((long)__ptr + lVar15 * 4);
          do {
            lVar17 = lVar17 + -1;
            *pfVar19 = (float)*pdVar16;
            pdVar16 = pdVar16 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar17 != 0);
        }
LAB_00dd4ed4:
        if (param_3 == 0) goto LAB_00dd5170;
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfFloat(__ptr,uVar23);
        }
        uVar14 = param_5 << 2;
        uVar13 = 0xb;
        param_6 = __ptr;
      }
      else {
        if (param_3 == 0) goto LAB_00dd5170;
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfDouble(param_6,uVar23);
        }
        uVar13 = 0xc;
        uVar14 = param_5 << 3;
      }
    }
    goto LAB_00dd5164;
  }
  if (*(ushort *)(param_1 + 0x74) < 9) {
    pdVar16 = __ptr;
    if (param_5 != 0) {
      do {
        uVar23 = uVar23 - 1;
        *(char *)pdVar16 = (char)(int)*param_6;
        pdVar16 = (double *)((long)pdVar16 + 1);
        param_6 = param_6 + 1;
      } while (uVar23 != 0);
    }
    if (param_3 != 0) {
      uVar13 = 1;
      param_6 = __ptr;
      goto LAB_00dd5164;
    }
LAB_00dd5170:
    *param_2 = *param_2 + 1;
    uVar12 = 1;
  }
  else {
    if (*(ushort *)(param_1 + 0x74) < 0x11) {
      if (param_5 != 0) {
        if (param_5 < 4) {
          lVar15 = 0;
        }
        else {
          lVar15 = uVar23 - (param_5 & 3);
          if (lVar15 != 0) {
            pdVar16 = param_6 + 2;
            puVar20 = (undefined2 *)((long)__ptr + 4);
            lVar17 = lVar15;
            do {
              pdVar22 = pdVar16 + -2;
              dVar5 = pdVar16[-1];
              dVar8 = pdVar16[1];
              dVar7 = *pdVar16;
              pdVar16 = pdVar16 + 4;
              lVar17 = lVar17 + -4;
              puVar20[-2] = (short)(long)*pdVar22;
              *puVar20 = (short)(long)dVar7;
              puVar20[-1] = (short)(long)dVar5;
              puVar20[1] = (short)(long)dVar8;
              puVar20 = puVar20 + 4;
            } while (lVar17 != 0);
            if ((param_5 & 3) == 0) goto LAB_00dd4f78;
          }
        }
        lVar17 = uVar23 - lVar15;
        pdVar16 = param_6 + lVar15;
        puVar20 = (undefined2 *)((long)__ptr + lVar15 * 2);
        do {
          lVar17 = lVar17 + -1;
          *puVar20 = (short)(int)*pdVar16;
          pdVar16 = pdVar16 + 1;
          puVar20 = puVar20 + 1;
        } while (lVar17 != 0);
      }
LAB_00dd4f78:
      if (param_3 == 0) goto LAB_00dd5170;
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabArrayOfShort(__ptr,uVar23);
      }
      uVar14 = param_5 << 1;
      uVar13 = 3;
      param_6 = __ptr;
    }
    else {
      if (param_5 != 0) {
        if (param_5 < 4) {
          lVar15 = 0;
        }
        else {
          lVar15 = uVar23 - (param_5 & 3);
          if (lVar15 != 0) {
            pdVar16 = param_6 + 2;
            pdVar22 = __ptr + 1;
            lVar17 = lVar15;
            do {
              pdVar1 = pdVar16 + -2;
              pdVar3 = pdVar16 + -1;
              dVar7 = pdVar16[1];
              dVar5 = *pdVar16;
              pdVar16 = pdVar16 + 4;
              lVar17 = lVar17 + -4;
              pdVar22[-1] = (double)CONCAT44((int)(long)*pdVar3,(int)(long)*pdVar1);
              *pdVar22 = (double)CONCAT44((int)(long)dVar7,(int)(long)dVar5);
              pdVar22 = pdVar22 + 2;
            } while (lVar17 != 0);
            if ((param_5 & 3) == 0) goto LAB_00dd50a4;
          }
        }
        lVar17 = uVar23 - lVar15;
        pdVar16 = param_6 + lVar15;
        piVar21 = (int *)((long)__ptr + lVar15 * 4);
        do {
          lVar17 = lVar17 + -1;
          *piVar21 = (int)*pdVar16;
          pdVar16 = pdVar16 + 1;
          piVar21 = piVar21 + 1;
        } while (lVar17 != 0);
      }
LAB_00dd50a4:
      if (param_3 == 0) goto LAB_00dd5170;
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabArrayOfLong(__ptr,uVar23);
      }
      uVar14 = param_5 << 2;
      uVar13 = 4;
      param_6 = __ptr;
    }
LAB_00dd5164:
    uVar12 = FUN_00dd5308(param_1,param_2,param_3,param_4,uVar13,param_5,uVar14,param_6);
  }
LAB_00dd5180:
  _TIFFfree(__ptr);
  return uVar12;
}

