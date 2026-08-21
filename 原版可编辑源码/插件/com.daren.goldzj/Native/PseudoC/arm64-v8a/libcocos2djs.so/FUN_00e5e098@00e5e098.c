
undefined8 FUN_00e5e098(long param_1,char *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__s;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  size_t sVar11;
  void *pvVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  ulong __n;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  
  lVar21 = *(long *)(param_1 + 0xa0);
  *param_3 = 0;
  if (*(char *)(param_1 + 0x58c) != '\0') {
    uVar20 = (ulong)*(uint *)(param_1 + 0x588);
    puVar23 = (undefined1 *)(*(long *)(param_1 + 0x568) + 8);
joined_r0x00e5e3bc:
    if (param_2 == (char *)0x0) {
      return 6;
    }
    if (lVar21 == 0) {
      return 6;
    }
    sVar11 = strlen(param_2);
    if (sVar11 == 0) {
      return 6;
    }
    if ((int)uVar20 == 0) {
      return 6;
    }
    puVar13 = puVar23 + (uint)((int)uVar20 << 2);
    while( true ) {
      uVar22 = (ulong)CONCAT11(puVar23[2],puVar23[3]);
      if (CONCAT11(*puVar23,puVar23[1]) == *(short *)(lVar21 + 0x1a)) break;
      puVar13 = puVar13 + uVar22 * 10;
      uVar8 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar8;
      puVar23 = puVar23 + 4;
      if (uVar8 == 0) {
        return 6;
      }
    }
    if (CONCAT11(puVar23[2],puVar23[3]) == 0) {
      return 6;
    }
    pbVar24 = puVar13 + 5;
    do {
      bVar3 = *pbVar24;
      if ((bVar3 >> 4 & 1) != 0) {
        __n = *(ulong *)(param_1 + 0x580);
        uVar20 = (ulong)pbVar24[-5] << 0x18 | (ulong)pbVar24[-4] << 0x10 | (ulong)pbVar24[-3] << 8 |
                 (ulong)pbVar24[-2];
        uVar15 = __n - uVar20;
        if ((uVar20 <= __n && uVar15 != 0) && (sVar11 < uVar15)) {
          bVar4 = pbVar24[2];
          lVar21 = *(long *)(param_1 + 0x578);
          bVar5 = pbVar24[1];
          bVar6 = pbVar24[4];
          bVar7 = pbVar24[3];
          iVar10 = strncmp(param_2,(char *)(lVar21 + uVar20),uVar15);
          if (iVar10 == 0) {
            bVar3 = bVar3 & 0xf;
            uVar15 = (ulong)bVar5 << 0x18 | (ulong)bVar4 << 0x10 | (ulong)bVar7 << 8 | (ulong)bVar6;
            if (bVar3 < 2) {
              if (uVar15 < __n) {
                __s = (void *)(lVar21 + uVar15);
                pvVar12 = memchr(__s,0,__n);
                if (pvVar12 != (void *)0x0) {
                  *param_3 = 1;
                  *(void **)(param_3 + 2) = __s;
                  return 0;
                }
              }
            }
            else {
              if (bVar3 == 2) {
                uVar17 = 2;
LAB_00e5e3cc:
                *param_3 = uVar17;
                param_3[2] = (int)uVar15;
                return 0;
              }
              if (bVar3 == 3) {
                uVar17 = 3;
                goto LAB_00e5e3cc;
              }
            }
          }
        }
      }
      uVar8 = (int)uVar22 - 1;
      uVar22 = (ulong)uVar8;
      pbVar24 = pbVar24 + 10;
      if (uVar8 == 0) {
        return 6;
      }
    } while( true );
  }
  puVar1 = (undefined8 *)(param_1 + 0x568);
  uVar19 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  if ((ulong)*(ushort *)(param_1 + 0x120) == 0) {
    return 8;
  }
  plVar14 = *(long **)(param_1 + 0x128);
  plVar2 = plVar14 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
  while ((*plVar14 != 0x42444620 || (uVar22 = plVar14[3], uVar22 == 0))) {
    plVar14 = plVar14 + 4;
    if (plVar2 <= plVar14) {
      return 8;
    }
  }
  iVar10 = FUN_00e1bb5c(uVar19,plVar14[2]);
  if (uVar22 < 8) {
    return 8;
  }
  if (iVar10 != 0) {
    return 8;
  }
  iVar10 = FUN_00e1d5c4(uVar19,uVar22,puVar1);
  if (iVar10 != 0) {
    return 8;
  }
  puVar13 = *(undefined1 **)(param_1 + 0x568);
  *(undefined1 **)(param_1 + 0x570) = puVar13 + uVar22;
  if (CONCAT11(*puVar13,puVar13[1]) == 1) {
    uVar15 = (ulong)(byte)puVar13[4] << 0x18 | (ulong)(byte)puVar13[5] << 0x10 |
             (ulong)(byte)puVar13[6] << 8 | (ulong)(byte)puVar13[7];
    if ((7 < uVar15) && (uVar15 <= uVar22 && uVar22 - uVar15 != 0)) {
      uVar9 = CONCAT11(puVar13[2],puVar13[3]);
      uVar20 = (ulong)uVar9;
      if (uVar20 <= uVar15 - 8 >> 2) {
        *(ulong *)(param_1 + 0x580) = uVar22 - uVar15;
        puVar23 = puVar13 + 8;
        puVar18 = puVar23 + (ulong)uVar9 * 4;
        *(uint *)(param_1 + 0x588) = (uint)uVar9;
        *(undefined1 **)(param_1 + 0x578) = puVar13 + uVar15;
        if (uVar9 != 0) {
          puVar16 = puVar13 + 0xb;
          uVar22 = uVar20;
          do {
            uVar8 = (int)uVar22 - 1;
            uVar22 = (ulong)uVar8;
            puVar18 = puVar18 + (ulong)CONCAT11(puVar16[-1],*puVar16) * 10;
            puVar16 = puVar16 + 4;
          } while (uVar8 != 0);
        }
        if (puVar18 <= puVar13 + uVar15) {
          *(undefined1 *)(param_1 + 0x58c) = 1;
          goto joined_r0x00e5e3bc;
        }
      }
    }
  }
  FUN_00e1d86c(uVar19,puVar1);
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x570) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  return 8;
}

