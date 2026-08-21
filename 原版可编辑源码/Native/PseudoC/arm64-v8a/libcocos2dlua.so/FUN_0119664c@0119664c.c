
undefined4 FUN_0119664c(void)

{
  undefined2 *puVar1;
  short *psVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *__s;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long lVar16;
  byte bVar17;
  byte bVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  byte *pbVar23;
  long in_x15;
  long lVar24;
  byte *pbVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  int iVar31;
  long lVar32;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar33;
  int unaff_w23;
  undefined4 uVar34;
  long lVar35;
  long unaff_x26;
  byte bVar36;
  uint uVar37;
  ulong uVar38;
  long unaff_x29;
  ulong uVar39;
  long in_stack_00000028;
  long *in_stack_00000030;
  char cStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  iVar11 = (int)unaff_x26;
  if ((int)in_x15 == 0) {
    uVar38 = 0;
  }
  else {
    lVar33 = 0;
    lVar35 = 0;
    uVar38 = 0;
    lVar32 = -unaff_x26;
LAB_011966b4:
    if (iVar11 != 0) {
      lVar16 = 0;
      bVar18 = 0;
      do {
        lVar19 = *(long *)(unaff_x21 + 0x18);
        pcVar15 = (char *)(lVar19 + lVar33 + lVar16);
        cVar4 = *pcVar15;
        if (cVar4 != '\0') {
          if ((lVar16 == 0) || (cVar4 != *(char *)(lVar19 + lVar33 + lVar16 + -1))) {
LAB_0119675c:
            puVar1 = (undefined2 *)(unaff_x20 + (ulong)bVar18 * 4);
            bVar36 = bVar18 + 1;
            *(undefined1 *)((long)puVar1 + 3) = 0xff;
            *puVar1 = 0;
            bVar17 = bVar18;
          }
          else {
            pbVar25 = (byte *)(*(long *)(unaff_x21 + 0x10) + lVar33 + lVar16);
            iVar6 = (uint)*pbVar25 - (uint)pbVar25[-1];
            iVar12 = -iVar6;
            if (-1 < iVar6) {
              iVar12 = iVar6;
            }
            if ((unaff_w23 < iVar12) ||
               (bVar17 = *(byte *)(*(long *)(unaff_x21 + 0x28) + lVar33 + lVar16 + -1),
               bVar36 = bVar18, bVar17 == 0xff)) goto LAB_0119675c;
          }
          if ((lVar35 != 0) && (*pcVar15 == *(char *)(lVar19 + lVar32 + lVar16))) {
            iVar6 = (uint)*(byte *)(*(long *)(unaff_x21 + 0x10) + lVar33 + lVar16) -
                    (uint)*(byte *)(*(long *)(unaff_x21 + 0x10) + lVar32 + lVar16);
            iVar12 = -iVar6;
            if (-1 < iVar6) {
              iVar12 = iVar6;
            }
            if (iVar12 <= unaff_w23) {
              bVar18 = *(byte *)(*(long *)(unaff_x21 + 0x28) + lVar32 + lVar16);
              uVar20 = (ulong)bVar18;
              if (uVar20 != 0xff) {
                psVar2 = (short *)(unaff_x20 + (ulong)bVar17 * 4);
                if (*psVar2 == 0) {
                  *(byte *)((long)psVar2 + 3) = bVar18;
                }
                else if (*(byte *)((long)psVar2 + 3) != bVar18) {
                  *(undefined1 *)(unaff_x20 + (ulong)bVar17 * 4 + 3) = 0xff;
                  goto LAB_011966dc;
                }
                *psVar2 = *psVar2 + 1;
                (&stack0x00000150)[uVar20] = (&stack0x00000150)[uVar20] + '\x01';
              }
            }
          }
LAB_011966dc:
          *(byte *)(*(long *)(unaff_x21 + 0x28) + lVar33 + lVar16) = bVar17;
          bVar18 = bVar36;
        }
        lVar16 = lVar16 + 1;
      } while (unaff_x26 != lVar16);
      if (bVar18 != 0) {
        uVar20 = (ulong)bVar18;
        pbVar25 = (byte *)(unaff_x20 + 2);
        do {
          bVar36 = (byte)uVar38;
          bVar18 = pbVar25[1];
          if (((ulong)bVar18 == 0xff) ||
             ((ushort)(byte)(&stack0x00000150)[bVar18] != *(ushort *)(pbVar25 + -2))) {
            if ((~(uint)uVar38 & 0xff) == 0) {
              uVar34 = 0x80000010;
              if (in_stack_00000030 == (long *)0x0) goto LAB_01196f60;
              goto LAB_01196f4c;
            }
            uVar38 = (ulong)((uint)uVar38 + 1);
            bVar18 = bVar36;
          }
          uVar20 = uVar20 - 1;
          *pbVar25 = bVar18;
          pbVar25 = pbVar25 + 4;
        } while (uVar20 != 0);
      }
      if (iVar11 != 0) {
        lVar16 = 0;
        do {
          lVar19 = *(long *)(unaff_x21 + 0x28) + lVar33;
          uVar20 = (ulong)*(byte *)(lVar19 + lVar16);
          if (uVar20 != 0xff) {
            *(undefined1 *)(lVar19 + lVar16) = *(undefined1 *)(unaff_x20 + uVar20 * 4 + 2);
          }
          lVar16 = lVar16 + 1;
        } while (unaff_x26 != lVar16);
      }
    }
    lVar35 = lVar35 + 1;
    lVar33 = lVar33 + unaff_x26;
    lVar32 = lVar32 + unaff_x26;
    if (lVar35 != in_x15) {
      if ((uVar38 & 0xff) != 0) {
        __memset_chk(&stack0x00000150,0,uVar38 & 0xff,0x100);
        in_x15 = unaff_x22;
      }
      goto LAB_011966b4;
    }
  }
  uVar37 = (uint)uVar38;
  __s = (void *)(**(code **)(*in_stack_00000030 + 0x18))
                          (in_stack_00000030,((uVar37 & 0xff) + (uVar37 & 0xff) * 2) * 8);
  uVar34 = 0x80000004;
  if (__s != (void *)0x0) {
    uVar20 = uVar38 & 0xff;
    memset(__s,0,(uVar20 + (uVar38 & 0xff) * 2) * 8);
    if ((uVar38 & 0xff) != 0) {
      if ((uVar37 & 0xff) == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar38 & 0xfe;
        puVar14 = (undefined1 *)((long)__s + 0x2d);
        uVar21 = uVar13;
        do {
          puVar14[-0x18] = 0xff;
          *puVar14 = 0xff;
          uVar21 = uVar21 - 2;
          puVar14 = puVar14 + 0x30;
        } while (uVar21 != 0);
        if (uVar13 == (uVar38 & 0xff)) goto LAB_0119694c;
      }
      lVar35 = uVar20 - uVar13;
      puVar14 = (undefined1 *)((long)__s + uVar13 * 0x18 + 0x15);
      do {
        lVar35 = lVar35 + -1;
        *puVar14 = 0xff;
        puVar14 = puVar14 + 0x18;
      } while (lVar35 != 0);
    }
LAB_0119694c:
    if ((int)unaff_x22 != 0) {
      lVar33 = 0;
      lVar35 = 0;
      lVar32 = -unaff_x26;
      do {
        if (iVar11 != 0) {
          lVar16 = 0;
          do {
            lVar19 = *(long *)(unaff_x21 + 0x28);
            bVar18 = *(byte *)(lVar19 + lVar33 + lVar16);
            uVar21 = (ulong)bVar18;
            if (uVar21 != 0xff) {
              piVar30 = (int *)((long)__s + uVar21 * 0x18);
              *piVar30 = *piVar30 + 1;
              lVar24 = *(long *)(unaff_x21 + 0x18);
              lVar3 = lVar24 + lVar33;
              *(undefined1 *)((long)piVar30 + 0x16) = *(undefined1 *)(lVar3 + lVar16);
              if ((lVar35 != 0) &&
                 (*(char *)(lVar3 + lVar16) == *(char *)(lVar24 + lVar32 + lVar33 + lVar16))) {
                iVar6 = (uint)*(byte *)(*(long *)(unaff_x21 + 0x10) + lVar33 + lVar16) -
                        (uint)*(byte *)(*(long *)(unaff_x21 + 0x10) + lVar32 + lVar33 + lVar16);
                iVar12 = -iVar6;
                if (-1 < iVar6) {
                  iVar12 = iVar6;
                }
                if (iVar12 <= unaff_w23) {
                  bVar36 = *(byte *)(lVar19 + lVar32 + lVar33 + lVar16);
                  uVar13 = (ulong)bVar36;
                  if ((uVar13 != 0xff) && (bVar36 != bVar18)) {
                    pbVar25 = (byte *)((long)__s + uVar21 * 0x18 + 0x14);
                    uVar27 = (ulong)*pbVar25;
                    if ((uVar27 == 0) ||
                       (*(byte *)((long)__s + uVar27 + uVar21 * 0x18 + 3) != bVar36)) {
                      *(byte *)((long)__s + uVar27 + uVar21 * 0x18 + 4) = bVar36;
                      *pbVar25 = *pbVar25 + 1;
                    }
                    pbVar25 = (byte *)((long)__s + uVar13 * 0x18 + 0x14);
                    uVar21 = (ulong)*pbVar25;
                    if ((uVar21 == 0) ||
                       (*(byte *)((long)__s + uVar21 + uVar13 * 0x18 + 3) != bVar18)) {
                      *(byte *)((long)__s + uVar21 + uVar13 * 0x18 + 4) = bVar18;
                      *pbVar25 = *pbVar25 + 1;
                    }
                  }
                }
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != unaff_x26);
        }
        lVar35 = lVar35 + 1;
        lVar33 = lVar33 + unaff_x26;
      } while (lVar35 != unaff_x22);
    }
    if ((uVar38 & 0xff) == 0) {
LAB_01196d68:
      in_stack_00000138 = 0;
      in_stack_00000130 = 0;
      in_stack_00000148 = 0;
      in_stack_00000140 = 0;
      in_stack_00000118 = 0;
      in_stack_00000110 = 0;
      in_stack_00000128 = 0;
      in_stack_00000120 = 0;
      in_stack_000000f8 = 0;
      in_stack_000000f0 = 0;
      in_stack_00000108 = 0;
      in_stack_00000100 = 0;
      in_stack_000000d8 = 0;
      in_stack_000000d0 = 0;
      in_stack_000000e8 = 0;
      in_stack_000000e0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000058 = 0;
      _cStack0000000000000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
    }
    else {
      uVar21 = uVar38 & 0xff;
      if ((uVar37 & 0xff) == 1) {
        uVar27 = 0;
        iVar11 = 0;
LAB_01196aec:
        lVar35 = uVar20 - uVar27;
        puVar14 = (undefined1 *)((long)__s + uVar27 * 0x18 + 0x15);
        do {
          *puVar14 = (char)iVar11;
          lVar35 = lVar35 + -1;
          iVar11 = iVar11 + 1;
          puVar14 = puVar14 + 0x18;
        } while (lVar35 != 0);
      }
      else {
        uVar27 = uVar38 & 0xfe;
        uVar13 = 0;
        iVar11 = (int)uVar27;
        pbVar25 = (byte *)((long)__s + 0x2d);
        do {
          bVar18 = (byte)uVar13;
          pbVar25[-0x18] = bVar18;
          uVar13 = uVar13 + 2;
          *pbVar25 = bVar18 | 1;
          pbVar25 = pbVar25 + 0x30;
        } while (uVar27 != uVar13);
        if (uVar27 != uVar21) goto LAB_01196aec;
      }
      if ((uVar38 & 0xff) == 0) goto LAB_01196d68;
      uVar27 = uVar38 & 0xfe;
      uVar13 = 0;
      do {
        uVar7 = (ulong)*(byte *)((long)__s + uVar13 * 0x18 + 0x14);
        if (uVar7 != 0) {
          cVar4 = *(char *)((long)__s + uVar13 * 0x18 + 0x15);
          uVar8 = 0;
          iVar11 = 0;
          uVar29 = 0xffffffff;
          do {
            bVar18 = *(byte *)((long)__s + uVar8 + uVar13 * 0x18 + 4);
            uVar9 = (ulong)bVar18;
            cVar5 = *(char *)((long)__s + uVar9 * 0x18 + 0x15);
            iVar12 = iVar11;
            uVar28 = uVar29;
            if (((cVar4 != cVar5) &&
                (*(char *)((long)__s + uVar13 * 0x18 + 0x16) ==
                 *(char *)((long)__s + uVar9 * 0x18 + 0x16))) &&
               (iVar6 = *(int *)((long)__s + uVar9 * 0x18), iVar11 < iVar6)) {
              uVar9 = 0;
              iVar31 = 0;
              pbVar25 = (byte *)((long)__s + 5);
              lVar35 = (long)__s + 4;
              do {
                if (*(char *)((long)__s + uVar9 * 0x18 + 0x15) == cVar4) {
                  bVar36 = *(byte *)((long)__s + uVar9 * 0x18 + 0x14);
                  uVar39 = (ulong)bVar36;
                  if (uVar39 != 0) {
                    if (bVar36 == 1) {
                      uVar26 = 0;
                    }
                    else {
                      uVar26 = uVar39 & 0xfe;
                      iVar12 = 0;
                      uVar22 = uVar26;
                      pbVar23 = pbVar25;
                      do {
                        if (*(char *)((long)__s + (ulong)pbVar23[-1] * 0x18 + 0x15) == cVar5) {
                          iVar31 = iVar31 + 1;
                        }
                        if (*(char *)((long)__s + (ulong)*pbVar23 * 0x18 + 0x15) == cVar5) {
                          iVar12 = iVar12 + 1;
                        }
                        uVar22 = uVar22 - 2;
                        pbVar23 = pbVar23 + 2;
                      } while (uVar22 != 0);
                      iVar31 = iVar12 + iVar31;
                      if (uVar26 == uVar39) goto LAB_01196bf8;
                    }
                    lVar33 = uVar39 - uVar26;
                    pbVar23 = (byte *)(lVar35 + uVar26);
                    do {
                      if (*(char *)((long)__s + (ulong)*pbVar23 * 0x18 + 0x15) == cVar5) {
                        iVar31 = iVar31 + 1;
                      }
                      lVar33 = lVar33 + -1;
                      pbVar23 = pbVar23 + 1;
                    } while (lVar33 != 0);
                  }
                }
LAB_01196bf8:
                uVar9 = uVar9 + 1;
                pbVar25 = pbVar25 + 0x18;
                lVar35 = lVar35 + 0x18;
              } while (uVar9 != uVar20);
              iVar12 = iVar6;
              uVar28 = (uint)bVar18;
              if (iVar31 != 1) {
                iVar12 = iVar11;
                uVar28 = uVar29;
              }
            }
            iVar11 = iVar12;
            uVar8 = uVar8 + 1;
            uVar29 = uVar28;
          } while (uVar8 < uVar7);
          if (uVar28 != 0xffffffff) {
            cVar4 = *(char *)((long)__s + uVar13 * 0x18 + 0x15);
            cVar5 = *(char *)((long)__s + (long)(int)uVar28 * 0x18 + 0x15);
            uVar7 = uVar27;
            pcVar15 = (char *)((long)__s + 0x2d);
            if ((uVar37 & 0xff) < 2) {
              uVar7 = 0;
            }
            else {
              do {
                if (pcVar15[-0x18] == cVar4) {
                  pcVar15[-0x18] = cVar5;
                }
                if (*pcVar15 == cVar4) {
                  *pcVar15 = cVar5;
                }
                uVar7 = uVar7 - 2;
                pcVar15 = pcVar15 + 0x30;
              } while (uVar7 != 0);
              uVar7 = uVar27;
              if (uVar27 == uVar21) goto LAB_01196b50;
            }
            pcVar15 = (char *)((long)__s + uVar7 * 0x18 + 0x15);
            lVar35 = uVar20 - uVar7;
            do {
              if (*pcVar15 == cVar4) {
                *pcVar15 = cVar5;
              }
              lVar35 = lVar35 + -1;
              pcVar15 = pcVar15 + 0x18;
            } while (lVar35 != 0);
          }
        }
LAB_01196b50:
        uVar13 = uVar13 + 1;
      } while (uVar13 != (uVar38 & 0xff));
      in_stack_00000138 = 0;
      in_stack_00000130 = 0;
      in_stack_00000148 = 0;
      in_stack_00000140 = 0;
      in_stack_00000118 = 0;
      in_stack_00000110 = 0;
      in_stack_00000128 = 0;
      in_stack_00000120 = 0;
      in_stack_000000f8 = 0;
      in_stack_000000f0 = 0;
      in_stack_00000108 = 0;
      in_stack_00000100 = 0;
      in_stack_000000d8 = 0;
      in_stack_000000d0 = 0;
      in_stack_000000e8 = 0;
      in_stack_000000e0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_00000078 = 0;
      in_stack_00000070 = 0;
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000058 = 0;
      _cStack0000000000000050 = 0;
      in_stack_00000068 = 0;
      in_stack_00000060 = 0;
      if ((uVar38 & 0xff) != 0) {
        if ((uVar37 & 0xff) == 1) {
          uVar27 = 0;
        }
        else {
          uVar27 = uVar38 & 0xfe;
          pbVar25 = (byte *)((long)__s + 0x2d);
          uVar13 = uVar27;
          do {
            bVar18 = *pbVar25;
            uVar13 = uVar13 - 2;
            *(undefined1 *)((long)&stack0x00000050 + (ulong)pbVar25[-0x18]) = 1;
            *(undefined1 *)((long)&stack0x00000050 + (ulong)bVar18) = 1;
            pbVar25 = pbVar25 + 0x30;
          } while (uVar13 != 0);
          if (uVar27 == uVar21) goto LAB_01196e30;
        }
        lVar35 = uVar20 - uVar27;
        pbVar25 = (byte *)((long)__s + uVar27 * 0x18 + 0x15);
        do {
          lVar35 = lVar35 + -1;
          *(undefined1 *)((long)&stack0x00000050 + (ulong)*pbVar25) = 1;
          pbVar25 = pbVar25 + 0x18;
        } while (lVar35 != 0);
      }
    }
LAB_01196e30:
    lVar35 = 0;
    cVar5 = '\0';
    cVar4 = cStack0000000000000050;
    while( true ) {
      cVar10 = cVar5;
      if (cVar4 != '\0') {
        cVar10 = cVar5 + '\x01';
        *(char *)((long)&stack0x00000050 + lVar35) = cVar5;
      }
      if (lVar35 + 1 == 0x100) break;
      cVar4 = *(char *)((long)&stack0x00000050 + lVar35 + 1);
      lVar35 = lVar35 + 1;
      cVar5 = cVar10;
    }
    if ((uVar38 & 0xff) != 0) {
      if ((uVar37 & 0xff) == 1) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar38 & 0xfe;
        pbVar25 = (byte *)((long)__s + 0x2d);
        uVar21 = uVar38;
        do {
          uVar21 = uVar21 - 2;
          bVar18 = *(byte *)((long)&stack0x00000050 + (ulong)*pbVar25);
          pbVar25[-0x18] = *(byte *)((long)&stack0x00000050 + (ulong)pbVar25[-0x18]);
          *pbVar25 = bVar18;
          pbVar25 = pbVar25 + 0x30;
        } while (uVar21 != 0);
        if (uVar38 == uVar20) goto LAB_01196ee4;
      }
      lVar35 = uVar20 - uVar38;
      pbVar25 = (byte *)((long)__s + uVar38 * 0x18 + 0x15);
      do {
        lVar35 = lVar35 + -1;
        *pbVar25 = *(byte *)((long)&stack0x00000050 + (ulong)*pbVar25);
        pbVar25 = pbVar25 + 0x18;
      } while (lVar35 != 0);
    }
LAB_01196ee4:
    *(char *)(unaff_x21 + 8) = cVar10;
    if ((int)(unaff_x22 * unaff_x26) != 0) {
      lVar35 = 0;
      do {
        uVar38 = (ulong)*(byte *)(*(long *)(unaff_x21 + 0x28) + lVar35);
        if (uVar38 != 0xff) {
          *(undefined1 *)(*(long *)(unaff_x21 + 0x28) + lVar35) =
               *(undefined1 *)((long)__s + uVar38 * 0x18 + 0x15);
        }
        lVar35 = lVar35 + 1;
      } while (unaff_x22 * unaff_x26 - lVar35 != 0);
    }
    uVar34 = 0x40000000;
    if (in_stack_00000030 == (long *)0x0) goto LAB_01196f60;
  }
  (**(code **)(*in_stack_00000030 + 0x20))(in_stack_00000030,__s);
LAB_01196f4c:
  (**(code **)(*in_stack_00000030 + 0x20))(in_stack_00000030);
LAB_01196f60:
  if (*(long *)(in_stack_00000028 + 0x28) != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar34;
}

