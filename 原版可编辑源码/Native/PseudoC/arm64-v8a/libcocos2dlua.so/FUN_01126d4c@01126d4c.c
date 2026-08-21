
undefined4 FUN_01126d4c(long *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  void *pvVar14;
  long lVar15;
  void *__s;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  code *pcVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  int iVar24;
  size_t __size;
  long lVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  undefined4 local_b8;
  int local_a4;
  uint local_68;
  int local_64;
  
  pcVar20 = (code *)param_1[9];
  lVar25 = *param_1;
  iVar6 = (int)param_1[2];
  lVar15 = TIFFTileSize(lVar25);
  if (lVar15 == 0) {
LAB_01126e7c:
    uVar23 = *(undefined8 *)(lVar25 + 0x3b8);
    uVar16 = TIFFFileName(lVar25);
    pcVar17 = "Integer overflow in %s";
    pcVar18 = "gtTileSeparate";
LAB_01126e9c:
    TIFFErrorExt(uVar23,uVar16,pcVar17,pcVar18);
    return 0;
  }
  lVar21 = 3;
  if (iVar6 != 0) {
    lVar21 = 4;
  }
  __size = lVar21 * lVar15;
  if (__size == 0) goto LAB_01126e7c;
  __s = _TIFFmalloc(__size);
  if (__s == (void *)0x0) {
    uVar23 = *(undefined8 *)(lVar25 + 0x3b8);
    uVar16 = TIFFFileName(lVar25);
    pcVar17 = "%s";
    pcVar18 = "No space for tile buffer";
    goto LAB_01126e9c;
  }
  _TIFFmemset(__s,0,__size);
  pvVar3 = (void *)((long)__s + lVar15 + lVar15);
  lVar21 = (long)pvVar3 + lVar15;
  if (iVar6 == 0) {
    lVar21 = 0;
  }
  TIFFGetField(lVar25,0x142,&local_64);
  TIFFGetField(lVar25,0x143,&local_68);
  switch((short)param_1[4]) {
  case 1:
  case 5:
    uVar8 = *(ushort *)((long)param_1 + 0x22);
    if (8 < uVar8) break;
    uVar27 = 1 << (ulong)(uVar8 & 0x1f);
    if ((uVar27 & 0x44) == 0) {
      if ((uVar27 & 0x88) != 0) goto LAB_01126fa0;
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x110U) != 0) goto LAB_01126fa8;
      break;
    }
LAB_01126f98:
    bVar13 = true;
    goto LAB_01126fd4;
  case 2:
  case 6:
    uVar8 = *(ushort *)((long)param_1 + 0x22);
    if (uVar8 < 9) {
      bVar13 = false;
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x22U) != 0) goto LAB_01126f98;
      uVar27 = 1 << (ulong)(uVar8 & 0x1f);
      if ((uVar27 & 0x88) != 0) goto LAB_01126fac;
      if ((uVar27 & 0x110) != 0) goto LAB_01126fa0;
    }
    break;
  case 3:
  case 7:
    uVar8 = *(ushort *)((long)param_1 + 0x22);
    if (uVar8 < 9) {
      uVar27 = 1 << (ulong)(uVar8 & 0x1f);
      if ((uVar27 & 0x22) != 0) {
LAB_01126fa0:
        bVar13 = true;
        goto LAB_01126fac;
      }
      if ((uVar27 & 0x44) != 0) {
LAB_01126fa8:
        bVar13 = false;
        goto LAB_01126fac;
      }
      uVar27 = 1 << (ulong)(uVar8 & 0x1f) & 0x110;
joined_r0x01126f94:
      if (uVar27 != 0) goto LAB_01126f98;
    }
    break;
  case 4:
  case 8:
    uVar8 = *(ushort *)((long)param_1 + 0x22);
    if (uVar8 < 8) {
      bVar13 = false;
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x22U) == 0) {
        uVar27 = 1 << (ulong)(uVar8 & 0x1f);
        if ((uVar27 & 0x44) == 0) {
          uVar27 = uVar27 & 0x88;
          goto joined_r0x01126f94;
        }
        goto LAB_01126fa0;
      }
LAB_01126fac:
      iVar28 = param_4 - 1;
      local_a4 = -(local_64 + param_3);
      bVar12 = true;
      goto LAB_01126fe8;
    }
  }
  bVar13 = false;
LAB_01126fd4:
  iVar28 = 0;
  bVar12 = false;
  local_a4 = param_3 - local_64;
LAB_01126fe8:
  if ((*(ushort *)((long)param_1 + 0x24) < 4) && (*(ushort *)((long)param_1 + 0x24) != 2)) {
    iVar24 = 1;
    pvVar14 = __s;
    pvVar3 = __s;
  }
  else {
    iVar24 = 3;
    pvVar14 = (void *)((long)__s + lVar15);
  }
  if (param_4 == 0) {
    local_b8 = 1;
  }
  else {
    uVar27 = 0;
    local_b8 = 1;
    do {
      iVar19 = (int)param_1[0x11];
      uVar26 = 0;
      if (local_68 != 0) {
        uVar26 = (iVar19 + uVar27) / local_68;
      }
      iVar9 = local_68 - ((iVar19 + uVar27) - uVar26 * local_68);
      iVar5 = param_4 - uVar27;
      if (iVar9 + uVar27 <= param_4) {
        iVar5 = iVar9;
      }
      if (param_3 != 0) {
        uVar26 = 0;
        while ((((lVar15 = TIFFReadTile(lVar25,__s,*(int *)((long)param_1 + 0x8c) + uVar26,
                                        iVar19 + uVar27,0,0), lVar15 != -1 || ((int)param_1[1] == 0)
                 ) && ((iVar24 == 1 ||
                       (((lVar15 = TIFFReadTile(lVar25,pvVar14,
                                                *(int *)((long)param_1 + 0x8c) + uVar26,
                                                (int)param_1[0x11] + uVar27,0,1), lVar15 != -1 ||
                         ((int)param_1[1] == 0)) &&
                        ((lVar15 = TIFFReadTile(lVar25,pvVar3,
                                                *(int *)((long)param_1 + 0x8c) + uVar26,
                                                (int)param_1[0x11] + uVar27,0,2), lVar15 != -1 ||
                         ((int)param_1[1] == 0)))))))) &&
               (((iVar6 == 0 ||
                 (lVar15 = TIFFReadTile(lVar25,lVar21,*(int *)((long)param_1 + 0x8c) + uVar26,
                                        (int)param_1[0x11] + uVar27,0,iVar24), lVar15 != -1)) ||
                ((int)param_1[1] == 0))))) {
          uVar2 = (int)param_1[0x11] + uVar27;
          uVar10 = 0;
          if (local_68 != 0) {
            uVar10 = uVar2 / local_68;
          }
          iVar19 = uVar10 * local_68;
          lVar15 = TIFFTileRowSize(lVar25);
          lVar15 = lVar15 * (ulong)(uVar2 - iVar19);
          if (param_3 < local_64 + uVar26) {
            lVar29 = lVar21 + lVar15;
            iVar19 = local_64 - (param_3 - uVar26);
            if (iVar6 == 0) {
              lVar29 = 0;
            }
            iVar9 = param_3 - uVar26;
            iVar11 = iVar19 + local_a4;
          }
          else {
            lVar29 = lVar21 + lVar15;
            if (iVar6 == 0) {
              lVar29 = 0;
            }
            iVar19 = 0;
            iVar9 = local_64;
            iVar11 = local_a4;
          }
          (*pcVar20)(param_1,param_2 + (ulong)(iVar28 * param_3) * 4 + (ulong)uVar26 * 4,uVar26,
                     iVar28,iVar9,iVar5,iVar19,iVar11,(void *)((long)__s + lVar15),
                     (void *)((long)pvVar14 + lVar15),(void *)((long)pvVar3 + lVar15),lVar29);
          uVar26 = local_64 + uVar26;
          if (param_3 <= uVar26) goto LAB_0112723c;
          iVar19 = (int)param_1[0x11];
        }
        local_b8 = 0;
      }
LAB_0112723c:
      uVar27 = iVar5 + uVar27;
      iVar19 = -iVar5;
      if (!bVar12) {
        iVar19 = iVar5;
      }
      iVar28 = iVar19 + iVar28;
    } while (uVar27 < param_4);
    if ((bVar13) && (param_4 != 0)) {
      uVar27 = 0;
      uVar22 = 0;
      do {
        uVar1 = param_2 + (ulong)((int)uVar22 * param_3) * 4;
        if (uVar1 < (uVar1 + (ulong)param_3 * 4) - 4) {
          lVar21 = (ulong)uVar27 * 4;
          lVar15 = param_2;
          lVar25 = param_2 + (ulong)param_3 * 4 + -4;
          do {
            puVar4 = (undefined4 *)(lVar15 + lVar21);
            uVar7 = *puVar4;
            lVar15 = lVar15 + 4;
            *puVar4 = *(undefined4 *)(lVar25 + lVar21);
            *(undefined4 *)(lVar25 + lVar21) = uVar7;
            lVar25 = lVar25 + -4;
          } while (puVar4 + 1 < (undefined4 *)(lVar25 + lVar21));
        }
        uVar22 = uVar22 + 1;
        uVar27 = uVar27 + param_3;
      } while (uVar22 != param_4);
    }
  }
  _TIFFfree(__s);
  return local_b8;
}

