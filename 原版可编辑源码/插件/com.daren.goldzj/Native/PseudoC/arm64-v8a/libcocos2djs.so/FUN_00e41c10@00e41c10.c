
long FUN_00e41c10(byte *param_1,byte *param_2,long param_3,long *param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  bVar2 = false;
  lVar7 = 0;
  lVar6 = 0;
  uVar8 = 4;
  uVar13 = 0;
joined_r0x00e41c64:
  do {
    uVar3 = uVar13;
    if ((uVar8 != 0) && (param_1 = param_1 + 1, param_2 <= param_1)) goto LAB_00e41dc4;
    uVar10 = (uint)*param_1;
    uVar13 = (ulong)uVar8;
    uVar8 = 4 - uVar8;
    uVar14 = (ulong)(*param_1 >> (uVar13 & 0x3f)) & 0xf;
    uVar11 = (uint)uVar14;
    uVar13 = uVar3;
    if (uVar11 != 0xe) {
      if (uVar11 < 10) {
        if ((long)uVar3 < 0xccccccc) {
          if ((uVar3 != 0) || (uVar13 = 0, uVar11 != 0)) {
            lVar6 = lVar6 + 1;
            uVar13 = uVar14 + uVar3 * 10;
          }
        }
        else {
          lVar7 = lVar7 + 1;
        }
        goto joined_r0x00e41c64;
      }
      if (uVar11 == 10) {
        lVar9 = 0;
LAB_00e41cf0:
        do {
          do {
            if (uVar8 != 0) {
              param_1 = param_1 + 1;
              if (param_2 <= param_1) goto LAB_00e41dc4;
              uVar10 = (uint)*param_1;
            }
            uVar11 = uVar10 >> (ulong)(uVar8 & 0x1f) & 0xf;
            uVar14 = (ulong)uVar11;
            uVar8 = 4 - uVar8;
            if (9 < uVar11) goto LAB_00e41d4c;
            if ((uVar3 == 0) && (uVar11 == 0)) {
              uVar3 = 0;
              lVar7 = lVar7 + -1;
              goto LAB_00e41cf0;
            }
          } while (0xccccccb < (long)uVar3 || 8 < lVar9);
          lVar9 = lVar9 + 1;
          uVar3 = uVar14 + uVar3 * 10;
        } while( true );
      }
      lVar9 = 0;
LAB_00e41d4c:
      iVar12 = (int)uVar14;
      if (iVar12 - 0xbU < 2) {
        bVar1 = false;
        lVar5 = 0;
        while (lVar4 = lVar5, uVar8 == 0) {
LAB_00e41d98:
          uVar11 = uVar10 >> (ulong)(uVar8 & 0x1f) & 0xf;
          if (9 < uVar11) {
            lVar5 = -lVar4;
            if (iVar12 != 0xc) {
              lVar5 = lVar4;
            }
            goto joined_r0x00e41db4;
          }
          uVar8 = 4 - uVar8;
          lVar5 = (ulong)uVar11 + lVar4 * 10;
          if (1000 < lVar4) {
            bVar1 = true;
            lVar5 = lVar4;
          }
        }
        param_1 = param_1 + 1;
        if (param_1 < param_2) {
          uVar10 = (uint)*param_1;
          goto LAB_00e41d98;
        }
        goto LAB_00e41dc4;
      }
      bVar1 = false;
      lVar5 = 0;
joined_r0x00e41db4:
      lVar4 = 0;
      if (uVar3 == 0) goto LAB_00e41dc8;
      if (bVar1) {
        if (iVar12 != 0xc) {
LAB_00e41e3c:
          lVar4 = 0x7fffffff;
          goto LAB_00e41dc8;
        }
      }
      else {
        lVar5 = lVar7 + param_3 + lVar5;
        if (param_4 != (long *)0x0) {
          lVar9 = lVar9 + lVar6;
          lVar5 = lVar5 + lVar6;
          if (5 < lVar9) {
            lVar6 = 0;
            if (*(long *)(&UNK_01976c68 + lVar9 * 8) != 0) {
              lVar6 = (long)uVar3 / *(long *)(&UNK_01976c68 + lVar9 * 8);
            }
            if (lVar6 < 0x8000) {
              lVar4 = FT_DivFix();
              *param_4 = lVar5 + -5;
            }
            else {
              lVar4 = FT_DivFix(uVar3,*(undefined8 *)(&UNK_01976c70 + lVar9 * 8));
              *param_4 = lVar5 + -4;
            }
            goto LAB_00e41dc8;
          }
          if (0x7fff < (long)uVar3) {
            lVar4 = FT_DivFix(uVar3,10);
            *param_4 = (1 - lVar9) + lVar5;
            goto LAB_00e41dc8;
          }
          if (lVar5 < 1) {
LAB_00e41eec:
            lVar5 = lVar5 - lVar9;
          }
          else {
            lVar6 = lVar5;
            if (4 < lVar5) {
              lVar6 = 5;
            }
            if (lVar6 - lVar9 < 1) goto LAB_00e41eec;
            lVar5 = lVar5 - lVar6;
            uVar3 = (&DAT_01976c90)[lVar6 - lVar9] * uVar3;
            if (0x7fff < (long)uVar3) {
              uVar3 = uVar3 / 10;
              lVar5 = lVar5 + 1;
            }
          }
          *param_4 = lVar5;
          lVar4 = uVar3 << 0x10;
          goto LAB_00e41dc8;
        }
        lVar7 = lVar5 + lVar6;
        if (5 < lVar7) goto LAB_00e41e3c;
        if (-6 < lVar7) {
          if (lVar7 < 0) {
            uVar13 = 0;
            if ((&DAT_01976c90)[-lVar7] != 0) {
              uVar13 = (long)uVar3 / (long)(&DAT_01976c90)[-lVar7];
            }
          }
          else {
            lVar6 = -lVar5;
            uVar13 = uVar3;
          }
          lVar9 = lVar9 + lVar6;
          lVar6 = 9;
          if (lVar9 != 10) {
            lVar6 = lVar9;
          }
          uVar3 = (long)uVar13 / 10;
          if (lVar9 != 10) {
            uVar3 = uVar13;
          }
          if (lVar6 < 1) {
            lVar4 = 0x7fffffff;
            if ((long)((&DAT_01976c90)[-lVar6] * uVar3) < 0x8000) {
              lVar4 = (&DAT_01976c90)[-lVar6] * uVar3 * 0x10000;
            }
            goto LAB_00e41dc8;
          }
          lVar7 = 0;
          if ((&DAT_01976c90)[lVar6] != 0) {
            lVar7 = (long)uVar3 / (long)(&DAT_01976c90)[lVar6];
          }
          if (lVar7 < 0x8000) {
            lVar4 = FT_DivFix();
            goto LAB_00e41dc8;
          }
        }
      }
LAB_00e41dc4:
      lVar4 = 0;
LAB_00e41dc8:
      lVar6 = -lVar4;
      if (!bVar2) {
        lVar6 = lVar4;
      }
      return lVar6;
    }
    bVar2 = true;
  } while( true );
}

