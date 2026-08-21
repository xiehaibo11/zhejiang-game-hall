
undefined8 FUN_010a1b40(long param_1,char *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__s;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  
  lVar19 = *(long *)(param_1 + 0xa0);
  *param_3 = 0;
  if (*(char *)(param_1 + 0x50c) != '\0') {
    uVar16 = (ulong)*(uint *)(param_1 + 0x508);
    puVar20 = *(undefined1 **)(param_1 + 0x4e8);
joined_r0x010a1e38:
    if (param_2 == (char *)0x0) {
      return 6;
    }
    if (lVar19 == 0) {
      return 6;
    }
    sVar8 = strlen(param_2);
    if ((int)uVar16 == 0) {
      return 6;
    }
    if (sVar8 == 0) {
      return 6;
    }
    puVar20 = puVar20 + 8;
    puVar13 = puVar20 + (uint)((int)uVar16 << 2);
    while (uVar18 = (uint)CONCAT11(puVar20[2],puVar20[3]),
          CONCAT11(*puVar20,puVar20[1]) != *(short *)(lVar19 + 0x1a)) {
      uVar6 = (int)uVar16 - 1;
      uVar16 = (ulong)uVar6;
      puVar13 = puVar13 + uVar18 * 10;
      puVar20 = puVar20 + 4;
      if (uVar6 == 0) {
        return 6;
      }
    }
    if (uVar18 == 0) {
      return 6;
    }
    pbVar21 = puVar13 + 5;
    do {
      bVar3 = *pbVar21;
      if ((bVar3 >> 4 & 1) != 0) {
        uVar16 = *(ulong *)(param_1 + 0x500);
        uVar11 = (ulong)pbVar21[-5] << 0x18 | (ulong)pbVar21[-4] << 0x10 | (ulong)pbVar21[-3] << 8 |
                 (ulong)pbVar21[-2];
        uVar17 = uVar16 - uVar11;
        if ((uVar11 <= uVar16 && uVar17 != 0) && (sVar8 < uVar17)) {
          lVar19 = *(long *)(param_1 + 0x4f8);
          uVar6 = *(uint *)(pbVar21 + 1);
          iVar7 = strncmp(param_2,(char *)(lVar19 + uVar11),uVar17);
          if (iVar7 == 0) {
            bVar3 = bVar3 & 0xf;
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
            if (bVar3 < 2) {
              if (uVar6 < uVar16) {
                __s = (void *)(lVar19 + (ulong)uVar6);
                pvVar9 = memchr(__s,0,uVar16);
                if (pvVar9 != (void *)0x0) {
                  *param_3 = 1;
                  *(void **)(param_3 + 2) = __s;
                  return 0;
                }
              }
            }
            else {
              if (bVar3 == 2) {
                uVar12 = 2;
LAB_010a1e48:
                *param_3 = uVar12;
                param_3[2] = uVar6;
                return 0;
              }
              if (bVar3 == 3) {
                uVar12 = 3;
                goto LAB_010a1e48;
              }
            }
          }
        }
      }
      uVar18 = uVar18 - 1;
      pbVar21 = pbVar21 + 10;
      if (uVar18 == 0) {
        return 6;
      }
    } while( true );
  }
  puVar1 = (undefined8 *)(param_1 + 0x4e8);
  uVar15 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *puVar1 = 0;
  if ((ulong)*(ushort *)(param_1 + 0x120) == 0) {
    return 8;
  }
  plVar10 = *(long **)(param_1 + 0x128);
  plVar2 = plVar10 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
  while ((*plVar10 != 0x42444620 || (uVar17 = plVar10[3], uVar17 == 0))) {
    plVar10 = plVar10 + 4;
    if (plVar2 <= plVar10) {
      return 8;
    }
  }
  iVar7 = FT_Stream_Seek(uVar15,plVar10[2]);
  if (uVar17 < 8) {
    return 8;
  }
  if (iVar7 != 0) {
    return 8;
  }
  iVar7 = FT_Stream_ExtractFrame(uVar15,uVar17,puVar1);
  if (iVar7 != 0) {
    return 8;
  }
  puVar20 = *(undefined1 **)(param_1 + 0x4e8);
  *(undefined1 **)(param_1 + 0x4f0) = puVar20 + uVar17;
  if (CONCAT11(*puVar20,puVar20[1]) == 1) {
    uVar11 = (ulong)(byte)puVar20[4] << 0x18 | (ulong)(byte)puVar20[5] << 0x10 |
             (ulong)(byte)puVar20[6] << 8 | (ulong)(byte)puVar20[7];
    if ((7 < uVar11) && (uVar11 <= uVar17 && uVar17 - uVar11 != 0)) {
      uVar4 = puVar20[2];
      uVar5 = puVar20[3];
      uVar18 = (uint)CONCAT11(uVar4,uVar5);
      uVar16 = (ulong)uVar18;
      if (uVar16 <= uVar11 - 8 >> 2) {
        *(ulong *)(param_1 + 0x500) = uVar17 - uVar11;
        puVar13 = puVar20 + (ulong)CONCAT11(uVar4,uVar5) * 4 + 8;
        *(uint *)(param_1 + 0x508) = uVar18;
        *(undefined1 **)(param_1 + 0x4f8) = puVar20 + uVar11;
        if (uVar18 != 0) {
          puVar14 = puVar20 + 0xb;
          do {
            uVar18 = uVar18 - 1;
            puVar13 = puVar13 + (ulong)CONCAT11(puVar14[-1],*puVar14) * 10;
            puVar14 = puVar14 + 4;
          } while (uVar18 != 0);
        }
        if (puVar13 <= puVar20 + uVar11) {
          *(undefined1 *)(param_1 + 0x50c) = 1;
          goto joined_r0x010a1e38;
        }
      }
    }
  }
  FT_Stream_ReleaseFrame(uVar15,puVar1);
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  return 8;
}

