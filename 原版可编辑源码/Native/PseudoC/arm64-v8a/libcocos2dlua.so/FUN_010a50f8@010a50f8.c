
void FUN_010a50f8(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined8 *puVar26;
  ushort *puVar27;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar12 = *param_1;
  puVar26 = (undefined8 *)param_1[8];
  iVar21 = *(int *)((long)param_1 + 0x3c);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_71 = 0;
  local_80 = 0;
  piVar25 = (int *)(param_1 + (ulong)param_2 * 5 + 9);
  *piVar25 = 0;
  iVar15 = *(int *)(param_1 + (ulong)param_2 * 5 + 0xd);
  uVar13 = param_1[6];
  iVar20 = *(int *)((long)param_1 + 0x2c);
  iVar4 = -iVar15;
  if (-1 < iVar15) {
    iVar4 = iVar15;
  }
  uVar17 = uVar13 + (long)iVar20 * 0x50;
  if (param_2 == 0) {
    if (0 < iVar20) {
      do {
        *(long *)(uVar13 + 0x38) = (long)*(short *)(uVar13 + 0x1a);
        *(long *)(uVar13 + 0x30) = (long)*(short *)(uVar13 + 0x18);
        uVar13 = uVar13 + 0x50;
      } while (uVar13 < uVar17);
    }
  }
  else if (0 < iVar20) {
    do {
      *(long *)(uVar13 + 0x30) = (long)*(short *)(uVar13 + 0x1a);
      *(long *)(uVar13 + 0x38) = (long)*(short *)(uVar13 + 0x18);
      uVar13 = uVar13 + 0x50;
    } while (uVar13 < uVar17);
  }
  if (0 < iVar21) {
    puVar3 = puVar26 + iVar21;
    pbVar14 = (byte *)0x0;
    piVar1 = (int *)((long)param_1 + (ulong)param_2 * 0x28 + 0x4c);
    puVar2 = param_1 + (ulong)param_2 * 5 + 10;
    iVar15 = iVar4;
    do {
      puVar27 = (ushort *)*puVar26;
      puVar18 = *(ushort **)(puVar27 + 0x24);
      if (puVar27 != puVar18) {
        cVar6 = *(char *)((long)puVar18 + 3);
        iVar21 = -(int)cVar6;
        if (-1 < cVar6) {
          iVar21 = (int)cVar6;
        }
        if (iVar21 == iVar4) {
          cVar7 = *(char *)((long)puVar27 + 3);
          iVar21 = -(int)cVar7;
          if (-1 < cVar7) {
            iVar21 = (int)cVar7;
          }
          if (iVar21 == iVar4) {
            while( true ) {
              iVar20 = (int)cVar6;
              iVar21 = -iVar20;
              if (-1 < iVar20) {
                iVar21 = iVar20;
              }
              if (iVar21 != iVar4) break;
              if (puVar18 == puVar27) goto LAB_010a5260;
              puVar18 = *(ushort **)(puVar18 + 0x24);
              cVar6 = *(char *)((long)puVar18 + 3);
            }
            puVar27 = *(ushort **)(puVar18 + 0x20);
          }
        }
LAB_010a5260:
        bVar11 = false;
        bVar10 = false;
        lVar22 = 32000;
        lVar23 = -32000;
        puVar18 = puVar27;
        do {
          while (lVar19 = lVar22, lVar24 = lVar23, puVar18 != puVar27) {
            if (!bVar11) goto LAB_010a532c;
LAB_010a527c:
            puVar18 = *(ushort **)(puVar18 + 0x20);
            lVar22 = lVar19;
            lVar23 = lVar24;
            if (bVar11) {
              lVar23 = *(long *)(puVar18 + 0x18);
              lVar22 = lVar23;
              if (lVar19 <= lVar23) {
                lVar22 = lVar19;
              }
              if (lVar23 <= lVar24) {
                lVar23 = lVar24;
              }
              if ((puVar18 == puVar27) || (iVar15 != *(char *)((long)puVar18 + 3))) {
                *(ushort **)(pbVar14 + 0x50) = puVar18;
                *(short *)(pbVar14 + 2) = (short)((uint)((int)lVar22 + (int)lVar23) >> 1);
                if (((*puVar18 | **(ushort **)(pbVar14 + 0x48)) & 3) != 0) {
                  *pbVar14 = *pbVar14 | 1;
                }
                lVar19 = *(long *)(puVar18 + 0x1c);
                lVar23 = *(long *)(*(ushort **)(pbVar14 + 0x48) + 0x1c);
                bVar11 = false;
                lVar22 = lVar23;
                if (lVar19 <= lVar23) {
                  lVar22 = lVar19;
                }
                if (lVar23 <= lVar19) {
                  lVar23 = lVar19;
                }
                *(short *)(pbVar14 + 4) = (short)lVar22;
                *(short *)(pbVar14 + 6) = (short)lVar23;
                *(short *)(pbVar14 + 8) = (short)lVar23 - (short)lVar22;
                pbVar14 = (byte *)0x0;
              }
            }
          }
          if (bVar10) break;
          bVar10 = true;
          if (bVar11) goto LAB_010a527c;
LAB_010a532c:
          bVar8 = *(byte *)((long)puVar18 + 3);
          iVar21 = -(int)(char)bVar8;
          if (-1 < (char)bVar8) {
            iVar21 = (int)(char)bVar8;
          }
          if (iVar21 == iVar4) {
            local_a4 = 0;
            iVar15 = *piVar25;
            iVar21 = *piVar1;
            if (iVar15 < iVar21) {
              uVar13 = *puVar2;
            }
            else {
              if (0x1745d16 < iVar21) {
                local_a4 = 0x40;
                iVar15 = local_a4;
                goto LAB_010a5504;
              }
              iVar15 = iVar21 + (iVar21 >> 2) + 4;
              iVar20 = 0x1745d17;
              if (iVar15 < 0x1745d18 && -5 < iVar21 >> 2) {
                iVar20 = iVar15;
              }
              uVar13 = ft_mem_realloc(uVar12,0x58,(long)iVar21,(long)iVar20,*puVar2,&local_a4);
              *puVar2 = uVar13;
              iVar15 = local_a4;
              if (local_a4 != 0) goto LAB_010a5504;
              *piVar1 = iVar20;
              iVar15 = *piVar25;
            }
            pbVar14 = (byte *)(uVar13 + (long)iVar15 * 0x58);
            *piVar25 = iVar15 + 1;
            *pbVar14 = 0;
            bVar11 = true;
            *(ulong *)(pbVar14 + 0x30) = CONCAT71(uStack_70,uStack_71);
            pbVar14[0x38] = 0;
            pbVar14[0x39] = 0x7d;
            pbVar14[0x3a] = 0;
            pbVar14[0x3b] = 0;
            pbVar14[0x3c] = 0;
            pbVar14[0x3d] = 0;
            pbVar14[0x3e] = 0;
            pbVar14[0x3f] = 0;
            *(ulong *)(pbVar14 + 0x29) = CONCAT17(uStack_71,uStack_78);
            *(undefined8 *)(pbVar14 + 0x21) = local_80;
            *(undefined8 *)(pbVar14 + 0x19) = uStack_88;
            *(undefined8 *)(pbVar14 + 0x11) = local_90;
            *(undefined8 *)(pbVar14 + 9) = uStack_98;
            *(undefined8 *)(pbVar14 + 1) = local_a0;
            pbVar14[0x48] = 0;
            pbVar14[0x49] = 0;
            pbVar14[0x4a] = 0;
            pbVar14[0x4b] = 0;
            pbVar14[0x4c] = 0;
            pbVar14[0x4d] = 0;
            pbVar14[0x4e] = 0;
            pbVar14[0x4f] = 0;
            pbVar14[0x40] = 0;
            pbVar14[0x41] = 0;
            pbVar14[0x42] = 0;
            pbVar14[0x43] = 0;
            pbVar14[0x44] = 0;
            pbVar14[0x45] = 0;
            pbVar14[0x46] = 0;
            pbVar14[0x47] = 0;
            pbVar14[1] = bVar8;
            pbVar14[0x50] = 0;
            pbVar14[0x51] = 0;
            pbVar14[0x52] = 0;
            pbVar14[0x53] = 0;
            pbVar14[0x54] = 0;
            pbVar14[0x55] = 0;
            pbVar14[0x56] = 0;
            pbVar14[0x57] = 0;
            lVar19 = *(long *)(puVar18 + 0x18);
            *(ushort **)(pbVar14 + 0x48) = puVar18;
            *(ushort **)(pbVar14 + 0x50) = puVar18;
            lVar24 = lVar19;
            iVar15 = (int)(char)bVar8;
            goto LAB_010a527c;
          }
          puVar18 = *(ushort **)(puVar18 + 0x20);
          bVar11 = false;
        } while( true );
      }
      puVar26 = puVar26 + 1;
    } while (puVar26 < puVar3);
    if (*piVar25 < 1) {
      iVar15 = 0;
      goto LAB_010a5504;
    }
    uVar13 = *puVar2;
    uVar17 = uVar13 + (long)*piVar25 * 0x58;
    do {
      lVar22 = *(long *)(uVar13 + 0x50);
      lVar19 = *(long *)(*(long *)(uVar13 + 0x48) + 0x38);
      lVar23 = *(long *)(lVar22 + 0x38);
      lVar24 = *(long *)(*(long *)(*(long *)(uVar13 + 0x48) + 0x48) + 0x38);
      if (lVar19 < lVar23) {
        if (lVar24 < lVar19) {
          *(short *)(uVar13 + 8) =
               *(short *)(uVar13 + 8) + (short)((uint)((int)lVar19 - (int)lVar24) >> 1);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0x40) + 0x38);
        if (lVar23 < lVar22) {
          sVar5 = *(short *)(uVar13 + 8);
          uVar16 = (int)lVar22 - (int)lVar23;
LAB_010a54dc:
          *(short *)(uVar13 + 8) = sVar5 + (short)(uVar16 >> 1);
        }
      }
      else {
        if (lVar19 < lVar24) {
          *(short *)(uVar13 + 8) =
               *(short *)(uVar13 + 8) + (short)((uint)((int)lVar24 - (int)lVar19) >> 1);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0x40) + 0x38);
        if (lVar22 < lVar23) {
          sVar5 = *(short *)(uVar13 + 8);
          uVar16 = (int)lVar23 - (int)lVar22;
          goto LAB_010a54dc;
        }
      }
      uVar13 = uVar13 + 0x58;
    } while (uVar13 < uVar17);
  }
  iVar15 = 0;
LAB_010a5504:
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar15);
  }
  return;
}

