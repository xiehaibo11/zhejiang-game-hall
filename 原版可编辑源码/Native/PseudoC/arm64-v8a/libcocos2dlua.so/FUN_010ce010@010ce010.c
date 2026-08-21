
void FUN_010ce010(uint *param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  ulong uVar11;
  uint uVar12;
  byte bVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  char *pcVar19;
  undefined1 uVar20;
  byte *pbVar21;
  char cVar22;
  
                    /* catch() { ... } // from try @ 010cde54 with catch @ 010ce010 */
  uVar15 = *param_1;
  uVar11 = (ulong)uVar15;
  if ((char)param_1[4] == '\0') {
    if (param_3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)*(ushort *)(param_3 + 8);
    }
    bVar13 = *(byte *)((long)param_1 + 0x11);
    if (bVar13 < 8) {
      if (bVar13 == 1) {
        uVar12 = -(uVar12 & 1) & 0xff;
        if (uVar15 != 0) {
          pbVar21 = (byte *)(param_2 + (ulong)(uVar15 - 1 >> 3));
          uVar18 = uVar11;
          uVar16 = ~(uVar15 + 7) & 7;
          do {
            lVar14 = param_2 + uVar18;
            uVar18 = uVar18 - 1;
            pbVar2 = pbVar21 + -1;
            if (uVar16 != 7) {
              pbVar2 = pbVar21;
            }
            uVar3 = 0;
            if (uVar16 != 7) {
              uVar3 = uVar16 + 1;
            }
            *(char *)(lVar14 + -1) = -((1 << (ulong)(uVar16 & 0x1f) & (uint)*pbVar21) != 0);
            pbVar21 = pbVar2;
            uVar16 = uVar3;
          } while ((int)uVar18 != 0);
        }
      }
      else if (bVar13 == 2) {
        uVar12 = (uVar12 & 3) * 0x55;
        if (uVar15 != 0) {
          uVar16 = ~(uVar15 * 2 + 6) & 6;
          pbVar21 = (byte *)(param_2 + (ulong)(uVar15 - 1 >> 2));
          uVar18 = uVar11;
          do {
            uVar3 = uVar16 + 2;
            bVar10 = uVar16 != 6;
            lVar14 = param_2 + uVar18;
            bVar13 = *pbVar21 >> (ulong)(uVar16 & 0x1f);
            pbVar2 = pbVar21 + -1;
            if (bVar10) {
              pbVar2 = pbVar21;
            }
            uVar16 = bVar13 & 3;
            uVar18 = uVar18 - 1;
            *(byte *)(lVar14 + -1) =
                 bVar13 & 3 | (byte)(uVar16 << 2) | (byte)(uVar16 << 4) | (byte)(uVar16 << 6);
            uVar16 = 0;
            if (bVar10) {
              uVar16 = uVar3;
            }
            pbVar21 = pbVar2;
          } while ((int)uVar18 != 0);
        }
      }
      else if ((bVar13 == 4) && (uVar12 = uVar12 & 0xf | (uVar12 & 0xf) << 4, uVar15 != 0)) {
        uVar16 = (uVar15 & 1) << 2;
        pbVar21 = (byte *)(param_2 + (ulong)(uVar15 - 1 >> 1));
        uVar18 = uVar11;
        do {
          bVar10 = uVar16 != 4;
          lVar14 = param_2 + uVar18;
          uVar18 = uVar18 - 1;
          pbVar2 = pbVar21 + -1;
          if (bVar10) {
            pbVar2 = pbVar21;
          }
          *(byte *)(lVar14 + -1) =
               *pbVar21 >> (ulong)uVar16 & 0xf | (*pbVar21 >> (ulong)uVar16) << 4;
          uVar16 = 0;
          if (bVar10) {
            uVar16 = 4;
          }
          pbVar21 = pbVar2;
        } while ((int)uVar18 != 0);
      }
      bVar13 = 8;
      *(undefined1 *)((long)param_1 + 0x11) = 8;
      *(undefined1 *)((long)param_1 + 0x13) = 8;
      *(ulong *)(param_1 + 2) = uVar11;
    }
    if (param_3 == 0) {
      return;
    }
    if (bVar13 == 0x10) {
      if (uVar15 != 0) {
        pcVar19 = (char *)(param_2 + *(long *)(param_1 + 2) * 2 + -1);
        pbVar21 = (byte *)(param_2 + *(long *)(param_1 + 2) + -1);
        do {
          if ((uint)pbVar21[-1] == uVar12 >> 8) {
            cVar22 = -((uint)*pbVar21 != (uVar12 & 0xff));
          }
          else {
            cVar22 = -1;
          }
          *pcVar19 = cVar22;
          pcVar19[-1] = cVar22;
          uVar15 = uVar15 - 1;
          pcVar19[-2] = *pbVar21;
          pbVar2 = pbVar21 + -1;
          pbVar21 = pbVar21 + -2;
          pcVar19[-3] = *pbVar2;
          pcVar19 = pcVar19 + -4;
        } while (uVar15 != 0);
      }
    }
    else if ((bVar13 == 8) && (uVar15 != 0)) {
      lVar14 = (ulong)(uVar15 << 1) - 1;
      uVar18 = uVar11;
      do {
        lVar4 = param_2 + uVar18;
        pcVar19 = (char *)(param_2 + lVar14);
        uVar18 = uVar18 - 1;
        lVar14 = lVar14 + -2;
        *pcVar19 = -((uint)*(byte *)(lVar4 + -1) != (uVar12 & 0xff));
        pcVar19[-1] = *(char *)(lVar4 + -1);
      } while ((int)uVar18 != 0);
    }
    *(undefined1 *)(param_1 + 4) = 4;
    uVar12 = (uint)*(byte *)((long)param_1 + 0x11) << 1;
    *(char *)((long)param_1 + 0x13) = (char)uVar12;
    uVar15 = uVar12 & 0xfe;
    *(undefined1 *)((long)param_1 + 0x12) = 2;
  }
  else {
    if (param_3 == 0) {
      return;
    }
    if ((char)param_1[4] != '\x02') {
      return;
    }
    if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (uVar15 != 0) {
        uVar7 = *(ushort *)(param_3 + 2);
        uVar8 = *(ushort *)(param_3 + 4);
        uVar9 = *(ushort *)(param_3 + 6);
        pcVar19 = (char *)(param_2 + (ulong)(uVar15 << 3) + -1);
        pbVar21 = (byte *)(param_2 + *(long *)(param_1 + 2) + -3);
        uVar18 = uVar11;
        do {
          if ((((pbVar21[-3] == (byte)(uVar7 >> 8)) && ((ushort)pbVar21[-2] == (uVar7 & 0xff))) &&
              (pbVar21[-1] == (byte)(uVar8 >> 8))) &&
             (((ushort)*pbVar21 == (uVar8 & 0xff) && (pbVar21[1] == (byte)(uVar9 >> 8))))) {
            cVar22 = -((ushort)pbVar21[2] != (uVar9 & 0xff));
          }
          else {
            cVar22 = -1;
          }
          *pcVar19 = cVar22;
          pcVar19[-1] = cVar22;
          uVar15 = (int)uVar18 - 1;
          uVar18 = (ulong)uVar15;
          pcVar19[-2] = pbVar21[2];
          pcVar19[-3] = pbVar21[1];
          pcVar19[-4] = *pbVar21;
          pcVar19[-5] = pbVar21[-1];
          pcVar19[-6] = pbVar21[-2];
          pbVar2 = pbVar21 + -3;
          pbVar21 = pbVar21 + -6;
          pcVar19[-7] = *pbVar2;
          pcVar19 = pcVar19 + -8;
        } while (uVar15 != 0);
      }
    }
    else if ((*(char *)((long)param_1 + 0x11) == '\b') && (uVar15 != 0)) {
      cVar22 = *(char *)(param_3 + 6);
                    /* catch() { ... } // from try @ 010cde2c with catch @ 010ce050 */
      cVar5 = *(char *)(param_3 + 4);
                    /* catch() { ... } // from try @ 010cddf0 with catch @ 010ce054 */
      cVar6 = *(char *)(param_3 + 2);
      puVar17 = (undefined1 *)(param_2 + (ulong)(uVar15 << 2) + -1);
      pcVar19 = (char *)(param_2 + *(long *)(param_1 + 2) + -1);
      uVar18 = uVar11;
      do {
        if (((pcVar19[-2] == cVar6) && (pcVar19[-1] == cVar5)) && (*pcVar19 == cVar22)) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0xff;
        }
        *puVar17 = uVar20;
        uVar15 = (int)uVar18 - 1;
        uVar18 = (ulong)uVar15;
        puVar17[-1] = *pcVar19;
        puVar17[-2] = pcVar19[-1];
        pcVar1 = pcVar19 + -2;
        pcVar19 = pcVar19 + -3;
        puVar17[-3] = *pcVar1;
        puVar17 = puVar17 + -4;
      } while (uVar15 != 0);
    }
    *(undefined1 *)(param_1 + 4) = 6;
    uVar12 = (uint)*(byte *)((long)param_1 + 0x11) << 2;
    *(char *)((long)param_1 + 0x13) = (char)uVar12;
    uVar15 = uVar12 & 0xfc;
    *(undefined1 *)((long)param_1 + 0x12) = 4;
  }
  if ((uVar12 & 0xf8) < 8) {
    uVar11 = uVar15 * uVar11 + 7 >> 3;
  }
  else {
    uVar11 = (uVar15 >> 3) * uVar11;
  }
  *(ulong *)(param_1 + 2) = uVar11;
  return;
}

