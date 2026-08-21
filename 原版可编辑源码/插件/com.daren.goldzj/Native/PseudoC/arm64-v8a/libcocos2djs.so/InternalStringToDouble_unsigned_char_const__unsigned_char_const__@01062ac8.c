
/* double v8::internal::InternalStringToDouble<unsigned char const*, unsigned char const*>(unsigned
   char const*, unsigned char const*, int, double) */

double v8::internal::InternalStringToDouble<unsigned_char_const*,unsigned_char_const*>
                 (uchar *param_1,uchar *param_2,int param_3,double param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uchar *puVar4;
  internal iVar5;
  int iVar6;
  long lVar7;
  internal *piVar8;
  internal *piVar9;
  uint uVar10;
  ulong uVar11;
  uchar *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  double dVar19;
  internal local_390 [784];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (param_1 == param_2) goto LAB_01063138;
  uVar11 = (ulong)(char)*param_1;
  if (-1 < (char)*param_1) goto LAB_01062b40;
  while (uVar11 = unibrow::WhiteSpace::Is((uint)uVar11 & 0xff), (uVar11 & 1) != 0) {
    while( true ) {
      param_1 = param_1 + 1;
      if (param_2 == param_1) goto LAB_01063138;
      uVar11 = (ulong)(char)*param_1;
      if ((char)*param_1 < '\0') break;
LAB_01062b40:
      if (((byte)(&DAT_019d520f)[uVar11 & 0xff] >> 3 & 1) == 0) goto LAB_01062b54;
    }
  }
  uVar11 = (ulong)*param_1;
LAB_01062b54:
  uVar13 = (uint)uVar11 & 0xff;
  if (uVar13 == 0x2b) {
    if ((internal *)(param_2 + -1) != (internal *)param_1) {
      iVar15 = 2;
LAB_01062b94:
      param_1 = param_1 + 1;
      uVar11 = (ulong)*param_1;
      goto LAB_01062ba4;
    }
  }
  else if (uVar13 == 0x2d) {
    if ((internal *)(param_2 + -1) != (internal *)param_1) {
      iVar15 = 1;
      goto LAB_01062b94;
    }
  }
  else {
    iVar15 = 0;
LAB_01062ba4:
    uVar13 = (uint)uVar11 & 0xff;
    if (uVar13 == 0x30) {
      piVar8 = (internal *)(param_1 + 1);
      if (piVar8 == (internal *)param_2) {
LAB_01062f50:
        param_4 = -0.0;
        if (iVar15 != 1) {
          param_4 = 0.0;
        }
        goto LAB_01063138;
      }
      if (((param_3 & 1U) == 0) || (((byte)*piVar8 | 0x20) != 0x78)) {
        if ((((uint)param_3 >> 1 & 1) == 0) || (((byte)*piVar8 | 0x20) != 0x6f)) {
          if ((((uint)param_3 >> 3 & 1) == 0) || (((byte)*piVar8 | 0x20) != 0x62)) {
            do {
              uVar11 = (ulong)(byte)*piVar8;
              if (*piVar8 != (internal)0x30) {
                uVar13 = 1;
                goto LAB_01062c90;
              }
              piVar8 = piVar8 + 1;
            } while ((internal *)param_2 != piVar8);
            goto LAB_01062f50;
          }
          piVar8 = (internal *)(param_1 + 2);
          if (piVar8 != (internal *)param_2) {
            param_4 = NAN;
            if ((iVar15 == 0) && (((byte)*piVar8 | 1) == 0x31)) {
              param_4 = InternalStringToIntDouble<1,unsigned_char_const*,unsigned_char_const*>
                                  ((uchar *)piVar8,param_2,false,
                                   (bool)((byte)((uint)param_3 >> 4) & 1));
            }
            goto LAB_01063138;
          }
        }
        else {
          piVar8 = (internal *)(param_1 + 2);
          if (piVar8 != (internal *)param_2) {
            param_4 = NAN;
            if (((iVar15 == 0) && ((byte)*piVar8 < 0x38)) && ((byte)*piVar8 - 0x30 < 10)) {
              param_4 = InternalStringToIntDouble<3,unsigned_char_const*,unsigned_char_const*>
                                  ((uchar *)piVar8,param_2,false,
                                   (bool)((byte)((uint)param_3 >> 4) & 1));
            }
            goto LAB_01063138;
          }
        }
      }
      else {
        piVar8 = (internal *)(param_1 + 2);
        if (piVar8 != (internal *)param_2) {
          iVar5 = *piVar8;
          uVar13 = (uint)(byte)iVar5;
          bVar1 = false;
          if ((5 < uVar13 - 0x61) && (0x3f < (byte)iVar5 || 9 < (byte)iVar5 - 0x30)) {
            if (uVar13 < 0x41) goto LAB_01063130;
            bVar1 = 0x46 < uVar13;
          }
          param_4 = NAN;
          if ((iVar15 == 0) && (!bVar1)) {
            param_4 = InternalStringToIntDouble<4,unsigned_char_const*,unsigned_char_const*>
                                ((uchar *)piVar8,param_2,false,
                                 (bool)((byte)((uint)param_3 >> 4) & 1));
          }
          goto LAB_01063138;
        }
      }
    }
    else if (uVar13 == 0x49) {
      piVar8 = (internal *)(param_1 + 8);
      lVar7 = 1;
      do {
        param_1 = param_1 + 1;
        if (lVar7 == 8) {
          if ((((uint)param_3 >> 4 & 1) != 0) || (param_2 == param_1)) goto LAB_01062f64;
          goto LAB_01062ec4;
        }
      } while ((param_2 != param_1) &&
              (piVar9 = (internal *)("Infinity" + lVar7), lVar7 = lVar7 + 1,
              (internal)*param_1 == *piVar9));
    }
    else {
      uVar13 = 0;
      piVar8 = (internal *)param_1;
LAB_01062c90:
      uVar10 = (uint)uVar11;
      uVar18 = uVar13 & (uint)param_3 >> 2;
      if ((uVar10 - 0x30 & 0xff) < 10) {
        iVar16 = 0;
        bVar1 = false;
        iVar17 = 0;
        iVar6 = 0;
LAB_01062d00:
        local_390[iVar16] = SUB81(uVar11,0);
        iVar16 = iVar16 + 1;
        iVar6 = iVar6 + 1;
        if (uVar18 != 0) goto LAB_01062ccc;
        do {
          uVar18 = 0;
          while( true ) {
            if ((internal *)(param_2 + -1) == piVar8) {
              iVar14 = 0;
              goto LAB_01062d40;
            }
            iVar5 = piVar8[1];
            uVar11 = (ulong)(byte)iVar5;
            uVar10 = (uint)(byte)iVar5;
            piVar8 = piVar8 + 1;
            if (9 < (byte)iVar5 - 0x30) goto LAB_01062d9c;
            if (iVar6 < 0x304) goto LAB_01062d00;
            iVar17 = iVar17 + 1;
            bVar1 = (bool)(bVar1 | iVar5 != (internal)0x30);
            if (uVar18 == 0) break;
LAB_01062ccc:
            uVar18 = (uint)((byte)*piVar8 < 0x38);
          }
        } while( true );
      }
      iVar6 = 0;
      iVar17 = 0;
      bVar1 = false;
      iVar16 = 0;
LAB_01062d9c:
      uVar18 = uVar18 & iVar6 != 0;
      if ((uVar10 & 0xff) == 0x2e) {
        if ((((uint)param_3 >> 4 & 1) != 0) || (uVar18 != 1)) {
          if (uVar18 != 0) {
LAB_01062dc4:
            param_4 = InternalStringToIntDouble<3,char*,char*>
                                ((char *)local_390,(char *)(local_390 + iVar16),iVar15 == 1,
                                 (bool)((byte)((uint)param_3 >> 4) & 1));
            goto LAB_01063138;
          }
          piVar9 = piVar8 + 1;
          if (piVar9 != (internal *)param_2) {
            if ((iVar6 == 0) && (*piVar9 == (internal)0x30)) {
              puVar4 = (uchar *)0x0;
              do {
                puVar12 = puVar4;
                if (param_2 + (-2 - (long)piVar8) == puVar12) goto LAB_01062f50;
                puVar4 = puVar12 + 1;
              } while (piVar8[(long)(puVar12 + 2)] == (internal)0x30);
              iVar14 = -(int)(puVar12 + 1);
              piVar9 = piVar8 + (long)(puVar12 + 2);
            }
            else {
              iVar14 = 0;
            }
            do {
              uVar10 = (uint)(byte)*piVar9;
              piVar8 = piVar9;
              if (9 < uVar10 - 0x30) goto LAB_01062e4c;
              if (iVar6 < 0x304) {
                local_390[iVar16] = *piVar9;
                iVar16 = iVar16 + 1;
                iVar6 = iVar6 + 1;
                iVar14 = iVar14 + -1;
              }
              else {
                bVar1 = (bool)(bVar1 | uVar10 != 0x30);
              }
              piVar9 = piVar9 + 1;
            } while ((internal *)param_2 != piVar9);
            goto LAB_01062d44;
          }
          if (uVar13 == 0 && (iVar6 != 0) == 0) goto LAB_01063130;
          if (bVar1) goto LAB_01062d4c;
LAB_01062d64:
          local_390[iVar16] = (internal)0x0;
          dVar19 = (double)Strtod(local_390,(long)iVar16,iVar17);
          param_4 = -dVar19;
          if (iVar15 != 1) {
            param_4 = dVar19;
          }
          goto LAB_01063138;
        }
      }
      else {
        iVar14 = 0;
LAB_01062e4c:
        if ((iVar14 != 0 || iVar6 != 0) || (uVar13 == 1)) {
          if ((uVar10 & 0xff | 0x20) != 0x65) {
LAB_010630f8:
            if (((uint)param_3 >> 4 & 1) == 0) {
              for (; piVar8 != (internal *)param_2; piVar8 = piVar8 + 1) {
                iVar5 = *piVar8;
                if ((char)iVar5 < '\0') {
                  uVar11 = unibrow::WhiteSpace::Is((uint)(byte)iVar5);
                  if ((uVar11 & 1) == 0) goto LAB_01063130;
                }
                else if (((byte)(&DAT_019d520f)[(uint)(byte)iVar5] >> 3 & 1) == 0)
                goto LAB_01063130;
              }
            }
LAB_01062d40:
            if (uVar18 != 0) goto LAB_01062dc4;
LAB_01062d44:
            iVar17 = iVar14 + iVar17;
            if (bVar1) {
LAB_01062d4c:
              local_390[iVar16] = (internal)0x31;
              iVar16 = iVar16 + 1;
              iVar17 = iVar17 + -1;
            }
            goto LAB_01062d64;
          }
          if (uVar18 == 0) {
            piVar9 = piVar8 + 1;
            if (piVar9 != (internal *)param_2) {
              iVar5 = *piVar9;
              if ((iVar5 == (internal)0x2d) || (iVar5 == (internal)0x2b)) {
                piVar9 = piVar8 + 2;
                if (piVar9 == (internal *)param_2) goto LAB_01063070;
              }
              else {
                iVar5 = (internal)0x2b;
              }
              if ((piVar9 != (internal *)param_2) &&
                 (uVar13 = (uint)(byte)*piVar9, (byte)*piVar9 - 0x30 < 10)) {
                iVar6 = 0;
                do {
                  piVar9 = piVar9 + 1;
                  if ((iVar6 < 0x6666666) ||
                     ((iVar2 = 0x3fffffff, iVar6 == 0x6666666 && ((int)(uVar13 - 0x30) < 4)))) {
                    iVar2 = (uVar13 - 0x30) + iVar6 * 10;
                  }
                  iVar6 = iVar2;
                  piVar8 = (internal *)param_2;
                } while (((internal *)param_2 != piVar9) &&
                        (uVar13 = (uint)(byte)*piVar9, piVar8 = piVar9, uVar13 - 0x30 < 10));
                iVar2 = -iVar6;
                if (iVar5 != (internal)0x2d) {
                  iVar2 = iVar6;
                }
                iVar14 = iVar2 + iVar14;
                goto LAB_010630f8;
              }
            }
LAB_01063070:
            if (((uint)param_3 >> 4 & 1) != 0) goto LAB_01062d44;
          }
        }
      }
    }
  }
LAB_01063130:
  param_4 = NAN;
LAB_01063138:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
LAB_01062ec4:
  do {
    iVar5 = *piVar8;
    if ((char)iVar5 < '\0') {
      uVar11 = unibrow::WhiteSpace::Is((uint)(byte)iVar5);
      if ((uVar11 & 1) == 0) goto LAB_01063130;
    }
    else if (((byte)(&DAT_019d520f)[(uint)(byte)iVar5] >> 3 & 1) == 0) goto LAB_01063130;
    piVar8 = piVar8 + 1;
  } while ((internal *)param_2 != piVar8);
LAB_01062f64:
  param_4 = -INFINITY;
  if (iVar15 != 1) {
    param_4 = INFINITY;
  }
  goto LAB_01063138;
}

