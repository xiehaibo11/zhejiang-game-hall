
ulong FUN_00e3546c(long param_1)

{
  short sVar1;
  ushort *puVar2;
  long *plVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *__dest;
  byte *__s;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  ushort *puVar16;
  ushort *puVar17;
  long *plVar18;
  long *plVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  int iVar26;
  uint local_64;
  
  pbVar24 = *(byte **)(param_1 + 0x158);
  pbVar5 = *(byte **)(param_1 + 0x160);
  sVar8 = *(short *)(param_1 + 0x3c);
  lVar21 = (long)sVar8;
  lVar22 = *(long *)(param_1 + 0x18);
  if (lVar21 == 0) {
    puVar16 = *(ushort **)(lVar22 + 0x78);
    pbVar25 = pbVar24 + 2;
    puVar2 = puVar16;
  }
  else {
    if ((*(uint *)(lVar22 + 0xc) <
         (uint)((int)*(short *)(lVar22 + 0x18) + (int)sVar8 + (int)*(short *)(lVar22 + 0x60))) &&
       (uVar10 = FUN_00e13cd0(lVar22,0,(int)sVar8), (int)uVar10 != 0)) {
      return uVar10;
    }
    if (0xffe < sVar8) {
      return 0x14;
    }
    puVar16 = *(ushort **)(lVar22 + 0x78);
    puVar2 = puVar16 + lVar21;
    pbVar25 = pbVar24 + lVar21 * 2 + 2;
  }
  if (pbVar5 < pbVar25) {
    return 0x14;
  }
  bVar6 = *pbVar24;
  uVar9 = CONCAT11(bVar6,pbVar24[1]);
  if (0 < sVar8) {
    *puVar16 = uVar9;
  }
  if ((short)((ushort)bVar6 << 8) < 0) {
    return 0x14;
  }
  pbVar24 = pbVar24 + 4;
  uVar15 = (uint)uVar9;
  while (puVar17 = puVar16 + 1, puVar17 < puVar2) {
    puVar16 = (ushort *)(pbVar24 + -2);
    pbVar24 = pbVar24 + 2;
    uVar9 = *puVar16 >> 8 | *puVar16 << 8;
    sVar1 = (short)uVar15;
    *puVar17 = uVar9;
    uVar15 = (int)(short)uVar9;
    puVar16 = puVar17;
    if ((int)(short)uVar9 <= (int)sVar1) {
      return 0x14;
    }
  }
  if (sVar8 < 1) {
    iVar26 = 0;
    iVar12 = 4;
  }
  else {
    iVar26 = (short)*puVar16 + 1;
    if (iVar26 < 0) {
      return 0x14;
    }
    iVar12 = (short)*puVar16 + 5;
  }
  if ((*(uint *)(lVar22 + 8) <
       (uint)(iVar12 + *(short *)(lVar22 + 0x1a) + (int)*(short *)(lVar22 + 0x62))) &&
     (uVar10 = FUN_00e13cd0(lVar22,iVar12,0), (int)uVar10 != 0)) {
    return uVar10;
  }
  lVar21 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar21 + 0x100) = 0;
  *(undefined8 *)(lVar21 + 0x108) = 0;
  if (pbVar5 < pbVar24) {
    return 0x14;
  }
  uVar9 = CONCAT11(pbVar24[-2],pbVar24[-1]);
  uVar10 = (ulong)uVar9;
  if ((*(byte *)(param_1 + 0x20) >> 1 & 1) == 0) {
    if ((long)pbVar5 - (long)pbVar24 < (long)uVar10) {
      return 0x16;
    }
    lVar21 = *(long *)(param_1 + 0x110);
    uVar15 = *(uint *)(lVar21 + 0x2b8);
    if (uVar15 < uVar10) {
      uVar11 = FUN_00e13bcc(*(undefined8 *)(lVar21 + 0x10),1,(ulong)uVar15,uVar10,
                            *(undefined8 *)(lVar21 + 0x2c0),&local_64);
      *(undefined8 *)(lVar21 + 0x2c0) = uVar11;
      lVar21 = *(long *)(param_1 + 0x110);
      uVar4 = (uint)uVar9;
      if (local_64 != 0) {
        uVar4 = uVar15;
      }
      *(uint *)(lVar21 + 0x2b8) = uVar4 & 0xffff;
      if (local_64 != 0) {
        return (ulong)local_64;
      }
    }
    else {
      *(uint *)(lVar21 + 0x2b8) = uVar15 & 0xffff;
    }
    lVar13 = *(long *)(param_1 + 0x10);
    *(ulong *)(lVar13 + 0x108) = uVar10;
    __dest = *(void **)(lVar21 + 0x2c0);
    *(void **)(lVar13 + 0x100) = __dest;
    if (uVar9 == 0) {
      uVar10 = 0;
    }
    else {
      memcpy(__dest,pbVar24,uVar10);
    }
  }
  pbVar25 = *(byte **)(lVar22 + 0x70);
  pbVar24 = pbVar24 + uVar10;
  if (0 < iVar26) {
    pbVar20 = pbVar25 + iVar26;
    do {
      pbVar23 = pbVar24 + 1;
      if (pbVar5 < pbVar23) {
        return 0x14;
      }
      bVar6 = *pbVar24;
      __s = pbVar25 + 1;
      *pbVar25 = bVar6;
      if ((bVar6 >> 3 & 1) != 0) {
        pbVar24 = pbVar24 + 2;
        if (pbVar5 < pbVar24) {
          return 0x14;
        }
        bVar7 = *pbVar23;
        if (pbVar20 < __s + bVar7) {
          return 0x14;
        }
        pbVar23 = pbVar24;
        if (bVar7 != 0) {
          memset(__s,(uint)bVar6,(ulong)bVar7);
          __s = pbVar25 + (ulong)(byte)(bVar7 - 1) + 2;
        }
      }
      pbVar25 = __s;
      pbVar24 = pbVar23;
    } while (pbVar25 < pbVar20);
    pbVar25 = *(byte **)(lVar22 + 0x70);
  }
  if (pbVar5 < pbVar24) {
    return 0x14;
  }
  if (0 < iVar26) {
    plVar14 = *(long **)(lVar22 + 0x68);
    lVar21 = 0;
    plVar3 = plVar14 + (long)iVar26 * 2;
    plVar18 = plVar14;
    pbVar20 = pbVar25;
    pbVar23 = pbVar24;
    do {
      bVar6 = *pbVar20;
      if ((bVar6 >> 1 & 1) == 0) {
        if ((bVar6 >> 4 & 1) == 0) {
          pbVar24 = pbVar23 + 2;
          if (pbVar5 < pbVar24) {
            return 0x14;
          }
          uVar10 = (long)(short)((ushort)*pbVar23 << 8) | (ulong)pbVar23[1];
        }
        else {
          uVar10 = 0;
          pbVar24 = pbVar23;
        }
      }
      else {
        pbVar24 = pbVar23 + 1;
        if (pbVar5 < pbVar24) {
          return 0x14;
        }
        uVar10 = -(ulong)*pbVar23;
        if ((bVar6 & 0x10) != 0) {
          uVar10 = (ulong)*pbVar23;
        }
      }
      lVar21 = uVar10 + lVar21;
      plVar19 = plVar18 + 2;
      *plVar18 = lVar21;
      pbVar20 = pbVar20 + 1;
      plVar18 = plVar19;
      pbVar23 = pbVar24;
    } while (plVar19 < plVar3);
    if (0 < iVar26) {
      lVar21 = 0;
      pbVar20 = pbVar24;
      do {
        bVar6 = *pbVar25;
        if ((bVar6 >> 2 & 1) == 0) {
          if ((bVar6 >> 5 & 1) == 0) {
            pbVar24 = pbVar20 + 2;
            if (pbVar5 < pbVar24) {
              return 0x14;
            }
            uVar10 = (long)(short)((ushort)*pbVar20 << 8) | (ulong)pbVar20[1];
          }
          else {
            uVar10 = 0;
            pbVar24 = pbVar20;
          }
        }
        else {
          pbVar24 = pbVar20 + 1;
          if (pbVar5 < pbVar24) {
            return 0x14;
          }
          uVar10 = -(ulong)*pbVar20;
          if ((bVar6 & 0x20) != 0) {
            uVar10 = (ulong)*pbVar20;
          }
        }
        lVar21 = uVar10 + lVar21;
        plVar14[1] = lVar21;
        plVar14 = plVar14 + 2;
        *pbVar25 = bVar6 & 1;
        pbVar20 = pbVar24;
        pbVar25 = pbVar25 + 1;
      } while (plVar14 < plVar3);
    }
  }
  *(short *)(lVar22 + 0x62) = (short)iVar26;
  *(short *)(lVar22 + 0x60) = sVar8;
  *(byte **)(param_1 + 0x158) = pbVar24;
  return 0;
}

