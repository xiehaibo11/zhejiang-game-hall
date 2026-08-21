
undefined4 FUN_01127320(long *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  long lVar15;
  void *__s;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  size_t __size;
  long lVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int local_ac;
  void *local_80;
  void *local_78;
  uint local_64;
  
  pcVar18 = (code *)param_1[9];
  lVar24 = *param_1;
  uVar22 = (ulong)param_3;
  iVar5 = (int)param_1[2];
  uVar26 = *(uint *)((long)param_1 + 0x14);
  lVar15 = TIFFStripSize(lVar24);
  if (lVar15 == 0) {
LAB_01127434:
    uVar23 = *(undefined8 *)(lVar24 + 0x3b8);
    uVar16 = TIFFFileName(lVar24);
    TIFFErrorExt(uVar23,uVar16,"Integer overflow in %s","gtStripSeparate");
    return 0;
  }
  lVar19 = 3;
  if (iVar5 != 0) {
    lVar19 = 4;
  }
  __size = lVar19 * lVar15;
  if (__size == 0) goto LAB_01127434;
  __s = _TIFFmalloc(__size);
  if (__s == (void *)0x0) {
    uVar23 = *(undefined8 *)(lVar24 + 0x3b8);
                    /* try { // try from 0112746c to 01227477 has its CatchHandler @ 0112751c */
    uVar16 = TIFFFileName(lVar24);
    TIFFErrorExt(uVar23,uVar16,"No space for tile buffer");
    return 0;
  }
  _TIFFmemset(__s,0,__size);
  local_78 = (void *)((long)__s + lVar15);
  local_80 = (void *)((long)local_78 + lVar15);
  lVar15 = (long)local_80 + lVar15;
  if (iVar5 == 0) {
    lVar15 = 0;
  }
  switch((short)param_1[4]) {
  case 1:
  case 5:
    uVar7 = *(ushort *)((long)param_1 + 0x22);
                    /* try { // try from 011273f0 to 0122746b has its CatchHandler @ 011273f0
                       catch(type#1 @ 00000000) { ... } // from try @ 011273f0 with catch @ 011273f0
                        */
    if (uVar7 < 9) {
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((uVar2 & 0x44) != 0) {
LAB_01127568:
        local_ac = 0;
        bVar12 = false;
        iVar27 = 0;
        bVar13 = true;
        goto LAB_011275b4;
      }
      if ((uVar2 & 0x88) != 0) goto LAB_01127560;
      if ((1 << (ulong)(uVar7 & 0x1f) & 0x110U) != 0) goto LAB_01127578;
    }
    break;
  case 2:
  case 6:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0112746c with catch @ 0112751c
                        */
    uVar7 = *(ushort *)((long)param_1 + 0x22);
    if (uVar7 < 9) {
      bVar13 = false;
      if ((1 << (ulong)(uVar7 & 0x1f) & 0x22U) != 0) goto LAB_01127568;
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((uVar2 & 0x88) != 0) goto LAB_0112757c;
      if ((uVar2 & 0x110) != 0) goto LAB_01127560;
    }
    break;
  case 3:
  case 7:
    uVar7 = *(ushort *)((long)param_1 + 0x22);
    if (uVar7 < 9) {
      uVar2 = 1 << (ulong)(uVar7 & 0x1f);
      if ((uVar2 & 0x22) != 0) {
LAB_01127560:
        bVar13 = true;
        goto LAB_0112757c;
      }
      if ((uVar2 & 0x44) != 0) {
LAB_01127578:
        bVar13 = false;
        goto LAB_0112757c;
      }
      uVar2 = 1 << (ulong)(uVar7 & 0x1f) & 0x110;
joined_r0x01127514:
      if (uVar2 != 0) goto LAB_01127568;
    }
    break;
  case 4:
  case 8:
    uVar7 = *(ushort *)((long)param_1 + 0x22);
    if (uVar7 < 8) {
      bVar13 = false;
      if ((1 << (ulong)(uVar7 & 0x1f) & 0x22U) == 0) {
        uVar2 = 1 << (ulong)(uVar7 & 0x1f);
        if ((uVar2 & 0x44) == 0) {
          uVar2 = uVar2 & 0x88;
          goto joined_r0x01127514;
        }
        goto LAB_01127560;
      }
LAB_0112757c:
      local_ac = param_3 * -2;
      iVar27 = param_4 - 1;
      bVar12 = true;
      goto LAB_011275b4;
    }
    break;
  default:
    local_ac = 0;
    bVar12 = false;
    bVar13 = false;
    iVar27 = 0;
    goto LAB_011275b4;
  }
  bVar13 = false;
  iVar27 = 0;
  local_ac = 0;
  bVar12 = false;
LAB_011275b4:
  if ((*(ushort *)((long)param_1 + 0x24) < 4) && (*(ushort *)((long)param_1 + 0x24) != 2)) {
    iVar25 = 1;
    local_80 = __s;
    local_78 = __s;
  }
  else {
    iVar25 = 3;
  }
  TIFFGetFieldDefaulted(lVar24,0x116,&local_64);
  lVar19 = TIFFScanlineSize(lVar24);
  iVar9 = uVar26 - param_3;
  if (uVar26 < param_3 || iVar9 == 0) {
    iVar9 = 0;
  }
  if (param_4 == 0) {
    uVar14 = 1;
  }
  else {
    uVar26 = 0;
    do {
      uVar2 = (int)param_1[0x11] + uVar26;
      uVar10 = 0;
      if (local_64 != 0) {
        uVar10 = uVar2 / local_64;
      }
      iVar8 = local_64 - (uVar2 - uVar10 * local_64);
      iVar4 = param_4 - uVar26;
      if (iVar8 + uVar26 <= param_4) {
        iVar4 = iVar8;
      }
      uVar14 = TIFFComputeStrip(lVar24,uVar2,0);
      uVar10 = (int)param_1[0x11] + uVar26;
      uVar11 = 0;
      if (local_64 != 0) {
        uVar11 = uVar10 / local_64;
      }
      lVar17 = TIFFReadEncodedStrip
                         (lVar24,uVar14,__s,lVar19 * (ulong)((uVar10 - uVar11 * local_64) + iVar4));
      if ((lVar17 == -1) && ((int)param_1[1] != 0)) {
LAB_01127840:
        uVar14 = 0;
        goto joined_r0x01127850;
      }
      if (iVar25 != 1) {
        uVar14 = TIFFComputeStrip(lVar24,uVar2,1);
        uVar10 = (int)param_1[0x11] + uVar26;
        uVar11 = 0;
        if (local_64 != 0) {
          uVar11 = uVar10 / local_64;
        }
        lVar17 = TIFFReadEncodedStrip
                           (lVar24,uVar14,local_78,
                            lVar19 * (ulong)((uVar10 - uVar11 * local_64) + iVar4));
        if ((lVar17 != -1) || ((int)param_1[1] == 0)) {
          uVar14 = TIFFComputeStrip(lVar24,uVar2,2);
          uVar10 = (int)param_1[0x11] + uVar26;
          uVar11 = 0;
          if (local_64 != 0) {
            uVar11 = uVar10 / local_64;
          }
          lVar17 = TIFFReadEncodedStrip
                             (lVar24,uVar14,local_80,
                              lVar19 * (ulong)((uVar10 - uVar11 * local_64) + iVar4));
          if ((lVar17 != -1) || ((int)param_1[1] == 0)) goto LAB_01127734;
        }
        goto LAB_01127840;
      }
LAB_01127734:
      if (iVar5 != 0) {
        uVar14 = TIFFComputeStrip(lVar24,uVar2,iVar25);
        uVar2 = (int)param_1[0x11] + uVar26;
        uVar10 = 0;
        if (local_64 != 0) {
          uVar10 = uVar2 / local_64;
        }
        lVar17 = TIFFReadEncodedStrip
                           (lVar24,uVar14,lVar15,
                            lVar19 * (ulong)((uVar2 - uVar10 * local_64) + iVar4));
        if ((lVar17 == -1) && ((int)param_1[1] != 0)) goto LAB_01127840;
      }
      uVar2 = (int)param_1[0x11] + uVar26;
      uVar10 = 0;
      if (local_64 != 0) {
        uVar10 = uVar2 / local_64;
      }
      lVar20 = lVar19 * (ulong)(uVar2 - uVar10 * local_64);
      lVar17 = lVar15 + lVar20;
      if (iVar5 == 0) {
        lVar17 = 0;
      }
      (*pcVar18)(param_1,param_2 + (ulong)(iVar27 * param_3) * 4,0,iVar27,uVar22,iVar4,iVar9,
                 local_ac,(void *)((long)__s + lVar20),(void *)((long)local_78 + lVar20),
                 (void *)((long)local_80 + lVar20),lVar17);
      uVar26 = iVar4 + uVar26;
      iVar8 = -iVar4;
      if (!bVar12) {
        iVar8 = iVar4;
      }
      iVar27 = iVar8 + iVar27;
    } while (uVar26 < param_4);
    uVar14 = 1;
joined_r0x01127850:
    if (bVar13) {
      uVar26 = 0;
      uVar21 = 0;
      do {
        uVar1 = param_2 + (ulong)((int)uVar21 * param_3) * 4;
        if (uVar1 < (uVar1 + uVar22 * 4) - 4) {
          lVar19 = (ulong)uVar26 * 4;
          lVar15 = param_2;
          lVar24 = param_2 + uVar22 * 4 + -4;
          do {
            puVar3 = (undefined4 *)(lVar15 + lVar19);
            uVar6 = *puVar3;
            lVar15 = lVar15 + 4;
            *puVar3 = *(undefined4 *)(lVar24 + lVar19);
            *(undefined4 *)(lVar24 + lVar19) = uVar6;
            lVar24 = lVar24 + -4;
          } while (puVar3 + 1 < (undefined4 *)(lVar24 + lVar19));
        }
        uVar21 = uVar21 + 1;
        uVar26 = uVar26 + param_3;
      } while (uVar21 != param_4);
    }
  }
  _TIFFfree(__s);
  return uVar14;
}

