
/* WARNING: Type propagation algorithm not settling */

uint FUN_00c1ed60(byte *param_1,double *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  
  uVar18 = 0;
  bVar12 = *param_1;
  bVar7 = (&DAT_01410f61)[bVar12];
  if ((bVar7 >> 3 & 1) == 0) {
    while ((bVar7 >> 1 & 1) != 0) {
      param_1 = param_1 + 1;
      bVar12 = *param_1;
      bVar7 = (&DAT_01410f61)[bVar12];
    }
    uVar18 = 0;
    if ((bVar12 - 0x2b & 0xfd) == 0) {
      param_1 = param_1 + 1;
      uVar18 = (uint)(bVar12 == 0x2d);
    }
    bVar12 = *param_1;
    if (0x40 < bVar12) {
      if ((bVar12 | 0x20) == 0x69) {
        if (((param_1[1] | 0x20) == 0x6e) && ((param_1[2] | 0x20) == 0x66)) {
          bVar12 = param_1[3];
          dVar15 = -INFINITY;
          if (uVar18 == 0) {
            dVar15 = INFINITY;
          }
          pbVar21 = param_1 + 3;
          if ((((bVar12 | 0x20) == 0x69) && ((param_1[4] | 0x20) == 0x6e)) &&
             (((param_1[5] | 0x20) == 0x69 &&
              (((param_1[6] | 0x20) == 0x74 && ((param_1[7] | 0x20) == 0x79)))))) {
            pbVar21 = param_1 + 8;
            bVar12 = param_1[8];
          }
LAB_00c1f638:
          bVar7 = (&DAT_01410f61)[bVar12];
          param_1 = pbVar21;
          goto joined_r0x00c1f644;
        }
      }
      else {
        dVar15 = -NAN;
        if ((((bVar12 | 0x20) == 0x6e) && ((param_1[1] | 0x20) == 0x61)) &&
           ((param_1[2] | 0x20) == 0x6e)) {
          bVar12 = param_1[3];
          pbVar21 = param_1 + 3;
          goto LAB_00c1f638;
        }
      }
      dVar15 = -NAN;
      if (((byte)(&DAT_01410f61)[bVar12] >> 1 & 1) == 0) {
        return 0;
      }
      do {
        param_1 = param_1 + 1;
        bVar12 = *param_1;
        bVar7 = (&DAT_01410f61)[bVar12];
joined_r0x00c1f644:
      } while ((bVar7 >> 1 & 1) != 0);
      if (bVar12 == 0) {
        *param_2 = dVar15;
        return 1;
      }
      return 0;
    }
  }
  uVar24 = (ulong)bVar12;
  uVar1 = param_3 & 0x10;
  if ((param_3 >> 4 & 1) == 0) {
    if (0x30 < bVar12) {
LAB_00c1ee90:
      bVar3 = false;
      pbVar21 = (byte *)0x0;
      uVar25 = 10;
      bVar12 = 8;
      goto LAB_00c1eea0;
    }
    uVar25 = 10;
    if (bVar12 != 0x30) goto LAB_00c1edb0;
LAB_00c1f008:
    if ((param_1[1] | 0x20) == 0x78) {
      uVar25 = 0x10;
      param_1 = param_1 + 2;
      bVar12 = 0x10;
    }
    else {
      bVar12 = 8;
      if ((param_1[1] | 0x20) == 0x62) {
        param_1 = param_1 + 2;
        uVar25 = 2;
      }
    }
  }
  else {
    if (bVar12 == 0x30) {
      uVar25 = 0;
      goto LAB_00c1f008;
    }
    if (0x30 < bVar12) goto LAB_00c1ee90;
LAB_00c1edb0:
    uVar25 = 10;
    bVar12 = 8;
  }
  uVar9 = (uint)*param_1;
  bVar3 = false;
  pbVar20 = (byte *)0x0;
  pbVar21 = pbVar20;
  if (*param_1 == 0x30) goto LAB_00c1ede8;
  while (pbVar20 = param_1, param_1 = pbVar20, uVar9 == 0x2e) {
    if (pbVar21 != (byte *)0x0) {
      return 0;
    }
    while( true ) {
      param_1 = param_1 + 1;
      uVar9 = (uint)*param_1;
      pbVar21 = pbVar20;
      if (uVar9 != 0x30) break;
LAB_00c1ede8:
      bVar3 = true;
    }
  }
  uVar24 = (ulong)uVar9;
LAB_00c1eea0:
  uVar23 = 0;
  uVar9 = 0;
  uVar13 = (uint)*param_1;
  bVar7 = (&DAT_01410f61)[*param_1];
  pbVar20 = param_1;
  if ((bVar7 & bVar12) == 0) goto LAB_00c1eef0;
  do {
    uVar9 = uVar9 + 1;
    uVar23 = (uVar13 & 0xf) + uVar23 * 10;
    while( true ) {
      pbVar20 = pbVar20 + 1;
      uVar13 = (uint)*pbVar20;
      bVar7 = (&DAT_01410f61)[*pbVar20];
      if ((bVar7 & bVar12) != 0) break;
LAB_00c1eef0:
      uVar19 = 0;
      if (uVar13 != 0x2e) {
        if (uVar9 == 0 && !bVar3) {
          return 0;
        }
        uVar22 = (uint)uVar24;
        if (pbVar21 == (byte *)0x0) {
          uVar11 = 3;
        }
        else {
          if (uVar9 != 0) {
            uVar17 = (long)pbVar21 - (long)(pbVar20 + -1) & 0xffffffff;
            if ((-1 < (int)((long)pbVar21 - (long)(pbVar20 + -1))) ||
               (pbVar21 = pbVar20 + -2, pbVar20[-1] != 0x30)) goto LAB_00c1f15c;
            goto LAB_00c1f150;
          }
          uVar11 = 1;
        }
        uVar17 = 0;
        if (uVar25 < 10) goto LAB_00c1f034;
        uVar10 = 0x70;
        if (uVar25 != 0x10) {
          uVar10 = 0x65;
        }
        goto LAB_00c1ef44;
      }
      bVar2 = pbVar21 != (byte *)0x0;
      pbVar21 = pbVar20;
      if (bVar2) {
        return 0;
      }
    }
  } while( true );
  while (bVar12 = *pbVar21, pbVar21 = pbVar21 + -1, bVar12 == 0x30) {
LAB_00c1f150:
    uVar11 = (int)uVar17 + 1;
    uVar17 = (ulong)uVar11;
    uVar9 = uVar9 - 1;
    if (uVar11 == 0) break;
  }
LAB_00c1f15c:
  if (uVar25 == 0x10) {
    uVar17 = (ulong)(uint)((int)uVar17 << 2);
    uVar11 = 1;
    uVar10 = 0x70;
LAB_00c1ef44:
    if ((uVar13 | 0x20) == uVar10) {
      bVar12 = pbVar20[1];
      bVar3 = (bVar12 - 0x2b & 0xfd) == 0;
      if (bVar3) {
        bVar7 = pbVar20[2];
        pbVar20 = pbVar20 + 2;
      }
      else {
        pbVar20 = pbVar20 + 1;
        bVar7 = bVar12;
      }
      if (((byte)(&DAT_01410f61)[bVar7] >> 3 & 1) == 0) {
        return 0;
      }
      bVar6 = pbVar20[1];
      pbVar20 = pbVar20 + 1;
      uVar26 = (ulong)bVar6;
      bVar8 = (&DAT_01410f61)[uVar26];
      uVar13 = bVar7 & 0xf;
      while (uVar11 = (uint)bVar6, (bVar8 >> 3 & 1) != 0) {
        pbVar20 = pbVar20 + 1;
        bVar6 = *pbVar20;
        uVar26 = (ulong)bVar6;
        uVar11 = uVar13 * 10 + (uVar11 & 0xf);
        if (0xffff < uVar13) {
          uVar11 = uVar13;
        }
        uVar13 = uVar11;
        bVar8 = (&DAT_01410f61)[uVar26];
      }
      uVar10 = -uVar13;
      if (!bVar3 || bVar12 != 0x2d) {
        uVar10 = uVar13;
      }
      uVar17 = (ulong)((int)uVar17 + uVar10);
      if (uVar11 == 0) goto LAB_00c1f170;
      if ((uVar11 | 0x20) == 0x69) {
LAB_00c1f2b8:
        if ((param_3 >> 2 & 1) != 0) {
          bVar12 = pbVar20[1];
          pbVar20 = pbVar20 + 1;
          uVar11 = 2;
          bVar7 = (&DAT_01410f61)[bVar12];
          goto joined_r0x00c1f3f4;
        }
        return 0;
      }
      uVar11 = 1;
      if (((byte)(&DAT_01410f61)[uVar26] >> 1 & 1) == 0) {
        return 0;
      }
      do {
        pbVar20 = pbVar20 + 1;
        bVar12 = *pbVar20;
        bVar7 = (&DAT_01410f61)[bVar12];
joined_r0x00c1f3f4:
        uVar13 = (uint)bVar12;
joined_r0x00c1f04c:
      } while ((bVar7 >> 1 & 1) != 0);
      if (uVar13 != 0) {
        return 0;
      }
    }
    else {
LAB_00c1f034:
      if (uVar13 != 0) {
        uVar10 = uVar13 | 0x20;
        if (uVar10 == 0x69) goto LAB_00c1f2b8;
        if (uVar11 != 3) goto joined_r0x00c1f04c;
        if (uVar10 == 0x75) {
          pbVar21 = pbVar20 + 1;
          if ((pbVar20[1] | 0x20) != 0x6c) {
            if (uVar1 != 0) {
              bVar12 = pbVar20[1];
              uVar11 = 4;
              bVar7 = (&DAT_01410f61)[bVar12];
              pbVar20 = pbVar21;
              goto joined_r0x00c1f3f4;
            }
            return 0;
          }
          iVar14 = 4;
        }
        else {
          iVar14 = 3;
          pbVar21 = pbVar20;
          if (uVar10 != 0x6c) goto LAB_00c1f2f0;
        }
        bVar12 = pbVar21[1] | 0x20;
        if (bVar12 == 0x6c) {
          pbVar20 = pbVar21 + 2;
          bVar12 = pbVar21[2] | 0x20;
        }
        else {
          if (uVar1 == 0) {
            return 0;
          }
          pbVar20 = pbVar21 + 1;
        }
        uVar11 = iVar14 + 2;
        if (bVar12 == 0x75) {
          if ((iVar14 - 1U & 0xfffffffd) == 0) {
            pbVar20 = pbVar20 + 1;
            uVar11 = iVar14 + 3;
          }
          if (uVar11 < 5) goto LAB_00c1f2f0;
        }
        if ((param_3 >> 3 & 1) == 0) {
          return 0;
        }
LAB_00c1f2f0:
        bVar12 = *pbVar20;
        bVar7 = (&DAT_01410f61)[bVar12];
        goto joined_r0x00c1f3f4;
      }
    }
    iVar14 = (int)uVar17;
    if ((uVar11 == 3) && (uVar25 == 10)) {
      if (uVar9 < 10) {
LAB_00c1f280:
        uVar1 = -uVar23;
        if (uVar18 == 0) {
          uVar1 = uVar23;
        }
        if ((param_3 >> 1 & 1) != 0) {
          *param_2 = (double)(int)uVar1;
          return 1;
        }
        *(uint *)param_2 = uVar1;
        return 3;
      }
      if (uVar9 == 10) {
        if ((uVar22 < 0x33) && (uVar23 < uVar18 + 0x80000000)) goto LAB_00c1f280;
        goto LAB_00c1f178;
      }
LAB_00c1f08c:
      if (uVar25 == 2) {
        if (0x40 < uVar9) {
          return 0;
        }
        if (iVar14 != 0) {
          return 0;
        }
        if (uVar9 == 0) {
          switch(uVar11) {
          case 3:
            dVar15 = 0.0;
            if ((param_3 >> 1 & 1) == 0) goto LAB_00c1f57c;
LAB_00c1f5e4:
            if (uVar1 != 0) goto switchD_00c1f4a0_caseD_4;
            uVar11 = 1;
            goto switchD_00c1f4a0_default;
          case 4:
            iVar14 = 0;
            goto LAB_00c1f538;
          case 5:
          case 6:
            dVar15 = 0.0;
switchD_00c1f4a0_caseD_5:
            dVar5 = (double)-(long)dVar15;
            if (uVar18 == 0) {
              dVar5 = dVar15;
            }
            *param_2 = dVar5;
            return uVar11;
          default:
            dVar15 = 0.0;
            uVar16 = 0;
          }
        }
        else {
          if ((uVar22 & 0xfffffffe) != 0x30) {
            return 0;
          }
          dVar15 = 0.0;
          pbVar21 = param_1 + (ulong)(uVar9 - 1) + 1;
          while( true ) {
            param_1 = param_1 + 1;
            dVar15 = (double)(uVar24 & 1 | (long)dVar15 << 1);
            if (param_1 == pbVar21) break;
            uVar24 = (ulong)*param_1;
            if ((*param_1 & 0xfe) != 0x30) {
              return 0;
            }
          }
          switch(uVar11) {
          case 3:
            if (((param_3 >> 1 & 1) == 0) && ((ulong)dVar15 < (ulong)(uVar18 + 0x80000000)))
            goto LAB_00c1f57c;
            goto LAB_00c1f5e4;
          case 4:
switchD_00c1f4a0_caseD_4:
            iVar14 = SUB84(dVar15,0);
            if (0x20 < uVar9) {
              return 0;
            }
LAB_00c1f538:
            iVar4 = -iVar14;
            if (uVar18 == 0) {
              iVar4 = iVar14;
            }
            *(int *)param_2 = iVar4;
            return 4;
          case 5:
          case 6:
            goto switchD_00c1f4a0_caseD_5;
          }
switchD_00c1f4a0_default:
          uVar16 = 0;
          if (((ulong)dVar15 & 0xc000000000000000) != 0) {
            uVar16 = 2;
            dVar15 = (double)((ulong)dVar15 & 3 | (ulong)dVar15 >> 2);
          }
        }
        FUN_00c1e430(dVar15,param_2,uVar16,uVar18);
        goto LAB_00c1f190;
      }
    }
    else {
      if (uVar25 != 0) goto LAB_00c1f364;
      if (1 < uVar11 - 1) {
        if (0x16 < uVar9) {
          return 0;
        }
        if (uVar9 == 0x16) {
          if (0x31 < uVar22) {
            return 0;
          }
          uVar17 = 0x15;
        }
        else {
          uVar17 = (ulong)(uVar9 - 1);
          if (uVar9 == 0) {
            if (uVar11 == 3) {
              uVar24 = 0;
              dVar15 = 0.0;
LAB_00c1f4d0:
              uVar11 = 3;
LAB_00c1f4d4:
              uVar19 = SUB84(dVar15,0);
              if (uVar24 != 0) {
                return 0;
              }
            }
            else if (uVar11 != 4) {
              dVar15 = 0.0;
LAB_00c1f254:
              dVar5 = (double)-(long)dVar15;
              if (uVar18 == 0) {
                dVar5 = dVar15;
              }
              *param_2 = dVar5;
              return uVar11;
            }
            *(uint *)param_2 = (uVar19 ^ -uVar18) + uVar18;
            return uVar11;
          }
        }
        if ((uVar22 - 0x30 & 0xff) < 8) {
          dVar15 = 0.0;
          pbVar21 = param_1 + uVar17 + 1;
          do {
            param_1 = param_1 + 1;
            dVar15 = (double)((uVar24 & 7) + (long)dVar15 * 8);
            if (param_1 == pbVar21) {
              if (uVar11 != 3) {
                uVar24 = (ulong)dVar15 >> 0x20;
                if (uVar11 != 4) goto LAB_00c1f254;
                goto LAB_00c1f4d4;
              }
              uVar24 = (ulong)dVar15 >> 0x20;
              uVar11 = 4;
              if ((ulong)dVar15 < (ulong)(uVar18 + 0x80000000)) goto LAB_00c1f4d0;
              goto LAB_00c1f4d4;
            }
            uVar24 = (ulong)*param_1;
          } while ((byte)(*param_1 - 0x30) < 8);
        }
        return 0;
      }
    }
  }
  else {
    if (9 < uVar25) {
      uVar11 = 1;
      uVar10 = 0x65;
      goto LAB_00c1ef44;
    }
    if (uVar13 != 0) {
      uVar11 = 1;
      if ((uVar13 | 0x20) != 0x69) goto joined_r0x00c1f04c;
      goto LAB_00c1f2b8;
    }
LAB_00c1f170:
    uVar11 = 1;
    if (uVar25 != 0) {
LAB_00c1f364:
      iVar14 = (int)uVar17;
      if (uVar25 != 0x10) goto LAB_00c1f08c;
      dVar15 = 0.0;
      uVar25 = uVar9;
      if (0x10 < uVar9) {
        uVar25 = 0x10;
      }
      pbVar21 = param_1;
      if (uVar25 != 0) {
        while( true ) {
          uVar23 = (uint)uVar24;
          if (uVar23 == 0x2e) {
            uVar23 = (uint)pbVar21[1];
            pbVar21 = pbVar21 + 1;
          }
          uVar13 = uVar23 + 9;
          if (uVar23 < 0x3a) {
            uVar13 = uVar23;
          }
          uVar25 = uVar25 - 1;
          param_1 = pbVar21 + 1;
          dVar15 = (double)(((ulong)uVar13 & 0xf) + (long)dVar15 * 0x10);
          if (uVar25 == 0) break;
          uVar24 = (ulong)pbVar21[1];
          pbVar21 = param_1;
        }
      }
      if (uVar9 < 0x11) {
        switch(uVar11) {
        case 3:
          goto switchD_00c1f5b4_caseD_3;
        case 4:
switchD_00c1f5b4_caseD_4:
          iVar14 = SUB84(dVar15,0);
          if (8 < uVar9) {
            return 0;
          }
          goto LAB_00c1f538;
        case 5:
        case 6:
          goto switchD_00c1f4a0_caseD_5;
        }
      }
      else {
        uVar25 = 0x10;
        do {
          bVar12 = *param_1;
          if (bVar12 == 0x2e) {
            bVar12 = param_1[1];
            param_1 = param_1 + 1;
          }
          uVar25 = uVar25 + 1;
          param_1 = param_1 + 1;
          dVar15 = (double)((ulong)dVar15 | (long)(int)(uint)(bVar12 != 0x30));
        } while (uVar25 != uVar9);
        uVar17 = (ulong)((iVar14 + uVar25 * 4) - 0x40);
        if (uVar11 == 3) {
switchD_00c1f5b4_caseD_3:
          if (((param_3 >> 1 & 1) == 0) && ((ulong)dVar15 < (ulong)(uVar18 + 0x80000000))) {
LAB_00c1f57c:
            iVar14 = -SUB84(dVar15,0);
            if (uVar18 == 0) {
              iVar14 = SUB84(dVar15,0);
            }
            *(int *)param_2 = iVar14;
            return 3;
          }
          if (uVar1 != 0) goto switchD_00c1f5b4_caseD_4;
          uVar11 = 1;
        }
        else if ((2 < uVar11) && (uVar11 < 7)) {
          return 0;
        }
      }
      if (((ulong)dVar15 & 0xc000000000000000) != 0) {
        uVar17 = (ulong)((int)uVar17 + 2);
        dVar15 = (double)((ulong)dVar15 & 3 | (ulong)dVar15 >> 2);
      }
      FUN_00c1e430(dVar15,param_2,uVar17,uVar18);
      goto LAB_00c1f190;
    }
  }
LAB_00c1f178:
  uVar11 = FUN_00c1e4c8(param_1,param_2,uVar11,param_3);
LAB_00c1f190:
  if (((uVar11 == 1) && ((param_3 & 1) != 0)) &&
     (iVar14 = (int)*param_2, (double)iVar14 == *param_2)) {
    *(int *)param_2 = iVar14;
    uVar11 = 3;
  }
  return uVar11;
}

