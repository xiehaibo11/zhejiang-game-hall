
/* WARNING: Removing unreachable block (ram,0x01179a44) */
/* WARNING: Removing unreachable block (ram,0x01179dc4) */
/* WARNING: Removing unreachable block (ram,0x01179984) */
/* WARNING: Removing unreachable block (ram,0x0117aba4) */
/* WARNING: Removing unreachable block (ram,0x0117a530) */
/* WARNING: Removing unreachable block (ram,0x0117abc4) */
/* WARNING: Removing unreachable block (ram,0x01179fa8) */
/* WARNING: Removing unreachable block (ram,0x0117a638) */
/* WARNING: Removing unreachable block (ram,0x0117a620) */
/* WARNING: Type propagation algorithm not settling */

int inflate(long *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uVar10;
  void *__dest;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ushort *puVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined2 uVar26;
  undefined8 *puVar27;
  undefined1 *__dest_00;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  uint *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  int local_7c;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  
  if ((((param_1 == (long *)0x0) || (puVar38 = (uint *)param_1[7], puVar38 == (uint *)0x0)) ||
      (__dest_00 = (undefined1 *)param_1[3], __dest_00 == (undefined1 *)0x0)) ||
     ((pbVar30 = (byte *)*param_1, pbVar30 == (byte *)0x0 && ((int)param_1[1] != 0)))) {
    return -2;
  }
  uVar16 = *puVar38;
  if (uVar16 == 0xb) {
    uVar16 = 0xc;
    *puVar38 = 0xc;
  }
  local_7c = 0;
  uVar28 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 1);
  uVar33 = *(ulong *)(puVar38 + 0x12);
  uVar36 = (ulong)puVar38[0x14];
  puVar1 = puVar38 + 0x154;
  puVar2 = puVar38 + 0x22;
  puVar3 = puVar38 + 0xc4;
  uVar37 = (ulong)uVar4;
  uVar29 = uVar28;
joined_r0x01179860:
  if (0x1e < uVar16) {
    return -2;
  }
LAB_0117adc4:
  uVar32 = (uint)uVar37;
  uVar12 = (uint)uVar36;
  pbVar31 = pbVar30;
  iVar22 = 1;
  switch((long)&switchD_0117add4::switchdataD_0149e384 +
         (long)(int)(&switchD_0117add4::switchdataD_0149e384)[uVar16]) {
  case 0x1179b3c:
    if (uVar12 < 0x10) {
      uVar36 = uVar36 & 0xffffffff;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0x10);
    }
    uVar16 = (uint)uVar33;
    puVar38[4] = uVar16;
    if ((uVar16 & 0xff) == 8) {
      if ((uVar33 & 0xe000) == 0) {
        if (*(uint **)(puVar38 + 10) != (uint *)0x0) {
          **(uint **)(puVar38 + 10) = uVar16 >> 8 & 1;
        }
        if ((uVar16 >> 9 & 1) != 0) {
          local_64 = (undefined1)uVar33;
          local_63 = (undefined1)(uVar33 >> 8);
          uVar10 = crc32(*(undefined8 *)(puVar38 + 6),&local_64,2);
          *(undefined8 *)(puVar38 + 6) = uVar10;
        }
        uVar36 = 0;
        uVar33 = 0;
        *puVar38 = 2;
        goto LAB_01179bf4;
      }
      pcVar14 = "unknown header flags set";
    }
    else {
LAB_01179b8c:
      pcVar14 = "unknown compression method";
    }
    break;
  case 0x1179bec:
    if (uVar12 < 0x20) {
LAB_01179bf4:
      uVar36 = uVar36 & 0xffffffff;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0x20);
    }
    if (*(long *)(puVar38 + 10) != 0) {
      *(ulong *)(*(long *)(puVar38 + 10) + 8) = uVar33;
    }
    if ((*(byte *)((long)puVar38 + 0x11) >> 1 & 1) != 0) {
      local_64 = (undefined1)uVar33;
      local_63 = (undefined1)(uVar33 >> 8);
      local_62 = (undefined1)(uVar33 >> 0x10);
      local_61 = (undefined1)(uVar33 >> 0x18);
      uVar10 = crc32(*(undefined8 *)(puVar38 + 6),&local_64,4);
      *(undefined8 *)(puVar38 + 6) = uVar10;
    }
    uVar36 = 0;
    uVar33 = 0;
    *puVar38 = 3;
LAB_01179c84:
    uVar36 = uVar36 & 0xffffffff;
    pbVar30 = pbVar31;
    do {
      uVar32 = 0;
      if ((int)uVar37 == 0) goto LAB_0117ae10;
      pbVar31 = pbVar30 + 1;
      uVar37 = (ulong)((int)uVar37 - 1);
      uVar11 = uVar36 & 0x3f;
      uVar36 = uVar36 + 8;
      uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
      pbVar30 = pbVar31;
    } while (uVar36 < 0x10);
    goto LAB_01179ca8;
  case 0x1179c7c:
    if (uVar12 < 0x10) goto LAB_01179c84;
LAB_01179ca8:
    lVar34 = *(long *)(puVar38 + 10);
    if (lVar34 != 0) {
      *(uint *)(lVar34 + 0x10) = (uint)uVar33 & 0xff;
      *(int *)(lVar34 + 0x14) = (int)(uVar33 >> 8);
    }
    if ((*(byte *)((long)puVar38 + 0x11) >> 1 & 1) != 0) {
      local_64 = (undefined1)uVar33;
      local_63 = (undefined1)(uVar33 >> 8);
      uVar10 = crc32(*(undefined8 *)(puVar38 + 6),&local_64,2);
      *(undefined8 *)(puVar38 + 6) = uVar10;
    }
    uVar33 = 0;
    uVar36 = 0;
    *puVar38 = 4;
switchD_0117add4_caseD_117a63c:
    uVar16 = puVar38[4];
    if ((uVar16 >> 10 & 1) == 0) {
      if (*(long *)(puVar38 + 10) != 0) {
        *(undefined8 *)(*(long *)(puVar38 + 10) + 0x18) = 0;
      }
    }
    else {
      if ((uint)uVar36 < 0x10) {
        uVar36 = uVar36 & 0xffffffff;
        pbVar30 = pbVar31;
        do {
          uVar32 = 0;
          if ((int)uVar37 == 0) goto LAB_0117ae10;
          pbVar31 = pbVar30 + 1;
          uVar37 = (ulong)((int)uVar37 - 1);
          uVar11 = uVar36 & 0x3f;
          uVar36 = uVar36 + 8;
          uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
          pbVar30 = pbVar31;
        } while (uVar36 < 0x10);
      }
      puVar38[0x15] = (uint)uVar33;
      if (*(long *)(puVar38 + 10) != 0) {
        *(uint *)(*(long *)(puVar38 + 10) + 0x20) = (uint)uVar33;
      }
      if ((uVar16 >> 9 & 1) == 0) {
        uVar33 = 0;
        uVar36 = 0;
      }
      else {
        local_64 = (undefined1)uVar33;
        local_63 = (undefined1)(uVar33 >> 8);
        uVar10 = crc32(*(undefined8 *)(puVar38 + 6),&local_64,2);
        *(undefined8 *)(puVar38 + 6) = uVar10;
        uVar33 = 0;
        uVar36 = 0;
      }
    }
    *puVar38 = 5;
    pbVar30 = pbVar31;
switchD_0117add4_caseD_117a6dc:
    uVar16 = puVar38[4];
    if ((uVar16 >> 10 & 1) == 0) {
LAB_0117a774:
      puVar38[0x15] = 0;
      *puVar38 = 6;
switchD_0117add4_caseD_117a780:
      uVar12 = (uint)uVar36;
      uVar16 = (uint)uVar37;
      if ((*(byte *)((long)puVar38 + 0x11) >> 3 & 1) == 0) {
        if (*(long *)(puVar38 + 10) != 0) {
          *(undefined8 *)(*(long *)(puVar38 + 10) + 0x28) = 0;
        }
LAB_0117a830:
        puVar38[0x15] = 0;
        *puVar38 = 7;
switchD_0117add4_caseD_117a83c:
        uVar12 = (uint)uVar36;
        uVar16 = (uint)uVar37;
        if ((*(byte *)((long)puVar38 + 0x11) >> 4 & 1) == 0) {
          if (*(long *)(puVar38 + 10) != 0) {
            *(undefined8 *)(*(long *)(puVar38 + 10) + 0x38) = 0;
          }
        }
        else {
          uVar32 = 0;
          if (uVar16 == 0) goto LAB_0117ae10;
          uVar11 = 0;
          do {
            lVar34 = *(long *)(puVar38 + 10);
            bVar6 = pbVar30[uVar11];
            uVar11 = uVar11 + 1;
            if ((lVar34 != 0) && (lVar13 = *(long *)(lVar34 + 0x38), lVar13 != 0)) {
              uVar32 = puVar38[0x15];
              if (uVar32 < *(uint *)(lVar34 + 0x40)) {
                puVar38[0x15] = uVar32 + 1;
                *(byte *)(lVar13 + (ulong)uVar32) = bVar6;
              }
            }
          } while ((bVar6 != 0) && ((uint)uVar11 < uVar16));
          if ((*(byte *)((long)puVar38 + 0x11) >> 1 & 1) != 0) {
            uVar10 = crc32(*(undefined8 *)(puVar38 + 6),pbVar30,uVar11 & 0xffffffff);
            *(undefined8 *)(puVar38 + 6) = uVar10;
          }
          pbVar30 = pbVar30 + uVar11;
          if (bVar6 != 0) goto LAB_0117b044;
          uVar37 = (uVar37 & 0xffffffff) - uVar11;
        }
        *puVar38 = 8;
switchD_0117add4_caseD_117a8f4:
        if ((puVar38[4] >> 9 & 1) != 0) {
          if ((uint)uVar36 < 0x10) {
            uVar36 = uVar36 & 0xffffffff;
            do {
              uVar32 = 0;
              if ((int)uVar37 == 0) goto LAB_0117ae10;
              pbVar31 = pbVar30 + 1;
              uVar37 = (ulong)((int)uVar37 - 1);
              uVar11 = uVar36 & 0x3f;
              uVar36 = uVar36 + 8;
              uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
              pbVar30 = pbVar31;
            } while (uVar36 < 0x10);
          }
          if (uVar33 != (ushort)puVar38[6]) {
            pcVar14 = "header crc mismatch";
            break;
          }
          uVar33 = 0;
          uVar36 = 0;
        }
        lVar34 = *(long *)(puVar38 + 10);
        if (lVar34 != 0) {
          *(uint *)(lVar34 + 0x44) = puVar38[4] >> 9 & 1;
          *(undefined4 *)(lVar34 + 0x48) = 1;
        }
        lVar34 = crc32(0,0,0);
        *(long *)(puVar38 + 6) = lVar34;
        param_1[0xc] = lVar34;
        *puVar38 = 0xb;
LAB_011799bc:
        uVar16 = *puVar38;
        goto joined_r0x01179860;
      }
      uVar32 = 0;
      if (uVar16 != 0) {
        uVar11 = 0;
        do {
          lVar34 = *(long *)(puVar38 + 10);
          bVar6 = pbVar30[uVar11];
          uVar11 = uVar11 + 1;
          if ((lVar34 != 0) && (lVar13 = *(long *)(lVar34 + 0x28), lVar13 != 0)) {
            uVar32 = puVar38[0x15];
            if (uVar32 < *(uint *)(lVar34 + 0x30)) {
              puVar38[0x15] = uVar32 + 1;
              *(byte *)(lVar13 + (ulong)uVar32) = bVar6;
            }
          }
        } while ((bVar6 != 0) && ((uint)uVar11 < uVar16));
        if ((*(byte *)((long)puVar38 + 0x11) >> 1 & 1) != 0) {
          uVar10 = crc32(*(undefined8 *)(puVar38 + 6),pbVar30,uVar11 & 0xffffffff);
          *(undefined8 *)(puVar38 + 6) = uVar10;
        }
        pbVar30 = pbVar30 + uVar11;
        if (bVar6 == 0) {
          uVar37 = (uVar37 & 0xffffffff) - uVar11;
          goto LAB_0117a830;
        }
LAB_0117b044:
        uVar32 = uVar16 - (int)uVar11;
        iVar22 = local_7c;
        goto switchD_0117add4_caseD_117ae14;
      }
    }
    else {
      uVar15 = puVar38[0x15];
      uVar32 = (uint)uVar37;
      uVar12 = uVar32;
      if (uVar15 <= uVar32) {
        uVar12 = uVar15;
      }
      if (uVar12 != 0) {
        lVar34 = *(long *)(puVar38 + 10);
        if ((lVar34 != 0) && (*(long *)(lVar34 + 0x18) != 0)) {
          uVar15 = *(int *)(lVar34 + 0x20) - uVar15;
          uVar16 = *(uint *)(lVar34 + 0x24) - uVar15;
          if (uVar15 + uVar12 <= *(uint *)(lVar34 + 0x24)) {
            uVar16 = uVar12;
          }
          memcpy((void *)(*(long *)(lVar34 + 0x18) + (ulong)uVar15),pbVar30,(ulong)uVar16);
          uVar16 = puVar38[4];
        }
        if ((uVar16 >> 9 & 1) != 0) {
          uVar10 = crc32(*(undefined8 *)(puVar38 + 6),pbVar30,uVar12);
          *(undefined8 *)(puVar38 + 6) = uVar10;
        }
        uVar37 = (ulong)(uVar32 - uVar12);
        pbVar30 = pbVar30 + uVar12;
        uVar15 = puVar38[0x15] - uVar12;
        puVar38[0x15] = uVar15;
      }
      uVar32 = (uint)uVar37;
      if (uVar15 == 0) goto LAB_0117a774;
    }
LAB_0117ae10:
    uVar12 = (uint)uVar36;
    iVar22 = local_7c;
    goto switchD_0117add4_caseD_117ae14;
  case 0x1179d04:
    if (uVar12 < 0x20) {
      uVar36 = uVar36 & 0xffffffff;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0x20);
    }
    uVar36 = 0;
    uVar11 = uVar33 >> 8 & 0xff00 | uVar33 >> 0x18 & 0xff | (uVar33 >> 8 & 0xff) << 0x10 |
             (uVar33 & 0xff) << 0x18;
    uVar33 = 0;
    *(ulong *)(puVar38 + 6) = uVar11;
    param_1[0xc] = uVar11;
    *puVar38 = 10;
  case 0x1179d5c:
    if (puVar38[3] == 0) {
      param_1[3] = (long)__dest_00;
      *(uint *)(param_1 + 4) = uVar29;
      *param_1 = (long)pbVar31;
      *(int *)(param_1 + 1) = (int)uVar37;
      *(ulong *)(puVar38 + 0x12) = uVar33;
      puVar38[0x14] = (uint)uVar36;
      return 2;
    }
    lVar34 = adler32(0,0,0);
    *(long *)(puVar38 + 6) = lVar34;
    param_1[0xc] = lVar34;
    *puVar38 = 0xb;
    pbVar30 = pbVar31;
switchD_0117add4_caseD_1179d90:
    uVar32 = (uint)uVar37;
    if (param_2 - 5U < 2) goto LAB_0117ae10;
switchD_0117add4_caseD_1179d9c:
    uVar12 = (uint)uVar36;
    if (puVar38[1] == 0) {
      pbVar31 = pbVar30;
      if (uVar12 < 3) {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar12 = uVar12 + 8;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
      }
      uVar32 = (uint)uVar37;
      uVar16 = (uint)uVar33 >> 1 & 3;
      puVar38[1] = (uint)uVar33 & 1;
      pbVar30 = pbVar31;
      if (uVar16 == 3) {
        param_1[6] = (long)"invalid block type";
        uVar16 = 0x1d;
LAB_01179e70:
        *puVar38 = uVar16;
      }
      else {
        if (uVar16 == 2) {
          uVar16 = 0x10;
          goto LAB_01179e70;
        }
        if (uVar16 != 1) {
          uVar16 = 0xd;
          goto LAB_01179e70;
        }
        puVar38[0x1c] = 9;
        puVar38[0x1d] = 5;
        *(undefined **)(puVar38 + 0x1a) = &DAT_0149ec26;
        *(undefined **)(puVar38 + 0x18) = &UNK_0149e426;
        *puVar38 = 0x13;
        if (param_2 == 6) {
          uVar33 = uVar33 >> 3;
          uVar12 = uVar12 - 3;
          iVar22 = local_7c;
          goto switchD_0117add4_caseD_117ae14;
        }
      }
      uVar16 = *puVar38;
      uVar33 = uVar33 >> 3;
      uVar36 = (ulong)(uVar12 - 3);
      goto joined_r0x01179860;
    }
    uVar33 = uVar33 >> (uVar12 & 7);
    uVar36 = (ulong)(uVar12 - (uVar12 & 7));
    *puVar38 = 0x1a;
    uVar16 = 0x1a;
    goto LAB_0117adc4;
  case 0x1179d90:
    goto switchD_0117add4_caseD_1179d90;
  case 0x1179d9c:
    goto switchD_0117add4_caseD_1179d9c;
  case 0x1179e8c:
    uVar16 = uVar12 - (uVar12 & 7);
    uVar36 = (ulong)uVar16;
    uVar33 = uVar33 >> (uVar12 & 7);
    if (uVar16 < 0x20) {
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0x20);
    }
    uVar32 = (uint)uVar37;
    if ((uVar33 & 0xffff) == (uVar33 >> 0x10 ^ 0xffff)) {
      uVar36 = 0;
      uVar16 = (uint)uVar33;
      uVar33 = 0;
      puVar38[0x15] = uVar16 & 0xffff;
      *puVar38 = 0xe;
      if (param_2 != 6) goto switchD_0117add4_caseD_1179f0c;
      goto LAB_0117ae10;
    }
    pcVar14 = "invalid stored block lengths";
    break;
  case 0x1179f0c:
switchD_0117add4_caseD_1179f0c:
    *puVar38 = 0xf;
  case 0x1179f14:
    uVar12 = (uint)uVar36;
    uVar32 = (uint)uVar37;
    uVar16 = puVar38[0x15];
    if (uVar16 != 0) {
      uVar15 = uVar32;
      if (uVar16 <= uVar32) {
        uVar15 = uVar16;
      }
      uVar16 = uVar29;
      if (uVar15 <= uVar29) {
        uVar16 = uVar15;
      }
      iVar22 = local_7c;
      if (uVar16 == 0) goto switchD_0117add4_caseD_117ae14;
      uVar11 = (ulong)uVar16;
      memcpy(__dest_00,pbVar30,uVar11);
      uVar29 = uVar29 - uVar16;
      uVar37 = (ulong)(uVar32 - uVar16);
      puVar38[0x15] = puVar38[0x15] - uVar16;
      uVar16 = *puVar38;
      __dest_00 = __dest_00 + uVar11;
      pbVar30 = pbVar30 + uVar11;
      goto joined_r0x01179860;
    }
    *puVar38 = 0xb;
    uVar16 = 0xb;
    goto LAB_0117adc4;
  case 0x1179fac:
    if (uVar12 < 0xe) {
      uVar36 = uVar36 & 0xffffffff;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0xe);
    }
    uVar16 = (uint)uVar33;
    uVar32 = uVar16 >> 5 & 0x1f;
    uVar12 = (uVar16 & 0x1f) + 0x101;
    uVar33 = uVar33 >> 0xe;
    uVar16 = (uVar16 >> 10 & 0xf) + 4;
    uVar36 = (ulong)((int)uVar36 - 0xe);
    puVar38[0x1e] = uVar16;
    puVar38[0x1f] = uVar12;
    puVar38[0x20] = uVar32 + 1;
    if ((uVar12 < 0x11f) && (uVar32 < 0x1e)) {
      uVar15 = 0;
      puVar38[0x21] = 0;
      *puVar38 = 0x11;
LAB_0117a044:
      do {
        uVar35 = (uint)uVar36;
        pbVar31 = pbVar30;
        if (uVar35 < 3) {
          uVar32 = 0;
          if ((int)uVar37 == 0) goto LAB_0117ae10;
          pbVar31 = pbVar30 + 1;
          uVar35 = uVar35 + 8;
          uVar37 = (ulong)((int)uVar37 - 1);
          uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
        }
        uVar12 = uVar15 + 1;
        uVar7 = *(ushort *)(&DAT_0149e400 + (ulong)uVar15 * 2);
        uVar9 = (ushort)uVar33;
        uVar33 = uVar33 >> 3;
        puVar38[0x21] = uVar12;
        *(ushort *)((long)puVar38 + (ulong)uVar7 * 2 + 0x90) = uVar9 & 7;
        uVar36 = (ulong)(uVar35 - 3);
        pbVar30 = pbVar31;
        uVar15 = uVar12;
      } while (uVar12 < uVar16);
      goto LAB_0117a09c;
    }
    pcVar14 = "too many length or distance symbols";
    break;
  case 0x117a030:
    uVar12 = puVar38[0x21];
    uVar16 = puVar38[0x1e];
    uVar15 = uVar12;
    if (uVar12 < uVar16) goto LAB_0117a044;
LAB_0117a09c:
    if (uVar12 < 0x13) {
      uVar11 = (ulong)uVar12;
      if (0x13 - uVar11 < 2) {
LAB_0117a108:
        do {
          lVar34 = uVar11 * 2;
          uVar11 = uVar11 + 1;
          *(undefined2 *)((long)puVar38 + (ulong)*(ushort *)(&DAT_0149e400 + lVar34) * 2 + 0x90) = 0
          ;
        } while (uVar11 != 0x13);
      }
      else {
        uVar16 = 1 - uVar12 & 1;
        lVar34 = (0x13 - uVar11) - (ulong)uVar16;
        if (lVar34 == 0) goto LAB_0117a108;
        uVar19 = lVar34 + uVar11;
        puVar20 = (ushort *)(&DAT_0149e402 + uVar11 * 2);
        do {
          uVar7 = *puVar20;
          lVar34 = lVar34 + -2;
          *(undefined2 *)((long)puVar38 + (ulong)puVar20[-1] * 2 + 0x90) = 0;
          *(undefined2 *)((long)puVar38 + (ulong)uVar7 * 2 + 0x90) = 0;
          puVar20 = puVar20 + 2;
        } while (lVar34 != 0);
        uVar11 = uVar19;
        if (uVar16 != 0) goto LAB_0117a108;
      }
      puVar38[0x21] = 0x13;
    }
    *(uint **)(puVar38 + 0x22) = puVar1;
    *(uint **)(puVar38 + 0x18) = puVar1;
    puVar38[0x1c] = 7;
    local_7c = FUN_0117b7dc(0,puVar38 + 0x24,0x13,puVar2,puVar38 + 0x1c,puVar3);
    if (local_7c == 0) {
      local_7c = 0;
      puVar38[0x21] = 0;
      *puVar38 = 0x12;
      uVar16 = 0;
      goto LAB_0117a1a8;
    }
    param_1[6] = (long)"invalid code lengths set";
    *puVar38 = 0x1d;
    pbVar30 = pbVar31;
    goto LAB_011799bc;
  case 0x117a1a4:
    uVar16 = puVar38[0x21];
LAB_0117a1a8:
    uVar15 = puVar38[0x1f];
    uVar12 = puVar38[0x20] + uVar15;
    pbVar30 = pbVar31;
    if (uVar16 < uVar12) {
      lVar34 = *(long *)(puVar38 + 0x18);
      uVar35 = (1 << (ulong)(puVar38[0x1c] & 0x1f)) - 1;
      do {
        while( true ) {
          uVar19 = (ulong)(uVar35 & (uint)uVar33);
          bVar6 = *(byte *)(lVar34 + uVar19 * 4 + 1);
          uVar11 = (ulong)bVar6;
          if ((uint)uVar36 < (uint)bVar6) {
            uVar36 = uVar36 & 0xffffffff;
            pbVar30 = pbVar31;
            do {
              uVar32 = 0;
              if ((int)uVar37 == 0) goto LAB_0117ae10;
              pbVar31 = pbVar30 + 1;
              uVar37 = (ulong)((int)uVar37 - 1);
              uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
              uVar19 = (ulong)(uVar35 & (uint)uVar33);
              uVar11 = (ulong)*(byte *)(lVar34 + uVar19 * 4 + 1);
              uVar36 = uVar36 + 8;
              pbVar30 = pbVar31;
            } while (uVar36 < uVar11);
          }
          uVar7 = *(ushort *)(lVar34 + uVar19 * 4 + 2);
          iVar22 = (int)uVar11;
          uVar32 = (uint)uVar36;
          pbVar30 = pbVar31;
          if (0xf < uVar7) break;
          uVar33 = uVar33 >> (uVar11 & 0x3f);
          uVar36 = (ulong)(uVar32 - iVar22);
          uVar11 = (ulong)uVar16;
          uVar16 = uVar16 + 1;
          puVar38[0x21] = uVar16;
          *(ushort *)((long)puVar38 + uVar11 * 2 + 0x90) = uVar7;
          if (uVar12 <= uVar16) goto LAB_0117a37c;
        }
        if (uVar7 == 0x10) {
          if (uVar32 < iVar22 + 2U) {
            uVar36 = uVar36 & 0xffffffff;
            do {
              uVar32 = 0;
              if ((int)uVar37 == 0) goto LAB_0117ae10;
              pbVar31 = pbVar30 + 1;
              uVar37 = (ulong)((int)uVar37 - 1);
              uVar19 = uVar36 & 0x3f;
              uVar36 = uVar36 + 8;
              uVar32 = (uint)uVar36;
              uVar33 = ((ulong)*pbVar30 << uVar19) + uVar33;
              pbVar30 = pbVar31;
            } while (uVar32 < iVar22 + 2U);
          }
          uVar33 = uVar33 >> (uVar11 & 0x3f);
          uVar36 = (ulong)(uVar32 - iVar22);
          if (uVar16 != 0) {
            uVar26 = *(undefined2 *)((long)puVar38 + (ulong)(uVar16 - 1) * 2 + 0x90);
            iVar23 = ((uint)uVar33 & 3) + 3;
            uVar33 = uVar33 >> 2;
            uVar32 = (uVar32 - iVar22) - 2;
            goto LAB_0117a350;
          }
LAB_0117a488:
          pcVar14 = "invalid bit length repeat";
          pbVar30 = pbVar31;
          goto LAB_0117adac;
        }
        if (uVar7 == 0x11) {
          if (uVar32 < iVar22 + 3U) {
            uVar36 = uVar36 & 0xffffffff;
            do {
              uVar32 = 0;
              if ((int)uVar37 == 0) goto LAB_0117ae10;
              pbVar31 = pbVar30 + 1;
              uVar37 = (ulong)((int)uVar37 - 1);
              uVar19 = uVar36 & 0x3f;
              uVar36 = uVar36 + 8;
              uVar32 = (uint)uVar36;
              uVar33 = ((ulong)*pbVar30 << uVar19) + uVar33;
              pbVar30 = pbVar31;
            } while (uVar32 < iVar22 + 3U);
          }
          uVar36 = uVar33 >> (uVar11 & 0x3f);
          uVar33 = uVar36 >> 3;
          iVar22 = -3 - iVar22;
          iVar23 = ((uint)uVar36 & 7) + 3;
        }
        else {
          if (uVar32 < iVar22 + 7U) {
            uVar36 = uVar36 & 0xffffffff;
            do {
              uVar32 = 0;
              if ((int)uVar37 == 0) goto LAB_0117ae10;
              pbVar31 = pbVar30 + 1;
              uVar37 = (ulong)((int)uVar37 - 1);
              uVar19 = uVar36 & 0x3f;
              uVar36 = uVar36 + 8;
              uVar32 = (uint)uVar36;
              uVar33 = ((ulong)*pbVar30 << uVar19) + uVar33;
              pbVar30 = pbVar31;
            } while (uVar32 < iVar22 + 7U);
          }
          uVar36 = uVar33 >> (uVar11 & 0x3f);
          uVar33 = uVar36 >> 7;
          iVar22 = -7 - iVar22;
          iVar23 = ((uint)uVar36 & 0x7f) + 0xb;
        }
        uVar26 = 0;
        uVar32 = iVar22 + uVar32;
LAB_0117a350:
        uVar36 = (ulong)uVar32;
        if (uVar12 < uVar16 + iVar23) goto LAB_0117a488;
        do {
          iVar23 = iVar23 + -1;
          uVar11 = (ulong)uVar16;
          uVar16 = uVar16 + 1;
          puVar38[0x21] = uVar16;
          *(undefined2 *)((long)puVar38 + uVar11 * 2 + 0x90) = uVar26;
        } while (iVar23 != 0);
        pbVar30 = pbVar31;
      } while (uVar16 < uVar12);
    }
LAB_0117a37c:
    uVar32 = (uint)uVar37;
    if ((short)puVar38[0xa4] != 0) {
      *(uint **)(puVar38 + 0x22) = puVar1;
      *(uint **)(puVar38 + 0x18) = puVar1;
      puVar38[0x1c] = 9;
      local_7c = FUN_0117b7dc(1,puVar38 + 0x24,uVar15,puVar2,puVar38 + 0x1c,puVar3);
      if (local_7c == 0) {
        puVar38[0x1d] = 6;
        *(undefined8 *)(puVar38 + 0x1a) = *(undefined8 *)(puVar38 + 0x22);
        local_7c = FUN_0117b7dc(2,(long)puVar38 + (ulong)puVar38[0x1f] * 2 + 0x90,puVar38[0x20],
                                puVar2,puVar38 + 0x1d,puVar3);
        if (local_7c == 0) {
          local_7c = 0;
          *puVar38 = 0x13;
          if (param_2 != 6) goto switchD_0117add4_caseD_117a9d4;
          goto LAB_0117ae10;
        }
        param_1[6] = (long)"invalid distances set";
        *puVar38 = 0x1d;
      }
      else {
        param_1[6] = (long)"invalid literal/lengths set";
        *puVar38 = 0x1d;
      }
      uVar16 = *puVar38;
      goto joined_r0x01179860;
    }
    pcVar14 = "invalid code -- missing end-of-block";
    break;
  case 0x117a494:
    uVar16 = puVar38[0x17];
    if (uVar16 != 0) goto LAB_0117a49c;
    goto LAB_0117ab7c;
  case 0x117a500:
    uVar16 = puVar38[0x17];
    if (uVar16 != 0) goto LAB_0117ad00;
    goto LAB_0117ad60;
  case 0x117a50c:
    if (uVar29 == 0) goto LAB_0117ae10;
    uVar29 = uVar29 - 1;
    *__dest_00 = (char)puVar38[0x15];
    *puVar38 = 0x14;
    uVar16 = 0x14;
    __dest_00 = __dest_00 + 1;
    goto LAB_0117adc4;
  case 0x117a534:
    if (puVar38[2] == 0) {
LAB_0117a5f0:
      *puVar38 = 0x1b;
      goto switchD_0117add4_caseD_117a980;
    }
    if (uVar12 < 0x20) {
      uVar36 = uVar36 & 0xffffffff;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0x20);
    }
    uVar11 = (ulong)(uVar28 - uVar29);
    param_1[5] = param_1[5] + uVar11;
    *(ulong *)(puVar38 + 8) = *(long *)(puVar38 + 8) + uVar11;
    if (uVar28 - uVar29 != 0) {
      if (puVar38[4] == 0) {
        lVar34 = adler32(*(undefined8 *)(puVar38 + 6),(long)__dest_00 - uVar11);
      }
      else {
        lVar34 = crc32();
      }
      *(long *)(puVar38 + 6) = lVar34;
      param_1[0xc] = lVar34;
    }
    uVar11 = uVar33;
    if (puVar38[4] == 0) {
      uVar11 = uVar33 >> 8 & 0xff00 | uVar33 >> 0x18 & 0xff | (uVar33 >> 8 & 0xff) << 0x10 |
               (uVar33 & 0xff) << 0x18;
    }
    uVar28 = uVar29;
    if (uVar11 == *(ulong *)(puVar38 + 6)) {
      uVar33 = 0;
      uVar36 = 0;
      goto LAB_0117a5f0;
    }
    param_1[6] = (long)"incorrect data check";
    *puVar38 = 0x1d;
    uVar16 = 0x1d;
    pbVar30 = pbVar31;
    goto LAB_0117adc4;
  case 0x117a63c:
    goto switchD_0117add4_caseD_117a63c;
  case 0x117a6dc:
    goto switchD_0117add4_caseD_117a6dc;
  case 0x117a780:
    goto switchD_0117add4_caseD_117a780;
  case 0x117a83c:
    goto switchD_0117add4_caseD_117a83c;
  case 0x117a8f4:
    goto switchD_0117add4_caseD_117a8f4;
  case 0x117a980:
switchD_0117add4_caseD_117a980:
    uVar12 = (uint)uVar36;
    uVar32 = (uint)uVar37;
    if ((puVar38[2] != 0) && (puVar38[4] != 0)) {
      if (uVar12 < 0x20) {
        uVar36 = uVar36 & 0xffffffff;
        pbVar30 = pbVar31;
        do {
          uVar32 = 0;
          if ((int)uVar37 == 0) goto LAB_0117ae10;
          pbVar31 = pbVar30 + 1;
          uVar37 = (ulong)((int)uVar37 - 1);
          uVar11 = uVar36 & 0x3f;
          uVar36 = uVar36 + 8;
          uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
          pbVar30 = pbVar31;
        } while (uVar36 < 0x20);
      }
      uVar32 = (uint)uVar37;
      if (uVar33 != puVar38[8]) {
        pcVar14 = "incorrect length check";
        pbVar30 = pbVar31;
        break;
      }
      uVar33 = 0;
      uVar12 = 0;
    }
    *puVar38 = 0x1c;
    pbVar30 = pbVar31;
    iVar22 = 1;
    goto switchD_0117add4_caseD_117ae14;
  case 0x117a9d4:
switchD_0117add4_caseD_117a9d4:
    *puVar38 = 0x14;
    pbVar31 = pbVar30;
  case 0x117a9dc:
    goto switchD_0117add4_caseD_117a9dc;
  case 0x117abd4:
    goto switchD_0117add4_caseD_117abd4;
  case 0x117ad78:
    goto switchD_0117add4_caseD_117ad78;
  case 0x117add8:
    uVar16 = puVar38[2];
    if (uVar16 == 0) {
      *puVar38 = 0xc;
      uVar16 = 0xc;
      goto LAB_0117adc4;
    }
    if (uVar12 < 0x10) {
      uVar36 = uVar36 & 0xffffffff;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar11 = uVar36 & 0x3f;
        uVar36 = uVar36 + 8;
        uVar33 = ((ulong)*pbVar30 << uVar11) + uVar33;
        pbVar30 = pbVar31;
      } while (uVar36 < 0x10);
    }
    if ((uVar33 == 0x8b1f) && ((uVar16 >> 1 & 1) != 0)) {
      uVar10 = crc32(0,0,0);
      *(undefined8 *)(puVar38 + 6) = uVar10;
      local_64 = 0x1f;
      local_63 = 0x8b;
      uVar10 = crc32(uVar10,&local_64,2);
      *(undefined8 *)(puVar38 + 6) = uVar10;
      uVar33 = 0;
      uVar36 = 0;
      *puVar38 = 1;
      uVar16 = 1;
      goto LAB_0117adc4;
    }
    puVar38[4] = 0;
    if (*(long *)(puVar38 + 10) != 0) {
      *(undefined4 *)(*(long *)(puVar38 + 10) + 0x48) = 0xffffffff;
    }
    if (((uVar16 & 1) != 0) &&
       (uVar11 = (uVar33 & 0xff) * 0x100 + (uVar33 >> 8),
       uVar11 + (uVar11 / 0x1f + (uVar11 - uVar11 / 0x1f >> 1) >> 4) * -0x1f == 0)) {
      if ((uVar33 & 0xf) != 8) goto LAB_01179b8c;
      uVar12 = (uint)(uVar33 >> 4) & 0xf;
      uVar16 = uVar12 + 8;
      if (puVar38[0xc] == 0) {
        puVar38[0xc] = uVar16;
      }
      else if (puVar38[0xc] < uVar16) {
        uVar33 = uVar33 >> 4;
        uVar36 = (ulong)((int)uVar36 - 4);
        pcVar14 = "invalid window size";
        break;
      }
      puVar38[5] = 0x100 << (ulong)uVar12;
      lVar34 = adler32(0,0,0);
      *(long *)(puVar38 + 6) = lVar34;
      param_1[0xc] = lVar34;
      uVar16 = (uint)(uVar33 >> 0xc) & 2 ^ 0xb;
      uVar36 = 0;
      *puVar38 = uVar16;
      uVar33 = 0;
      goto joined_r0x01179860;
    }
    pcVar14 = "incorrect header check";
    break;
  case 0x117ae14:
    goto switchD_0117add4_caseD_117ae14;
  case 0x117b034:
    iVar22 = -3;
switchD_0117add4_caseD_117ae14:
    param_1[3] = (long)__dest_00;
    *(uint *)(param_1 + 4) = uVar29;
    *param_1 = (long)pbVar30;
    *(uint *)(param_1 + 1) = uVar32;
    *(ulong *)(puVar38 + 0x12) = uVar33;
    puVar38[0x14] = uVar12;
    if ((puVar38[0xd] != 0) ||
       (((uVar28 != uVar29 && (*puVar38 < 0x1d)) && ((param_2 != 4 || (*puVar38 < 0x1a)))))) {
      lVar34 = param_1[7];
      __dest = *(void **)(lVar34 + 0x40);
      if (__dest == (void *)0x0) {
        __dest = (void *)(*(code *)param_1[8])
                                   (param_1[10],1 << (ulong)(*(uint *)(lVar34 + 0x30) & 0x1f),1);
        *(void **)(lVar34 + 0x40) = __dest;
        if (__dest == (void *)0x0) {
          *puVar38 = 0x1e;
          return -4;
        }
      }
      uVar16 = *(uint *)(lVar34 + 0x34);
      uVar29 = uVar28 - uVar29;
      if (uVar16 == 0) {
        *(undefined8 *)(lVar34 + 0x38) = 0;
        uVar16 = 1 << (ulong)(*(uint *)(lVar34 + 0x30) & 0x1f);
        *(uint *)(lVar34 + 0x34) = uVar16;
      }
      if (uVar29 < uVar16) {
        uVar16 = uVar16 - *(uint *)(lVar34 + 0x3c);
        uVar12 = uVar29;
        if (uVar16 <= uVar29) {
          uVar12 = uVar16;
        }
        memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar34 + 0x3c)),__dest_00 + -(ulong)uVar29,
               (ulong)uVar12);
        uVar29 = uVar29 - uVar12;
        if (uVar29 == 0) {
          uVar16 = *(int *)(lVar34 + 0x3c) + uVar12;
          uVar29 = 0;
          if (uVar16 != *(uint *)(lVar34 + 0x34)) {
            uVar29 = uVar16;
          }
          *(uint *)(lVar34 + 0x3c) = uVar29;
          if (*(uint *)(lVar34 + 0x38) < *(uint *)(lVar34 + 0x34)) {
            *(uint *)(lVar34 + 0x38) = *(uint *)(lVar34 + 0x38) + uVar12;
          }
        }
        else {
          memcpy(*(void **)(lVar34 + 0x40),__dest_00 + -(ulong)uVar29,(ulong)uVar29);
          *(undefined4 *)(lVar34 + 0x38) = *(undefined4 *)(lVar34 + 0x34);
          *(uint *)(lVar34 + 0x3c) = uVar29;
        }
      }
      else {
        memcpy(__dest,__dest_00 + -(ulong)uVar16,(ulong)uVar16);
        *(undefined4 *)(lVar34 + 0x38) = *(undefined4 *)(lVar34 + 0x34);
        *(undefined4 *)(lVar34 + 0x3c) = 0;
      }
    }
    uVar4 = uVar4 - (int)param_1[1];
    uVar28 = uVar28 - (int)param_1[4];
    uVar36 = (ulong)uVar28;
    param_1[2] = param_1[2] + (ulong)uVar4;
    param_1[5] = param_1[5] + uVar36;
    *(ulong *)(puVar38 + 8) = *(long *)(puVar38 + 8) + uVar36;
    if ((uVar28 != 0) && (puVar38[2] != 0)) {
      if (puVar38[4] == 0) {
        lVar34 = adler32(*(undefined8 *)(puVar38 + 6),param_1[3] - uVar36,uVar28);
      }
      else {
        lVar34 = crc32();
      }
      *(long *)(puVar38 + 6) = lVar34;
      param_1[0xc] = lVar34;
    }
    uVar16 = *puVar38;
    iVar23 = 0x100;
    if (uVar16 != 0xe && uVar16 != 0x13) {
      iVar23 = 0;
    }
    *(uint *)(param_1 + 0xb) =
         puVar38[0x14] + (uint)(puVar38[1] != 0) * 0x40 + (uint)(uVar16 == 0xb) * 0x80 + iVar23;
    if ((uVar28 != 0 || uVar4 != 0) && param_2 != 4 || iVar22 != 0) {
      return iVar22;
    }
    return -5;
  case 0x117b03c:
    return -4;
  }
LAB_0117adac:
  param_1[6] = (long)pcVar14;
  uVar16 = 0x1d;
  *puVar38 = 0x1d;
  goto LAB_0117adc4;
switchD_0117add4_caseD_117a9dc:
  if ((0x101 < uVar29) && (5 < (uint)uVar37)) {
    param_1[3] = (long)__dest_00;
    *(uint *)(param_1 + 4) = uVar29;
    *param_1 = (long)pbVar31;
    *(uint *)(param_1 + 1) = (uint)uVar37;
    *(ulong *)(puVar38 + 0x12) = uVar33;
    puVar38[0x14] = (uint)uVar36;
    FUN_01180160(param_1,uVar28);
    __dest_00 = (undefined1 *)param_1[3];
    uVar29 = *(uint *)(param_1 + 4);
    pbVar30 = (byte *)*param_1;
    uVar37 = (ulong)*(uint *)(param_1 + 1);
    uVar33 = *(ulong *)(puVar38 + 0x12);
    uVar36 = (ulong)puVar38[0x14];
    if (*puVar38 == 0xb) {
      puVar38[0x6f9] = 0xffffffff;
    }
    goto LAB_011799bc;
  }
  lVar34 = *(long *)(puVar38 + 0x18);
  puVar38[0x6f9] = 0;
  uVar16 = (1 << (ulong)(puVar38[0x1c] & 0x1f)) - 1;
  uVar19 = (ulong)(uVar16 & (uint)uVar33);
  bVar6 = *(byte *)(lVar34 + uVar19 * 4 + 1);
  uVar11 = (ulong)bVar6;
  if ((uint)uVar36 < (uint)bVar6) {
    uVar36 = uVar36 & 0xffffffff;
    pbVar30 = pbVar31;
    do {
      uVar32 = 0;
      if ((int)uVar37 == 0) goto LAB_0117ae10;
      pbVar31 = pbVar30 + 1;
      uVar37 = (ulong)((int)uVar37 - 1);
      uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
      uVar19 = (ulong)(uVar16 & (uint)uVar33);
      uVar11 = (ulong)*(byte *)(lVar34 + uVar19 * 4 + 1);
      uVar36 = uVar36 + 8;
      pbVar30 = pbVar31;
    } while (uVar36 < uVar11);
  }
  uVar12 = (uint)uVar11;
  uVar16 = (uint)uVar36;
  pbVar30 = (byte *)(lVar34 + uVar19 * 4);
  bVar6 = *pbVar30;
  uVar7 = *(ushort *)(pbVar30 + 2);
  if ((bVar6 == 0) || ((bVar6 & 0xf0) != 0)) {
    uVar12 = 0;
  }
  else {
    uVar15 = (1 << (ulong)(uVar12 + bVar6 & 0x1f)) - 1;
    uVar19 = (ulong)(((uVar15 & (uint)uVar33) >> (ulong)(uVar12 & 0x1f)) + (uint)uVar7);
    bVar5 = *(byte *)(lVar34 + uVar19 * 4 + 1);
    if (uVar16 < uVar12 + bVar5) {
      uVar36 = uVar36 & 0xffffffff;
      pbVar30 = pbVar31;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
        uVar19 = (ulong)(((uVar15 & (uint)uVar33) >> (ulong)(uVar12 & 0x1f)) + (uint)uVar7);
        bVar5 = *(byte *)(lVar34 + uVar19 * 4 + 1);
        uVar36 = uVar36 + 8;
        uVar16 = (uint)uVar36;
        pbVar30 = pbVar31;
      } while (uVar16 < uVar12 + bVar5);
    }
    pbVar30 = (byte *)(lVar34 + uVar19 * 4);
    uVar7 = *(ushort *)(pbVar30 + 2);
    bVar6 = *pbVar30;
    uVar33 = uVar33 >> (uVar11 & 0x3f);
    uVar16 = uVar16 - uVar12;
    puVar38[0x6f9] = uVar12;
    uVar11 = (ulong)bVar5;
  }
  uVar33 = uVar33 >> (uVar11 & 0x3f);
  uVar36 = (ulong)(uVar16 - (int)uVar11);
  puVar38[0x6f9] = uVar12 + (int)uVar11;
  puVar38[0x15] = (uint)uVar7;
  pbVar30 = pbVar31;
  if (bVar6 == 0) {
    *puVar38 = 0x19;
    uVar16 = 0x19;
    goto LAB_0117adc4;
  }
  if ((bVar6 >> 5 & 1) != 0) {
    puVar38[0x6f9] = 0xffffffff;
    *puVar38 = 0xb;
    uVar16 = 0xb;
    goto LAB_0117adc4;
  }
  if ((bVar6 >> 6 & 1) != 0) {
    pcVar14 = "invalid literal/length code";
    goto LAB_0117adac;
  }
  uVar16 = bVar6 & 0xf;
  puVar38[0x17] = uVar16;
  *puVar38 = 0x15;
  if ((bVar6 & 0xf) == 0) {
LAB_0117ab7c:
    uVar12 = puVar38[0x15];
  }
  else {
LAB_0117a49c:
    uVar12 = (uint)uVar36;
    pbVar30 = pbVar31;
    while (uVar12 < uVar16) {
      uVar32 = 0;
      if ((int)uVar37 == 0) goto LAB_0117ae10;
      uVar12 = (int)uVar36 + 8;
      uVar37 = (ulong)((int)uVar37 - 1);
      uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
      pbVar30 = pbVar30 + 1;
      uVar36 = (ulong)uVar12;
    }
    uVar32 = (uint)uVar33;
    uVar36 = (ulong)(uVar12 - uVar16);
    uVar33 = uVar33 >> ((ulong)uVar16 & 0x3f);
    uVar12 = puVar38[0x15] + ((1 << (ulong)(uVar16 & 0x1f)) - 1U & uVar32);
    puVar38[0x15] = uVar12;
    puVar38[0x6f9] = puVar38[0x6f9] + uVar16;
    pbVar31 = pbVar30;
  }
  puVar38[0x6fa] = uVar12;
  *puVar38 = 0x16;
switchD_0117add4_caseD_117abd4:
  lVar34 = *(long *)(puVar38 + 0x1a);
  uVar16 = (1 << (ulong)(puVar38[0x1d] & 0x1f)) - 1;
  uVar19 = (ulong)(uVar16 & (uint)uVar33);
  bVar6 = *(byte *)(lVar34 + uVar19 * 4 + 1);
  uVar11 = (ulong)bVar6;
  if ((uint)uVar36 < (uint)bVar6) {
    uVar36 = uVar36 & 0xffffffff;
    pbVar30 = pbVar31;
    do {
      uVar32 = 0;
      if ((int)uVar37 == 0) goto LAB_0117ae10;
      pbVar31 = pbVar30 + 1;
      uVar37 = (ulong)((int)uVar37 - 1);
      uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
      uVar19 = (ulong)(uVar16 & (uint)uVar33);
      uVar11 = (ulong)*(byte *)(lVar34 + uVar19 * 4 + 1);
      uVar36 = uVar36 + 8;
      pbVar30 = pbVar31;
    } while (uVar36 < uVar11);
  }
  uVar16 = (uint)uVar36;
  pbVar30 = (byte *)(lVar34 + uVar19 * 4);
  bVar6 = *pbVar30;
  uVar7 = *(ushort *)(pbVar30 + 2);
  if ((bVar6 & 0xf0) == 0) {
    uVar12 = (uint)uVar11;
    uVar15 = (1 << (ulong)(uVar12 + bVar6 & 0x1f)) - 1;
    uVar19 = (ulong)(((uVar15 & (uint)uVar33) >> (ulong)(uVar12 & 0x1f)) + (uint)uVar7);
    bVar6 = *(byte *)(lVar34 + uVar19 * 4 + 1);
    if (uVar16 < uVar12 + bVar6) {
      uVar36 = uVar36 & 0xffffffff;
      pbVar30 = pbVar31;
      do {
        uVar32 = 0;
        if ((int)uVar37 == 0) goto LAB_0117ae10;
        pbVar31 = pbVar30 + 1;
        uVar37 = (ulong)((int)uVar37 - 1);
        uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
        uVar19 = (ulong)(((uVar15 & (uint)uVar33) >> (ulong)(uVar12 & 0x1f)) + (uint)uVar7);
        bVar6 = *(byte *)(lVar34 + uVar19 * 4 + 1);
        uVar36 = uVar36 + 8;
        uVar16 = (uint)uVar36;
        pbVar30 = pbVar31;
      } while (uVar16 < uVar12 + bVar6);
    }
    uVar21 = (ulong)bVar6;
    pbVar30 = (byte *)(lVar34 + uVar19 * 4);
    uVar7 = *(ushort *)(pbVar30 + 2);
    bVar6 = *pbVar30;
    uVar33 = uVar33 >> (uVar11 & 0x3f);
    uVar16 = uVar16 - uVar12;
    uVar12 = puVar38[0x6f9] + uVar12;
    puVar38[0x6f9] = uVar12;
  }
  else {
    uVar12 = puVar38[0x6f9];
    uVar21 = uVar11;
  }
  uVar33 = uVar33 >> (uVar21 & 0x3f);
  uVar36 = (ulong)(uVar16 - (int)uVar21);
  puVar38[0x6f9] = uVar12 + (int)uVar21;
  pbVar30 = pbVar31;
  if ((bVar6 >> 6 & 1) != 0) {
    pcVar14 = "invalid distance code";
    goto LAB_0117adac;
  }
  uVar16 = bVar6 & 0xf;
  puVar38[0x16] = (uint)uVar7;
  puVar38[0x17] = uVar16;
  *puVar38 = 0x17;
  if ((bVar6 & 0xf) != 0) {
LAB_0117ad00:
    uVar12 = (uint)uVar36;
    pbVar30 = pbVar31;
    while (uVar12 < uVar16) {
      uVar32 = 0;
      if ((int)uVar37 == 0) goto LAB_0117ae10;
      uVar12 = (int)uVar36 + 8;
      uVar37 = (ulong)((int)uVar37 - 1);
      uVar33 = ((ulong)*pbVar30 << (uVar36 & 0x3f)) + uVar33;
      pbVar30 = pbVar30 + 1;
      uVar36 = (ulong)uVar12;
    }
    uVar32 = (uint)uVar33;
    uVar36 = (ulong)(uVar12 - uVar16);
    uVar33 = uVar33 >> ((ulong)uVar16 & 0x3f);
    puVar38[0x16] = puVar38[0x16] + ((1 << (ulong)(uVar16 & 0x1f)) - 1U & uVar32);
    puVar38[0x6f9] = puVar38[0x6f9] + uVar16;
  }
LAB_0117ad60:
  *puVar38 = 0x18;
switchD_0117add4_caseD_117ad78:
  uVar32 = (uint)uVar37;
  if (uVar29 == 0) goto LAB_0117ae10;
  uVar16 = puVar38[0x16];
  if (uVar28 - uVar29 < uVar16) {
    uVar16 = uVar16 - (uVar28 - uVar29);
    if ((puVar38[0xe] < uVar16) && (puVar38[0x6f8] != 0)) {
      pcVar14 = "invalid distance too far back";
      goto LAB_0117adac;
    }
    uVar32 = puVar38[0xf];
    uVar12 = uVar16 - uVar32;
    if (uVar16 < uVar32 || uVar12 == 0) {
      uVar32 = uVar32 - uVar16;
    }
    else {
      uVar32 = puVar38[0xd] - uVar12;
      uVar16 = uVar12;
    }
    uVar12 = puVar38[0x15];
    puVar24 = (undefined1 *)(*(long *)(puVar38 + 0x10) + (ulong)uVar32);
    uVar32 = uVar12;
    if (uVar16 <= uVar12) {
      uVar32 = uVar16;
    }
  }
  else {
    uVar12 = puVar38[0x15];
    puVar24 = __dest_00 + -(ulong)uVar16;
    uVar32 = uVar12;
  }
  uVar16 = uVar29;
  if (uVar32 <= uVar29) {
    uVar16 = uVar32;
  }
  uVar11 = (ulong)(uVar16 - 1) + 1;
  puVar38[0x15] = uVar12 - uVar16;
  puVar17 = __dest_00;
  uVar12 = uVar16;
  if (uVar11 < 0x20) goto LAB_0117993c;
  uVar15 = uVar16 & 0x1f;
  lVar34 = uVar11 - uVar15;
  if (lVar34 == 0) goto LAB_0117993c;
  uVar35 = uVar29;
  if (uVar32 <= uVar29) {
    uVar35 = uVar32;
  }
  if ((__dest_00 < puVar24 + (ulong)(uVar35 - 1) + 1) &&
     (puVar24 < __dest_00 + (ulong)(uVar35 - 1) + 1)) goto LAB_0117993c;
  puVar18 = __dest_00 + lVar34;
  uVar12 = uVar16 - (int)lVar34;
  puVar17 = puVar24 + lVar34;
  puVar25 = (undefined8 *)(puVar24 + 0x10);
  puVar27 = (undefined8 *)(__dest_00 + 0x10);
  do {
    puVar8 = puVar25 + -1;
    uVar10 = puVar25[-2];
    uVar40 = puVar25[1];
    uVar39 = *puVar25;
    puVar25 = puVar25 + 4;
    lVar34 = lVar34 + -0x20;
    puVar27[-1] = *puVar8;
    puVar27[-2] = uVar10;
    puVar27[1] = uVar40;
    *puVar27 = uVar39;
    puVar27 = puVar27 + 4;
    puVar24 = puVar17;
  } while (lVar34 != 0);
  while (puVar17 = puVar18, uVar15 != 0) {
LAB_0117993c:
    puVar18 = puVar17 + 1;
    *puVar17 = *puVar24;
    uVar12 = uVar12 - 1;
    puVar24 = puVar24 + 1;
    uVar15 = uVar12;
  }
  uVar29 = uVar29 - uVar16;
  __dest_00 = __dest_00 + (ulong)(uVar16 - 1) + 1;
  if (puVar38[0x15] == 0) {
    *puVar38 = 0x14;
    uVar16 = 0x14;
    goto LAB_0117adc4;
  }
  uVar16 = *puVar38;
  goto joined_r0x01179860;
}

