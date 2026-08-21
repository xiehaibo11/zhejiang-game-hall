
ulong FUN_00a1afb4(long param_1,uint *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  ulong uVar18;
  long lVar19;
  uint uVar17;
  
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar18 = 0;
  uVar8 = uVar6 & 0xff;
  uVar7 = uVar6 >> 8 & 0xff;
  uVar6 = uVar6 >> 0x10;
LAB_00a1afdc:
  do {
    iVar15 = (int)uVar18;
    lVar12 = 0;
    lVar5 = (uVar18 << 0x20) + 0x200000000;
    lVar19 = (uVar18 << 0x20) + 0x500000000;
    while( true ) {
      pbVar1 = (byte *)(param_3 + lVar12);
      bVar2 = *pbVar1;
      iVar10 = (int)lVar12;
      if (bVar2 != 0x1b) break;
      if (param_4 < iVar15 + lVar12 + 4U) {
        iVar9 = iVar15 + iVar10;
        goto LAB_00a1b148;
      }
      if (pbVar1[1] != 0x24) {
        if (pbVar1[1] != 0x4e) goto LAB_00a1b124;
        lVar5 = lVar12 + (uVar18 & 0xffffffff);
        iVar9 = (int)lVar5;
        uVar11 = uVar6;
        if (uVar6 != 1) goto LAB_00a1b11c;
        bVar2 = *(byte *)(param_3 + lVar12 + 2);
        if ((((((char)bVar2 < '\0') || (bVar4 = *(byte *)(param_3 + lVar12 + 3), (char)bVar4 < '\0')
              ) || (0x51 < bVar2 - 0x21)) ||
            ((0x5d < (bVar4 - 0x21 & 0xff) ||
             (uVar16 = ((uint)bVar4 + (uint)bVar2 * 0x5e) - 0xc3f, 0xef0 < uVar16 >> 1)))) ||
           (uVar11 = (uint)*(ushort *)(&DAT_0133a816 + (ulong)uVar16 * 2),
           *(ushort *)(&DAT_0133a816 + (ulong)uVar16 * 2) == 0xfffd)) goto LAB_00a1b128;
        uVar18 = lVar5 + 4;
        goto LAB_00a1b224;
      }
      if (pbVar1[2] != 0x2a) {
        if (pbVar1[2] != 0x29) goto LAB_00a1b124;
        cVar3 = *(char *)(param_3 + lVar12 + 3);
        if (cVar3 == 'G') {
          uVar7 = 2;
        }
        else {
          if (cVar3 != 'A') goto LAB_00a1b124;
          uVar7 = 1;
        }
        if (param_4 < (ulong)(lVar19 >> 0x20)) {
          iVar9 = iVar15 + iVar10 + 4;
          goto LAB_00a1b148;
        }
        uVar18 = lVar12 + (uVar18 & 0xffffffff) + 4;
        param_3 = param_3 + lVar12 + 4;
        goto LAB_00a1afdc;
      }
      if (pbVar1[3] != 0x48) goto LAB_00a1b124;
      lVar12 = lVar12 + 4;
      lVar5 = lVar5 + 0x400000000;
      lVar19 = lVar19 + 0x400000000;
      uVar6 = 1;
      if (param_4 < iVar15 + lVar12 + 1U) {
        iVar9 = iVar15 + (int)lVar12;
        uVar6 = 1;
        goto LAB_00a1b148;
      }
    }
    if (bVar2 == 0xe) {
      if (1 < uVar7 - 1) {
LAB_00a1b124:
        iVar9 = iVar15 + iVar10;
        goto LAB_00a1b128;
      }
      if (param_4 < (ulong)(lVar5 >> 0x20)) {
        iVar9 = iVar15 + iVar10 + 1;
        uVar8 = 1;
        break;
      }
      uVar8 = 1;
    }
    else {
      uVar11 = (uint)bVar2;
      if (uVar11 != 0xf) {
        iVar9 = iVar10 + iVar15;
        uVar16 = (uint)bVar2;
        uVar17 = (uint)bVar2;
        if (uVar8 == 1) {
          uVar18 = lVar12 + (uVar18 & 0xffffffff) + 2;
          if (param_4 < (ulong)(long)(int)uVar18) break;
          if ((-1 < (char)bVar2) && (bVar2 = *(byte *)(param_3 + lVar12 + 1), -1 < (char)bVar2)) {
            if (uVar7 == 2) {
              if ((((uVar11 - 0x21 < 7) || (uVar11 == 0x42)) || (uVar17 - 0x44 < 0x3a)) &&
                 (bVar2 - 0x21 < 0x5e)) {
                iVar15 = (uint)bVar2 + uVar17 * 0x5e;
                uVar11 = iVar15 - 0xc3f;
                if (uVar11 < 0xc1e) {
                  if (uVar11 < 500) {
                    puVar13 = (ushort *)(&DAT_0133e3da + (ulong)uVar11 * 2);
LAB_00a1b3dc:
                    uVar11 = (uint)*puVar13;
                    if (uVar11 == 0xfffd) goto LAB_00a1b128;
                  }
                  else if (iVar15 == 0xe7a) {
                    uVar11 = 0x4ea0;
                  }
                  else if (iVar15 == 0xe81) {
                    uVar11 = 0x51ab;
                  }
                  else {
                    if (iVar15 != 0xe86) goto LAB_00a1b128;
                    uVar11 = 0x52f9;
                  }
LAB_00a1b224:
                  *param_2 = uVar11;
                  *(uint *)(param_1 + 0x28) = uVar8 | uVar7 << 8 | uVar6 << 0x10;
                  goto LAB_00a1b15c;
                }
                if (uVar11 < 0xcda) {
                  if (uVar11 < 0xc40) {
                    uVar11 = iVar15 - 0x185d;
                    puVar14 = &DAT_0133e7c2;
LAB_00a1b3d8:
                    puVar13 = (ushort *)(puVar14 + (ulong)uVar11 * 2);
                    goto LAB_00a1b3dc;
                  }
                }
                else if (uVar11 < 0x21f3) {
                  uVar11 = iVar15 - 0x1919;
                  puVar14 = &DAT_0133e806;
                  goto LAB_00a1b3d8;
                }
              }
            }
            else {
              uVar11 = uVar7;
              if (uVar7 == 1) {
                if ((uVar16 - 0x21 < 9 || uVar16 - 0x30 < 0x48) && ((bVar2 - 0x21 & 0xff) < 0x5e)) {
                  iVar15 = (uint)bVar2 + uVar16 * 0x5e;
                  uVar11 = iVar15 - 0xc3f;
                  if (uVar11 < 0x582) {
                    if (uVar11 < 0x33f) {
                      puVar13 = (ushort *)(&DAT_01312c68 + (ulong)uVar11 * 2);
                      goto LAB_00a1b3dc;
                    }
                  }
                  else if (uVar11 >> 1 < 0xff9) {
                    uVar11 = iVar15 - 0x11c1;
                    puVar14 = &DAT_013132e6;
                    goto LAB_00a1b3d8;
                  }
                }
              }
              else {
LAB_00a1b11c:
                if (uVar11 != 0) goto LAB_00a1b400;
              }
            }
          }
        }
        else {
          if (uVar8 != 0) {
LAB_00a1b400:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (-1 < (char)bVar2) {
            *param_2 = uVar16;
            if ((uVar16 == 0xd) || (uVar17 == 10)) {
              uVar7 = 0;
              uVar6 = 0;
            }
            *(uint *)(param_1 + 0x28) = uVar7 << 8 | uVar6 << 0x10;
            uVar18 = (ulong)(iVar15 + iVar10 + 1);
            goto LAB_00a1b15c;
          }
        }
LAB_00a1b128:
        *(uint *)(param_1 + 0x28) = uVar8 | uVar7 << 8 | uVar6 << 0x10;
        uVar18 = (ulong)(iVar9 << 1 ^ 0xffffffff);
        goto LAB_00a1b15c;
      }
      if (param_4 < (ulong)(lVar5 >> 0x20)) {
        uVar8 = 0;
        iVar9 = iVar15 + iVar10 + 1;
        break;
      }
      uVar8 = 0;
    }
    uVar18 = lVar12 + (uVar18 & 0xffffffff) + 1;
    param_3 = param_3 + lVar12 + 1;
  } while( true );
LAB_00a1b148:
  *(uint *)(param_1 + 0x28) = uVar8 | uVar7 << 8 | uVar6 << 0x10;
  uVar18 = (ulong)(iVar9 * -2 - 2);
LAB_00a1b15c:
  return uVar18 & 0xffffffff;
}

