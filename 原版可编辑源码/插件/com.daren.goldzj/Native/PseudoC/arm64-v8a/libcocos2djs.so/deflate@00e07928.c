
ulong deflate(long *param_1,uint param_2)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  void *__s;
  size_t __n;
  undefined1 uVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  
  if (param_1 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  plVar21 = (long *)param_1[7];
  if (plVar21 == (long *)0x0) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) ||
     ((iVar11 = (int)plVar21[1], param_2 != 4 && (iVar11 == 0x29a)))) {
    uVar23 = 0xfffffffe;
    lVar22 = 0x19753d6;
    goto LAB_00e07b2c;
  }
  if ((int)param_1[4] == 0) {
LAB_00e085c4:
    uVar23 = 0xfffffffb;
    lVar22 = 0x19753e3;
LAB_00e07b2c:
    param_1[6] = lVar22;
    return uVar23;
  }
  lVar22 = plVar21[8];
  *plVar21 = (long)param_1;
  *(uint *)(plVar21 + 8) = param_2;
  if (iVar11 == 0x2a) {
    if (*(int *)((long)plVar21 + 0x2c) != 2) {
      if (((int)plVar21[0x17] < 2) && (iVar11 = *(int *)((long)plVar21 + 0xb4), 1 < iVar11)) {
        if (iVar11 < 6) {
          uVar8 = 0x40;
        }
        else {
          uVar8 = 0x80;
          if (iVar11 != 6) {
            uVar8 = 0xc0;
          }
        }
      }
      else {
        uVar8 = 0;
      }
      uVar8 = uVar8 | (int)plVar21[9] * 0x1000 - 0x7800U;
      *(undefined4 *)(plVar21 + 1) = 0x71;
      uVar17 = *(uint *)(plVar21 + 5);
      if (*(int *)((long)plVar21 + 0x9c) != 0) {
        uVar8 = uVar8 | 0x20;
      }
      *(uint *)(plVar21 + 5) = uVar17 + 1;
      *(char *)(plVar21[2] + (ulong)uVar17) = (char)(uVar8 >> 8);
      uVar17 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar17 + 1;
      *(byte *)(plVar21[2] + (ulong)uVar17) =
           ((byte)uVar8 + (char)(uVar8 / 0x1f) * -0x1f | (byte)uVar8) ^ 0x1f;
      if (*(int *)((long)plVar21 + 0x9c) != 0) {
        lVar9 = param_1[0xc];
        uVar8 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar9 >> 0x18);
        uVar8 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar9 >> 0x10);
        lVar9 = param_1[0xc];
        uVar8 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar9 >> 8);
        uVar8 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)lVar9;
      }
      lVar9 = adler32(0,0,0);
      param_1[0xc] = lVar9;
      iVar11 = (int)plVar21[1];
      goto LAB_00e07c70;
    }
    lVar9 = crc32(0,0,0);
    param_1[0xc] = lVar9;
    uVar8 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar8 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0x1f;
    uVar8 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar8 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0x8b;
    uVar8 = *(uint *)(plVar21 + 5);
    *(uint *)(plVar21 + 5) = uVar8 + 1;
    *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 8;
    piVar12 = (int *)plVar21[6];
    if (piVar12 == (int *)0x0) {
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0;
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0;
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0;
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0;
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 0;
      if (*(int *)((long)plVar21 + 0xb4) == 9) {
        uVar10 = 2;
      }
      else {
        uVar10 = 4;
        if ((int)plVar21[0x17] < 2 && 1 < *(int *)((long)plVar21 + 0xb4)) {
          uVar10 = 0;
        }
      }
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = uVar10;
      uVar8 = *(uint *)(plVar21 + 5);
      iVar11 = 0x71;
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = 3;
    }
    else {
      iVar11 = *piVar12;
      iVar18 = piVar12[0x11];
      uVar8 = *(uint *)(plVar21 + 5);
      lVar9 = *(long *)(piVar12 + 6);
      lVar19 = *(long *)(piVar12 + 10);
      lVar20 = *(long *)(piVar12 + 0xe);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      uVar10 = 4;
      bVar6 = 0;
      if (lVar9 != 0) {
        bVar6 = 4;
      }
      bVar3 = 0;
      if (lVar19 != 0) {
        bVar3 = 8;
      }
      bVar16 = 0;
      if (lVar20 != 0) {
        bVar16 = 0x10;
      }
      *(byte *)(plVar21[2] + (ulong)uVar8) =
           iVar11 != 0 | (iVar18 != 0) << 1 | bVar6 | bVar3 | bVar16;
      uVar8 = *(uint *)(plVar21 + 5);
      uVar15 = *(undefined8 *)(plVar21[6] + 8);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)uVar15;
      uVar8 = *(uint *)(plVar21 + 5);
      uVar15 = *(undefined8 *)(plVar21[6] + 8);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)uVar15 >> 8);
      uVar8 = *(uint *)(plVar21 + 5);
      uVar15 = *(undefined8 *)(plVar21[6] + 8);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)uVar15 >> 0x10);
      uVar8 = *(uint *)(plVar21 + 5);
      uVar15 = *(undefined8 *)(plVar21[6] + 8);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)uVar15 >> 0x18);
      if (*(int *)((long)plVar21 + 0xb4) == 9) {
        uVar10 = 2;
      }
      else if ((int)plVar21[0x17] < 2 && 1 < *(int *)((long)plVar21 + 0xb4)) {
        uVar10 = 0;
      }
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(undefined1 *)(plVar21[2] + (ulong)uVar8) = uVar10;
      uVar8 = *(uint *)(plVar21 + 5);
      uVar4 = *(undefined4 *)(plVar21[6] + 0x14);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)uVar4;
      lVar9 = plVar21[6];
      if (*(long *)(lVar9 + 0x18) != 0) {
        uVar8 = *(uint *)(plVar21 + 5);
        uVar4 = *(undefined4 *)(lVar9 + 0x20);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)uVar4;
        uVar8 = *(uint *)(plVar21 + 5);
        uVar4 = *(undefined4 *)(plVar21[6] + 0x20);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)((uint)uVar4 >> 8);
        lVar9 = plVar21[6];
      }
      if (*(int *)(lVar9 + 0x44) != 0) {
        lVar9 = crc32(param_1[0xc],plVar21[2],(int)plVar21[5]);
        param_1[0xc] = lVar9;
      }
      iVar11 = 0x45;
      *(undefined4 *)(plVar21 + 7) = 0;
    }
    *(int *)(plVar21 + 1) = iVar11;
    if (iVar11 == 0x45) goto LAB_00e07c78;
LAB_00e07f94:
    if (iVar11 != 0x49) goto LAB_00e080ec;
LAB_00e07f9c:
    lVar9 = *(long *)(plVar21[6] + 0x28);
joined_r0x00e07df4:
    if (lVar9 != 0) {
      uVar13 = (ulong)*(uint *)(plVar21 + 5);
      uVar23 = uVar13;
      while( true ) {
        uVar8 = (uint)uVar13;
        if (plVar21[3] == uVar13) {
          iVar11 = uVar8 - (uint)uVar23;
          if (((uint)uVar23 <= uVar8 && iVar11 != 0) && (*(int *)(plVar21[6] + 0x44) != 0)) {
            lVar9 = crc32(param_1[0xc],plVar21[2] + uVar23,iVar11);
            param_1[0xc] = lVar9;
          }
          lVar9 = param_1[7];
          FUN_00e0d150(lVar9);
          uVar8 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar9 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar8 = *(uint *)(lVar9 + 0x28);
          }
          if (uVar8 != 0) {
            uVar23 = (ulong)uVar8;
            memcpy((void *)param_1[3],*(void **)(lVar9 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar8;
            iVar11 = *(int *)(lVar9 + 0x28) - uVar8;
            *(int *)(lVar9 + 0x28) = iVar11;
            if (iVar11 == 0) {
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
            }
          }
          uVar8 = *(uint *)(plVar21 + 5);
          uVar23 = (ulong)uVar8;
          if (plVar21[3] == uVar23) {
            bVar7 = true;
            goto LAB_00e080b8;
          }
        }
        uVar17 = *(uint *)(plVar21 + 7);
        lVar9 = *(long *)(plVar21[6] + 0x28);
        *(uint *)(plVar21 + 7) = uVar17 + 1;
        cVar5 = *(char *)(lVar9 + (ulong)uVar17);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = cVar5;
        if (cVar5 == '\0') break;
        uVar13 = (ulong)*(uint *)(plVar21 + 5);
      }
      bVar7 = false;
LAB_00e080b8:
      if ((*(int *)(plVar21[6] + 0x44) != 0) &&
         (iVar11 = *(uint *)(plVar21 + 5) - (uint)uVar23,
         (uint)uVar23 <= *(uint *)(plVar21 + 5) && iVar11 != 0)) {
        lVar9 = crc32(param_1[0xc],plVar21[2] + uVar23,iVar11);
        param_1[0xc] = lVar9;
      }
      if (bVar7) {
        iVar11 = (int)plVar21[1];
        goto LAB_00e080ec;
      }
      *(undefined4 *)(plVar21 + 7) = 0;
    }
    *(undefined4 *)(plVar21 + 1) = 0x5b;
LAB_00e08108:
    plVar24 = plVar21 + 6;
    if (*(long *)(*plVar24 + 0x38) != 0) {
      uVar13 = (ulong)*(uint *)(plVar21 + 5);
      uVar23 = uVar13;
      while( true ) {
        uVar8 = (uint)uVar13;
        if (plVar21[3] == uVar13) {
          iVar11 = uVar8 - (uint)uVar23;
          if (((uint)uVar23 <= uVar8 && iVar11 != 0) && (*(int *)(*plVar24 + 0x44) != 0)) {
            lVar9 = crc32(param_1[0xc],plVar21[2] + uVar23,iVar11);
            param_1[0xc] = lVar9;
          }
          lVar9 = param_1[7];
          FUN_00e0d150(lVar9);
          uVar8 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar9 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar8 = *(uint *)(lVar9 + 0x28);
          }
          if (uVar8 != 0) {
            uVar23 = (ulong)uVar8;
            memcpy((void *)param_1[3],*(void **)(lVar9 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar8;
            iVar11 = *(int *)(lVar9 + 0x28) - uVar8;
            *(int *)(lVar9 + 0x28) = iVar11;
            if (iVar11 == 0) {
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
            }
          }
          uVar8 = *(uint *)(plVar21 + 5);
          uVar23 = (ulong)uVar8;
          if (plVar21[3] == uVar23) {
            bVar7 = true;
            goto LAB_00e08220;
          }
        }
        uVar17 = *(uint *)(plVar21 + 7);
        lVar9 = *(long *)(plVar21[6] + 0x38);
        *(uint *)(plVar21 + 7) = uVar17 + 1;
        cVar5 = *(char *)(lVar9 + (ulong)uVar17);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = cVar5;
        if (cVar5 == '\0') break;
        uVar13 = (ulong)*(uint *)(plVar21 + 5);
      }
      bVar7 = false;
LAB_00e08220:
      if ((*(int *)(*plVar24 + 0x44) != 0) &&
         (iVar11 = *(uint *)(plVar21 + 5) - (uint)uVar23,
         (uint)uVar23 <= *(uint *)(plVar21 + 5) && iVar11 != 0)) {
        lVar9 = crc32(param_1[0xc],plVar21[2] + uVar23,iVar11);
        param_1[0xc] = lVar9;
      }
      if (bVar7) {
        iVar11 = (int)plVar21[1];
        goto LAB_00e08254;
      }
    }
    *(undefined4 *)(plVar21 + 1) = 0x67;
LAB_00e0826c:
    if (*(int *)(plVar21[6] + 0x44) != 0) {
      if ((ulong)plVar21[3] < (ulong)((int)plVar21[5] + 2)) {
        lVar9 = param_1[7];
        FUN_00e0d150(lVar9);
        uVar8 = *(uint *)(param_1 + 4);
        if (*(uint *)(lVar9 + 0x28) <= *(uint *)(param_1 + 4)) {
          uVar8 = *(uint *)(lVar9 + 0x28);
        }
        if (uVar8 != 0) {
          uVar23 = (ulong)uVar8;
          memcpy((void *)param_1[3],*(void **)(lVar9 + 0x20),uVar23);
          param_1[3] = param_1[3] + uVar23;
          *(ulong *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + uVar23;
          param_1[5] = param_1[5] + uVar23;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar8;
          iVar11 = *(int *)(lVar9 + 0x28) - uVar8;
          *(int *)(lVar9 + 0x28) = iVar11;
          if (iVar11 == 0) {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
          }
        }
      }
      uVar8 = *(uint *)(plVar21 + 5);
      if ((ulong)plVar21[3] < (ulong)(uVar8 + 2)) goto LAB_00e08368;
      lVar9 = param_1[0xc];
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)lVar9;
      lVar9 = param_1[0xc];
      uVar8 = *(uint *)(plVar21 + 5);
      *(uint *)(plVar21 + 5) = uVar8 + 1;
      *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar9 >> 8);
      lVar9 = crc32(0,0,0);
      param_1[0xc] = lVar9;
    }
    *(undefined4 *)(plVar21 + 1) = 0x71;
  }
  else {
LAB_00e07c70:
    if (iVar11 != 0x45) goto LAB_00e07f94;
LAB_00e07c78:
    lVar9 = plVar21[6];
    if (*(long *)(lVar9 + 0x18) == 0) {
LAB_00e07de8:
      *(undefined4 *)(plVar21 + 1) = 0x49;
      lVar9 = *(long *)(lVar9 + 0x28);
      goto joined_r0x00e07df4;
    }
    uVar8 = *(uint *)(plVar21 + 7);
    uVar13 = (ulong)*(uint *)(plVar21 + 5);
    uVar23 = uVar13;
    uVar17 = *(uint *)(plVar21 + 5);
    if (uVar8 < *(ushort *)(lVar9 + 0x20)) {
      do {
        uVar14 = (uint)uVar13;
        if (plVar21[3] == uVar13) {
          iVar11 = uVar14 - (uint)uVar23;
          if (((uint)uVar23 <= uVar14 && iVar11 != 0) && (*(int *)(lVar9 + 0x44) != 0)) {
            lVar9 = crc32(param_1[0xc],plVar21[2] + uVar23,iVar11);
            param_1[0xc] = lVar9;
          }
          lVar9 = param_1[7];
          FUN_00e0d150(lVar9);
          uVar8 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar9 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar8 = *(uint *)(lVar9 + 0x28);
          }
          if (uVar8 != 0) {
            uVar23 = (ulong)uVar8;
            memcpy((void *)param_1[3],*(void **)(lVar9 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar8;
            iVar11 = *(int *)(lVar9 + 0x28) - uVar8;
            *(int *)(lVar9 + 0x28) = iVar11;
            if (iVar11 == 0) {
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x10);
            }
          }
          uVar14 = *(uint *)(plVar21 + 5);
          uVar23 = (ulong)uVar14;
          lVar9 = plVar21[6];
          uVar17 = uVar14;
          if (plVar21[3] == uVar23) break;
          uVar8 = *(uint *)(plVar21 + 7);
        }
        uVar17 = (uint)uVar23;
        uVar10 = *(undefined1 *)(*(long *)(lVar9 + 0x18) + (ulong)uVar8);
        *(uint *)(plVar21 + 5) = uVar14 + 1;
        *(undefined1 *)(plVar21[2] + (ulong)uVar14) = uVar10;
        lVar9 = plVar21[6];
        uVar8 = (int)plVar21[7] + 1;
        *(uint *)(plVar21 + 7) = uVar8;
        if (*(ushort *)(lVar9 + 0x20) <= uVar8) break;
        uVar13 = (ulong)*(uint *)(plVar21 + 5);
      } while( true );
    }
    if ((*(int *)(lVar9 + 0x44) != 0) &&
       (iVar11 = *(uint *)(plVar21 + 5) - uVar17, uVar17 <= *(uint *)(plVar21 + 5) && iVar11 != 0))
    {
      lVar9 = crc32(param_1[0xc],plVar21[2] + (ulong)uVar17,iVar11);
      param_1[0xc] = lVar9;
      lVar9 = plVar21[6];
    }
    if ((int)plVar21[7] == *(int *)(lVar9 + 0x20)) {
      *(undefined4 *)(plVar21 + 7) = 0;
      goto LAB_00e07de8;
    }
    iVar11 = (int)plVar21[1];
    if (iVar11 == 0x49) goto LAB_00e07f9c;
LAB_00e080ec:
    if (iVar11 == 0x5b) goto LAB_00e08108;
LAB_00e08254:
    if (iVar11 == 0x67) goto LAB_00e0826c;
  }
LAB_00e08368:
  if ((int)plVar21[5] == 0) {
    if ((int)param_1[1] == 0) {
      iVar18 = 9;
      iVar11 = iVar18;
      if ((int)param_2 < 5) {
        iVar11 = 0;
      }
      if ((int)lVar22 < 5) {
        iVar18 = 0;
      }
      if ((param_2 != 4) && ((int)(param_2 * 2 - iVar11) <= (int)lVar22 * 2 - iVar18))
      goto LAB_00e085c4;
    }
  }
  else {
    lVar22 = param_1[7];
    FUN_00e0d150(lVar22);
    uVar17 = *(uint *)(param_1 + 4);
    uVar8 = uVar17;
    if (*(uint *)(lVar22 + 0x28) <= uVar17) {
      uVar8 = *(uint *)(lVar22 + 0x28);
    }
    if (uVar8 != 0) {
      uVar23 = (ulong)uVar8;
      memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
      param_1[3] = param_1[3] + uVar23;
      *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
      uVar17 = (int)param_1[4] - uVar8;
      param_1[5] = param_1[5] + uVar23;
      *(uint *)(param_1 + 4) = uVar17;
      iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
      *(int *)(lVar22 + 0x28) = iVar11;
      if (iVar11 == 0) {
        *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
      }
    }
    if (uVar17 == 0) goto LAB_00e08c38;
  }
  if ((int)plVar21[1] == 0x29a) {
    if ((int)param_1[1] != 0) goto LAB_00e085c4;
LAB_00e08418:
    if ((*(int *)((long)plVar21 + 0xa4) == 0) && (param_2 == 0 || (int)plVar21[1] == 0x29a))
    goto LAB_00e08c28;
  }
  else if ((int)param_1[1] == 0) goto LAB_00e08418;
  if ((int)plVar21[0x17] == 3) {
    do {
      uVar8 = *(uint *)((long)plVar21 + 0xa4);
LAB_00e085f0:
      do {
        if (uVar8 < 0x103) {
          FUN_00e07218(plVar21);
          uVar8 = *(uint *)((long)plVar21 + 0xa4);
          if ((param_2 == 0) && (uVar8 < 0x103)) goto LAB_00e08a44;
          if (uVar8 == 0) {
            *(undefined4 *)((long)plVar21 + 0x171c) = 0;
            if (param_2 == 4) {
              uVar23 = plVar21[0x11];
              goto joined_r0x00e0894c;
            }
            if (*(int *)((long)plVar21 + 0x16fc) == 0) goto LAB_00e08b44;
            uVar23 = plVar21[0x11];
            goto joined_r0x00e08a94;
          }
          *(undefined4 *)(plVar21 + 0x12) = 0;
          if (2 < uVar8) goto LAB_00e0862c;
          uVar23 = (ulong)*(uint *)((long)plVar21 + 0x9c);
        }
        else {
          *(undefined4 *)(plVar21 + 0x12) = 0;
LAB_00e0862c:
          uVar17 = *(uint *)((long)plVar21 + 0x9c);
          uVar23 = (ulong)uVar17;
          if (uVar17 != 0) {
            lVar22 = plVar21[10];
            pcVar2 = (char *)(lVar22 + uVar23);
            cVar5 = pcVar2[-1];
            if (((cVar5 == *pcVar2) && (cVar5 == pcVar2[1])) && (cVar5 == pcVar2[2])) {
              lVar9 = 0;
              lVar19 = lVar22 + uVar23;
              iVar11 = 2;
              do {
                iVar18 = (int)pcVar2 + iVar11;
                if (cVar5 != *(char *)(lVar19 + lVar9 + 3)) {
                  iVar18 = iVar18 + 1;
                  goto LAB_00e08740;
                }
                if (cVar5 != *(char *)(lVar19 + lVar9 + 4)) {
                  iVar18 = iVar18 + 2;
                  goto LAB_00e08740;
                }
                if (cVar5 != *(char *)(lVar19 + lVar9 + 5)) {
                  iVar18 = iVar18 + 3;
                  goto LAB_00e08740;
                }
                if (cVar5 != *(char *)(lVar19 + lVar9 + 6)) {
                  iVar18 = iVar18 + 4;
                  goto LAB_00e08740;
                }
                if (cVar5 != *(char *)(lVar19 + lVar9 + 7)) {
                  iVar18 = iVar18 + 5;
                  goto LAB_00e08740;
                }
                if (cVar5 != *(char *)(lVar19 + lVar9 + 8)) {
                  iVar18 = iVar18 + 6;
                  goto LAB_00e08740;
                }
                lVar20 = lVar19 + lVar9;
                if (cVar5 != *(char *)(lVar20 + 9)) {
                  iVar18 = iVar18 + 7;
                  goto LAB_00e08740;
                }
                lVar1 = lVar9 + 2;
                lVar9 = lVar9 + 8;
              } while ((lVar1 < 0xfa) && (iVar11 = iVar11 + 8, cVar5 == *(char *)(lVar20 + 10)));
              iVar18 = (int)lVar22 + uVar17 + (int)lVar9 + 2;
LAB_00e08740:
              uVar17 = 0x102 - (((int)pcVar2 + 0x102) - iVar18);
              if (uVar17 <= uVar8) {
                uVar8 = uVar17;
              }
              *(uint *)(plVar21 + 0x12) = uVar8;
              if (2 < uVar8) {
                uVar17 = *(uint *)((long)plVar21 + 0x16fc);
                bVar6 = (&DAT_01974b80)[uVar8 + 0xfd & 0xff];
                *(undefined2 *)(plVar21[0x2e0] + (ulong)uVar17 * 2) = 1;
                *(uint *)((long)plVar21 + 0x16fc) = uVar17 + 1;
                *(char *)(plVar21[0x2de] + (ulong)uVar17) = (char)(uVar8 + 0xfd);
                *(short *)((long)plVar21 + ((ulong)bVar6 | 0x100) * 4 + 200) =
                     *(short *)((long)plVar21 + ((ulong)bVar6 | 0x100) * 4 + 200) + 1;
                *(short *)(plVar21 + 0x137) = (short)plVar21[0x137] + 1;
                uVar8 = *(int *)((long)plVar21 + 0xa4) - (int)plVar21[0x12];
                uVar17 = *(int *)((long)plVar21 + 0x9c) + (int)plVar21[0x12];
                *(uint *)((long)plVar21 + 0xa4) = uVar8;
                *(uint *)((long)plVar21 + 0x9c) = uVar17;
                *(undefined4 *)(plVar21 + 0x12) = 0;
                if (*(int *)((long)plVar21 + 0x16fc) == (int)plVar21[0x2df] + -1) break;
                goto LAB_00e085f0;
              }
            }
          }
        }
        uVar8 = *(uint *)((long)plVar21 + 0x16fc);
        bVar6 = *(byte *)(plVar21[10] + uVar23);
        *(undefined2 *)(plVar21[0x2e0] + (ulong)uVar8 * 2) = 0;
        *(uint *)((long)plVar21 + 0x16fc) = uVar8 + 1;
        *(byte *)(plVar21[0x2de] + (ulong)uVar8) = bVar6;
        *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xc4) =
             *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xc4) + 1;
        uVar8 = *(int *)((long)plVar21 + 0xa4) - 1;
        uVar17 = *(int *)((long)plVar21 + 0x9c) + 1;
        *(uint *)((long)plVar21 + 0xa4) = uVar8;
        *(uint *)((long)plVar21 + 0x9c) = uVar17;
      } while (*(int *)((long)plVar21 + 0x16fc) != (int)plVar21[0x2df] + -1);
      uVar23 = plVar21[0x11];
      if ((long)uVar23 < 0) {
        lVar22 = 0;
      }
      else {
        lVar22 = plVar21[10] + (uVar23 & 0xffffffff);
      }
      FUN_00e0d324(plVar21,lVar22,uVar17 - uVar23,0);
      lVar9 = *plVar21;
      plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
      lVar22 = *(long *)(lVar9 + 0x38);
      FUN_00e0d150(lVar22);
      uVar8 = *(uint *)(lVar9 + 0x20);
      if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar9 + 0x20)) {
        uVar8 = *(uint *)(lVar22 + 0x28);
      }
      if (uVar8 != 0) {
        uVar23 = (ulong)uVar8;
        memcpy(*(void **)(lVar9 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
        *(ulong *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + uVar23;
        *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
        *(ulong *)(lVar9 + 0x28) = *(long *)(lVar9 + 0x28) + uVar23;
        *(uint *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) - uVar8;
        iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
        *(int *)(lVar22 + 0x28) = iVar11;
        if (iVar11 == 0) {
          *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
        }
      }
    } while (*(int *)(*plVar21 + 0x20) != 0);
  }
  else {
    if ((int)plVar21[0x17] == 2) {
LAB_00e0844c:
      iVar11 = *(int *)((long)plVar21 + 0xa4);
LAB_00e08450:
      if ((iVar11 != 0) || (FUN_00e07218(plVar21), *(int *)((long)plVar21 + 0xa4) != 0))
      goto LAB_00e08464;
      if (param_2 == 0) goto LAB_00e08a44;
      *(undefined4 *)((long)plVar21 + 0x171c) = 0;
      if (param_2 == 4) {
        uVar23 = plVar21[0x11];
joined_r0x00e0894c:
        if ((long)uVar23 < 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = plVar21[10] + (uVar23 & 0xffffffff);
        }
        FUN_00e0d324(plVar21,lVar22,*(uint *)((long)plVar21 + 0x9c) - uVar23,1);
        lVar9 = *plVar21;
        plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
        lVar22 = *(long *)(lVar9 + 0x38);
        FUN_00e0d150(lVar22);
        uVar8 = *(uint *)(lVar9 + 0x20);
        if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar9 + 0x20)) {
          uVar8 = *(uint *)(lVar22 + 0x28);
        }
        if (uVar8 != 0) {
          uVar23 = (ulong)uVar8;
          memcpy(*(void **)(lVar9 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
          *(ulong *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + uVar23;
          *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
          *(ulong *)(lVar9 + 0x28) = *(long *)(lVar9 + 0x28) + uVar23;
          *(uint *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) - uVar8;
          iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
          *(int *)(lVar22 + 0x28) = iVar11;
          if (iVar11 == 0) {
            *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
          }
        }
        uVar8 = 2;
        if (*(int *)(*plVar21 + 0x20) != 0) {
          uVar8 = 3;
        }
        goto LAB_00e08a24;
      }
      if (*(int *)((long)plVar21 + 0x16fc) != 0) {
        uVar23 = plVar21[0x11];
joined_r0x00e08a94:
        if ((long)uVar23 < 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = plVar21[10] + (uVar23 & 0xffffffff);
        }
        FUN_00e0d324(plVar21,lVar22,*(uint *)((long)plVar21 + 0x9c) - uVar23,0);
        lVar9 = *plVar21;
        plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
        lVar22 = *(long *)(lVar9 + 0x38);
        FUN_00e0d150(lVar22);
        uVar8 = *(uint *)(lVar9 + 0x20);
        if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar9 + 0x20)) {
          uVar8 = *(uint *)(lVar22 + 0x28);
        }
        if (uVar8 != 0) {
          uVar23 = (ulong)uVar8;
          memcpy(*(void **)(lVar9 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
          *(ulong *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + uVar23;
          *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
          *(ulong *)(lVar9 + 0x28) = *(long *)(lVar9 + 0x28) + uVar23;
          *(uint *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) - uVar8;
          iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
          *(int *)(lVar22 + 0x28) = iVar11;
          if (iVar11 == 0) {
            *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
          }
        }
        if (*(int *)(*plVar21 + 0x20) != 0) goto LAB_00e08b44;
        goto LAB_00e08a44;
      }
      goto LAB_00e08b44;
    }
    uVar8 = (*(code *)(&PTR_FUN_01c92788)[(long)*(int *)((long)plVar21 + 0xb4) * 2])
                      (plVar21,param_2);
LAB_00e08a24:
    if ((uVar8 | 1) == 3) {
      *(undefined4 *)(plVar21 + 1) = 0x29a;
    }
    if ((uVar8 | 2) != 2) {
      if (uVar8 != 1) {
LAB_00e08c28:
        if (param_2 != 4) {
          return 0;
        }
        if (*(int *)((long)plVar21 + 0x2c) < 1) {
          return 1;
        }
        lVar22 = param_1[0xc];
        if (*(int *)((long)plVar21 + 0x2c) == 2) {
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)lVar22;
          lVar22 = param_1[0xc];
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 8);
          lVar22 = param_1[0xc];
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 0x10);
          lVar22 = param_1[0xc];
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 0x18);
          uVar8 = *(uint *)(plVar21 + 5);
          lVar22 = param_1[2];
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)lVar22;
          lVar22 = param_1[2];
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 8);
          lVar22 = param_1[2];
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 0x10);
          uVar23 = (ulong)param_1[2] >> 0x18;
        }
        else {
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 0x18);
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)((ulong)lVar22 >> 0x10);
          uVar23 = param_1[0xc];
          uVar8 = *(uint *)(plVar21 + 5);
          *(uint *)(plVar21 + 5) = uVar8 + 1;
          *(char *)(plVar21[2] + (ulong)uVar8) = (char)(uVar23 >> 8);
        }
        uVar8 = *(uint *)(plVar21 + 5);
        *(uint *)(plVar21 + 5) = uVar8 + 1;
        *(char *)(plVar21[2] + (ulong)uVar8) = (char)uVar23;
        lVar22 = param_1[7];
        FUN_00e0d150(lVar22);
        uVar8 = *(uint *)(param_1 + 4);
        if (*(uint *)(lVar22 + 0x28) <= *(uint *)(param_1 + 4)) {
          uVar8 = *(uint *)(lVar22 + 0x28);
        }
        if (uVar8 != 0) {
          uVar23 = (ulong)uVar8;
          memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
          param_1[3] = param_1[3] + uVar23;
          *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
          param_1[5] = param_1[5] + uVar23;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar8;
          iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
          *(int *)(lVar22 + 0x28) = iVar11;
          if (iVar11 == 0) {
            *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
          }
        }
        if (0 < *(int *)((long)plVar21 + 0x2c)) {
          *(int *)((long)plVar21 + 0x2c) = -*(int *)((long)plVar21 + 0x2c);
        }
        return (ulong)((int)plVar21[5] == 0);
      }
LAB_00e08b44:
      if (param_2 != 5) {
        if (param_2 == 1) {
          FUN_00e0d1e0();
        }
        else {
          FUN_00e0cff8(plVar21,0,0,0);
          if (param_2 == 3) {
            __s = (void *)plVar21[0xd];
            __n = (ulong)(*(int *)((long)plVar21 + 0x74) - 1) * 2;
            *(undefined2 *)((long)__s + __n) = 0;
            memset(__s,0,__n);
            if (*(int *)((long)plVar21 + 0xa4) == 0) {
              *(undefined4 *)((long)plVar21 + 0x9c) = 0;
              plVar21[0x11] = 0;
              *(undefined4 *)((long)plVar21 + 0x171c) = 0;
            }
          }
        }
      }
      lVar22 = param_1[7];
      FUN_00e0d150(lVar22);
      uVar17 = *(uint *)(param_1 + 4);
      uVar8 = uVar17;
      if (*(uint *)(lVar22 + 0x28) <= uVar17) {
        uVar8 = *(uint *)(lVar22 + 0x28);
      }
      if (uVar8 != 0) {
        uVar23 = (ulong)uVar8;
        memcpy((void *)param_1[3],*(void **)(lVar22 + 0x20),uVar23);
        param_1[3] = param_1[3] + uVar23;
        *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
        uVar17 = (int)param_1[4] - uVar8;
        param_1[5] = param_1[5] + uVar23;
        *(uint *)(param_1 + 4) = uVar17;
        iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
        *(int *)(lVar22 + 0x28) = iVar11;
        if (iVar11 == 0) {
          *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
        }
      }
      if (uVar17 != 0) goto LAB_00e08c28;
      goto LAB_00e08c38;
    }
  }
LAB_00e08a44:
  if ((int)param_1[4] != 0) {
    return 0;
  }
LAB_00e08c38:
  *(undefined4 *)(plVar21 + 8) = 0xffffffff;
  return 0;
LAB_00e08464:
  uVar8 = *(uint *)((long)plVar21 + 0x16fc);
  *(undefined4 *)(plVar21 + 0x12) = 0;
  bVar6 = *(byte *)(plVar21[10] + (ulong)*(uint *)((long)plVar21 + 0x9c));
  *(undefined2 *)(plVar21[0x2e0] + (ulong)uVar8 * 2) = 0;
  *(uint *)((long)plVar21 + 0x16fc) = uVar8 + 1;
  *(byte *)(plVar21[0x2de] + (ulong)uVar8) = bVar6;
  *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xc4) =
       *(short *)((long)plVar21 + (ulong)bVar6 * 4 + 0xc4) + 1;
  iVar11 = *(int *)((long)plVar21 + 0xa4) + -1;
  uVar8 = *(int *)((long)plVar21 + 0x9c) + 1;
  *(int *)((long)plVar21 + 0xa4) = iVar11;
  *(uint *)((long)plVar21 + 0x9c) = uVar8;
  if (*(int *)((long)plVar21 + 0x16fc) == (int)plVar21[0x2df] + -1) goto code_r0x00e084cc;
  goto LAB_00e08450;
code_r0x00e084cc:
  uVar23 = plVar21[0x11];
  if ((long)uVar23 < 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = plVar21[10] + (uVar23 & 0xffffffff);
  }
  FUN_00e0d324(plVar21,lVar22,uVar8 - uVar23,0);
  lVar9 = *plVar21;
  plVar21[0x11] = (ulong)*(uint *)((long)plVar21 + 0x9c);
  lVar22 = *(long *)(lVar9 + 0x38);
  FUN_00e0d150(lVar22);
  uVar8 = *(uint *)(lVar9 + 0x20);
  if (*(uint *)(lVar22 + 0x28) <= *(uint *)(lVar9 + 0x20)) {
    uVar8 = *(uint *)(lVar22 + 0x28);
  }
  if (uVar8 != 0) {
    uVar23 = (ulong)uVar8;
    memcpy(*(void **)(lVar9 + 0x18),*(void **)(lVar22 + 0x20),uVar23);
    *(ulong *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + uVar23;
    *(ulong *)(lVar22 + 0x20) = *(long *)(lVar22 + 0x20) + uVar23;
    *(ulong *)(lVar9 + 0x28) = *(long *)(lVar9 + 0x28) + uVar23;
    *(uint *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) - uVar8;
    iVar11 = *(int *)(lVar22 + 0x28) - uVar8;
    *(int *)(lVar22 + 0x28) = iVar11;
    if (iVar11 == 0) {
      *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar22 + 0x10);
    }
  }
  if (*(int *)(*plVar21 + 0x20) == 0) goto LAB_00e08a44;
  goto LAB_00e0844c;
}

