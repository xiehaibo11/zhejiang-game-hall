
undefined8 TIFFReadCustomDirectory(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  ushort uVar19;
  double dVar20;
  ushort *local_80;
  uint local_74;
  ulong local_68;
  
  _TIFFSetupFields(param_1,param_3);
  uVar4 = FUN_00db7ee0(param_1,param_2,&local_80,0);
  if (uVar4 == 0) {
    TIFFErrorExt(param_1[0x77],"TIFFReadCustomDirectory",
                 "Failed to read custom directory at offset %lu",param_2);
    return 0;
  }
  TIFFFreeDirectory(param_1);
  _TIFFmemset(param_1 + 7,0,0x118);
  uVar19 = 0;
  uVar12 = 0;
  puVar10 = local_80;
  do {
    if (*puVar10 < uVar12) {
      TIFFWarningExt(param_1[0x77],"TIFFReadDirectoryCheckOrder",
                     "Invalid TIFF directory; tags are not sorted in ascending order");
      break;
    }
    uVar19 = uVar19 + 1;
    uVar12 = *puVar10 + 1;
    puVar10 = puVar10 + 0xc;
  } while (uVar19 < uVar4);
  uVar19 = 0;
  puVar10 = local_80;
LAB_00dbb8a8:
  uVar11 = param_1[0x7f];
  uVar12 = *puVar10;
  uVar8 = (uint)uVar12;
  if ((int)uVar11 != 0) {
    uVar13 = 0xffffffff;
    uVar15 = uVar11 & 0xffffffff;
    do {
      uVar1 = uVar13 + (uint)uVar15;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = (int)uVar1 >> 1;
      uVar2 = **(uint **)(param_1[0x7e] + (long)(int)uVar16 * 8);
      if (uVar2 == uVar12) {
        puVar14 = (undefined8 *)(param_1[0x7e] + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 8);
        uVar16 = uVar16 + 1;
        goto LAB_00dbb998;
      }
      uVar1 = (uint)uVar15;
      if (uVar12 <= uVar2) {
        uVar1 = uVar16;
        uVar16 = uVar13;
      }
      uVar13 = uVar16;
      uVar15 = (ulong)uVar1;
    } while (uVar13 + 1 != uVar1);
  }
  goto LAB_00dbb8f8;
  while (*(uint *)*puVar14 == (uint)uVar12) {
LAB_00dbb998:
    puVar14 = puVar14 + -1;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_00dbba04;
  }
  if (uVar16 != 0xffffffff) goto joined_r0x00dbb9fc;
LAB_00dbb8f8:
  TIFFWarningExt(param_1[0x77],"TIFFReadCustomDirectory",
                 "Unknown field with tag %d (0x%x) encountered",uVar8,uVar8);
  uVar7 = _TIFFCreateAnonField(param_1,*puVar10,puVar10[1]);
  iVar5 = _TIFFMergeFields(param_1,uVar7,1);
  if (iVar5 != 0) {
    uVar11 = param_1[0x7f];
    uVar12 = *puVar10;
    uVar8 = (uint)uVar12;
    uVar15 = uVar11 & 0xffffffff;
    if ((int)uVar11 != 0) {
      uVar13 = 0xffffffff;
      do {
        uVar1 = uVar13 + (uint)uVar15;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        uVar16 = (int)uVar1 >> 1;
        uVar2 = **(uint **)(param_1[0x7e] + (long)(int)uVar16 * 8);
        if (uVar2 == uVar12) {
          puVar14 = (undefined8 *)(param_1[0x7e] + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 8);
          uVar16 = uVar16 + 1;
          goto LAB_00dbb9e4;
        }
        uVar1 = (uint)uVar15;
        if (uVar12 <= uVar2) {
          uVar1 = uVar16;
          uVar16 = uVar13;
        }
        uVar13 = uVar16;
        uVar15 = (ulong)uVar1;
      } while (uVar13 + 1 != uVar1);
    }
    uVar16 = 0xffffffff;
    uVar8 = (uint)uVar12;
    goto joined_r0x00dbb9fc;
  }
  TIFFWarningExt(param_1[0x77],"TIFFReadCustomDirectory",
                 "Registering anonymous field with tag %d (0x%x) failed",*puVar10,*puVar10);
  goto LAB_00dbba80;
  while (*(uint *)*puVar14 == (uint)uVar12) {
LAB_00dbb9e4:
    puVar14 = puVar14 + -1;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_00dbba04;
  }
joined_r0x00dbb9fc:
  if (uVar8 != 0) {
    puVar17 = *(uint **)(param_1[0x7e] + (ulong)uVar16 * 8);
    if ((short)puVar17[6] != 0) {
      while( true ) {
        puVar18 = puVar17;
        uVar16 = uVar16 + 1;
        if ((puVar18[2] == 0) || (uVar12 = puVar10[1], puVar18[2] == (uint)uVar12)) break;
        if ((uVar11 == uVar16) ||
           (puVar17 = *(uint **)(param_1[0x7e] + (ulong)uVar16 * 8), *puVar17 != uVar8))
        goto LAB_00dbba68;
      }
      if (uVar16 != 0x10000) {
        sVar3 = (short)puVar18[1];
        if ((sVar3 != -3) && (sVar3 != -1)) {
          if (sVar3 == -2) {
            uVar11 = (ulong)*(ushort *)((long)param_1 + 0x82);
          }
          else {
            uVar11 = (ulong)(uint)(int)sVar3;
          }
          if (*(ulong *)(puVar10 + 4) < uVar11) {
            lVar6 = TIFFFieldWithTag(param_1,uVar8);
            if (lVar6 == 0) {
              pcVar9 = "unknown tagname";
            }
            else {
              pcVar9 = *(char **)(lVar6 + 0x20);
            }
            TIFFWarningExt(param_1[0x77],*param_1,
                           "incorrect count for field \"%s\" (%lu, expecting %u); tag ignored",
                           pcVar9,*(undefined8 *)(puVar10 + 4),uVar11);
            *puVar10 = 0;
            goto LAB_00dbba84;
          }
          if (*(ulong *)(puVar10 + 4) != uVar11) {
            lVar6 = TIFFFieldWithTag(param_1,uVar8);
            if (lVar6 == 0) {
              pcVar9 = "unknown tagname";
            }
            else {
              pcVar9 = *(char **)(lVar6 + 0x20);
            }
            TIFFWarningExt(param_1[0x77],*param_1,
                           "incorrect count for field \"%s\" (%lu, expecting %u); tag trimmed",
                           pcVar9,*(undefined8 *)(puVar10 + 4),uVar11);
            uVar8 = (uint)*puVar10;
            *(ulong *)(puVar10 + 4) = uVar11;
          }
        }
        if (uVar8 == 0) goto LAB_00dbba84;
        if (uVar8 != 0x9206) {
          FUN_00db8418(param_1,puVar10,1);
          goto LAB_00dbba84;
        }
        local_68 = 0;
        if (*(long *)(puVar10 + 4) == 1) {
          if (puVar10[1] == 5) {
            uVar8 = *(uint *)(param_1 + 2);
            if ((uVar8 >> 0x13 & 1) == 0) {
              local_74 = *(uint *)(puVar10 + 8);
              if ((uVar8 >> 7 & 1) != 0) {
                TIFFSwabLong(&local_74);
                uVar8 = *(uint *)(param_1 + 2);
              }
              uVar11 = (ulong)local_74;
              if ((uVar8 >> 0xb & 1) == 0) {
                uVar15 = (*(code *)param_1[0x7a])(param_1[0x77],uVar11,0);
                if ((uVar15 != uVar11) ||
                   (lVar6 = (*(code *)param_1[0x78])(param_1[0x77],&local_68,8), lVar6 != 8)) {
LAB_00dbb834:
                  uVar7 = 3;
                  goto LAB_00dbb83c;
                }
              }
              else {
                if ((ulong)param_1[0x74] < uVar11 + 8) goto LAB_00dbb834;
                _TIFFmemcpy(&local_68,(void *)(param_1[0x73] + uVar11),8);
              }
              uVar8 = *(uint *)(param_1 + 2);
            }
            else {
              local_68 = *(ulong *)(puVar10 + 8);
            }
            if ((uVar8 >> 7 & 1) != 0) {
              TIFFSwabArrayOfLong(&local_68,2);
            }
            if ((int)local_68 == 0) {
              dVar20 = 0.0;
            }
            else if ((int)local_68 == -1) {
              dVar20 = -1.0;
            }
            else {
              dVar20 = (double)NEON_ucvtf(local_68 >> 0x20);
              dVar20 = (double)(local_68 & 0xffffffff) / dVar20;
            }
            TIFFSetField(dVar20,param_1,*puVar10);
            goto LAB_00dbba84;
          }
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
LAB_00dbb83c:
        FUN_00dba884(param_1,uVar7,"TIFFFetchSubjectDistance","SubjectDistance",1);
        goto LAB_00dbba84;
      }
      uVar12 = puVar10[1];
LAB_00dbba68:
      TIFFWarningExt(param_1[0x77],"TIFFReadCustomDirectory",
                     "Wrong data type %d for \"%s\"; tag ignored",uVar12,
                     *(undefined8 *)(puVar18 + 8));
    }
LAB_00dbba80:
    *puVar10 = 0;
  }
LAB_00dbba84:
  uVar19 = uVar19 + 1;
  puVar10 = puVar10 + 0xc;
  if (uVar4 <= uVar19) {
    if (local_80 != (ushort *)0x0) {
      _TIFFfree(local_80);
    }
    return 1;
  }
  goto LAB_00dbb8a8;
LAB_00dbba04:
  uVar16 = 0;
  goto joined_r0x00dbb9fc;
}

