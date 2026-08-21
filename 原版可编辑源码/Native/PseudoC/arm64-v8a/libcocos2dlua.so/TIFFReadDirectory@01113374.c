
undefined8 TIFFReadDirectory(long param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort *__ptr;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  void *__ptr_00;
  void *__ptr_01;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  short sVar13;
  undefined2 uVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  ushort uVar19;
  int iVar20;
  short *psVar21;
  ushort uVar22;
  int iVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  short local_74 [2];
  ushort *local_70;
  short *local_68;
  
  lVar24 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x18) = lVar24;
  if (lVar24 == 0) {
    return 0;
  }
  uVar19 = *(ushort *)(param_1 + 0x32);
  if ((uVar19 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar22 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x28) + (ulong)uVar22 * 8) == lVar24) {
        return 0;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar19);
  }
  uVar22 = uVar19 + 1;
  *(ushort *)(param_1 + 0x32) = uVar22;
  if (*(ushort *)(param_1 + 0x30) < (ushort)(uVar19 + 1)) {
    lVar7 = _TIFFCheckRealloc(param_1,*(undefined8 *)(param_1 + 0x28),uVar19 + 1,0x10,"for IFD list"
                             );
    if (lVar7 == 0) {
      return 0;
    }
    uVar22 = *(ushort *)(param_1 + 0x32);
    *(long *)(param_1 + 0x28) = lVar7;
    *(ushort *)(param_1 + 0x30) = uVar22 << 1;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
  }
  *(long *)(lVar7 + (ulong)uVar22 * 8 + -8) = lVar24;
  (**(code **)(param_1 + 0x338))(param_1);
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + 1;
  uVar5 = FUN_01114388(param_1,uVar25,&local_70,(long *)(param_1 + 0x20));
  __ptr = local_70;
  if ((uVar5 & 0xffff) == 0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                 "Failed to read directory at offset %lu",uVar25);
    return 0;
  }
  uVar15 = 0;
  uVar19 = 0;
  puVar17 = local_70;
  do {
    if (*puVar17 < uVar19) {
      TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectoryCheckOrder",
                     "Invalid TIFF directory; tags are not sorted in ascending order");
      break;
    }
    uVar15 = uVar15 + 1;
    uVar19 = *puVar17 + 1;
    puVar17 = puVar17 + 0xc;
  } while ((uVar15 & 0xffff) < (uVar5 & 0xffff));
  uVar15 = 0;
  puVar17 = __ptr;
  do {
    uVar15 = uVar15 + 1;
    if ((uVar15 & 0xffff) < (uVar5 & 0xffff)) {
      lVar24 = 0x18;
      uVar11 = uVar15;
      do {
        if (*puVar17 == *(ushort *)((long)puVar17 + lVar24)) {
          *(undefined2 *)((long)puVar17 + lVar24) = 0;
        }
        uVar11 = uVar11 + 1;
        lVar24 = lVar24 + 0x18;
      } while ((uVar11 & 0xffff) < (uVar5 & 0xffff));
    }
    puVar17 = puVar17 + 0xc;
  } while (uVar15 != (uVar5 & 0xffff));
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffefffbf;
  TIFFFreeDirectory(param_1);
  TIFFDefaultDirectory(param_1);
  TIFFSetField(param_1,0x11c,1);
  uVar15 = 0;
  puVar17 = __ptr;
  do {
    if (*puVar17 == 0x115) {
      if (puVar17 != (ushort *)0x0) {
        iVar6 = FUN_011148c0(param_1,puVar17,0);
        if (iVar6 == 0) goto LAB_01113da0;
        *puVar17 = 0;
      }
      break;
    }
    uVar15 = uVar15 + 1;
    puVar17 = puVar17 + 0xc;
  } while ((uVar15 & 0xffff) < (uVar5 & 0xffff));
  uVar15 = 0;
  puVar17 = __ptr;
  do {
    if (*puVar17 == 0x103) {
      if (puVar17 != (ushort *)0x0) {
        iVar6 = FUN_01116b5c(param_1,puVar17,local_74);
        if (iVar6 != 1) goto LAB_01113940;
        if (*(ulong *)(puVar17 + 4) < (ulong)*(ushort *)(param_1 + 0x82)) {
          iVar6 = 1;
          goto LAB_01113944;
        }
        iVar6 = FUN_011173e0(param_1,puVar17,&local_68);
        if (iVar6 != 0) goto LAB_01113940;
        sVar13 = *(short *)(param_1 + 0x82);
        local_74[0] = *local_68;
        psVar21 = local_68;
        goto LAB_011138dc;
      }
      break;
    }
    uVar15 = uVar15 + 1;
    puVar17 = puVar17 + 0xc;
  } while ((uVar15 & 0xffff) < (uVar5 & 0xffff));
  iVar6 = TIFFSetField(param_1,0x103,1);
  if (iVar6 != 0) {
LAB_01113648:
    uVar15 = 0;
    puVar17 = __ptr;
LAB_011136ac:
    uVar19 = *puVar17;
    uVar11 = (uint)uVar19;
    if (uVar19 != 0) {
      iVar6 = *(int *)(param_1 + 0x3f8);
      uVar12 = (uint)uVar19;
      if (iVar6 != 0) {
        iVar23 = -1;
        do {
          iVar20 = iVar23 + iVar6;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          iVar20 = iVar20 >> 1;
          uVar2 = **(uint **)(*(long *)(param_1 + 0x3f0) + (long)iVar20 * 8);
          if (uVar2 == uVar12) {
            iVar6 = -iVar20;
            uVar27 = (long)iVar20;
            goto LAB_01113708;
          }
          if (uVar19 <= uVar2) {
            iVar6 = iVar20;
            iVar20 = iVar23;
          }
          iVar23 = iVar20;
        } while (iVar23 + 1 != iVar6);
      }
      goto LAB_0111372c;
    }
    goto switchD_0111383c_caseD_102;
  }
  goto LAB_01113da0;
  while (*psVar21 == local_74[0]) {
LAB_011138dc:
    psVar21 = psVar21 + 1;
    sVar13 = sVar13 + -1;
    if (sVar13 == 0) {
      iVar6 = 0;
      goto LAB_0111393c;
    }
  }
  iVar6 = 5;
LAB_0111393c:
  _TIFFfree(local_68);
LAB_01113940:
  if (iVar6 == 0) {
    iVar6 = TIFFSetField(param_1,0x103,local_74[0]);
    if (iVar6 != 0) {
      *puVar17 = 0;
      goto LAB_01113648;
    }
    goto LAB_01113da0;
  }
LAB_01113944:
  pcVar10 = "Compression";
LAB_0111395c:
  FUN_01116d2c(param_1,iVar6,"TIFFReadDirectory",pcVar10,0);
  if (__ptr == (ushort *)0x0) {
    return 0;
  }
  goto LAB_01113da4;
  while (iVar6 = iVar6 + 1, uVar27 = uVar16 - 1,
        **(uint **)(*(long *)(param_1 + 0x3f0) + (uVar16 - 1) * 8) == uVar12) {
LAB_01113708:
    uVar16 = uVar27;
    if (iVar6 == 0) goto LAB_01113804;
  }
  if (iVar6 != 2) goto joined_r0x01113808;
LAB_0111372c:
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                 "Unknown field with tag %d (0x%x) encountered",uVar11,uVar12);
  uVar25 = _TIFFCreateAnonField(param_1,*puVar17,puVar17[1]);
  iVar6 = _TIFFMergeFields(param_1,uVar25,1);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x3f8);
    uVar19 = *puVar17;
    uVar11 = (uint)uVar19;
    uVar12 = (uint)uVar19;
    if (iVar6 != 0) {
      iVar23 = -1;
      do {
        iVar20 = iVar23 + iVar6;
        if (iVar20 < 0) {
          iVar20 = iVar20 + 1;
        }
        iVar20 = iVar20 >> 1;
        uVar2 = **(uint **)(*(long *)(param_1 + 0x3f0) + (long)iVar20 * 8);
        if (uVar2 == uVar19) {
          uVar27 = (long)iVar20;
          goto LAB_011137dc;
        }
        if (uVar19 <= uVar2) {
          iVar6 = iVar20;
          iVar20 = iVar23;
        }
        iVar23 = iVar20;
      } while (iVar23 + 1 != iVar6);
    }
    uVar16 = 0xffffffff;
    goto joined_r0x01113808;
  }
  TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                 "Registering anonymous field with tag %d (0x%x) failed",*puVar17,*puVar17);
  goto LAB_01113854;
  while (iVar20 = iVar20 + -1, uVar27 = uVar16 - 1,
        **(uint **)(*(long *)(param_1 + 0x3f0) + (uVar16 - 1) * 8) == uVar12) {
LAB_011137dc:
    uVar16 = uVar27;
    if (iVar20 == 0) goto LAB_01113804;
  }
joined_r0x01113808:
  if (uVar12 == 0) goto switchD_0111383c_caseD_102;
  uVar19 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x3f0) + (uVar16 & 0xffffffff) * 8) + 0x18);
  if (uVar19 == 0) goto LAB_01113854;
  switch(uVar12) {
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
    break;
  case 0x111:
  case 0x117:
  case 0x144:
  case 0x145:
    lVar24 = param_1 + (ulong)(uVar19 >> 5) * 8;
    *(ulong *)(lVar24 + 0x38) = 1L << ((ulong)uVar19 & 0x1f) | *(ulong *)(lVar24 + 0x38);
    break;
  default:
    if (1 < uVar12 - 0x80e5) break;
  case 0x100:
  case 0x101:
  case 0x116:
  case 0x11c:
  case 0x142:
  case 0x143:
  case 0x152:
    iVar6 = FUN_011148c0(param_1,puVar17,0);
    if (iVar6 == 0) goto LAB_01113da0;
LAB_01113854:
    *puVar17 = 0;
  }
switchD_0111383c_caseD_102:
  uVar15 = uVar15 + 1;
  puVar17 = puVar17 + 0xc;
  if ((uVar5 & 0xffff) <= (uVar15 & 0xffff)) goto code_r0x0111386c;
  goto LAB_011136ac;
LAB_01113804:
  uVar16 = 0;
  uVar12 = uVar11;
  goto joined_r0x01113808;
code_r0x0111386c:
  if ((*(short *)(param_1 + 0x78) == 6) && (*(short *)(param_1 + 0xaa) == 2)) {
    uVar15 = 0;
    puVar17 = __ptr;
    do {
      if (*puVar17 == 0x111) {
        if ((puVar17 != (ushort *)0x0) && (*(long *)(puVar17 + 4) == 1)) {
          uVar15 = 0;
          puVar17 = __ptr;
          goto LAB_01113914;
        }
        break;
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 0xc;
    } while ((uVar15 & 0xffff) < (uVar5 & 0xffff));
  }
  goto LAB_01113998;
  while( true ) {
    uVar15 = uVar15 + 1;
    puVar17 = puVar17 + 0xc;
    if ((uVar5 & 0xffff) <= (uVar15 & 0xffff)) break;
LAB_01113914:
    if (*puVar17 == 0x117) {
      if ((puVar17 != (ushort *)0x0) && (*(long *)(puVar17 + 4) == 1)) {
        *(undefined2 *)(param_1 + 0xaa) = 1;
        TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                       "Planarconfig tag value assumed incorrect, assuming data is contig instead of chunky"
                      );
      }
      break;
    }
  }
LAB_01113998:
  uVar15 = (uint)*(undefined8 *)(param_1 + 0x38);
  if ((uVar15 >> 1 & 1) == 0) {
    uVar25 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar8 = "MissingRequired";
    pcVar9 = "TIFF directory is missing required \"%s\" field";
    pcVar10 = "ImageLength";
LAB_01113d9c:
    TIFFErrorExt(uVar25,pcVar8,pcVar9,pcVar10);
  }
  else {
    if ((uVar15 >> 2 & 1) == 0) {
      uVar11 = TIFFNumberOfStrips(param_1);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x60);
      uVar15 = *(uint *)(param_1 + 0x10) & 0xfffffbff;
    }
    else {
      uVar11 = TIFFNumberOfTiles(param_1);
      uVar15 = *(uint *)(param_1 + 0x10) | 0x400;
    }
    *(uint *)(param_1 + 0xe4) = uVar11;
    *(uint *)(param_1 + 0x10) = uVar15;
    if (uVar11 == 0) {
      uVar25 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar10 = "tiles";
      if ((uVar15 & 0x400) == 0) {
        pcVar10 = "strips";
      }
      pcVar8 = "TIFFReadDirectory";
      pcVar9 = "Cannot handle zero number of %s";
      goto LAB_01113d9c;
    }
    *(uint *)(param_1 + 0xe0) = uVar11;
    if (*(short *)(param_1 + 0xaa) == 2) {
      uVar12 = 0;
      if (*(ushort *)(param_1 + 0x82) != 0) {
        uVar12 = uVar11 / *(ushort *)(param_1 + 0x82);
      }
      *(uint *)(param_1 + 0xe0) = uVar12;
    }
    if (((uint)*(ulong *)(param_1 + 0x38) >> 0x19 & 1) == 0) {
      uVar15 = uVar15 & 0x400;
      if ((*(short *)(param_1 + 0x78) == 6) && (uVar15 == 0)) {
        if (uVar11 == 1) {
          *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 0x2000000;
          goto LAB_01113a50;
        }
        uVar15 = 0;
      }
      uVar25 = *(undefined8 *)(param_1 + 0x3b8);
      pcVar10 = "TileOffsets";
      if (uVar15 == 0) {
        pcVar10 = "StripOffsets";
      }
      pcVar8 = "MissingRequired";
      pcVar9 = "TIFF directory is missing required \"%s\" field";
      goto LAB_01113d9c;
    }
LAB_01113a50:
    uVar15 = 0;
    puVar17 = __ptr;
    do {
      uVar19 = *puVar17;
      switch(uVar19) {
      case 0xff:
        iVar6 = FUN_01116b5c(param_1,puVar17,&local_68);
        if (iVar6 == 0) {
          iVar6 = (uint)((short)local_68 == 3) << 1;
          if ((short)local_68 == 2) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            TIFFSetField(param_1,0xfe);
          }
        }
        break;
      case 0x100:
      case 0x101:
      case 0x103:
      case 0x104:
      case 0x105:
      case 0x106:
      case 0x107:
      case 0x108:
      case 0x109:
      case 0x10a:
      case 0x10b:
      case 0x10c:
      case 0x10d:
      case 0x10e:
      case 0x10f:
      case 0x110:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x11a:
      case 0x11b:
      case 0x11c:
      case 0x11d:
      case 0x11e:
      case 0x11f:
      case 0x120:
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
      case 0x128:
      case 0x129:
      case 0x12a:
      case 299:
      case 300:
      case 0x12e:
      case 0x12f:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x13a:
      case 0x13b:
      case 0x13c:
      case 0x13d:
      case 0x13e:
      case 0x13f:
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x149:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x151:
      case 0x152:
switchD_01113a84_caseD_100:
        FUN_011148c0(param_1,puVar17,1);
        break;
      case 0x102:
      case 0x118:
      case 0x119:
      case 0x153:
switchD_01113a84_caseD_102:
        iVar6 = FUN_01116b5c(param_1,puVar17,local_74);
        if (iVar6 == 1) {
          if (*(ulong *)(puVar17 + 4) < (ulong)*(ushort *)(param_1 + 0x82)) {
            iVar6 = 1;
            uVar19 = *puVar17;
            goto LAB_01113e94;
          }
          iVar6 = FUN_011173e0(param_1,puVar17,&local_68);
          if (iVar6 == 0) {
            sVar13 = *(short *)(param_1 + 0x82);
            local_74[0] = *local_68;
            psVar21 = local_68;
            do {
              psVar21 = psVar21 + 1;
              sVar13 = sVar13 + -1;
              if (sVar13 == 0) {
                iVar6 = 0;
                goto LAB_01113cc8;
              }
            } while (*psVar21 == local_74[0]);
            iVar6 = 5;
LAB_01113cc8:
            _TIFFfree(local_68);
          }
        }
        uVar19 = *puVar17;
        if (iVar6 != 0) goto LAB_01113e94;
        iVar6 = TIFFSetField(param_1,uVar19,local_74[0]);
        goto joined_r0x01113b10;
      case 0x111:
      case 0x144:
        uVar3 = *(undefined4 *)(param_1 + 0xe4);
        lVar24 = param_1 + 0xe8;
        goto LAB_01113b0c;
      case 0x117:
      case 0x145:
        uVar3 = *(undefined4 *)(param_1 + 0xe4);
        lVar24 = param_1 + 0xf0;
LAB_01113b0c:
        iVar6 = FUN_011172a8(param_1,puVar17,uVar3,lVar24);
joined_r0x01113b10:
        if (iVar6 == 0) goto LAB_01113da0;
        break;
      case 0x12d:
      case 0x140:
        local_68 = (short *)0x0;
        uVar16 = *(ulong *)(puVar17 + 4);
        uVar18 = 1L << ((ulong)*(ushort *)(param_1 + 0x74) & 0x3f);
        bVar4 = uVar16 != (uVar18 & 0xffffffff);
        uVar27 = uVar18;
        if (uVar19 != 0x12d || bVar4) {
          uVar27 = 3L << ((ulong)*(ushort *)(param_1 + 0x74) & 0x3f);
        }
        uVar11 = 0;
        if (uVar19 != 0x12d || bVar4) {
          uVar11 = (uint)uVar18;
        }
        if (uVar16 == (uVar27 & 0xffffffff)) {
          iVar6 = FUN_011173e0(param_1,puVar17,&local_68);
          psVar21 = local_68;
          uVar19 = *puVar17;
          if (iVar6 == 0) {
            TIFFSetField(param_1,uVar19,local_68,local_68 + uVar11,local_68 + (uVar11 << 1));
            _TIFFfree(psVar21);
            break;
          }
        }
        else {
          iVar6 = 1;
        }
        lVar24 = TIFFFieldWithTag(param_1,uVar19);
        if (lVar24 == 0) {
          pcVar10 = "unknown tagname";
        }
        else {
          pcVar10 = *(char **)(lVar24 + 0x20);
        }
        FUN_01116d2c(param_1,iVar6,"TIFFReadDirectory",pcVar10,1);
        break;
      case 0x154:
      case 0x155:
        if (*(ulong *)(puVar17 + 4) == (ulong)*(ushort *)(param_1 + 0x82)) {
          iVar6 = FUN_01116e6c(param_1,puVar17,&local_68);
          psVar21 = local_68;
          if (iVar6 == 0) {
            uVar11 = *(uint *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x10) = uVar11 | 0x400000;
            iVar6 = TIFFSetField(param_1,*puVar17,local_68);
            *(uint *)(param_1 + 0x10) = uVar11;
            _TIFFfree(psVar21);
            if (iVar6 != 0) break;
            goto LAB_01113da0;
          }
          uVar19 = *puVar17;
        }
        else {
          iVar6 = 1;
        }
LAB_01113e94:
        lVar24 = TIFFFieldWithTag(param_1,uVar19);
        if (lVar24 == 0) {
          pcVar10 = "unknown tagname";
        }
        else {
          pcVar10 = *(char **)(lVar24 + 0x20);
        }
        goto LAB_0111395c;
      default:
        if (uVar19 != 0) {
          if (uVar19 == 0x80e4) goto switchD_01113a84_caseD_102;
          goto switchD_01113a84_caseD_100;
        }
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 0xc;
    } while ((uVar15 & 0xffff) < (uVar5 & 0xffff));
    if (*(short *)(param_1 + 0x78) != 6) {
LAB_01113ef8:
      if ((*(short *)(param_1 + 0x7a) == 3) && ((*(byte *)(param_1 + 0x3b) >> 2 & 1) == 0)) {
        if (*(ushort *)(param_1 + 0x74) < 8) {
          uVar25 = *(undefined8 *)(param_1 + 0x3b8);
          pcVar8 = "MissingRequired";
          pcVar9 = "TIFF directory is missing required \"%s\" field";
          pcVar10 = "Colormap";
          goto LAB_01113d9c;
        }
        if (*(short *)(param_1 + 0x82) == 3) {
          uVar14 = 2;
        }
        else {
          uVar14 = 1;
        }
        *(undefined2 *)(param_1 + 0x7a) = uVar14;
      }
      if (*(short *)(param_1 + 0x78) == 6) goto LAB_011140a4;
      if ((*(byte *)(param_1 + 0x3b) & 1) == 0) {
        if (*(short *)(param_1 + 0xaa) == 2) {
          if (*(uint *)(param_1 + 0xe4) != (uint)*(ushort *)(param_1 + 0x82)) goto LAB_01114294;
        }
        else if ((*(short *)(param_1 + 0xaa) == 1) && (1 < *(uint *)(param_1 + 0xe4))) {
LAB_01114294:
          uVar25 = *(undefined8 *)(param_1 + 0x3b8);
          pcVar8 = "MissingRequired";
          pcVar9 = "TIFF directory is missing required \"%s\" field";
          pcVar10 = "StripByteCounts";
          goto LAB_01113d9c;
        }
        uVar25 = *(undefined8 *)(param_1 + 0x3b8);
        pcVar10 = 
        "TIFF directory is missing required \"StripByteCounts\" field, calculating from imagelength"
        ;
LAB_0111408c:
        TIFFWarningExt(uVar25,"TIFFReadDirectory",pcVar10);
        iVar6 = FUN_01117730(param_1,__ptr,uVar5);
        if (iVar6 < 0) goto LAB_01113da0;
      }
      else {
        if (((*(int *)(param_1 + 0xe4) == 1) && (**(long **)(param_1 + 0xe8) != 0)) &&
           (((uVar27 = **(ulong **)(param_1 + 0xf0), uVar27 == 0 ||
             ((*(short *)(param_1 + 0x78) == 1 &&
              (lVar24 = (**(code **)(param_1 + 0x3e0))(*(undefined8 *)(param_1 + 0x3b8)),
              (ulong)(lVar24 - **(long **)(param_1 + 0xe8)) < uVar27)))) ||
            ((*(int *)(param_1 + 0xc) == 0 &&
             ((*(short *)(param_1 + 0x78) == 1 &&
              (uVar27 = **(ulong **)(param_1 + 0xf0), lVar24 = TIFFScanlineSize64(param_1),
              uVar27 < lVar24 * (ulong)*(uint *)(param_1 + 0x5c))))))))) {
          uVar25 = *(undefined8 *)(param_1 + 0x3b8);
          pcVar10 = "Bogus \"StripByteCounts\" field, ignoring and calculating from imagelength";
          goto LAB_0111408c;
        }
        if (((*(short *)(param_1 + 0xaa) == 1) && (2 < *(uint *)(param_1 + 0xe4))) &&
           (*(short *)(param_1 + 0x78) == 1)) {
          lVar24 = (*(long **)(param_1 + 0xf0))[1];
          if (((lVar24 != 0) && (lVar7 = **(long **)(param_1 + 0xf0), lVar7 != 0)) &&
             (lVar7 != lVar24)) {
            uVar25 = *(undefined8 *)(param_1 + 0x3b8);
            pcVar10 = "Wrong \"StripByteCounts\" field, ignoring and calculating from imagelength";
            goto LAB_0111408c;
          }
        }
      }
LAB_011140a4:
      if (__ptr != (ushort *)0x0) {
        _TIFFfree(__ptr);
        local_70 = (ushort *)0x0;
      }
      if ((*(byte *)(param_1 + 0x3a) >> 3 & 1) == 0) {
        sVar13 = -1;
        if ((ulong)*(ushort *)(param_1 + 0x74) < 0x10) {
          sVar13 = (short)(1L << ((ulong)*(ushort *)(param_1 + 0x74) & 0x3f)) + -1;
        }
        *(short *)(param_1 + 0x8a) = sVar13;
      }
      if (1 < *(uint *)(param_1 + 0xe4)) {
        lVar24 = 1;
        *(undefined4 *)(param_1 + 0xf8) = 1;
        uVar27 = **(ulong **)(param_1 + 0xe8);
        do {
          uVar16 = (*(ulong **)(param_1 + 0xe8))[lVar24];
          if (uVar16 < uVar27) {
            *(undefined4 *)(param_1 + 0xf8) = 0;
            break;
          }
          lVar24 = lVar24 + 1;
          uVar27 = uVar16;
        } while ((uint)lVar24 < *(uint *)(param_1 + 0xe4));
      }
      (**(code **)(param_1 + 0x2c0))(param_1);
      if ((((*(short *)(param_1 + 0xaa) == 1) && (*(int *)(param_1 + 0xe4) == 1)) &&
          (*(short *)(param_1 + 0x78) == 1)) && ((*(uint *)(param_1 + 0x10) & 0x8400) == 0x8000)) {
        if (*(ulong **)(param_1 + 0xf0) == (ulong *)0x0) {
          return 0;
        }
        uVar27 = **(ulong **)(param_1 + 0xf0);
        uVar5 = 1;
        lVar24 = **(long **)(param_1 + 0xe8);
        if (((*(uint *)(param_1 + 0x10) >> 0xe & 1) == 0) && (*(short *)(param_1 + 0x7a) == 6)) {
          uVar5 = (uint)*(ushort *)(param_1 + 0x10a);
        }
        uVar16 = TIFFVTileSize64(param_1,uVar5);
        if (uVar16 < 0x2001) {
          if (uVar16 == 0) goto LAB_011142cc;
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = 0x2000 / uVar16;
          }
          uVar5 = uVar5 * (int)uVar18;
          uVar16 = uVar18 * uVar16;
        }
        if ((uVar5 < *(uint *)(param_1 + 0x84)) && (!CARRY8(uVar27 - 1,uVar16))) {
          uVar18 = 0;
          if (uVar16 != 0) {
            uVar18 = ((uVar27 - 1) + uVar16) / uVar16;
          }
          if (uVar18 >> 0x20 == 0) {
            uVar26 = uVar18 & 0xffffffff;
            __ptr_00 = (void *)_TIFFCheckMalloc(param_1,uVar26,8,
                                                "for chopped \"StripByteCounts\" array");
            __ptr_01 = (void *)_TIFFCheckMalloc(param_1,uVar26,8,
                                                "for chopped \"StripOffsets\" array");
            if ((__ptr_00 == (void *)0x0) || (__ptr_01 == (void *)0x0)) {
              if (__ptr_00 != (void *)0x0) {
                _TIFFfree(__ptr_00);
              }
              if (__ptr_01 != (void *)0x0) {
                _TIFFfree(__ptr_01);
              }
            }
            else {
              iVar6 = (int)uVar18;
              if (iVar6 != 0) {
                uVar18 = 0;
                do {
                  lVar7 = uVar18 * 8;
                  uVar18 = uVar18 + 1;
                  uVar1 = uVar27;
                  if (uVar16 <= uVar27) {
                    uVar1 = uVar16;
                  }
                  *(ulong *)((long)__ptr_00 + lVar7) = uVar1;
                  *(long *)((long)__ptr_01 + lVar7) = lVar24;
                  lVar24 = uVar1 + lVar24;
                  uVar27 = uVar27 - uVar1;
                  uVar16 = uVar1;
                } while (uVar18 < uVar26);
              }
              *(int *)(param_1 + 0xe0) = iVar6;
              *(int *)(param_1 + 0xe4) = iVar6;
              TIFFSetField(param_1,0x116,uVar5);
              _TIFFfree(*(void **)(param_1 + 0xf0));
              _TIFFfree(*(void **)(param_1 + 0xe8));
              *(void **)(param_1 + 0xe8) = __ptr_01;
              *(void **)(param_1 + 0xf0) = __ptr_00;
              *(undefined4 *)(param_1 + 0xf8) = 1;
            }
          }
        }
      }
LAB_011142cc:
      *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x2b0) = 0xffffffffffffffff;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffdffff7;
      *(undefined8 *)(param_1 + 0x2a8) = 0xffffffffffffffff;
      lVar24 = TIFFScanlineSize(param_1);
      *(long *)(param_1 + 0x358) = lVar24;
      if (lVar24 == 0) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                     "Cannot handle zero scanline size");
        return 0;
      }
      if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
        lVar24 = TIFFStripSize(param_1);
        if (lVar24 == 0) {
          TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                       "Cannot handle zero strip size");
          return 0;
        }
        return 1;
      }
      lVar24 = TIFFTileSize(param_1);
      *(long *)(param_1 + 0x2b0) = lVar24;
      if (lVar24 == 0) {
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                     "Cannot handle zero tile size");
        return 0;
      }
      return 1;
    }
    if ((*(byte *)(param_1 + 0x39) & 1) != 0) {
      if (*(short *)(param_1 + 0x7a) == 2) {
        *(undefined2 *)(param_1 + 0x7a) = 6;
        TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                       "Photometric tag value assumed incorrect, assuming data is YCbCr instead of RGB"
                      );
      }
LAB_01113dfc:
      uVar15 = (uint)*(undefined8 *)(param_1 + 0x38);
      if ((uVar15 >> 6 & 1) == 0) {
        TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                       "BitsPerSample tag is missing, assuming 8 bits per sample");
        iVar6 = TIFFSetField(param_1,0x102,8);
        if (iVar6 == 0) goto LAB_01113da0;
        uVar15 = (uint)*(undefined8 *)(param_1 + 0x38);
      }
      if ((uVar15 >> 0x10 & 1) == 0) {
        uVar19 = *(ushort *)(param_1 + 0x7a);
        if (uVar19 == 2) {
          TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                         "SamplesPerPixel tag is missing, assuming correct SamplesPerPixel value is 3"
                        );
          iVar6 = TIFFSetField(param_1,0x115,3);
          if (iVar6 == 0) goto LAB_01113da0;
          uVar19 = *(ushort *)(param_1 + 0x7a);
        }
        if (uVar19 < 2) {
          uVar25 = 1;
        }
        else {
          if (uVar19 != 6) goto LAB_01113ef8;
          TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                         "SamplesPerPixel tag is missing, applying correct SamplesPerPixel value of 3"
                        );
          uVar25 = 3;
        }
        iVar6 = TIFFSetField(param_1,0x115,uVar25);
        if (iVar6 == 0) goto LAB_01113da0;
      }
      goto LAB_01113ef8;
    }
    TIFFWarningExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadDirectory",
                   "Photometric tag is missing, assuming data is YCbCr");
    iVar6 = TIFFSetField(param_1,0x106,6);
    if (iVar6 != 0) goto LAB_01113dfc;
  }
LAB_01113da0:
  if (__ptr != (ushort *)0x0) {
LAB_01113da4:
    _TIFFfree(__ptr);
  }
  return 0;
}

