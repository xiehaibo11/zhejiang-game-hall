
ulong FUN_01076b28(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  long *plVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *__dest;
  byte *__s;
  int iVar13;
  ushort *puVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  ushort *puVar20;
  ushort *puVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  int iVar27;
  byte *pbVar28;
  uint local_64;
  
                    /* try { // try from 01076b34 to 01176b6f has its CatchHandler @ 01076b34
                       catch() { ... } // from try @ 01076b34 with catch @ 01076b34
                       catch() { ... } // from try @ 01076ba4 with catch @ 01076b34 */
  pcVar2 = *(char **)(param_1 + 0x160);
  pbVar4 = *(byte **)(param_1 + 0x168);
  sVar9 = *(short *)(param_1 + 0x3c);
  uVar23 = (ulong)sVar9;
  lVar24 = *(long *)(param_1 + 0x18);
  if (uVar23 == 0) {
    puVar14 = *(ushort **)(lVar24 + 0x78);
                    /* try { // try from 01076ba4 to 01176bbb has its CatchHandler @ 01076b34 */
    puVar20 = puVar14;
  }
  else {
                    /* try { // try from 01076b70 to 01176ba3 has its CatchHandler @ 01076ba8 */
    if (((ulong)*(uint *)(lVar24 + 0xc) <
         (long)*(short *)(lVar24 + 0x18) + uVar23 + (long)*(short *)(lVar24 + 0x60)) &&
       (uVar10 = FT_GlyphLoader_CheckPoints(lVar24,0,uVar23 & 0xffffffff), (int)uVar10 != 0)) {
      return uVar10;
    }
    if (0xffe < sVar9) {
      return 0x14;
    }
    puVar14 = *(ushort **)(lVar24 + 0x78) + uVar23;
    puVar20 = *(ushort **)(lVar24 + 0x78);
  }
                    /* catch() { ... } // from try @ 01076b70 with catch @ 01076ba8 */
  if (pbVar4 < pcVar2 + uVar23 * 2 + 2) {
    return 0x14;
  }
  cVar5 = *pcVar2;
  uVar8 = CONCAT11(cVar5,pcVar2[1]);
  if (0 < sVar9) {
    *puVar20 = uVar8;
  }
  if (cVar5 < '\0') {
    return 0x14;
  }
  pbVar26 = (byte *)(pcVar2 + 4);
  uVar17 = (uint)uVar8;
  while (puVar21 = puVar20 + 1, puVar21 < puVar14) {
    pbVar22 = pbVar26 + -2;
    pbVar25 = pbVar26 + -1;
    pbVar26 = pbVar26 + 2;
    uVar8 = CONCAT11(*pbVar22,*pbVar25);
    *puVar21 = uVar8;
    iVar13 = uVar17 * 0x10000;
    uVar17 = (uint)uVar8;
    puVar20 = puVar21;
    if ((int)((uint)uVar8 * 0x10000) <= iVar13) {
      return 0x14;
    }
  }
  if (sVar9 < 1) {
    iVar27 = 0;
    iVar13 = 4;
  }
  else {
    uVar8 = *puVar20;
    if ((short)uVar8 < -1) {
      return 0x14;
    }
    iVar13 = (short)uVar8 + 5;
    if (iVar13 == 0) {
      iVar27 = -4;
      goto LAB_01076c70;
    }
    iVar27 = (short)uVar8 + 1;
  }
  if (((ulong)*(uint *)(lVar24 + 8) <
       (ulong)((long)*(short *)(lVar24 + 0x1a) + (long)iVar13 + (long)*(short *)(lVar24 + 0x62))) &&
     (uVar23 = FT_GlyphLoader_CheckPoints(lVar24,iVar13,0), (int)uVar23 != 0)) {
    return uVar23;
  }
LAB_01076c70:
  lVar15 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar15 + 0x100) = 0;
  *(undefined8 *)(lVar15 + 0x108) = 0;
  if (pbVar4 < pbVar26) {
    return 0x14;
  }
  uVar23 = (ulong)CONCAT11(pbVar26[-2],pbVar26[-1]);
  if ((long)pbVar4 - (long)pbVar26 < (long)uVar23) {
    return 0x16;
  }
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) == 0) {
    lVar15 = *(long *)(param_1 + 0x118);
    uVar17 = *(uint *)(lVar15 + 0x2b0);
    uVar10 = (ulong)uVar17;
    if (uVar10 < uVar23) {
      uVar11 = ft_mem_realloc(*(undefined8 *)(lVar15 + 0x10),1,uVar10,uVar23,
                              *(undefined8 *)(lVar15 + 0x2b8),&local_64);
      *(undefined8 *)(lVar15 + 0x2b8) = uVar11;
      uVar12 = (ulong)local_64;
      lVar15 = *(long *)(param_1 + 0x118);
      uVar1 = uVar23;
      if (local_64 != 0) {
        uVar1 = uVar10;
      }
      uVar17 = (uint)uVar1;
    }
    else {
      uVar12 = 0;
    }
    *(uint *)(lVar15 + 0x2b0) = uVar17 & 0xffff;
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    lVar16 = *(long *)(param_1 + 0x10);
    *(ulong *)(lVar16 + 0x108) = uVar23;
    __dest = *(void **)(lVar15 + 0x2b8);
    *(void **)(lVar16 + 0x100) = __dest;
    memcpy(__dest,pbVar26,uVar23);
  }
  pbVar26 = pbVar26 + uVar23;
  lVar15 = (long)iVar27;
  if (0 < iVar27) {
    pbVar25 = *(byte **)(lVar24 + 0x70) + lVar15;
    pbVar22 = pbVar26;
    pbVar28 = *(byte **)(lVar24 + 0x70);
    do {
      pbVar26 = pbVar22 + 1;
      if (pbVar4 < pbVar26) {
        return 0x14;
      }
      bVar6 = *pbVar22;
      __s = pbVar28 + 1;
      *pbVar28 = bVar6;
      if ((bVar6 >> 3 & 1) != 0) {
        pbVar22 = pbVar22 + 2;
        if (pbVar4 < pbVar22) {
          return 0x14;
        }
        bVar7 = *pbVar26;
        if (pbVar25 < __s + bVar7) {
          return 0x14;
        }
        pbVar26 = pbVar22;
        if (bVar7 != 0) {
          memset(__s,(uint)bVar6,(ulong)(byte)(bVar7 - 1) + 1);
          __s = pbVar28 + (ulong)(byte)(bVar7 - 1) + 2;
        }
      }
      pbVar22 = pbVar26;
      pbVar28 = __s;
    } while (__s < pbVar25);
  }
  if (pbVar4 < pbVar26) {
    return 0x14;
  }
  if (0 < iVar27) {
    plVar3 = *(long **)(lVar24 + 0x68);
                    /* try { // try from 01076dd0 to 01176dfb has its CatchHandler @ 01076dd0
                       catch() { ... } // from try @ 01076dd0 with catch @ 01076dd0
                       catch() { ... } // from try @ 01076e00 with catch @ 01076dd0 */
    lVar16 = 0;
    plVar18 = plVar3;
    pbVar22 = *(byte **)(lVar24 + 0x70);
    pbVar25 = pbVar26;
    do {
      bVar6 = *pbVar22;
      if ((bVar6 >> 1 & 1) == 0) {
        if ((bVar6 >> 4 & 1) == 0) {
          pbVar26 = pbVar25 + 2;
          if (pbVar4 < pbVar26) {
            return 0x14;
          }
                    /* try { // try from 01076dfc to 01176dff has its CatchHandler @ 01076e10 */
                    /* try { // try from 01076e00 to 01176e23 has its CatchHandler @ 01076dd0 */
          uVar23 = (long)CONCAT11(*pbVar25,pbVar25[1]);
        }
        else {
          uVar23 = 0;
          pbVar26 = pbVar25;
        }
      }
      else {
        pbVar26 = pbVar25 + 1;
                    /* catch() { ... } // from try @ 01076dfc with catch @ 01076e10 */
        if (pbVar4 < pbVar26) {
          return 0x14;
        }
        uVar23 = -(ulong)*pbVar25;
        if ((bVar6 & 0x10) != 0) {
          uVar23 = (ulong)*pbVar25;
        }
      }
      lVar16 = uVar23 + lVar16;
      plVar19 = plVar18 + 2;
      *plVar18 = lVar16;
      *pbVar22 = bVar6 & 0xed;
      plVar18 = plVar19;
      pbVar22 = pbVar22 + 1;
      pbVar25 = pbVar26;
    } while (plVar19 < plVar3 + lVar15 * 2);
    if (0 < iVar27) {
      uVar23 = *(ulong *)(lVar24 + 0x68);
      lVar16 = 0;
      uVar10 = uVar23 + lVar15 * 0x10;
      pbVar22 = *(byte **)(lVar24 + 0x70);
      do {
        bVar6 = *pbVar22;
        if ((bVar6 >> 2 & 1) == 0) {
          if ((bVar6 >> 5 & 1) == 0) {
            pbVar26 = pbVar25 + 2;
            if (pbVar4 < pbVar26) {
              return 0x14;
            }
                    /* try { // try from 01076e70 to 01176f1b has its CatchHandler @ 01076e70
                       catch(type#1 @ 00000000) { ... } // from try @ 01076e70 with catch @ 01076e70
                       catch(type#1 @ 00000000) { ... } // from try @ 01076f94 with catch @ 01076e70
                        */
            uVar12 = (long)CONCAT11(*pbVar25,pbVar25[1]);
          }
          else {
            uVar12 = 0;
            pbVar26 = pbVar25;
          }
        }
        else {
          pbVar26 = pbVar25 + 1;
          if (pbVar4 < pbVar26) {
            return 0x14;
          }
          uVar12 = -(ulong)*pbVar25;
          if ((bVar6 & 0x20) != 0) {
            uVar12 = (ulong)*pbVar25;
          }
        }
        lVar16 = uVar12 + lVar16;
        *(long *)(uVar23 + 8) = lVar16;
        uVar23 = uVar23 + 0x10;
        *pbVar22 = bVar6 & 1;
        pbVar22 = pbVar22 + 1;
        pbVar25 = pbVar26;
      } while (uVar23 < uVar10);
    }
  }
  *(short *)(lVar24 + 0x62) = (short)iVar27;
  *(short *)(lVar24 + 0x60) = sVar9;
  *(byte **)(param_1 + 0x160) = pbVar26;
  return 0;
}

