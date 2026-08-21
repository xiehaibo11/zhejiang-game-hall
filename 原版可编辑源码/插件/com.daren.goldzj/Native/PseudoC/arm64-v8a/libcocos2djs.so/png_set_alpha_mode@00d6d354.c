
void png_set_alpha_mode(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                       ulong param_5,long param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  void *__s;
  byte *pbVar24;
  long *plVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined4 uVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  uint uVar36;
  long lVar37;
  int iVar38;
  ulong uVar39;
  long *plVar40;
  long lVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  double dVar45;
  undefined1 auVar46 [16];
  
  bVar17 = false;
  bVar18 = true;
  bVar19 = false;
  if (param_1 < 128.0) {
    bVar17 = false;
    bVar18 = false;
    bVar19 = true;
    if (!NAN(param_1)) {
      bVar17 = param_1 < 0.0;
      bVar18 = param_1 == 0.0;
      bVar19 = false;
    }
  }
  dVar45 = param_1 * 100000.0;
  if (bVar18 || bVar17 != bVar19) {
    dVar45 = param_1;
  }
  dVar45 = (double)(long)(dVar45 + 0.5);
  if ((dVar45 <= 2147483647.0) && (-2147483647.0 <= dVar45)) {
    png_set_alpha_mode_fixed(param_2,param_3,(int)dVar45);
    return;
  }
  auVar46 = png_fixed_error(param_2,"gamma value");
  pbVar24 = auVar46._8_8_;
  lVar20 = auVar46._0_8_;
  uVar39 = param_4 & 0xffffffff;
  if (lVar20 == 0) {
    return;
  }
  if ((*(uint *)(lVar20 + 0x168) >> 6 & 1) != 0) {
    png_app_error(lVar20,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  *(uint *)(lVar20 + 0x168) = *(uint *)(lVar20 + 0x168) | 0x4000;
  *(uint *)(lVar20 + 0x16c) = *(uint *)(lVar20 + 0x16c) | 0x40;
  iVar38 = (int)param_4;
  if (param_7 == 0) {
    puVar21 = (undefined1 *)png_malloc(lVar20,uVar39);
    *(undefined1 **)(lVar20 + 0x3c8) = puVar21;
    if ((0 < iVar38) && (*puVar21 = 0, iVar38 != 1)) {
      uVar28 = 1;
      do {
        *(char *)(*(long *)(lVar20 + 0x3c8) + uVar28) = (char)uVar28;
        uVar28 = uVar28 + 1;
      } while (uVar39 != uVar28);
    }
  }
  iVar42 = (int)param_5;
  if (iVar38 <= iVar42) {
    lVar29 = *(long *)(lVar20 + 0x298);
    goto joined_r0x00d6db18;
  }
  puVar21 = (undefined1 *)png_malloc(lVar20,uVar39);
  if (param_6 == 0) {
    *(undefined1 **)(lVar20 + 0x480) = puVar21;
    uVar23 = png_malloc(lVar20,uVar39);
    *(undefined8 *)(lVar20 + 0x488) = uVar23;
    if (0 < iVar38) {
      uVar28 = 0;
      do {
        *(char *)(*(long *)(lVar20 + 0x480) + uVar28) = (char)uVar28;
        *(char *)(*(long *)(lVar20 + 0x488) + uVar28) = (char)uVar28;
        uVar28 = uVar28 + 1;
      } while (uVar39 != uVar28);
    }
    plVar40 = (long *)(lVar20 + 0x480);
    lVar30 = png_calloc(lVar20,0x1808);
    puVar22 = (undefined8 *)0x0;
    lVar29 = 0x60;
    param_4 = param_4 & 0xffffffff;
LAB_00d6d638:
    iVar43 = (int)param_4;
    iVar44 = 1;
    lVar27 = 0;
    do {
      if (iVar43 + -1 <= lVar27) {
        if (puVar22 != (undefined8 *)0x0) {
          lVar27 = 0;
          goto LAB_00d6d73c;
        }
        break;
      }
      lVar37 = (long)iVar44;
      if (lVar27 + 1 < (long)iVar43) {
        pbVar34 = pbVar24 + lVar37 + (long)iVar44 * 2 + 1;
        pbVar35 = pbVar24 + lVar27 * 3;
        do {
          iVar15 = (uint)*pbVar35 - (uint)pbVar34[-1];
          iVar14 = -iVar15;
          if (-1 < iVar15) {
            iVar14 = iVar15;
          }
          iVar12 = (uint)pbVar35[1] - (uint)*pbVar34;
          iVar15 = -iVar12;
          if (-1 < iVar12) {
            iVar15 = iVar12;
          }
          iVar13 = (uint)pbVar35[2] - (uint)pbVar34[1];
          iVar12 = -iVar13;
          if (-1 < iVar13) {
            iVar12 = iVar13;
          }
          lVar41 = (long)(iVar15 + iVar14 + iVar12);
          if (lVar41 <= lVar29) {
            puVar22 = (undefined8 *)png_malloc_warn(lVar20,0x10);
            if (puVar22 == (undefined8 *)0x0) break;
            lVar41 = lVar41 * 8;
            *(char *)(puVar22 + 1) = (char)lVar27;
            *(char *)((long)puVar22 + 9) = (char)lVar37;
            uVar23 = *(undefined8 *)(lVar30 + lVar41);
            *(undefined8 **)(lVar30 + lVar41) = puVar22;
            *puVar22 = uVar23;
          }
          lVar37 = lVar37 + 1;
          pbVar34 = pbVar34 + 3;
        } while (lVar37 < iVar43);
      }
      iVar44 = iVar44 + 1;
      lVar27 = lVar27 + 1;
    } while (puVar22 != (undefined8 *)0x0);
    goto LAB_00d6d900;
  }
  plVar40 = (long *)(lVar20 + 0x478);
  *(undefined1 **)(lVar20 + 0x478) = puVar21;
  if ((0 < iVar38) && (*puVar21 = 0, iVar38 != 1)) {
    uVar28 = 1;
    do {
      *(char *)(*plVar40 + uVar28) = (char)uVar28;
      uVar28 = uVar28 + 1;
    } while (uVar39 != uVar28);
  }
  lVar29 = (long)iVar38;
LAB_00d6d470:
  if (iVar42 < lVar29) {
    lVar30 = 0;
    lVar29 = lVar29 + -1;
    bVar17 = true;
    do {
      lVar30 = (long)(int)lVar30;
      do {
        if (lVar29 <= lVar30) {
          if (bVar17) goto LAB_00d6d4d4;
          goto LAB_00d6d470;
        }
        pbVar34 = (byte *)(*plVar40 + lVar30);
        bVar8 = *pbVar34;
        bVar9 = pbVar34[1];
        lVar30 = lVar30 + 1;
      } while (*(ushort *)(param_6 + (ulong)bVar9 * 2) <= *(ushort *)(param_6 + (ulong)bVar8 * 2));
      *(byte *)(*plVar40 + lVar30 + -1) = bVar9;
      bVar17 = false;
      *(byte *)(*plVar40 + lVar30) = bVar8;
    } while( true );
  }
LAB_00d6d4d4:
  if (param_7 == 0) {
    if (0 < iVar42) {
      uVar28 = 0;
      param_4 = param_4 & 0xffffffff;
      do {
        if (iVar42 <= (int)(uint)*(byte *)(*plVar40 + uVar28)) {
          uVar31 = (ulong)(int)param_4;
          pbVar34 = pbVar24 + uVar31 + (long)(int)param_4 * 2;
          do {
            pbVar35 = pbVar34;
            lVar29 = *plVar40 + uVar31;
            uVar31 = uVar31 - 1;
            pbVar34 = pbVar35 + -3;
          } while (iVar42 <= (int)(uint)*(byte *)(lVar29 + -1));
          bVar8 = pbVar35[-1];
          uVar11 = *(undefined2 *)pbVar34;
          pbVar33 = pbVar24 + uVar28 * 3;
          pbVar35[-1] = pbVar33[2];
          *(undefined2 *)pbVar34 = *(undefined2 *)pbVar33;
          pbVar33[2] = bVar8;
          *(undefined2 *)pbVar33 = uVar11;
          *(char *)(*(long *)(lVar20 + 0x3c8) + uVar31) = (char)uVar28;
          *(char *)(*(long *)(lVar20 + 0x3c8) + uVar28) = (char)uVar31;
          param_4 = uVar31 & 0xffffffff;
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != (param_5 & 0xffffffff));
    }
    if (0 < iVar38) {
      if (iVar42 < 2) {
        uVar28 = 0;
        do {
          if (iVar42 <= (int)(uint)*(byte *)(*(long *)(lVar20 + 0x3c8) + uVar28)) {
            *(undefined1 *)(*(long *)(lVar20 + 0x3c8) + uVar28) = 0;
          }
          uVar28 = uVar28 + 1;
        } while (uVar39 != uVar28);
      }
      else {
        uVar28 = 0;
        do {
          bVar8 = *(byte *)(*(long *)(lVar20 + 0x3c8) + uVar28);
          if (iVar42 <= (int)(uint)bVar8) {
            pbVar34 = pbVar24 + (ulong)bVar8 * 3;
            iVar44 = (uint)*pbVar34 - (uint)*pbVar24;
            iVar38 = -iVar44;
            if (-1 < iVar44) {
              iVar38 = iVar44;
            }
            iVar43 = (uint)pbVar34[1] - (uint)pbVar24[1];
            iVar44 = -iVar43;
            if (-1 < iVar43) {
              iVar44 = iVar43;
            }
            iVar14 = (uint)pbVar34[2] - (uint)pbVar24[2];
            iVar43 = -iVar14;
            if (-1 < iVar14) {
              iVar43 = iVar14;
            }
            uVar32 = 0;
            uVar31 = 1;
            pbVar35 = pbVar24 + 5;
            iVar38 = iVar44 + iVar38 + iVar43;
            do {
              iVar43 = (uint)*pbVar34 - (uint)pbVar35[-2];
              iVar44 = -iVar43;
              if (-1 < iVar43) {
                iVar44 = iVar43;
              }
              iVar14 = (uint)pbVar34[1] - (uint)pbVar35[-1];
              iVar43 = -iVar14;
              if (-1 < iVar14) {
                iVar43 = iVar14;
              }
              iVar15 = (uint)pbVar34[2] - (uint)*pbVar35;
              iVar14 = -iVar15;
              if (-1 < iVar15) {
                iVar14 = iVar15;
              }
              iVar14 = iVar43 + iVar44 + iVar14;
              uVar16 = (int)uVar31;
              if (iVar38 <= iVar14) {
                iVar14 = iVar38;
                uVar16 = uVar32;
              }
              uVar32 = uVar16;
              uVar31 = uVar31 + 1;
              pbVar35 = pbVar35 + 3;
              iVar38 = iVar14;
            } while ((param_5 & 0xffffffff) != uVar31);
            *(char *)(*(long *)(lVar20 + 0x3c8) + uVar28) = (char)uVar32;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar39);
      }
    }
  }
  else if (0 < iVar42) {
    lVar29 = *plVar40;
    uVar28 = 0;
    do {
      if (iVar42 <= (int)(uint)*(byte *)(lVar29 + uVar28)) {
        iVar38 = (int)uVar39;
        pbVar34 = pbVar24 + (long)iVar38 + (long)iVar38 * 2;
        pbVar35 = (byte *)(lVar29 + -1 + (long)iVar38);
        do {
          pbVar33 = pbVar34;
          bVar8 = *pbVar35;
          pbVar34 = pbVar33 + -3;
          uVar39 = (ulong)((int)uVar39 - 1);
          pbVar35 = pbVar35 + -1;
        } while (iVar42 <= (int)(uint)bVar8);
        (pbVar24 + uVar28 * 3)[2] = pbVar33[-1];
        *(undefined2 *)(pbVar24 + uVar28 * 3) = *(undefined2 *)pbVar34;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != (param_5 & 0xffffffff));
  }
  png_free(lVar20,*(undefined8 *)(lVar20 + 0x478));
LAB_00d6db10:
  *plVar40 = 0;
  lVar29 = *(long *)(lVar20 + 0x298);
  uVar39 = param_5 & 0xffffffff;
  iVar38 = iVar42;
joined_r0x00d6db18:
  if (lVar29 == 0) {
    iVar38 = (int)uVar39;
    *(byte **)(lVar20 + 0x298) = pbVar24;
  }
  *(short *)(lVar20 + 0x2a0) = (short)iVar38;
  if (param_7 == 0) {
    return;
  }
  uVar23 = png_calloc(lVar20,0x8000);
  *(undefined8 *)(lVar20 + 0x3c0) = uVar23;
  __s = (void *)png_malloc(lVar20,0x8000);
  memset(__s,0xff,0x8000);
  if (0 < iVar38) {
    lVar29 = 0;
    do {
      pbVar34 = pbVar24 + lVar29 * 3;
      iVar42 = 0;
      uVar1 = (uint)(*pbVar34 >> 3);
      uVar2 = (uint)(pbVar34[1] >> 3);
      bVar8 = pbVar34[2] >> 3;
      do {
        iVar44 = 0;
        uVar3 = iVar42 - uVar1;
        if (iVar42 - uVar1 == 0 || iVar42 < (int)uVar1) {
          uVar3 = uVar1 - iVar42;
        }
        do {
          uVar4 = iVar44 - uVar2;
          if (iVar44 - uVar2 == 0 || iVar44 < (int)uVar2) {
            uVar4 = uVar2 - iVar44;
          }
          uVar36 = 0;
          uVar5 = uVar3;
          if ((int)uVar3 <= (int)uVar4) {
            uVar5 = uVar4;
          }
          uVar26 = (uint)bVar8;
          do {
            lVar30 = (long)(int)(iVar42 << 10 | iVar44 << 5 | uVar36);
            uVar6 = uVar36 - bVar8;
            if ((int)uVar36 <= (int)(uint)bVar8) {
              uVar6 = uVar26;
            }
            uVar7 = uVar5;
            if ((int)uVar5 <= (int)uVar6) {
              uVar7 = uVar6;
            }
            iVar43 = uVar4 + uVar3 + uVar6 + uVar7;
            if (iVar43 < (int)(uint)*(byte *)((long)__s + lVar30)) {
              lVar27 = *(long *)(lVar20 + 0x3c0);
              *(char *)((long)__s + lVar30) = (char)iVar43;
              *(char *)(lVar27 + lVar30) = (char)lVar29;
            }
            uVar36 = uVar36 + 1;
            uVar26 = uVar26 - 1;
          } while (uVar36 != 0x20);
          iVar44 = iVar44 + 1;
        } while (iVar44 != 0x20);
        iVar42 = iVar42 + 1;
      } while (iVar42 != 0x20);
      lVar29 = lVar29 + 1;
    } while (lVar29 < iVar38);
  }
  png_free(lVar20,__s);
  return;
LAB_00d6d73c:
  do {
    plVar25 = *(long **)(lVar30 + lVar27 * 8);
    if (plVar25 != (long *)0x0) {
      if (param_7 == 0) {
        do {
          lVar37 = *plVar40;
          bVar8 = *(byte *)(plVar25 + 1);
          iVar44 = (int)param_4;
          if (((int)(uint)*(byte *)(lVar37 + (ulong)bVar8) < iVar44) &&
             (bVar9 = *(byte *)((long)plVar25 + 9),
             (int)(uint)*(byte *)(lVar37 + (ulong)bVar9) < iVar44)) {
            bVar17 = (param_4 & 1) != 0;
            uVar1 = (uint)bVar9;
            if (bVar17) {
              uVar1 = (uint)bVar8;
            }
            uVar28 = (ulong)uVar1;
            param_4 = (long)iVar44 - 1;
            bVar10 = *(byte *)(lVar37 + uVar28);
            uVar2 = (uint)bVar8;
            if (bVar17) {
              uVar2 = (uint)bVar9;
            }
            (pbVar24 + (ulong)bVar10 * 3)[2] = (pbVar24 + param_4 * 3)[2];
            *(undefined2 *)(pbVar24 + (ulong)bVar10 * 3) = *(undefined2 *)(pbVar24 + param_4 * 3);
            if (0 < iVar38) {
              uVar31 = 0;
              do {
                lVar41 = *(long *)(lVar20 + 0x3c8);
                bVar8 = *(byte *)(lVar41 + uVar31);
                if (bVar8 == *(byte *)(lVar37 + uVar28)) {
                  *(undefined1 *)(lVar41 + uVar31) = *(undefined1 *)(lVar37 + (ulong)uVar2);
                  lVar41 = *(long *)(lVar20 + 0x3c8);
                  bVar8 = *(byte *)(lVar41 + uVar31);
                }
                if ((uint)param_4 == (uint)bVar8) {
                  *(undefined1 *)(lVar41 + uVar31) = *(undefined1 *)(*plVar40 + uVar28);
                }
                lVar37 = *plVar40;
                uVar31 = uVar31 + 1;
              } while (uVar39 != uVar31);
            }
            *(undefined1 *)(lVar37 + (ulong)*(byte *)(*(long *)(lVar20 + 0x488) + param_4)) =
                 *(undefined1 *)(lVar37 + uVar28);
            *(undefined1 *)
             (*(long *)(lVar20 + 0x488) + (ulong)*(byte *)(*(long *)(lVar20 + 0x480) + uVar28)) =
                 *(undefined1 *)(*(long *)(lVar20 + 0x488) + param_4);
            *(char *)(*(long *)(lVar20 + 0x480) + uVar28) = (char)param_4;
            *(char *)(*(long *)(lVar20 + 0x488) + param_4) = (char)uVar1;
          }
        } while ((iVar42 < (int)param_4) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0));
      }
      else {
        do {
          lVar37 = *plVar40;
          iVar44 = (int)param_4;
          if (((int)(uint)*(byte *)(lVar37 + (ulong)*(byte *)(plVar25 + 1)) < iVar44) &&
             ((int)(uint)*(byte *)(lVar37 + (ulong)*(byte *)((long)plVar25 + 9)) < iVar44)) {
            bVar8 = *(byte *)((long)plVar25 + 9);
            if ((param_4 & 1) != 0) {
              bVar8 = *(byte *)(plVar25 + 1);
            }
            uVar28 = (ulong)bVar8;
            param_4 = (long)iVar44 - 1;
            bVar9 = *(byte *)(lVar37 + uVar28);
            (pbVar24 + (ulong)bVar9 * 3)[2] = (pbVar24 + param_4 * 3)[2];
            *(undefined2 *)(pbVar24 + (ulong)bVar9 * 3) = *(undefined2 *)(pbVar24 + param_4 * 3);
            *(undefined1 *)(lVar37 + (ulong)*(byte *)(*(long *)(lVar20 + 0x488) + param_4)) =
                 *(undefined1 *)(lVar37 + uVar28);
            *(undefined1 *)
             (*(long *)(lVar20 + 0x488) + (ulong)*(byte *)(*(long *)(lVar20 + 0x480) + uVar28)) =
                 *(undefined1 *)(*(long *)(lVar20 + 0x488) + param_4);
            *(char *)(*(long *)(lVar20 + 0x480) + uVar28) = (char)param_4;
            *(byte *)(*(long *)(lVar20 + 0x488) + param_4) = bVar8;
          }
        } while ((iVar42 < (int)param_4) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0));
      }
      if ((int)param_4 <= iVar42) break;
    }
    bVar17 = lVar27 < lVar29;
    lVar27 = lVar27 + 1;
  } while (bVar17);
LAB_00d6d900:
  lVar27 = 0;
  do {
    plVar25 = *(long **)(lVar30 + lVar27 * 8);
    if (plVar25 != (long *)0x0) {
      do {
        plVar25 = (long *)*plVar25;
        png_free(lVar20);
      } while (plVar25 != (long *)0x0);
      puVar22 = (undefined8 *)0x0;
    }
    *(undefined8 *)(lVar30 + lVar27 * 8) = 0;
    lVar27 = lVar27 + 1;
  } while (lVar27 != 0x301);
  lVar29 = lVar29 + 0x60;
  if ((int)param_4 <= iVar42) goto code_r0x00d6d940;
  goto LAB_00d6d638;
code_r0x00d6d940:
  png_free(lVar20,lVar30);
  png_free(lVar20,*(undefined8 *)(lVar20 + 0x488));
  png_free(lVar20,*(undefined8 *)(lVar20 + 0x480));
  *(undefined8 *)(lVar20 + 0x488) = 0;
  goto LAB_00d6db10;
}

